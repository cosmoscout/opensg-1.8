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
 **     class ProxyGroup!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE

//! access the type of the class
inline OSG::FieldContainerType& ProxyGroupBase::getClassType(void) {
  return _type;
}

//! access the numerical type of the class
inline OSG::UInt32 ProxyGroupBase::getClassTypeId(void) {
  return _type.getId();
}

//! create a new instance of the class
inline ProxyGroupPtr ProxyGroupBase::create(void) {
  ProxyGroupPtr fc;

  if (getClassType().getPrototype() != OSG::NullFC) {
    fc = ProxyGroupPtr::dcast(getClassType().getPrototype()->shallowCopy());
  }

  return fc;
}

//! create an empty new instance of the class, do not copy the prototype
inline ProxyGroupPtr ProxyGroupBase::createEmpty(void) {
  ProxyGroupPtr returnValue;

  newPtr(returnValue);

  return returnValue;
}

/*------------------------------ get -----------------------------------*/

//! Get the ProxyGroup::_sfEnabled field.
inline SFBool* ProxyGroupBase::getSFEnabled(void) {
  return &_sfEnabled;
}

//! Get the ProxyGroup::_sfUrl field.
inline SFString* ProxyGroupBase::getSFUrl(void) {
  return &_sfUrl;
}

//! Get the ProxyGroup::_sfRoot field.
inline SFNodePtr* ProxyGroupBase::getSFRoot(void) {
  return &_sfRoot;
}

//! Get the ProxyGroup::_sfState field.
inline SFUInt32* ProxyGroupBase::getSFState(void) {
  return &_sfState;
}

//! Get the ProxyGroup::_sfConcurrentLoad field.
inline SFBool* ProxyGroupBase::getSFConcurrentLoad(void) {
  return &_sfConcurrentLoad;
}

//! Get the ProxyGroup::_sfVolume field.
inline SFDynamicVolume* ProxyGroupBase::getSFVolume(void) {
  return &_sfVolume;
}

//! Get the ProxyGroup::_sfIndices field.
inline SFUInt32* ProxyGroupBase::getSFIndices(void) {
  return &_sfIndices;
}

//! Get the ProxyGroup::_sfTriangles field.
inline SFUInt32* ProxyGroupBase::getSFTriangles(void) {
  return &_sfTriangles;
}

//! Get the ProxyGroup::_sfPositions field.
inline SFUInt32* ProxyGroupBase::getSFPositions(void) {
  return &_sfPositions;
}

//! Get the ProxyGroup::_sfGeometries field.
inline SFUInt32* ProxyGroupBase::getSFGeometries(void) {
  return &_sfGeometries;
}

//! Get the ProxyGroup::_sfAbsoluteUrl field.
inline SFString* ProxyGroupBase::getSFAbsoluteUrl(void) {
  return &_sfAbsoluteUrl;
}

//! Get the ProxyGroup::_mfInline field.
inline MFUInt8* ProxyGroupBase::getMFInline(void) {
  return &_mfInline;
}

//! Get the value of the ProxyGroup::_sfEnabled field.
inline bool& ProxyGroupBase::getEnabled(void) {
  return _sfEnabled.getValue();
}

//! Get the value of the ProxyGroup::_sfEnabled field.
inline const bool& ProxyGroupBase::getEnabled(void) const {
  return _sfEnabled.getValue();
}

//! Set the value of the ProxyGroup::_sfEnabled field.
inline void ProxyGroupBase::setEnabled(const bool& value) {
  _sfEnabled.setValue(value);
}

//! Get the value of the ProxyGroup::_sfUrl field.
inline std::string& ProxyGroupBase::getUrl(void) {
  return _sfUrl.getValue();
}

//! Get the value of the ProxyGroup::_sfUrl field.
inline const std::string& ProxyGroupBase::getUrl(void) const {
  return _sfUrl.getValue();
}

//! Set the value of the ProxyGroup::_sfUrl field.
inline void ProxyGroupBase::setUrl(const std::string& value) {
  _sfUrl.setValue(value);
}

//! Get the value of the ProxyGroup::_sfRoot field.
inline NodePtr& ProxyGroupBase::getRoot(void) {
  return _sfRoot.getValue();
}

//! Get the value of the ProxyGroup::_sfRoot field.
inline const NodePtr& ProxyGroupBase::getRoot(void) const {
  return _sfRoot.getValue();
}

//! Set the value of the ProxyGroup::_sfRoot field.
inline void ProxyGroupBase::setRoot(const NodePtr& value) {
  _sfRoot.setValue(value);
}

//! Get the value of the ProxyGroup::_sfState field.
inline UInt32& ProxyGroupBase::getState(void) {
  return _sfState.getValue();
}

//! Get the value of the ProxyGroup::_sfState field.
inline const UInt32& ProxyGroupBase::getState(void) const {
  return _sfState.getValue();
}

//! Set the value of the ProxyGroup::_sfState field.
inline void ProxyGroupBase::setState(const UInt32& value) {
  _sfState.setValue(value);
}

//! Get the value of the ProxyGroup::_sfConcurrentLoad field.
inline bool& ProxyGroupBase::getConcurrentLoad(void) {
  return _sfConcurrentLoad.getValue();
}

//! Get the value of the ProxyGroup::_sfConcurrentLoad field.
inline const bool& ProxyGroupBase::getConcurrentLoad(void) const {
  return _sfConcurrentLoad.getValue();
}

//! Set the value of the ProxyGroup::_sfConcurrentLoad field.
inline void ProxyGroupBase::setConcurrentLoad(const bool& value) {
  _sfConcurrentLoad.setValue(value);
}

//! Get the value of the ProxyGroup::_sfVolume field.
inline DynamicVolume& ProxyGroupBase::getVolume(void) {
  return _sfVolume.getValue();
}

//! Get the value of the ProxyGroup::_sfVolume field.
inline const DynamicVolume& ProxyGroupBase::getVolume(void) const {
  return _sfVolume.getValue();
}

//! Set the value of the ProxyGroup::_sfVolume field.
inline void ProxyGroupBase::setVolume(const DynamicVolume& value) {
  _sfVolume.setValue(value);
}

//! Get the value of the ProxyGroup::_sfIndices field.
inline UInt32& ProxyGroupBase::getIndices(void) {
  return _sfIndices.getValue();
}

//! Get the value of the ProxyGroup::_sfIndices field.
inline const UInt32& ProxyGroupBase::getIndices(void) const {
  return _sfIndices.getValue();
}

//! Set the value of the ProxyGroup::_sfIndices field.
inline void ProxyGroupBase::setIndices(const UInt32& value) {
  _sfIndices.setValue(value);
}

//! Get the value of the ProxyGroup::_sfTriangles field.
inline UInt32& ProxyGroupBase::getTriangles(void) {
  return _sfTriangles.getValue();
}

//! Get the value of the ProxyGroup::_sfTriangles field.
inline const UInt32& ProxyGroupBase::getTriangles(void) const {
  return _sfTriangles.getValue();
}

//! Set the value of the ProxyGroup::_sfTriangles field.
inline void ProxyGroupBase::setTriangles(const UInt32& value) {
  _sfTriangles.setValue(value);
}

//! Get the value of the ProxyGroup::_sfPositions field.
inline UInt32& ProxyGroupBase::getPositions(void) {
  return _sfPositions.getValue();
}

//! Get the value of the ProxyGroup::_sfPositions field.
inline const UInt32& ProxyGroupBase::getPositions(void) const {
  return _sfPositions.getValue();
}

//! Set the value of the ProxyGroup::_sfPositions field.
inline void ProxyGroupBase::setPositions(const UInt32& value) {
  _sfPositions.setValue(value);
}

//! Get the value of the ProxyGroup::_sfGeometries field.
inline UInt32& ProxyGroupBase::getGeometries(void) {
  return _sfGeometries.getValue();
}

//! Get the value of the ProxyGroup::_sfGeometries field.
inline const UInt32& ProxyGroupBase::getGeometries(void) const {
  return _sfGeometries.getValue();
}

//! Set the value of the ProxyGroup::_sfGeometries field.
inline void ProxyGroupBase::setGeometries(const UInt32& value) {
  _sfGeometries.setValue(value);
}

//! Get the value of the ProxyGroup::_sfAbsoluteUrl field.
inline std::string& ProxyGroupBase::getAbsoluteUrl(void) {
  return _sfAbsoluteUrl.getValue();
}

//! Get the value of the ProxyGroup::_sfAbsoluteUrl field.
inline const std::string& ProxyGroupBase::getAbsoluteUrl(void) const {
  return _sfAbsoluteUrl.getValue();
}

//! Set the value of the ProxyGroup::_sfAbsoluteUrl field.
inline void ProxyGroupBase::setAbsoluteUrl(const std::string& value) {
  _sfAbsoluteUrl.setValue(value);
}

//! Get the value of the \a index element the ProxyGroup::_mfInline field.
inline UInt8& ProxyGroupBase::getInline(const UInt32 index) {
  return _mfInline[index];
}

//! Get the ProxyGroup::_mfInline field.
inline MFUInt8& ProxyGroupBase::getInline(void) {
  return _mfInline;
}

//! Get the ProxyGroup::_mfInline field.
inline const MFUInt8& ProxyGroupBase::getInline(void) const {
  return _mfInline;
}

OSG_END_NAMESPACE

#define OSGPROXYGROUPBASE_INLINE_CVSID                                                             \
  "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"
