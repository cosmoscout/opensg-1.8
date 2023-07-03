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
 **     class CubeTextureChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#define OSG_COMPILECUBETEXTURECHUNKINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGCubeTextureChunkBase.h"
#include "OSGCubeTextureChunk.h"

OSG_USING_NAMESPACE

const OSG::BitVector CubeTextureChunkBase::PosZImageFieldMask =
    (TypeTraits<BitVector>::One << CubeTextureChunkBase::PosZImageFieldId);

const OSG::BitVector CubeTextureChunkBase::PosXImageFieldMask =
    (TypeTraits<BitVector>::One << CubeTextureChunkBase::PosXImageFieldId);

const OSG::BitVector CubeTextureChunkBase::NegXImageFieldMask =
    (TypeTraits<BitVector>::One << CubeTextureChunkBase::NegXImageFieldId);

const OSG::BitVector CubeTextureChunkBase::PosYImageFieldMask =
    (TypeTraits<BitVector>::One << CubeTextureChunkBase::PosYImageFieldId);

const OSG::BitVector CubeTextureChunkBase::NegYImageFieldMask =
    (TypeTraits<BitVector>::One << CubeTextureChunkBase::NegYImageFieldId);

const OSG::BitVector CubeTextureChunkBase::IsReflectionMapFieldMask =
    (TypeTraits<BitVector>::One << CubeTextureChunkBase::IsReflectionMapFieldId);

const OSG::BitVector CubeTextureChunkBase::MTInfluenceMask =
    (Inherited::MTInfluenceMask) | (static_cast<BitVector>(0x0) << Inherited::NextFieldId);

// Field descriptions

/*! \var ImagePtr        CubeTextureChunkBase::_sfPosZImage
    The image for the positive Z direction for the cube tetxure.
*/
/*! \var ImagePtr        CubeTextureChunkBase::_sfPosXImage
    The image for the positive X direction for the cube tetxure.
*/
/*! \var ImagePtr        CubeTextureChunkBase::_sfNegXImage
    The image for the negative X direction for the cube tetxure.
*/
/*! \var ImagePtr        CubeTextureChunkBase::_sfPosYImage
    The image for the positive Y direction for the cube tetxure.
*/
/*! \var ImagePtr        CubeTextureChunkBase::_sfNegYImage
    The image for the negative Y direction for the cube tetxure.
*/
/*! \var bool            CubeTextureChunkBase::_sfIsReflectionMap

*/

//! CubeTextureChunk description

FieldDescription* CubeTextureChunkBase::_desc[] = {
    new FieldDescription(SFImagePtr::getClassType(), "posZImage", PosZImageFieldId,
        PosZImageFieldMask, false, (FieldAccessMethod)&CubeTextureChunkBase::getSFPosZImage),
    new FieldDescription(SFImagePtr::getClassType(), "posXImage", PosXImageFieldId,
        PosXImageFieldMask, false, (FieldAccessMethod)&CubeTextureChunkBase::getSFPosXImage),
    new FieldDescription(SFImagePtr::getClassType(), "negXImage", NegXImageFieldId,
        NegXImageFieldMask, false, (FieldAccessMethod)&CubeTextureChunkBase::getSFNegXImage),
    new FieldDescription(SFImagePtr::getClassType(), "posYImage", PosYImageFieldId,
        PosYImageFieldMask, false, (FieldAccessMethod)&CubeTextureChunkBase::getSFPosYImage),
    new FieldDescription(SFImagePtr::getClassType(), "negYImage", NegYImageFieldId,
        NegYImageFieldMask, false, (FieldAccessMethod)&CubeTextureChunkBase::getSFNegYImage),
    new FieldDescription(SFBool::getClassType(), "isReflectionMap", IsReflectionMapFieldId,
        IsReflectionMapFieldMask, false,
        (FieldAccessMethod)&CubeTextureChunkBase::getSFIsReflectionMap)};

FieldContainerType CubeTextureChunkBase::_type("CubeTextureChunk", "TextureChunk", NULL,
    (PrototypeCreateF)&CubeTextureChunkBase::createEmpty, CubeTextureChunk::initMethod, _desc,
    sizeof(_desc));

// OSG_FIELD_CONTAINER_DEF(CubeTextureChunkBase, CubeTextureChunkPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType& CubeTextureChunkBase::getType(void) {
  return _type;
}

const FieldContainerType& CubeTextureChunkBase::getType(void) const {
  return _type;
}

FieldContainerPtr CubeTextureChunkBase::shallowCopy(void) const {
  CubeTextureChunkPtr returnValue;

  newPtr(returnValue, dynamic_cast<const CubeTextureChunk*>(this));

  return returnValue;
}

UInt32 CubeTextureChunkBase::getContainerSize(void) const {
  return sizeof(CubeTextureChunk);
}

#if !defined(OSG_FIXED_MFIELDSYNC)
void CubeTextureChunkBase::executeSync(FieldContainer& other, const BitVector& whichField) {
  this->executeSyncImpl((CubeTextureChunkBase*)&other, whichField);
}
#else
void CubeTextureChunkBase::executeSync(
    FieldContainer& other, const BitVector& whichField, const SyncInfo& sInfo) {
  this->executeSyncImpl((CubeTextureChunkBase*)&other, whichField, sInfo);
}
void CubeTextureChunkBase::execBeginEdit(
    const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize) {
  this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void CubeTextureChunkBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect) {
  Inherited::onDestroyAspect(uiId, uiAspect);
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning(disable : 383)
#endif

CubeTextureChunkBase::CubeTextureChunkBase(void)
    : _sfPosZImage()
    , _sfPosXImage()
    , _sfNegXImage()
    , _sfPosYImage()
    , _sfNegYImage()
    , _sfIsReflectionMap(bool(true))
    , Inherited() {
}

#ifdef OSG_WIN32_ICL
#pragma warning(default : 383)
#endif

CubeTextureChunkBase::CubeTextureChunkBase(const CubeTextureChunkBase& source)
    : _sfPosZImage(source._sfPosZImage)
    , _sfPosXImage(source._sfPosXImage)
    , _sfNegXImage(source._sfNegXImage)
    , _sfPosYImage(source._sfPosYImage)
    , _sfNegYImage(source._sfNegYImage)
    , _sfIsReflectionMap(source._sfIsReflectionMap)
    , Inherited(source) {
}

/*-------------------------- destructors ----------------------------------*/

CubeTextureChunkBase::~CubeTextureChunkBase(void) {
}

/*------------------------------ access -----------------------------------*/

UInt32 CubeTextureChunkBase::getBinSize(const BitVector& whichField) {
  UInt32 returnValue = Inherited::getBinSize(whichField);

  if (FieldBits::NoField != (PosZImageFieldMask & whichField)) {
    returnValue += _sfPosZImage.getBinSize();
  }

  if (FieldBits::NoField != (PosXImageFieldMask & whichField)) {
    returnValue += _sfPosXImage.getBinSize();
  }

  if (FieldBits::NoField != (NegXImageFieldMask & whichField)) {
    returnValue += _sfNegXImage.getBinSize();
  }

  if (FieldBits::NoField != (PosYImageFieldMask & whichField)) {
    returnValue += _sfPosYImage.getBinSize();
  }

  if (FieldBits::NoField != (NegYImageFieldMask & whichField)) {
    returnValue += _sfNegYImage.getBinSize();
  }

  if (FieldBits::NoField != (IsReflectionMapFieldMask & whichField)) {
    returnValue += _sfIsReflectionMap.getBinSize();
  }

  return returnValue;
}

void CubeTextureChunkBase::copyToBin(BinaryDataHandler& pMem, const BitVector& whichField) {
  Inherited::copyToBin(pMem, whichField);

  if (FieldBits::NoField != (PosZImageFieldMask & whichField)) {
    _sfPosZImage.copyToBin(pMem);
  }

  if (FieldBits::NoField != (PosXImageFieldMask & whichField)) {
    _sfPosXImage.copyToBin(pMem);
  }

  if (FieldBits::NoField != (NegXImageFieldMask & whichField)) {
    _sfNegXImage.copyToBin(pMem);
  }

  if (FieldBits::NoField != (PosYImageFieldMask & whichField)) {
    _sfPosYImage.copyToBin(pMem);
  }

  if (FieldBits::NoField != (NegYImageFieldMask & whichField)) {
    _sfNegYImage.copyToBin(pMem);
  }

  if (FieldBits::NoField != (IsReflectionMapFieldMask & whichField)) {
    _sfIsReflectionMap.copyToBin(pMem);
  }
}

void CubeTextureChunkBase::copyFromBin(BinaryDataHandler& pMem, const BitVector& whichField) {
  Inherited::copyFromBin(pMem, whichField);

  if (FieldBits::NoField != (PosZImageFieldMask & whichField)) {
    _sfPosZImage.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (PosXImageFieldMask & whichField)) {
    _sfPosXImage.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (NegXImageFieldMask & whichField)) {
    _sfNegXImage.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (PosYImageFieldMask & whichField)) {
    _sfPosYImage.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (NegYImageFieldMask & whichField)) {
    _sfNegYImage.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (IsReflectionMapFieldMask & whichField)) {
    _sfIsReflectionMap.copyFromBin(pMem);
  }
}

#if !defined(OSG_FIXED_MFIELDSYNC)
void CubeTextureChunkBase::executeSyncImpl(
    CubeTextureChunkBase* pOther, const BitVector& whichField) {

  Inherited::executeSyncImpl(pOther, whichField);

  if (FieldBits::NoField != (PosZImageFieldMask & whichField))
    _sfPosZImage.syncWith(pOther->_sfPosZImage);

  if (FieldBits::NoField != (PosXImageFieldMask & whichField))
    _sfPosXImage.syncWith(pOther->_sfPosXImage);

  if (FieldBits::NoField != (NegXImageFieldMask & whichField))
    _sfNegXImage.syncWith(pOther->_sfNegXImage);

  if (FieldBits::NoField != (PosYImageFieldMask & whichField))
    _sfPosYImage.syncWith(pOther->_sfPosYImage);

  if (FieldBits::NoField != (NegYImageFieldMask & whichField))
    _sfNegYImage.syncWith(pOther->_sfNegYImage);

  if (FieldBits::NoField != (IsReflectionMapFieldMask & whichField))
    _sfIsReflectionMap.syncWith(pOther->_sfIsReflectionMap);
}
#else
void CubeTextureChunkBase::executeSyncImpl(
    CubeTextureChunkBase* pOther, const BitVector& whichField, const SyncInfo& sInfo) {

  Inherited::executeSyncImpl(pOther, whichField, sInfo);

  if (FieldBits::NoField != (PosZImageFieldMask & whichField))
    _sfPosZImage.syncWith(pOther->_sfPosZImage);

  if (FieldBits::NoField != (PosXImageFieldMask & whichField))
    _sfPosXImage.syncWith(pOther->_sfPosXImage);

  if (FieldBits::NoField != (NegXImageFieldMask & whichField))
    _sfNegXImage.syncWith(pOther->_sfNegXImage);

  if (FieldBits::NoField != (PosYImageFieldMask & whichField))
    _sfPosYImage.syncWith(pOther->_sfPosYImage);

  if (FieldBits::NoField != (NegYImageFieldMask & whichField))
    _sfNegYImage.syncWith(pOther->_sfNegYImage);

  if (FieldBits::NoField != (IsReflectionMapFieldMask & whichField))
    _sfIsReflectionMap.syncWith(pOther->_sfIsReflectionMap);
}

void CubeTextureChunkBase::execBeginEditImpl(
    const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize) {
  Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}
#endif

#include <OSGSFieldTypeDef.inl>
#include <OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<CubeTextureChunkPtr>::_type("CubeTextureChunkPtr", "TextureChunkPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(CubeTextureChunkPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(CubeTextureChunkPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);

OSG_END_NAMESPACE
