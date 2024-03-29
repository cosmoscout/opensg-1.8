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
 **     class ChunkMaterial!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#define OSG_COMPILECHUNKMATERIALINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGChunkMaterialBase.h"
#include "OSGChunkMaterial.h"

OSG_BEGIN_NAMESPACE

const OSG::BitVector ChunkMaterialBase::ChunksFieldMask =
    (TypeTraits<BitVector>::One << ChunkMaterialBase::ChunksFieldId);

const OSG::BitVector ChunkMaterialBase::SlotsFieldMask =
    (TypeTraits<BitVector>::One << ChunkMaterialBase::SlotsFieldId);

const OSG::BitVector ChunkMaterialBase::MTInfluenceMask =
    (Inherited::MTInfluenceMask) | (static_cast<BitVector>(0x0) << Inherited::NextFieldId);

// Field descriptions

/*! \var StateChunkPtr   ChunkMaterialBase::_mfChunks

*/
/*! \var Int32           ChunkMaterialBase::_mfSlots

*/

//! ChunkMaterial description

FieldDescription* ChunkMaterialBase::_desc[] = {
    new FieldDescription(MFStateChunkPtr::getClassType(), "chunks", ChunksFieldId, ChunksFieldMask,
        false, (FieldAccessMethod)&ChunkMaterialBase::getMFChunks),
    new FieldDescription(MFInt32::getClassType(), "slots", SlotsFieldId, SlotsFieldMask, false,
        (FieldAccessMethod)&ChunkMaterialBase::getMFSlots)};

FieldContainerType ChunkMaterialBase::_type("ChunkMaterial", "Material", NULL,
    (PrototypeCreateF)&ChunkMaterialBase::createEmpty, ChunkMaterial::initMethod, _desc,
    sizeof(_desc));

// OSG_FIELD_CONTAINER_DEF(ChunkMaterialBase, ChunkMaterialPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType& ChunkMaterialBase::getType(void) {
  return _type;
}

const FieldContainerType& ChunkMaterialBase::getType(void) const {
  return _type;
}

FieldContainerPtr ChunkMaterialBase::shallowCopy(void) const {
  ChunkMaterialPtr returnValue;

  newPtr(returnValue, dynamic_cast<const ChunkMaterial*>(this));

  return returnValue;
}

UInt32 ChunkMaterialBase::getContainerSize(void) const {
  return sizeof(ChunkMaterial);
}

#if !defined(OSG_FIXED_MFIELDSYNC)
void ChunkMaterialBase::executeSync(FieldContainer& other, const BitVector& whichField) {
  this->executeSyncImpl((ChunkMaterialBase*)&other, whichField);
}
#else
void ChunkMaterialBase::executeSync(
    FieldContainer& other, const BitVector& whichField, const SyncInfo& sInfo) {
  this->executeSyncImpl((ChunkMaterialBase*)&other, whichField, sInfo);
}
void ChunkMaterialBase::execBeginEdit(
    const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize) {
  this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void ChunkMaterialBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect) {
  Inherited::onDestroyAspect(uiId, uiAspect);

  _mfChunks.terminateShare(uiAspect, this->getContainerSize());
  _mfSlots.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning(disable : 383)
#endif

ChunkMaterialBase::ChunkMaterialBase(void)
    : _mfChunks()
    , _mfSlots()
    , Inherited() {
}

#ifdef OSG_WIN32_ICL
#pragma warning(default : 383)
#endif

ChunkMaterialBase::ChunkMaterialBase(const ChunkMaterialBase& source)
    : _mfChunks(source._mfChunks)
    , _mfSlots(source._mfSlots)
    , Inherited(source) {
}

/*-------------------------- destructors ----------------------------------*/

ChunkMaterialBase::~ChunkMaterialBase(void) {
}

/*------------------------------ access -----------------------------------*/

UInt32 ChunkMaterialBase::getBinSize(const BitVector& whichField) {
  UInt32 returnValue = Inherited::getBinSize(whichField);

  if (FieldBits::NoField != (ChunksFieldMask & whichField)) {
    returnValue += _mfChunks.getBinSize();
  }

  if (FieldBits::NoField != (SlotsFieldMask & whichField)) {
    returnValue += _mfSlots.getBinSize();
  }

  return returnValue;
}

void ChunkMaterialBase::copyToBin(BinaryDataHandler& pMem, const BitVector& whichField) {
  Inherited::copyToBin(pMem, whichField);

  if (FieldBits::NoField != (ChunksFieldMask & whichField)) {
    _mfChunks.copyToBin(pMem);
  }

  if (FieldBits::NoField != (SlotsFieldMask & whichField)) {
    _mfSlots.copyToBin(pMem);
  }
}

void ChunkMaterialBase::copyFromBin(BinaryDataHandler& pMem, const BitVector& whichField) {
  Inherited::copyFromBin(pMem, whichField);

  if (FieldBits::NoField != (ChunksFieldMask & whichField)) {
    _mfChunks.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (SlotsFieldMask & whichField)) {
    _mfSlots.copyFromBin(pMem);
  }
}

#if !defined(OSG_FIXED_MFIELDSYNC)
void ChunkMaterialBase::executeSyncImpl(ChunkMaterialBase* pOther, const BitVector& whichField) {

  Inherited::executeSyncImpl(pOther, whichField);

  if (FieldBits::NoField != (ChunksFieldMask & whichField))
    _mfChunks.syncWith(pOther->_mfChunks);

  if (FieldBits::NoField != (SlotsFieldMask & whichField))
    _mfSlots.syncWith(pOther->_mfSlots);
}
#else
void ChunkMaterialBase::executeSyncImpl(
    ChunkMaterialBase* pOther, const BitVector& whichField, const SyncInfo& sInfo) {

  Inherited::executeSyncImpl(pOther, whichField, sInfo);

  if (FieldBits::NoField != (ChunksFieldMask & whichField))
    _mfChunks.syncWith(pOther->_mfChunks, sInfo);

  if (FieldBits::NoField != (SlotsFieldMask & whichField))
    _mfSlots.syncWith(pOther->_mfSlots, sInfo);
}

void ChunkMaterialBase::execBeginEditImpl(
    const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize) {
  Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

  if (FieldBits::NoField != (ChunksFieldMask & whichField))
    _mfChunks.beginEdit(uiAspect, uiContainerSize);

  if (FieldBits::NoField != (SlotsFieldMask & whichField))
    _mfSlots.beginEdit(uiAspect, uiContainerSize);
}
#endif

OSG_END_NAMESPACE

#include <OSGSFieldTypeDef.inl>
#include <OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<ChunkMaterialPtr>::_type("ChunkMaterialPtr", "MaterialPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(ChunkMaterialPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(ChunkMaterialPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);

OSG_END_NAMESPACE
