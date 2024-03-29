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
 **     class SortLastWindow!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE

//! access the type of the class
inline OSG::FieldContainerType& SortLastWindowBase::getClassType(void) {
  return _type;
}

//! access the numerical type of the class
inline OSG::UInt32 SortLastWindowBase::getClassTypeId(void) {
  return _type.getId();
}

//! create a new instance of the class
inline SortLastWindowPtr SortLastWindowBase::create(void) {
  SortLastWindowPtr fc;

  if (getClassType().getPrototype() != OSG::NullFC) {
    fc = SortLastWindowPtr::dcast(getClassType().getPrototype()->shallowCopy());
  }

  return fc;
}

//! create an empty new instance of the class, do not copy the prototype
inline SortLastWindowPtr SortLastWindowBase::createEmpty(void) {
  SortLastWindowPtr returnValue;

  newPtr(returnValue);

  return returnValue;
}

/*------------------------------ get -----------------------------------*/

//! Get the SortLastWindow::_mfGroupNodes field.
inline MFNodePtr* SortLastWindowBase::getMFGroupNodes(void) {
  return &_mfGroupNodes;
}

//! Get the SortLastWindow::_mfGroupLengths field.
inline MFUInt32* SortLastWindowBase::getMFGroupLengths(void) {
  return &_mfGroupLengths;
}

//! Get the SortLastWindow::_sfGroupsChanged field.
inline SFBool* SortLastWindowBase::getSFGroupsChanged(void) {
  return &_sfGroupsChanged;
}

//! Get the value of the SortLastWindow::_sfGroupsChanged field.
inline bool& SortLastWindowBase::getGroupsChanged(void) {
  return _sfGroupsChanged.getValue();
}

//! Get the value of the SortLastWindow::_sfGroupsChanged field.
inline const bool& SortLastWindowBase::getGroupsChanged(void) const {
  return _sfGroupsChanged.getValue();
}

//! Set the value of the SortLastWindow::_sfGroupsChanged field.
inline void SortLastWindowBase::setGroupsChanged(const bool& value) {
  _sfGroupsChanged.setValue(value);
}

//! Get the value of the \a index element the SortLastWindow::_mfGroupNodes field.
inline NodePtr& SortLastWindowBase::getGroupNodes(const UInt32 index) {
  return _mfGroupNodes[index];
}

//! Get the SortLastWindow::_mfGroupNodes field.
inline MFNodePtr& SortLastWindowBase::getGroupNodes(void) {
  return _mfGroupNodes;
}

//! Get the SortLastWindow::_mfGroupNodes field.
inline const MFNodePtr& SortLastWindowBase::getGroupNodes(void) const {
  return _mfGroupNodes;
}

//! Get the value of the \a index element the SortLastWindow::_mfGroupLengths field.
inline UInt32& SortLastWindowBase::getGroupLengths(const UInt32 index) {
  return _mfGroupLengths[index];
}

//! Get the SortLastWindow::_mfGroupLengths field.
inline MFUInt32& SortLastWindowBase::getGroupLengths(void) {
  return _mfGroupLengths;
}

//! Get the SortLastWindow::_mfGroupLengths field.
inline const MFUInt32& SortLastWindowBase::getGroupLengths(void) const {
  return _mfGroupLengths;
}

OSG_END_NAMESPACE

#define OSGSORTLASTWINDOWBASE_INLINE_CVSID                                                         \
  "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"
