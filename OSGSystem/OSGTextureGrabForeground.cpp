/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
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
#include <OSGGLU.h>

#include <OSGNodePtr.h>
#include <OSGViewport.h>
#include <OSGImage.h>
#include <OSGTextureChunk.h>

#include "OSGTextureGrabForeground.h"

OSG_USING_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class osg::TextureGrabForeground
    \ingroup GrpSystemWindowForegrounds

The GrabForeground is used for grabbing a rendered viewport into a Texture.
See \ref PageSystemWindowForegroundGrabTexture for a description.

*/

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void TextureGrabForeground::initMethod(void) {
}

/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

TextureGrabForeground::TextureGrabForeground(void)
    : Inherited() {
}

TextureGrabForeground::TextureGrabForeground(const TextureGrabForeground& source)
    : Inherited(source) {
}

TextureGrabForeground::~TextureGrabForeground(void) {
}

/*----------------------------- class specific ----------------------------*/

void TextureGrabForeground::changed(BitVector whichField, UInt32 origin) {
  Inherited::changed(whichField, origin);
}

void TextureGrabForeground::dump(UInt32, const BitVector) const {
  SLOG << "Dump TextureGrabForeground NI" << std::endl;
}

/*! Grab the image to the texture.
 */
void TextureGrabForeground::draw(DrawActionBase* action, Viewport* port) {
  if (getActive() == false)
    return;

  TextureChunkPtr t = getTexture();

  if (t == NullFC) // No texture, no grab.
    return;

  Int32 pw = port->getPixelWidth(), ph = port->getPixelHeight();

  // Ignore empty viewports
  if (pw < 1 || ph < 1)
    return;

  ImagePtr i = t->getImage();

  // If image is smaller than 2x2, resize it to vp size
  // the 2x2 is because you can't create 0x0 images
  if ((i->getWidth() <= 1 && i->getHeight() <= 1) ||
      (getAutoResize() && (osgabs(i->getWidth() - pw) > 1 || osgabs(i->getHeight() - ph) > 1))) {
    i->set(i->getPixelFormat(), pw, ph);
    // Tell the texture...
    beginEditCP(t, TextureChunk::ImageFieldMask);
    endEditCP(t, TextureChunk::ImageFieldMask);
  }

  UInt32 w = osgMin((Int32)i->getWidth(), pw);
  UInt32 h = osgMin((Int32)i->getHeight(), ph);

  glErr("TextureGrabForeground::activate precheck");

  action->getWindow()->validateGLObject(t->getGLId());

  glErr("TextureGrabForeground::bind precheck");

  GLenum bindTarget = getBindTarget(), copyTarget = getCopyTarget();

  if (bindTarget == GL_NONE) {
    if (i->getDepth() > 1) {
      FWARNING(("TextureGrabBackground:: 3D textures not "
                "supported for this window!\n"));
      return;
    } else if (h > 1)
      bindTarget = GL_TEXTURE_2D;
    else
      bindTarget = GL_TEXTURE_1D;
  }

  if (copyTarget == GL_NONE)
    copyTarget = bindTarget;

  glBindTexture(bindTarget, action->getWindow()->getGLObjectId(t->getGLId()));

  glErr("TextureGrabForeground::copy precheck");

  if (copyTarget == GL_TEXTURE_3D) {
    FWARNING(("TextureGrabForeground:: grabbing to 3D textures not "
              "supported yet!\n"));
  } else if (copyTarget == GL_TEXTURE_1D) {
    glCopyTexSubImage1D(copyTarget, 0, 0, port->getPixelLeft(), port->getPixelBottom(), w);
  } else {
    glCopyTexSubImage2D(copyTarget, 0, 0, 0, port->getPixelLeft(), port->getPixelBottom(), w, h);
  }

  glErr("TextureGrabForeground::copy postcheck");

  glBindTexture(bindTarget, 0);
}
