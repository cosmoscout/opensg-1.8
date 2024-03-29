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
#include <OSGGL.h>

#include "OSGNodePtr.h"
#include "OSGStereoBufferViewport.h"

OSG_USING_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class osg::StereoBufferViewport
    \ingroup GrpSystemWindowViewports

Viewport for quad-buffered stereo rendering, see \ref
PageSystemWindowViewports for a description.

The active buffers are selected using the _sfLeftBuffer and _sfRightBuffer
Fields.

*/

/*----------------------- constructors & destructors ----------------------*/

StereoBufferViewport::StereoBufferViewport(void)
    : Inherited() {
}

StereoBufferViewport::StereoBufferViewport(const StereoBufferViewport& source)
    : Inherited(source) {
}

StereoBufferViewport::~StereoBufferViewport(void) {
}

/*----------------------------- class specific ----------------------------*/

void StereoBufferViewport::initMethod(void) {
}

void StereoBufferViewport::changed(BitVector whichField, UInt32 origin) {
  Inherited::changed(whichField, origin);
}

void StereoBufferViewport::dump(UInt32, const BitVector) const {
  SLOG << "Dump StereoBufferViewport NI" << std::endl;
}

void StereoBufferViewport::activateSize(void) {
  Inherited::activateSize();
}

void StereoBufferViewport::activate(void) {
  if (getLeftBuffer()) {
    if (getRightBuffer()) {
      glDrawBuffer(GL_BACK);
      glReadBuffer(GL_BACK);
    } else {
      glDrawBuffer(GL_BACK_LEFT);
      glReadBuffer(GL_BACK_LEFT);
    }
  } else {
    if (getRightBuffer()) {
      glDrawBuffer(GL_BACK_RIGHT);
      glReadBuffer(GL_BACK_RIGHT);
    } else {
      glDrawBuffer(GL_NONE);
      glReadBuffer(GL_NONE);
    }
  }
  Inherited::activate();
}

void StereoBufferViewport::deactivate(void) {
  Inherited::deactivate();
  glDrawBuffer(GL_BACK);
  glReadBuffer(GL_BACK);
}

void StereoBufferViewport::draw(DrawAction* action) {
  Inherited::draw(action);
}

void StereoBufferViewport::render(RenderActionBase* action) {
  Inherited::render(action);
}
