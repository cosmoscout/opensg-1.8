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
 **     class DisplayFilterForeground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE

//! access the type of the class
inline OSG::FieldContainerType& DisplayFilterForegroundBase::getClassType(void) {
  return _type;
}

//! access the numerical type of the class
inline OSG::UInt32 DisplayFilterForegroundBase::getClassTypeId(void) {
  return _type.getId();
}

//! create a new instance of the class
inline DisplayFilterForegroundPtr DisplayFilterForegroundBase::create(void) {
  DisplayFilterForegroundPtr fc;

  if (getClassType().getPrototype() != OSG::NullFC) {
    fc = DisplayFilterForegroundPtr::dcast(getClassType().getPrototype()->shallowCopy());
  }

  return fc;
}

//! create an empty new instance of the class, do not copy the prototype
inline DisplayFilterForegroundPtr DisplayFilterForegroundBase::createEmpty(void) {
  DisplayFilterForegroundPtr returnValue;

  newPtr(returnValue);

  return returnValue;
}

/*------------------------------ get -----------------------------------*/

//! Get the DisplayFilterForeground::_mfFilter field.
inline MFDisplayFilterPtr* DisplayFilterForegroundBase::getMFFilter(void) {
  return &_mfFilter;
}

//! Get the DisplayFilterForeground::_sfServer field.
inline SFString* DisplayFilterForegroundBase::getSFServer(void) {
  return &_sfServer;
}

//! Get the value of the DisplayFilterForeground::_sfServer field.
inline std::string& DisplayFilterForegroundBase::getServer(void) {
  return _sfServer.getValue();
}

//! Get the value of the DisplayFilterForeground::_sfServer field.
inline const std::string& DisplayFilterForegroundBase::getServer(void) const {
  return _sfServer.getValue();
}

//! Set the value of the DisplayFilterForeground::_sfServer field.
inline void DisplayFilterForegroundBase::setServer(const std::string& value) {
  _sfServer.setValue(value);
}

//! Get the value of the \a index element the DisplayFilterForeground::_mfFilter field.
inline DisplayFilterPtr& DisplayFilterForegroundBase::getFilter(const UInt32 index) {
  return _mfFilter[index];
}

//! Get the DisplayFilterForeground::_mfFilter field.
inline MFDisplayFilterPtr& DisplayFilterForegroundBase::getFilter(void) {
  return _mfFilter;
}

//! Get the DisplayFilterForeground::_mfFilter field.
inline const MFDisplayFilterPtr& DisplayFilterForegroundBase::getFilter(void) const {
  return _mfFilter;
}

OSG_END_NAMESPACE

#define OSGDISPLAYFILTERFOREGROUNDBASE_INLINE_CVSID                                                \
  "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"
