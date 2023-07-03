/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
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

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class SharedFontStyle!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE

//! access the type of the class
inline OSG::FieldContainerType& SharedFontStyleBase::getClassType(void) {
  return _type;
}

//! access the numerical type of the class
inline OSG::UInt32 SharedFontStyleBase::getClassTypeId(void) {
  return _type.getId();
}

//! create a new instance of the class
inline SharedFontStylePtr SharedFontStyleBase::create(void) {
  SharedFontStylePtr fc;

  if (getClassType().getPrototype() != OSG::NullFC) {
    fc = SharedFontStylePtr::dcast(getClassType().getPrototype()->shallowCopy());
  }

  return fc;
}

//! create an empty new instance of the class, do not copy the prototype
inline SharedFontStylePtr SharedFontStyleBase::createEmpty(void) {
  SharedFontStylePtr returnValue;

  newPtr(returnValue);

  return returnValue;
}

/*------------------------------ get -----------------------------------*/

//! Get the SharedFontStyle::_sfContainedFontStyle field.
inline SFFontStyleP* SharedFontStyleBase::getSFContainedFontStyle(void) {
  return &_sfContainedFontStyle;
}

//! Get the value of the SharedFontStyle::_sfContainedFontStyle field.
inline FontStyleP& SharedFontStyleBase::getContainedFontStyle(void) {
  return _sfContainedFontStyle.getValue();
}

//! Get the value of the SharedFontStyle::_sfContainedFontStyle field.
inline const FontStyleP& SharedFontStyleBase::getContainedFontStyle(void) const {
  return _sfContainedFontStyle.getValue();
}

//! Set the value of the SharedFontStyle::_sfContainedFontStyle field.
inline void SharedFontStyleBase::setContainedFontStyle(const FontStyleP& value) {
  _sfContainedFontStyle.setValue(value);
}

OSG_END_NAMESPACE

#define OSGSHAREDFONTSTYLEBASE_INLINE_CVSID                                                        \
  "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"
