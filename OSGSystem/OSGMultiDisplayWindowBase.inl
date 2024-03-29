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
 **     class MultiDisplayWindow!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE

//! access the type of the class
inline OSG::FieldContainerType& MultiDisplayWindowBase::getClassType(void) {
  return _type;
}

//! access the numerical type of the class
inline OSG::UInt32 MultiDisplayWindowBase::getClassTypeId(void) {
  return _type.getId();
}

//! create a new instance of the class
inline MultiDisplayWindowPtr MultiDisplayWindowBase::create(void) {
  MultiDisplayWindowPtr fc;

  if (getClassType().getPrototype() != OSG::NullFC) {
    fc = MultiDisplayWindowPtr::dcast(getClassType().getPrototype()->shallowCopy());
  }

  return fc;
}

//! create an empty new instance of the class, do not copy the prototype
inline MultiDisplayWindowPtr MultiDisplayWindowBase::createEmpty(void) {
  MultiDisplayWindowPtr returnValue;

  newPtr(returnValue);

  return returnValue;
}

/*------------------------------ get -----------------------------------*/

//! Get the MultiDisplayWindow::_sfHServers field.
inline SFUInt32* MultiDisplayWindowBase::getSFHServers(void) {
  return &_sfHServers;
}

//! Get the MultiDisplayWindow::_sfVServers field.
inline SFUInt32* MultiDisplayWindowBase::getSFVServers(void) {
  return &_sfVServers;
}

//! Get the MultiDisplayWindow::_sfManageClientViewports field.
inline SFBool* MultiDisplayWindowBase::getSFManageClientViewports(void) {
  return &_sfManageClientViewports;
}

//! Get the MultiDisplayWindow::_sfXOverlap field.
inline SFInt32* MultiDisplayWindowBase::getSFXOverlap(void) {
  return &_sfXOverlap;
}

//! Get the MultiDisplayWindow::_sfYOverlap field.
inline SFInt32* MultiDisplayWindowBase::getSFYOverlap(void) {
  return &_sfYOverlap;
}

//! Get the value of the MultiDisplayWindow::_sfHServers field.
inline UInt32& MultiDisplayWindowBase::getHServers(void) {
  return _sfHServers.getValue();
}

//! Get the value of the MultiDisplayWindow::_sfHServers field.
inline const UInt32& MultiDisplayWindowBase::getHServers(void) const {
  return _sfHServers.getValue();
}

//! Set the value of the MultiDisplayWindow::_sfHServers field.
inline void MultiDisplayWindowBase::setHServers(const UInt32& value) {
  _sfHServers.setValue(value);
}

//! Get the value of the MultiDisplayWindow::_sfVServers field.
inline UInt32& MultiDisplayWindowBase::getVServers(void) {
  return _sfVServers.getValue();
}

//! Get the value of the MultiDisplayWindow::_sfVServers field.
inline const UInt32& MultiDisplayWindowBase::getVServers(void) const {
  return _sfVServers.getValue();
}

//! Set the value of the MultiDisplayWindow::_sfVServers field.
inline void MultiDisplayWindowBase::setVServers(const UInt32& value) {
  _sfVServers.setValue(value);
}

//! Get the value of the MultiDisplayWindow::_sfManageClientViewports field.
inline bool& MultiDisplayWindowBase::getManageClientViewports(void) {
  return _sfManageClientViewports.getValue();
}

//! Get the value of the MultiDisplayWindow::_sfManageClientViewports field.
inline const bool& MultiDisplayWindowBase::getManageClientViewports(void) const {
  return _sfManageClientViewports.getValue();
}

//! Set the value of the MultiDisplayWindow::_sfManageClientViewports field.
inline void MultiDisplayWindowBase::setManageClientViewports(const bool& value) {
  _sfManageClientViewports.setValue(value);
}

//! Get the value of the MultiDisplayWindow::_sfXOverlap field.
inline Int32& MultiDisplayWindowBase::getXOverlap(void) {
  return _sfXOverlap.getValue();
}

//! Get the value of the MultiDisplayWindow::_sfXOverlap field.
inline const Int32& MultiDisplayWindowBase::getXOverlap(void) const {
  return _sfXOverlap.getValue();
}

//! Set the value of the MultiDisplayWindow::_sfXOverlap field.
inline void MultiDisplayWindowBase::setXOverlap(const Int32& value) {
  _sfXOverlap.setValue(value);
}

//! Get the value of the MultiDisplayWindow::_sfYOverlap field.
inline Int32& MultiDisplayWindowBase::getYOverlap(void) {
  return _sfYOverlap.getValue();
}

//! Get the value of the MultiDisplayWindow::_sfYOverlap field.
inline const Int32& MultiDisplayWindowBase::getYOverlap(void) const {
  return _sfYOverlap.getValue();
}

//! Set the value of the MultiDisplayWindow::_sfYOverlap field.
inline void MultiDisplayWindowBase::setYOverlap(const Int32& value) {
  _sfYOverlap.setValue(value);
}

OSG_END_NAMESPACE

#define OSGMULTIDISPLAYWINDOWBASE_INLINE_CVSID                                                     \
  "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"
