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

#include "OSGSharedFontStyleWrapper.h"

OSG_USING_NAMESPACE

/*! \class osg::SharedFontStyleWrapper
This class is needed to prevent font styles to be loaded n times when n Text Nodes using the
SharedFontStyle are loaded
*/

/*----------------------- constructors & destructors ----------------------*/

SharedFontStyleWrapper::SharedFontStyleWrapper(void)
    : Inherited() {
}

SharedFontStyleWrapper::SharedFontStyleWrapper(const SharedFontStyleWrapper& source)
    : Inherited(source) {
}

SharedFontStyleWrapper::~SharedFontStyleWrapper(void) {
}

/*----------------------------- class specific ----------------------------*/

void SharedFontStyleWrapper::initMethod(void) {
}

void SharedFontStyleWrapper::changed(BitVector whichField, UInt32 origin) {
  Inherited::changed(whichField, origin);
}

void SharedFontStyleWrapper::dump(UInt32, const BitVector) const {
  SLOG << "Dump SharedFontStyleWrapper NI" << std::endl;
}
