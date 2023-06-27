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

#include "OSGNodePtr.h"
#include "OSGMatrixCamera.h"

OSG_USING_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class osg::MatrixCamera
    \ingroup GrpSystemWindowCameras

The Matrix Camera class, see \ref PageSystemWindowCameraMatrix for
a description.

The used matrices are stored in the _sfModelviewMatrix and _sfProjectionMatrix
Fields.
*/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

/*-------------------------------------------------------------------------*\
 -  private                                                                -
\*-------------------------------------------------------------------------*/

void MatrixCamera::initMethod(void) {
}

/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

/*------------- constructors & destructors --------------------------------*/

MatrixCamera::MatrixCamera(void)
    : Inherited() {
}

MatrixCamera::MatrixCamera(const MatrixCamera& source)
    : Inherited(source) {
}

MatrixCamera::~MatrixCamera(void) {
}

void MatrixCamera::changed(BitVector whichField, UInt32 origin) {
  Inherited::changed(whichField, origin);
}

/*------------------------------- dump ----------------------------------*/

void MatrixCamera::dump(
    UInt32 OSG_CHECK_ARG(uiIndent), const BitVector OSG_CHECK_ARG(bvFlags)) const {
  SLOG << "Dump MatrixCamera NI" << std::endl;
}

void MatrixCamera::draw(DrawAction* OSG_CHECK_ARG(action), const Viewport& OSG_CHECK_ARG(port)) {
}

void MatrixCamera::getProjection(
    Matrix& result, UInt32 OSG_CHECK_ARG(width), UInt32 OSG_CHECK_ARG(height)) {
  result = getProjectionMatrix();
}

void MatrixCamera::getViewing(
    Matrix& result, UInt32 OSG_CHECK_ARG(width), UInt32 OSG_CHECK_ARG(height)) {
  result = getModelviewMatrix();
}
