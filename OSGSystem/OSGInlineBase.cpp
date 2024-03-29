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
 **     class Inline!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#define OSG_COMPILEINLINEINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGInlineBase.h"
#include "OSGInline.h"

OSG_USING_NAMESPACE

const OSG::BitVector InlineBase::UrlFieldMask =
    (TypeTraits<BitVector>::One << InlineBase::UrlFieldId);

const OSG::BitVector InlineBase::LoadedFieldMask =
    (TypeTraits<BitVector>::One << InlineBase::LoadedFieldId);

const OSG::BitVector InlineBase::MTInfluenceMask =
    (Inherited::MTInfluenceMask) | (static_cast<BitVector>(0x0) << Inherited::NextFieldId);

// Field descriptions

/*! \var std::string     InlineBase::_mfUrl

*/
/*! \var bool            InlineBase::_sfLoaded

*/

//! Inline description

FieldDescription* InlineBase::_desc[] = {
    new FieldDescription(MFString::getClassType(), "url", UrlFieldId, UrlFieldMask, true,
        (FieldAccessMethod)&InlineBase::getMFUrl),
    new FieldDescription(SFBool::getClassType(), "loaded", LoadedFieldId, LoadedFieldMask, true,
        (FieldAccessMethod)&InlineBase::getSFLoaded)};

FieldContainerType InlineBase::_type("Inline", "NodeCore", NULL,
    (PrototypeCreateF)&InlineBase::createEmpty, Inline::initMethod, _desc, sizeof(_desc));

// OSG_FIELD_CONTAINER_DEF(InlineBase, InlinePtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType& InlineBase::getType(void) {
  return _type;
}

const FieldContainerType& InlineBase::getType(void) const {
  return _type;
}

FieldContainerPtr InlineBase::shallowCopy(void) const {
  InlinePtr returnValue;

  newPtr(returnValue, dynamic_cast<const Inline*>(this));

  return returnValue;
}

UInt32 InlineBase::getContainerSize(void) const {
  return sizeof(Inline);
}

#if !defined(OSG_FIXED_MFIELDSYNC)
void InlineBase::executeSync(FieldContainer& other, const BitVector& whichField) {
  this->executeSyncImpl((InlineBase*)&other, whichField);
}
#else
void InlineBase::executeSync(
    FieldContainer& other, const BitVector& whichField, const SyncInfo& sInfo) {
  this->executeSyncImpl((InlineBase*)&other, whichField, sInfo);
}
void InlineBase::execBeginEdit(
    const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize) {
  this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void InlineBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect) {
  Inherited::onDestroyAspect(uiId, uiAspect);

  _mfUrl.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning(disable : 383)
#endif

InlineBase::InlineBase(void)
    : _mfUrl()
    , _sfLoaded(bool(true))
    , Inherited() {
}

#ifdef OSG_WIN32_ICL
#pragma warning(default : 383)
#endif

InlineBase::InlineBase(const InlineBase& source)
    : _mfUrl(source._mfUrl)
    , _sfLoaded(source._sfLoaded)
    , Inherited(source) {
}

/*-------------------------- destructors ----------------------------------*/

InlineBase::~InlineBase(void) {
}

/*------------------------------ access -----------------------------------*/

UInt32 InlineBase::getBinSize(const BitVector& whichField) {
  UInt32 returnValue = Inherited::getBinSize(whichField);

  if (FieldBits::NoField != (UrlFieldMask & whichField)) {
    returnValue += _mfUrl.getBinSize();
  }

  if (FieldBits::NoField != (LoadedFieldMask & whichField)) {
    returnValue += _sfLoaded.getBinSize();
  }

  return returnValue;
}

void InlineBase::copyToBin(BinaryDataHandler& pMem, const BitVector& whichField) {
  Inherited::copyToBin(pMem, whichField);

  if (FieldBits::NoField != (UrlFieldMask & whichField)) {
    _mfUrl.copyToBin(pMem);
  }

  if (FieldBits::NoField != (LoadedFieldMask & whichField)) {
    _sfLoaded.copyToBin(pMem);
  }
}

void InlineBase::copyFromBin(BinaryDataHandler& pMem, const BitVector& whichField) {
  Inherited::copyFromBin(pMem, whichField);

  if (FieldBits::NoField != (UrlFieldMask & whichField)) {
    _mfUrl.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (LoadedFieldMask & whichField)) {
    _sfLoaded.copyFromBin(pMem);
  }
}

#if !defined(OSG_FIXED_MFIELDSYNC)
void InlineBase::executeSyncImpl(InlineBase* pOther, const BitVector& whichField) {

  Inherited::executeSyncImpl(pOther, whichField);

  if (FieldBits::NoField != (UrlFieldMask & whichField))
    _mfUrl.syncWith(pOther->_mfUrl);

  if (FieldBits::NoField != (LoadedFieldMask & whichField))
    _sfLoaded.syncWith(pOther->_sfLoaded);
}
#else
void InlineBase::executeSyncImpl(
    InlineBase* pOther, const BitVector& whichField, const SyncInfo& sInfo) {

  Inherited::executeSyncImpl(pOther, whichField, sInfo);

  if (FieldBits::NoField != (LoadedFieldMask & whichField))
    _sfLoaded.syncWith(pOther->_sfLoaded);

  if (FieldBits::NoField != (UrlFieldMask & whichField))
    _mfUrl.syncWith(pOther->_mfUrl, sInfo);
}

void InlineBase::execBeginEditImpl(
    const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize) {
  Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

  if (FieldBits::NoField != (UrlFieldMask & whichField))
    _mfUrl.beginEdit(uiAspect, uiContainerSize);
}
#endif

#include <OSGSFieldTypeDef.inl>
#include <OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<InlinePtr>::_type("InlinePtr", "NodeCorePtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(InlinePtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(InlinePtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);

OSG_END_NAMESPACE
