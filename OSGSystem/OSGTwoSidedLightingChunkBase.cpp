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
 **     class TwoSidedLightingChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#define OSG_COMPILETWOSIDEDLIGHTINGCHUNKINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGTwoSidedLightingChunkBase.h"
#include "OSGTwoSidedLightingChunk.h"

OSG_USING_NAMESPACE

const OSG::BitVector TwoSidedLightingChunkBase::MTInfluenceMask =
    (Inherited::MTInfluenceMask) | (static_cast<BitVector>(0x0) << Inherited::NextFieldId);

FieldContainerType TwoSidedLightingChunkBase::_type("TwoSidedLightingChunk", "StateChunk", NULL,
    (PrototypeCreateF)&TwoSidedLightingChunkBase::createEmpty, TwoSidedLightingChunk::initMethod,
    NULL, 0);

// OSG_FIELD_CONTAINER_DEF(TwoSidedLightingChunkBase, TwoSidedLightingChunkPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType& TwoSidedLightingChunkBase::getType(void) {
  return _type;
}

const FieldContainerType& TwoSidedLightingChunkBase::getType(void) const {
  return _type;
}

FieldContainerPtr TwoSidedLightingChunkBase::shallowCopy(void) const {
  TwoSidedLightingChunkPtr returnValue;

  newPtr(returnValue, dynamic_cast<const TwoSidedLightingChunk*>(this));

  return returnValue;
}

UInt32 TwoSidedLightingChunkBase::getContainerSize(void) const {
  return sizeof(TwoSidedLightingChunk);
}

#if !defined(OSG_FIXED_MFIELDSYNC)
void TwoSidedLightingChunkBase::executeSync(FieldContainer& other, const BitVector& whichField) {
  this->executeSyncImpl((TwoSidedLightingChunkBase*)&other, whichField);
}
#else
void TwoSidedLightingChunkBase::executeSync(
    FieldContainer& other, const BitVector& whichField, const SyncInfo& sInfo) {
  this->executeSyncImpl((TwoSidedLightingChunkBase*)&other, whichField, sInfo);
}
void TwoSidedLightingChunkBase::execBeginEdit(
    const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize) {
  this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void TwoSidedLightingChunkBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect) {
  Inherited::onDestroyAspect(uiId, uiAspect);
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning(disable : 383)
#endif

TwoSidedLightingChunkBase::TwoSidedLightingChunkBase(void)
    : Inherited() {
}

#ifdef OSG_WIN32_ICL
#pragma warning(default : 383)
#endif

TwoSidedLightingChunkBase::TwoSidedLightingChunkBase(const TwoSidedLightingChunkBase& source)
    : Inherited(source) {
}

/*-------------------------- destructors ----------------------------------*/

TwoSidedLightingChunkBase::~TwoSidedLightingChunkBase(void) {
}

/*------------------------------ access -----------------------------------*/

UInt32 TwoSidedLightingChunkBase::getBinSize(const BitVector& whichField) {
  UInt32 returnValue = Inherited::getBinSize(whichField);

  return returnValue;
}

void TwoSidedLightingChunkBase::copyToBin(BinaryDataHandler& pMem, const BitVector& whichField) {
  Inherited::copyToBin(pMem, whichField);
}

void TwoSidedLightingChunkBase::copyFromBin(BinaryDataHandler& pMem, const BitVector& whichField) {
  Inherited::copyFromBin(pMem, whichField);
}

#if !defined(OSG_FIXED_MFIELDSYNC)
void TwoSidedLightingChunkBase::executeSyncImpl(
    TwoSidedLightingChunkBase* pOther, const BitVector& whichField) {

  Inherited::executeSyncImpl(pOther, whichField);
}
#else
void TwoSidedLightingChunkBase::executeSyncImpl(
    TwoSidedLightingChunkBase* pOther, const BitVector& whichField, const SyncInfo& sInfo) {

  Inherited::executeSyncImpl(pOther, whichField, sInfo);
}

void TwoSidedLightingChunkBase::execBeginEditImpl(
    const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize) {
  Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}
#endif

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<TwoSidedLightingChunkPtr>::_type(
    "TwoSidedLightingChunkPtr", "StateChunkPtr");
#endif

OSG_END_NAMESPACE
