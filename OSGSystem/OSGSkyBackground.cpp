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

#include <OSGDrawActionBase.h>
#include <OSGCamera.h>
#include <OSGViewport.h>
#include <OSGTextureChunk.h>
#include <OSGImage.h>

#include "OSGSkyBackground.h"

#include <OSGGL.h>

OSG_USING_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class osg::SkyBackground
    \ingroup GrpSystemWindowBackgrounds

A Sky/Ground/Skybox background, inspired by VRML, see \ref
PageSystemWindowBackgroundSky for a description.

The sky is defined by the _mfSkyAngle and _mfSkyColor fields, the ground by the
_mfGroundAngle and _mfGround Color fields. The resolution of the sky sphere can
be influenced by the _sfSphereRes field. The sky box is defined by the
_sfBackTexture, _sfFrontTexture, _sfLeftTexture, _sfRightTexture, _sfTopTexture
and _sfBottomTexture fields.

*/

/*----------------------- constructors & destructors ----------------------*/

SkyBackground::SkyBackground(void)
    : Inherited() {
}

SkyBackground::SkyBackground(const SkyBackground& source)
    : Inherited(source) {
}

SkyBackground::~SkyBackground(void) {
}

/*----------------------------- class specific ----------------------------*/

void SkyBackground::initMethod(void) {
}

void SkyBackground::changed(BitVector whichField, UInt32 origin) {
  Inherited::changed(whichField, origin);
}

void SkyBackground::dump(UInt32, const BitVector) const {
  SLOG << "Dump SkyBackground NI" << std::endl;
}

/*-------------------------- drawing ---------------------------------*/

void SkyBackground::drawFace(DrawActionBase* action, TextureChunkPtr tex, StateChunk*& oldtex,
    const Pnt3f& p1, const Pnt3f& p2, const Pnt3f& p3, const Pnt3f& p4, const Vec3f* texCoord) {

  if (tex != NullFC) {
    if (oldtex != NULL) {
      tex->changeFrom(action, oldtex);
    } else {
      tex->activate(action);
    }

    if (tex->isTransparent()) {
      glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
      glEnable(GL_BLEND);
    }

    // ENRICO: this part holds the informations about
    // custom texture coordinates
    // Mess with the best, die like the rest
    glBegin(GL_QUADS);
    glTexCoord3fv((GLfloat*)texCoord[0].getValues());
    glVertex3fv((GLfloat*)p1.getValues());
    glTexCoord3fv((GLfloat*)texCoord[1].getValues());
    glVertex3fv((GLfloat*)p2.getValues());
    glTexCoord3fv((GLfloat*)texCoord[2].getValues());
    glVertex3fv((GLfloat*)p3.getValues());
    glTexCoord3fv((GLfloat*)texCoord[3].getValues());
    glVertex3fv((GLfloat*)p4.getValues());
    glEnd();

    if (tex->isTransparent()) {
      glDisable(GL_BLEND);
    }

    oldtex = tex.getCPtr();
  }
}

void SkyBackground::clear(DrawActionBase* action, Viewport* viewport) {

  glPushAttrib(GL_POLYGON_BIT | GL_DEPTH_BUFFER_BIT | GL_LIGHTING_BIT);

  glDisable(GL_LIGHTING);
  glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
  glDisable(GL_DEPTH_TEST);

  glMatrixMode(GL_MODELVIEW);
  glPushMatrix();

  Matrix m, t;
  action->getCamera()->getViewing(m, viewport->getPixelWidth(), viewport->getPixelHeight());
  action->getCamera()->getProjectionTranslation(
      t, viewport->getPixelWidth(), viewport->getPixelHeight());
  m.multLeft(t);

  if (getBeacon() != NullFC) {
    getBeacon()->getToWorld(t);
    m.mult(t);
  }

  m[3][0] = m[3][1] = m[3][2] = 0;
  glLoadMatrixf(m.getValues());

  glMatrixMode(GL_PROJECTION);
  glPushMatrix();

  glLoadIdentity();
  glTranslatef(0.f, 0.f, 0.5);
  glScalef(1.f, 1.f, 0.f);

  action->getCamera()->getProjection(m, viewport->getPixelWidth(), viewport->getPixelHeight());
  glMultMatrixf(m.getValues());

  UInt32 i, j;
  UInt32 sr = _sfSphereRes.getValue() + 1; // sphere resolution

  if (_cosval.size() != sr) {
    Real32 da = 2 * Pi / (sr - 1);

    _cosval.resize(sr);
    _sinval.resize(sr);

    for (i = 0; i < sr; ++i) {
      _cosval[i] = osgcos(i * da);
      _sinval[i] = osgsin(i * da);
    }
  }

  Real32 vcos1, vsin1, vcos2, vsin2;

  if (_mfSkyAngle.size() > 0) {
    vcos1 = osgcos(_mfSkyAngle[0]);
    vsin1 = osgsin(_mfSkyAngle[0]);

    glBegin(GL_TRIANGLE_FAN);
    glColor4fv((GLfloat*)_mfSkyColor[0].getValuesRGBA());
    glVertex3f(0, 1, 0);
    glColor4fv((GLfloat*)_mfSkyColor[1].getValuesRGBA());

    for (i = 0; i < sr; ++i) {
      glVertex3f(vsin1 * _sinval[i], vcos1, vsin1 * _cosval[i]);
    }

    glEnd();

    for (j = 0; j < _mfSkyAngle.size() - 1; ++j) {
      Color4f c1, c2;

      c1 = _mfSkyColor[j + 1];
      c2 = _mfSkyColor[j + 2];

      vcos1 = osgcos(_mfSkyAngle[j]);
      vsin1 = osgsin(_mfSkyAngle[j]);
      vcos2 = osgcos(_mfSkyAngle[j + 1]);
      vsin2 = osgsin(_mfSkyAngle[j + 1]);

      glBegin(GL_TRIANGLE_STRIP);

      for (i = 0; i < sr; ++i) {
        glColor4fv((GLfloat*)c1.getValuesRGBA());
        glVertex3f(vsin1 * _sinval[i], vcos1, vsin1 * _cosval[i]);
        glColor4fv((GLfloat*)c2.getValuesRGBA());
        glVertex3f(vsin2 * _sinval[i], vcos2, vsin2 * _cosval[i]);
      }
      glEnd();
    }

    if (osgabs(_mfSkyAngle[j] - Pi) > Eps) {
      glBegin(GL_TRIANGLE_FAN);
      glColor4fv((GLfloat*)_mfSkyColor[j + 1].getValuesRGBA());
      glVertex3f(0, -1, 0);
      vcos1 = osgcos(_mfSkyAngle[j]);
      vsin1 = osgsin(_mfSkyAngle[j]);

      for (i = 0; i < sr; ++i) {
        glVertex3f(vsin1 * _sinval[i], vcos1, vsin1 * _cosval[i]);
      }

      glEnd();
    }
  } else // no angles, just fill single color
  {
    if (_mfSkyColor.size() > 0) {
      glClearColor(_mfSkyColor[0][0], _mfSkyColor[0][1], _mfSkyColor[0][2], 0);
    } else {
      glClearColor(0, 0, 0, 0);
    }
    glClear(GL_COLOR_BUFFER_BIT);
  }

  // Draw the ground.
  // It's possible to be smarter about this, but for now just overdraw.

  if (_mfGroundAngle.size() > 0) {
    vcos1 = -osgcos(_mfGroundAngle[0]);
    vsin1 = osgsin(_mfGroundAngle[0]);

    glBegin(GL_TRIANGLE_FAN);

    if (_mfGroundColor.size())
      glColor4fv((GLfloat*)_mfGroundColor[0].getValuesRGBA());

    glVertex3f(0, -1, 0);

    if (_mfGroundColor.size() > 1)
      glColor4fv((GLfloat*)_mfGroundColor[1].getValuesRGBA());

    for (i = 0; i < sr; ++i) {
      glVertex3f(vsin1 * _sinval[i], vcos1, vsin1 * _cosval[i]);
    }

    glEnd();

    for (j = 0; j < _mfGroundAngle.size() - 1; ++j) {
      Color4f c1, c2;

      if (_mfGroundColor.size() > j + 2) {
        c1 = _mfGroundColor[j + 1];
        c2 = _mfGroundColor[j + 2];
      }

      vcos1 = -osgcos(_mfGroundAngle[j]);
      vsin1 = osgsin(_mfGroundAngle[j]);
      vcos2 = -osgcos(_mfGroundAngle[j + 1]);
      vsin2 = osgsin(_mfGroundAngle[j + 1]);

      glBegin(GL_TRIANGLE_STRIP);

      for (i = 0; i < sr; ++i) {
        glColor4fv((GLfloat*)c1.getValuesRGBA());
        glVertex3f(vsin1 * _sinval[i], vcos1, vsin1 * _cosval[i]);
        glColor4fv((GLfloat*)c2.getValuesRGBA());
        glVertex3f(vsin2 * _sinval[i], vcos2, vsin2 * _cosval[i]);
      }
      glEnd();
    }
  }

  // now draw the textures, if set
  StateChunk*  tchunk          = NULL;
  static Vec3f defaulttc[7][4] = {
      // 2D default TCs
      {Vec3f(0, 0, 0), Vec3f(1, 0, 0), Vec3f(1, 1, 0), Vec3f(0, 1, 0)},

      // Cubetex Default TCs
      {Vec3f(-1, 1, -1), Vec3f(1, 1, -1), Vec3f(1, -1, -1), Vec3f(-1, -1, -1)},
      {Vec3f(1, 1, 1), Vec3f(-1, 1, 1), Vec3f(-1, -1, 1), Vec3f(1, -1, 1)},
      {Vec3f(1, 1, -1), Vec3f(-1, 1, -1), Vec3f(-1, 1, 1), Vec3f(1, 1, 1)},
      {Vec3f(1, -1, 1), Vec3f(-1, -1, 1), Vec3f(-1, -1, -1), Vec3f(1, -1, -1)},
      {Vec3f(1, 1, -1), Vec3f(1, 1, 1), Vec3f(1, -1, 1), Vec3f(1, -1, -1)},
      {Vec3f(-1, 1, 1), Vec3f(-1, 1, -1), Vec3f(-1, -1, -1), Vec3f(-1, -1, 1)},
  };

#undef tfac
#define tfac(t, c)                                                                                 \
  defaulttc[(c) *                                                                                  \
            ((t) != NullFC && (t)->getImage() != NullFC && (t)->getImage()->getSideCount() == 6)]

  drawFace(action, getBackTexture(), tchunk, Pnt3f(0.5, -0.5, 0.5), Pnt3f(-0.5, -0.5, 0.5),
      Pnt3f(-0.5, 0.5, 0.5), Pnt3f(0.5, 0.5, 0.5),
      getBackTexCoord().size() ? &getBackTexCoord()[0] : tfac(getBackTexture(), 1));

  drawFace(action, getFrontTexture(), tchunk, Pnt3f(-0.5, -0.5, -0.5), Pnt3f(0.5, -0.5, -0.5),
      Pnt3f(0.5, 0.5, -0.5), Pnt3f(-0.5, 0.5, -0.5),
      getFrontTexCoord().size() ? &getFrontTexCoord()[0] : tfac(getFrontTexture(), 2));

  drawFace(action, getBottomTexture(), tchunk, Pnt3f(-0.5, -0.5, 0.5), Pnt3f(0.5, -0.5, 0.5),
      Pnt3f(0.5, -0.5, -0.5), Pnt3f(-0.5, -0.5, -0.5),
      getBottomTexCoord().size() ? &getBottomTexCoord()[0] : tfac(getBottomTexture(), 3));

  drawFace(action, getTopTexture(), tchunk, Pnt3f(-0.5, 0.5, -0.5), Pnt3f(0.5, 0.5, -0.5),
      Pnt3f(0.5, 0.5, 0.5), Pnt3f(-0.5, 0.5, 0.5),
      getTopTexCoord().size() ? &getTopTexCoord()[0] : tfac(getTopTexture(), 4));

  drawFace(action, getLeftTexture(), tchunk, Pnt3f(-0.5, -0.5, 0.5), Pnt3f(-0.5, -0.5, -0.5),
      Pnt3f(-0.5, 0.5, -0.5), Pnt3f(-0.5, 0.5, 0.5),
      getLeftTexCoord().size() ? &getLeftTexCoord()[0] : tfac(getLeftTexture(), 5));

  drawFace(action, getRightTexture(), tchunk, Pnt3f(0.5, -0.5, -0.5), Pnt3f(0.5, -0.5, 0.5),
      Pnt3f(0.5, 0.5, 0.5), Pnt3f(0.5, 0.5, -0.5),
      getRightTexCoord().size() ? &getRightTexCoord()[0] : tfac(getRightTexture(), 6));
#undef tfac

  if (tchunk != NULL)
    tchunk->deactivate(action);

  Int32 bit = getClearStencilBit();

  if (bit >= 0) {
    glClearStencil(bit);
    glClear(GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);
  } else {
    glClear(GL_DEPTH_BUFFER_BIT);
  }

  glPopMatrix();
  glMatrixMode(GL_MODELVIEW);
  glPopMatrix();

  glPopAttrib();

  glColor3f(1.0, 1.0, 1.0);
}
