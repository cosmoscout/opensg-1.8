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
 **     class Inline!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE

//! access the type of the class
inline OSG::FieldContainerType& InlineBase::getClassType(void) {
  return _type;
}

//! access the numerical type of the class
inline OSG::UInt32 InlineBase::getClassTypeId(void) {
  return _type.getId();
}

//! create a new instance of the class
inline InlinePtr InlineBase::create(void) {
  InlinePtr fc;

  if (getClassType().getPrototype() != OSG::NullFC) {
    fc = InlinePtr::dcast(getClassType().getPrototype()->shallowCopy());
  }

  return fc;
}

//! create an empty new instance of the class, do not copy the prototype
inline InlinePtr InlineBase::createEmpty(void) {
  InlinePtr returnValue;

  newPtr(returnValue);

  return returnValue;
}

/*------------------------------ get -----------------------------------*/

//! Get the Inline::_mfUrl field.
inline MFString* InlineBase::getMFUrl(void) {
  return &_mfUrl;
}

//! Get the Inline::_sfLoaded field.
inline SFBool* InlineBase::getSFLoaded(void) {
  return &_sfLoaded;
}

//! Get the value of the Inline::_sfLoaded field.
inline bool& InlineBase::getLoaded(void) {
  return _sfLoaded.getValue();
}

//! Get the value of the Inline::_sfLoaded field.
inline const bool& InlineBase::getLoaded(void) const {
  return _sfLoaded.getValue();
}

//! Set the value of the Inline::_sfLoaded field.
inline void InlineBase::setLoaded(const bool& value) {
  _sfLoaded.setValue(value);
}

//! Get the value of the \a index element the Inline::_mfUrl field.
inline std::string& InlineBase::getUrl(const UInt32 index) {
  return _mfUrl[index];
}

//! Get the Inline::_mfUrl field.
inline MFString& InlineBase::getUrl(void) {
  return _mfUrl;
}

//! Get the Inline::_mfUrl field.
inline const MFString& InlineBase::getUrl(void) const {
  return _mfUrl;
}

OSG_END_NAMESPACE

#define OSGINLINEBASE_INLINE_CVSID                                                                 \
  "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"
