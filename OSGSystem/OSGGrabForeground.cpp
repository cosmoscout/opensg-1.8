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

#include <OSGNodePtr.h>
#include <OSGViewport.h>
#include <OSGImage.h>

#include "OSGGrabForeground.h"

OSG_USING_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class osg::GrabForeground
    \ingroup GrpSystemWindowForegrounds

The GrabForeground is used for grabbing a rendered viewport into an Image.
See \ref PageSystemWindowForegroundGrab for a description.


*/

/*----------------------- constructors & destructors ----------------------*/

GrabForeground::GrabForeground(void)
    : Inherited() {
  Inherited::setActive(false);
}

GrabForeground::GrabForeground(const GrabForeground& source)
    : Inherited(source) {
}

GrabForeground::~GrabForeground(void) {
}

/*----------------------------- class specific ----------------------------*/

void GrabForeground::initMethod(void) {
}

void GrabForeground::changed(BitVector whichField, UInt32 origin) {
  Inherited::changed(whichField, origin);
}

void GrabForeground::dump(UInt32, const BitVector) const {
  SLOG << "Dump GrabForeground NI" << std::endl;
}

/*! Grab the image, if it is actually set.
 */
void GrabForeground::draw(DrawActionBase*, Viewport* port) {
  if (getActive() == false)
    return;

  ImagePtr i = getImage();

  if (i == NullFC) // No image, no grab.
    return;

  UInt32 w = osgMax(2, port->getPixelWidth());
  UInt32 h = osgMax(2, port->getPixelHeight());

  // If image is smaller than 2x2, resize it to vp size
  // the 2x2 is because you can't create 0x0 images
  // If autoResize then update img size if vp changed
  if ((i->getWidth() <= 1 || i->getHeight() <= 1) ||
      (getAutoResize() && (w != i->getWidth() || h != i->getHeight()))) {
    i->set(i->getPixelFormat(), w, h);
  }

  bool storeChanged = false;

  if (!getAutoResize()) {
    w = osgMin(i->getWidth(), port->getPixelWidth());
    h = osgMin(i->getHeight(), port->getPixelHeight());

    if (i->getWidth() != port->getPixelWidth()) {
      glPixelStorei(GL_PACK_ROW_LENGTH, i->getWidth());
      storeChanged = true;
    }
  }

  glReadPixels(port->getPixelLeft(), port->getPixelBottom(), w, h, i->getPixelFormat(),
      i->getDataType(), i->getData());

  if (storeChanged)
    glPixelStorei(GL_PACK_ROW_LENGTH, 0);
}
