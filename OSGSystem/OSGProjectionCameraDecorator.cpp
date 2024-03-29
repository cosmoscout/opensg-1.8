/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *             Copyright (C) 2000-2002 by the OpenSG Forum                   *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include <OSGMatrixUtility.h>
#include <OSGQuaternion.h>
#include <OSGNode.h>

#include "OSGProjectionCameraDecorator.h"

OSG_USING_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class osg::ProjectionCameraDecorator
    \ingroup GrpSystemWindowCameraDecoratorsStereo

The decorator for tracked projection screens, see \ref
PageSystemWindowCameraDecoratorsStereoProjection for a description.

The parameters are defined by the _sfUser and _mfSurface fields.

\dev

The derived parameters used to actually calculate the matrix are stored in the
_sfLeft, _sfBottom, _sfNormal, sfWidth and _sfHeight fields.

\enddev

*/

/*----------------------- constructors & destructors ----------------------*/

ProjectionCameraDecorator::ProjectionCameraDecorator(void)
    : Inherited() {
}

ProjectionCameraDecorator::ProjectionCameraDecorator(const ProjectionCameraDecorator& source)
    : Inherited(source) {
}

ProjectionCameraDecorator::~ProjectionCameraDecorator(void) {
}

/*----------------------------- class specific ----------------------------*/

void ProjectionCameraDecorator::initMethod(void) {
}

void ProjectionCameraDecorator::changed(BitVector whichField, UInt32 origin) {
  Inherited::changed(whichField, origin);

  if (whichField & SurfaceFieldMask)
    updateData();
}

void ProjectionCameraDecorator::dump(UInt32, const BitVector) const {
  SLOG << "Dump ProjectionCameraDecorator NI" << std::endl;
}

/*! Update dependent data, i.e. the internal Field values.
 */
void ProjectionCameraDecorator::updateData(void) {
  if (getSurface().size() != 4) {
    FWARNING(("ProjectionCameraDecorator: only defined for 4 point "
              "surfaces!\n"));
    return;
  }

  Pnt3f p0(getSurface()[0]);
  Vec3f d1, d2, n;

  d1 = getSurface()[1] - p0;
  d2 = getSurface()[3] - p0;

  n = d1.cross(d2);
  if (n.isZero()) {
    FWARNING(("ProjectionCameraDecorator: normal is zero, surface "
              "ill-defined!\n"));
    return;
  }

  ProjectionCameraDecoratorPtr ptr(this);
  beginEditCP(
      ptr, LeftFieldMask | BottomFieldMask | NormalFieldMask | WidthFieldMask | HeightFieldMask);
  ptr->setLeft(Plane(d1, p0));
  ptr->setBottom(Plane(d2, p0));
  ptr->setNormal(Plane(n, p0));
  ptr->setWidth(d1.length());
  ptr->setHeight(d2.length());
  endEditCP(
      ptr, LeftFieldMask | BottomFieldMask | NormalFieldMask | WidthFieldMask | HeightFieldMask);
}

void ProjectionCameraDecorator::getViewing(
    Matrix& result, UInt32 OSG_CHECK_ARG(width), UInt32 OSG_CHECK_ARG(height)) {
  if (getUser() == NullFC) {
    FWARNING(("ProjectionCameraDecorator::getViewing: no user!"));
    result.setIdentity();
    return;
  }

  getUser()->getToWorld(result);
  result.invert();
}

void ProjectionCameraDecorator::getProjection(
    Matrix& result, UInt32 OSG_CHECK_ARG(width), UInt32 OSG_CHECK_ARG(height)) {
  CameraPtr camera = getDecoratee();

  if (camera == NullFC) {
    FWARNING(("ProjectionCameraDecorator::getProjection: no decoratee!\n"));
    result.setIdentity();
    return;
  }

  Matrix cam, user;

  camera->getBeacon()->getToWorld(cam);
  getUser()->getToWorld(user);
  cam.invert();

  cam.mult(user);

  Pnt3f viewer(cam[3]);

  Real32 eyeFac;

  if (getLeftEye()) {
    eyeFac = -.5;
  } else {
    eyeFac = +.5;
  }

  viewer += Vec3f(cam[0]) * eyeFac * getEyeSeparation();

  Real32 dist = getNormal().distance(viewer), dl = getLeft().distance(viewer),
         db = getBottom().distance(viewer), f = camera->getNear() / dist;

  MatrixFrustum(result, -dl * f, (getWidth() - dl) * f, -db * f, (getHeight() - db) * f,
      camera->getNear(), camera->getFar());
}

void ProjectionCameraDecorator::getProjectionTranslation(
    Matrix& result, UInt32 OSG_CHECK_ARG(width), UInt32 OSG_CHECK_ARG(height)) {
  CameraPtr camera = getDecoratee();

  if (camera == NullFC) {
    FFATAL(("ProjectionCameraDecorator::getProjectionTranslation: "
            "no decoratee!\n"));
    result.setIdentity();
    return;
  }

  Matrix cam, user;

  camera->getBeacon()->getToWorld(cam);
  getUser()->getToWorld(user);

  cam.invert();
  cam.mult(user);

  Vec3f dir(getNormal().getNormal()), up(getBottom().getNormal()), right;
  Vec3f pos(cam[3]);

  Real32 eyeFac;

  if (getLeftEye()) {
    eyeFac = -.5;
  } else {
    eyeFac = +.5;
  }

  pos += Vec3f(cam[0]) * eyeFac * getEyeSeparation();

  right = up.cross(dir);
  up    = dir.cross(right);

  result.setIdentity();
  result.setValue(right, up, dir, pos);
  result.invert();

  result.mult(cam);
#if 0
static bool hack = true;
    Quaternion q( getNormal().getNormal(), Vec3f(0,0,1));    
 
    Vec3f v;
    Real32 a;
    q.getValueAsAxisDeg(v,a);
   
    // HACKKK
    if(hack && a > 50)
    {
        q.getValue(result);   
        
        Real32 ang1 = 54.44;
        Real32 ang2 = 6.27;
        
        if(v[1] < 0)    ang1 = -ang1;
        
        Quaternion q1,q2;
        Matrix m1,m2;
        
        q1.setValueAsAxisDeg(0,1,0,ang1);
        q2.setValueAsAxisDeg(1,0,0,ang2);
        
        q1.getValue(m1);
        q2.getValue(m2);
        
        result = m2;
        result.mult(m1);
    }
#endif
}
