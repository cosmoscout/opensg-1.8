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
 **     class SharedFontStyleWrapper!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#define OSG_COMPILESHAREDFONTSTYLEWRAPPERINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGSharedFontStyleWrapperBase.h"
#include "OSGSharedFontStyleWrapper.h"

OSG_USING_NAMESPACE

const OSG::BitVector SharedFontStyleWrapperBase::FStyleContainerFieldMask =
    (TypeTraits<BitVector>::One << SharedFontStyleWrapperBase::FStyleContainerFieldId);

const OSG::BitVector SharedFontStyleWrapperBase::MTInfluenceMask =
    (Inherited::MTInfluenceMask) | (static_cast<BitVector>(0x0) << Inherited::NextFieldId);

// Field descriptions

/*! \var SharedFontStylePtr SharedFontStyleWrapperBase::_sfFStyleContainer
    Contains a font.
*/

//! SharedFontStyleWrapper description

FieldDescription* SharedFontStyleWrapperBase::_desc[] = {
    new FieldDescription(SFSharedFontStylePtr::getClassType(), "FStyleContainer",
        FStyleContainerFieldId, FStyleContainerFieldMask, false,
        (FieldAccessMethod)&SharedFontStyleWrapperBase::getSFFStyleContainer)};

FieldContainerType SharedFontStyleWrapperBase::_type("SharedFontStyleWrapper", "FieldContainer",
    NULL, (PrototypeCreateF)&SharedFontStyleWrapperBase::createEmpty,
    SharedFontStyleWrapper::initMethod, _desc, sizeof(_desc));

// OSG_FIELD_CONTAINER_DEF(SharedFontStyleWrapperBase, SharedFontStyleWrapperPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType& SharedFontStyleWrapperBase::getType(void) {
  return _type;
}

const FieldContainerType& SharedFontStyleWrapperBase::getType(void) const {
  return _type;
}

FieldContainerPtr SharedFontStyleWrapperBase::shallowCopy(void) const {
  SharedFontStyleWrapperPtr returnValue;

  newPtr(returnValue, dynamic_cast<const SharedFontStyleWrapper*>(this));

  return returnValue;
}

UInt32 SharedFontStyleWrapperBase::getContainerSize(void) const {
  return sizeof(SharedFontStyleWrapper);
}

#if !defined(OSG_FIXED_MFIELDSYNC)
void SharedFontStyleWrapperBase::executeSync(FieldContainer& other, const BitVector& whichField) {
  this->executeSyncImpl((SharedFontStyleWrapperBase*)&other, whichField);
}
#else
void SharedFontStyleWrapperBase::executeSync(
    FieldContainer& other, const BitVector& whichField, const SyncInfo& sInfo) {
  this->executeSyncImpl((SharedFontStyleWrapperBase*)&other, whichField, sInfo);
}
void SharedFontStyleWrapperBase::execBeginEdit(
    const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize) {
  this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void SharedFontStyleWrapperBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect) {
  Inherited::onDestroyAspect(uiId, uiAspect);
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning(disable : 383)
#endif

SharedFontStyleWrapperBase::SharedFontStyleWrapperBase(void)
    : _sfFStyleContainer()
    , Inherited() {
}

#ifdef OSG_WIN32_ICL
#pragma warning(default : 383)
#endif

SharedFontStyleWrapperBase::SharedFontStyleWrapperBase(const SharedFontStyleWrapperBase& source)
    : _sfFStyleContainer(source._sfFStyleContainer)
    , Inherited(source) {
}

/*-------------------------- destructors ----------------------------------*/

SharedFontStyleWrapperBase::~SharedFontStyleWrapperBase(void) {
}

/*------------------------------ access -----------------------------------*/

UInt32 SharedFontStyleWrapperBase::getBinSize(const BitVector& whichField) {
  UInt32 returnValue = Inherited::getBinSize(whichField);

  if (FieldBits::NoField != (FStyleContainerFieldMask & whichField)) {
    returnValue += _sfFStyleContainer.getBinSize();
  }

  return returnValue;
}

void SharedFontStyleWrapperBase::copyToBin(BinaryDataHandler& pMem, const BitVector& whichField) {
  Inherited::copyToBin(pMem, whichField);

  if (FieldBits::NoField != (FStyleContainerFieldMask & whichField)) {
    _sfFStyleContainer.copyToBin(pMem);
  }
}

void SharedFontStyleWrapperBase::copyFromBin(BinaryDataHandler& pMem, const BitVector& whichField) {
  Inherited::copyFromBin(pMem, whichField);

  if (FieldBits::NoField != (FStyleContainerFieldMask & whichField)) {
    _sfFStyleContainer.copyFromBin(pMem);
  }
}

#if !defined(OSG_FIXED_MFIELDSYNC)
void SharedFontStyleWrapperBase::executeSyncImpl(
    SharedFontStyleWrapperBase* pOther, const BitVector& whichField) {

  Inherited::executeSyncImpl(pOther, whichField);

  if (FieldBits::NoField != (FStyleContainerFieldMask & whichField))
    _sfFStyleContainer.syncWith(pOther->_sfFStyleContainer);
}
#else
void SharedFontStyleWrapperBase::executeSyncImpl(
    SharedFontStyleWrapperBase* pOther, const BitVector& whichField, const SyncInfo& sInfo) {

  Inherited::executeSyncImpl(pOther, whichField, sInfo);

  if (FieldBits::NoField != (FStyleContainerFieldMask & whichField))
    _sfFStyleContainer.syncWith(pOther->_sfFStyleContainer);
}

void SharedFontStyleWrapperBase::execBeginEditImpl(
    const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize) {
  Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}
#endif

#include <OSGSFieldTypeDef.inl>
#include <OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<SharedFontStyleWrapperPtr>::_type(
    "SharedFontStyleWrapperPtr", "FieldContainerPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(SharedFontStyleWrapperPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(SharedFontStyleWrapperPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);

OSG_END_NAMESPACE
