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
 **     class SHLParameterChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#define OSG_COMPILESHLPARAMETERCHUNKINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGSHLParameterChunkBase.h"
#include "OSGSHLParameterChunk.h"

OSG_USING_NAMESPACE

const OSG::BitVector SHLParameterChunkBase::SHLChunkFieldMask =
    (TypeTraits<BitVector>::One << SHLParameterChunkBase::SHLChunkFieldId);

const OSG::BitVector SHLParameterChunkBase::MTInfluenceMask =
    (Inherited::MTInfluenceMask) | (static_cast<BitVector>(0x0) << Inherited::NextFieldId);

// Field descriptions

/*! \var SHLChunkPtr     SHLParameterChunkBase::_sfSHLChunk

*/

//! SHLParameterChunk description

FieldDescription* SHLParameterChunkBase::_desc[] = {
    new FieldDescription(SFSHLChunkPtr::getClassType(), "SHLChunk", SHLChunkFieldId,
        SHLChunkFieldMask, false, (FieldAccessMethod)&SHLParameterChunkBase::getSFSHLChunk)};

FieldContainerType SHLParameterChunkBase::_type("SHLParameterChunk", "ShaderParameterChunk", NULL,
    (PrototypeCreateF)&SHLParameterChunkBase::createEmpty, SHLParameterChunk::initMethod, _desc,
    sizeof(_desc));

// OSG_FIELD_CONTAINER_DEF(SHLParameterChunkBase, SHLParameterChunkPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType& SHLParameterChunkBase::getType(void) {
  return _type;
}

const FieldContainerType& SHLParameterChunkBase::getType(void) const {
  return _type;
}

FieldContainerPtr SHLParameterChunkBase::shallowCopy(void) const {
  SHLParameterChunkPtr returnValue;

  newPtr(returnValue, dynamic_cast<const SHLParameterChunk*>(this));

  return returnValue;
}

UInt32 SHLParameterChunkBase::getContainerSize(void) const {
  return sizeof(SHLParameterChunk);
}

#if !defined(OSG_FIXED_MFIELDSYNC)
void SHLParameterChunkBase::executeSync(FieldContainer& other, const BitVector& whichField) {
  this->executeSyncImpl((SHLParameterChunkBase*)&other, whichField);
}
#else
void SHLParameterChunkBase::executeSync(
    FieldContainer& other, const BitVector& whichField, const SyncInfo& sInfo) {
  this->executeSyncImpl((SHLParameterChunkBase*)&other, whichField, sInfo);
}
void SHLParameterChunkBase::execBeginEdit(
    const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize) {
  this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void SHLParameterChunkBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect) {
  Inherited::onDestroyAspect(uiId, uiAspect);
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning(disable : 383)
#endif

SHLParameterChunkBase::SHLParameterChunkBase(void)
    : _sfSHLChunk(SHLChunkPtr(NullFC))
    , Inherited() {
}

#ifdef OSG_WIN32_ICL
#pragma warning(default : 383)
#endif

SHLParameterChunkBase::SHLParameterChunkBase(const SHLParameterChunkBase& source)
    : _sfSHLChunk(source._sfSHLChunk)
    , Inherited(source) {
}

/*-------------------------- destructors ----------------------------------*/

SHLParameterChunkBase::~SHLParameterChunkBase(void) {
}

/*------------------------------ access -----------------------------------*/

UInt32 SHLParameterChunkBase::getBinSize(const BitVector& whichField) {
  UInt32 returnValue = Inherited::getBinSize(whichField);

  if (FieldBits::NoField != (SHLChunkFieldMask & whichField)) {
    returnValue += _sfSHLChunk.getBinSize();
  }

  return returnValue;
}

void SHLParameterChunkBase::copyToBin(BinaryDataHandler& pMem, const BitVector& whichField) {
  Inherited::copyToBin(pMem, whichField);

  if (FieldBits::NoField != (SHLChunkFieldMask & whichField)) {
    _sfSHLChunk.copyToBin(pMem);
  }
}

void SHLParameterChunkBase::copyFromBin(BinaryDataHandler& pMem, const BitVector& whichField) {
  Inherited::copyFromBin(pMem, whichField);

  if (FieldBits::NoField != (SHLChunkFieldMask & whichField)) {
    _sfSHLChunk.copyFromBin(pMem);
  }
}

#if !defined(OSG_FIXED_MFIELDSYNC)
void SHLParameterChunkBase::executeSyncImpl(
    SHLParameterChunkBase* pOther, const BitVector& whichField) {

  Inherited::executeSyncImpl(pOther, whichField);

  if (FieldBits::NoField != (SHLChunkFieldMask & whichField))
    _sfSHLChunk.syncWith(pOther->_sfSHLChunk);
}
#else
void SHLParameterChunkBase::executeSyncImpl(
    SHLParameterChunkBase* pOther, const BitVector& whichField, const SyncInfo& sInfo) {

  Inherited::executeSyncImpl(pOther, whichField, sInfo);

  if (FieldBits::NoField != (SHLChunkFieldMask & whichField))
    _sfSHLChunk.syncWith(pOther->_sfSHLChunk);
}

void SHLParameterChunkBase::execBeginEditImpl(
    const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize) {
  Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}
#endif

#include <OSGSFieldTypeDef.inl>
#include <OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<SHLParameterChunkPtr>::_type(
    "SHLParameterChunkPtr", "ShaderParameterChunkPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(SHLParameterChunkPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(SHLParameterChunkPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);

OSG_END_NAMESPACE
