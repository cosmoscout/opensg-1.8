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

#define OSG_COMPILESORTLASTWINDOWINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGSortLastWindowBase.h"
#include "OSGSortLastWindow.h"

OSG_USING_NAMESPACE

const OSG::BitVector SortLastWindowBase::GroupNodesFieldMask =
    (TypeTraits<BitVector>::One << SortLastWindowBase::GroupNodesFieldId);

const OSG::BitVector SortLastWindowBase::GroupLengthsFieldMask =
    (TypeTraits<BitVector>::One << SortLastWindowBase::GroupLengthsFieldId);

const OSG::BitVector SortLastWindowBase::GroupsChangedFieldMask =
    (TypeTraits<BitVector>::One << SortLastWindowBase::GroupsChangedFieldId);

const OSG::BitVector SortLastWindowBase::MTInfluenceMask =
    (Inherited::MTInfluenceMask) | (static_cast<BitVector>(0x0) << Inherited::NextFieldId);

// Field descriptions

/*! \var NodePtr         SortLastWindowBase::_mfGroupNodes

*/
/*! \var UInt32          SortLastWindowBase::_mfGroupLengths

*/
/*! \var bool            SortLastWindowBase::_sfGroupsChanged

*/

//! SortLastWindow description

FieldDescription* SortLastWindowBase::_desc[] = {
    new FieldDescription(MFNodePtr::getClassType(), "groupNodes", GroupNodesFieldId,
        GroupNodesFieldMask, false, (FieldAccessMethod)&SortLastWindowBase::getMFGroupNodes),
    new FieldDescription(MFUInt32::getClassType(), "groupLengths", GroupLengthsFieldId,
        GroupLengthsFieldMask, false, (FieldAccessMethod)&SortLastWindowBase::getMFGroupLengths),
    new FieldDescription(SFBool::getClassType(), "groupsChanged", GroupsChangedFieldId,
        GroupsChangedFieldMask, true, (FieldAccessMethod)&SortLastWindowBase::getSFGroupsChanged)};

FieldContainerType SortLastWindowBase::_type("SortLastWindow", "ClusterWindow", NULL,
    (PrototypeCreateF)&SortLastWindowBase::createEmpty, SortLastWindow::initMethod, _desc,
    sizeof(_desc));

// OSG_FIELD_CONTAINER_DEF(SortLastWindowBase, SortLastWindowPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType& SortLastWindowBase::getType(void) {
  return _type;
}

const FieldContainerType& SortLastWindowBase::getType(void) const {
  return _type;
}

FieldContainerPtr SortLastWindowBase::shallowCopy(void) const {
  SortLastWindowPtr returnValue;

  newPtr(returnValue, dynamic_cast<const SortLastWindow*>(this));

  return returnValue;
}

UInt32 SortLastWindowBase::getContainerSize(void) const {
  return sizeof(SortLastWindow);
}

#if !defined(OSG_FIXED_MFIELDSYNC)
void SortLastWindowBase::executeSync(FieldContainer& other, const BitVector& whichField) {
  this->executeSyncImpl((SortLastWindowBase*)&other, whichField);
}
#else
void SortLastWindowBase::executeSync(
    FieldContainer& other, const BitVector& whichField, const SyncInfo& sInfo) {
  this->executeSyncImpl((SortLastWindowBase*)&other, whichField, sInfo);
}
void SortLastWindowBase::execBeginEdit(
    const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize) {
  this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void SortLastWindowBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect) {
  Inherited::onDestroyAspect(uiId, uiAspect);

  _mfGroupNodes.terminateShare(uiAspect, this->getContainerSize());
  _mfGroupLengths.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning(disable : 383)
#endif

SortLastWindowBase::SortLastWindowBase(void)
    : _mfGroupNodes()
    , _mfGroupLengths()
    , _sfGroupsChanged()
    , Inherited() {
}

#ifdef OSG_WIN32_ICL
#pragma warning(default : 383)
#endif

SortLastWindowBase::SortLastWindowBase(const SortLastWindowBase& source)
    : _mfGroupNodes(source._mfGroupNodes)
    , _mfGroupLengths(source._mfGroupLengths)
    , _sfGroupsChanged(source._sfGroupsChanged)
    , Inherited(source) {
}

/*-------------------------- destructors ----------------------------------*/

SortLastWindowBase::~SortLastWindowBase(void) {
}

/*------------------------------ access -----------------------------------*/

UInt32 SortLastWindowBase::getBinSize(const BitVector& whichField) {
  UInt32 returnValue = Inherited::getBinSize(whichField);

  if (FieldBits::NoField != (GroupNodesFieldMask & whichField)) {
    returnValue += _mfGroupNodes.getBinSize();
  }

  if (FieldBits::NoField != (GroupLengthsFieldMask & whichField)) {
    returnValue += _mfGroupLengths.getBinSize();
  }

  if (FieldBits::NoField != (GroupsChangedFieldMask & whichField)) {
    returnValue += _sfGroupsChanged.getBinSize();
  }

  return returnValue;
}

void SortLastWindowBase::copyToBin(BinaryDataHandler& pMem, const BitVector& whichField) {
  Inherited::copyToBin(pMem, whichField);

  if (FieldBits::NoField != (GroupNodesFieldMask & whichField)) {
    _mfGroupNodes.copyToBin(pMem);
  }

  if (FieldBits::NoField != (GroupLengthsFieldMask & whichField)) {
    _mfGroupLengths.copyToBin(pMem);
  }

  if (FieldBits::NoField != (GroupsChangedFieldMask & whichField)) {
    _sfGroupsChanged.copyToBin(pMem);
  }
}

void SortLastWindowBase::copyFromBin(BinaryDataHandler& pMem, const BitVector& whichField) {
  Inherited::copyFromBin(pMem, whichField);

  if (FieldBits::NoField != (GroupNodesFieldMask & whichField)) {
    _mfGroupNodes.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (GroupLengthsFieldMask & whichField)) {
    _mfGroupLengths.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (GroupsChangedFieldMask & whichField)) {
    _sfGroupsChanged.copyFromBin(pMem);
  }
}

#if !defined(OSG_FIXED_MFIELDSYNC)
void SortLastWindowBase::executeSyncImpl(SortLastWindowBase* pOther, const BitVector& whichField) {

  Inherited::executeSyncImpl(pOther, whichField);

  if (FieldBits::NoField != (GroupNodesFieldMask & whichField))
    _mfGroupNodes.syncWith(pOther->_mfGroupNodes);

  if (FieldBits::NoField != (GroupLengthsFieldMask & whichField))
    _mfGroupLengths.syncWith(pOther->_mfGroupLengths);

  if (FieldBits::NoField != (GroupsChangedFieldMask & whichField))
    _sfGroupsChanged.syncWith(pOther->_sfGroupsChanged);
}
#else
void SortLastWindowBase::executeSyncImpl(
    SortLastWindowBase* pOther, const BitVector& whichField, const SyncInfo& sInfo) {

  Inherited::executeSyncImpl(pOther, whichField, sInfo);

  if (FieldBits::NoField != (GroupsChangedFieldMask & whichField))
    _sfGroupsChanged.syncWith(pOther->_sfGroupsChanged);

  if (FieldBits::NoField != (GroupNodesFieldMask & whichField))
    _mfGroupNodes.syncWith(pOther->_mfGroupNodes, sInfo);

  if (FieldBits::NoField != (GroupLengthsFieldMask & whichField))
    _mfGroupLengths.syncWith(pOther->_mfGroupLengths, sInfo);
}

void SortLastWindowBase::execBeginEditImpl(
    const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize) {
  Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

  if (FieldBits::NoField != (GroupNodesFieldMask & whichField))
    _mfGroupNodes.beginEdit(uiAspect, uiContainerSize);

  if (FieldBits::NoField != (GroupLengthsFieldMask & whichField))
    _mfGroupLengths.beginEdit(uiAspect, uiContainerSize);
}
#endif

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<SortLastWindowPtr>::_type("SortLastWindowPtr", "ClusterWindowPtr");
#endif

OSG_END_NAMESPACE
