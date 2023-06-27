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
 **     class PolygonBackground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#define OSG_COMPILEPOLYGONBACKGROUNDINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGPolygonBackgroundBase.h"
#include "OSGPolygonBackground.h"

OSG_BEGIN_NAMESPACE

const OSG::BitVector PolygonBackgroundBase::MaterialFieldMask =
    (TypeTraits<BitVector>::One << PolygonBackgroundBase::MaterialFieldId);

const OSG::BitVector PolygonBackgroundBase::TexCoordsFieldMask =
    (TypeTraits<BitVector>::One << PolygonBackgroundBase::TexCoordsFieldId);

const OSG::BitVector PolygonBackgroundBase::PositionsFieldMask =
    (TypeTraits<BitVector>::One << PolygonBackgroundBase::PositionsFieldId);

const OSG::BitVector PolygonBackgroundBase::NormalizedXFieldMask =
    (TypeTraits<BitVector>::One << PolygonBackgroundBase::NormalizedXFieldId);

const OSG::BitVector PolygonBackgroundBase::NormalizedYFieldMask =
    (TypeTraits<BitVector>::One << PolygonBackgroundBase::NormalizedYFieldId);

const OSG::BitVector PolygonBackgroundBase::AspectHeightFieldMask =
    (TypeTraits<BitVector>::One << PolygonBackgroundBase::AspectHeightFieldId);

const OSG::BitVector PolygonBackgroundBase::AspectWidthFieldMask =
    (TypeTraits<BitVector>::One << PolygonBackgroundBase::AspectWidthFieldId);

const OSG::BitVector PolygonBackgroundBase::ScaleFieldMask =
    (TypeTraits<BitVector>::One << PolygonBackgroundBase::ScaleFieldId);

const OSG::BitVector PolygonBackgroundBase::ClearStencilBitFieldMask =
    (TypeTraits<BitVector>::One << PolygonBackgroundBase::ClearStencilBitFieldId);

const OSG::BitVector PolygonBackgroundBase::CleanupFieldMask =
    (TypeTraits<BitVector>::One << PolygonBackgroundBase::CleanupFieldId);

const OSG::BitVector PolygonBackgroundBase::TileFieldMask =
    (TypeTraits<BitVector>::One << PolygonBackgroundBase::TileFieldId);

const OSG::BitVector PolygonBackgroundBase::MTInfluenceMask =
    (Inherited::MTInfluenceMask) | (static_cast<BitVector>(0x0) << Inherited::NextFieldId);

// Field descriptions

/*! \var MaterialPtr     PolygonBackgroundBase::_sfMaterial
    The material used to display.
*/
/*! \var Vec3f           PolygonBackgroundBase::_mfTexCoords
    The texture coordinates of the geometry to display.
*/
/*! \var Pnt2f           PolygonBackgroundBase::_mfPositions
    The positions of the geometry to display.
*/
/*! \var bool            PolygonBackgroundBase::_sfNormalizedX
    Define whether the x coordinates are normalized (0-1) or pixel-based .
*/
/*! \var bool            PolygonBackgroundBase::_sfNormalizedY
    Define whether the y coordinates are normalized (0-1) or pixel-based .
*/
/*! \var UInt16          PolygonBackgroundBase::_sfAspectHeight
    Useful for keeping aspect ratio when rendering things like images.
*/
/*! \var UInt16          PolygonBackgroundBase::_sfAspectWidth
    Useful for keeping aspect ratio when rendering things like images.
*/
/*! \var Real32          PolygonBackgroundBase::_sfScale
    Scale factor for zooming.
*/
/*! \var Int32           PolygonBackgroundBase::_sfClearStencilBit
    Usually 0 is used to clear all stencil bitplanes (clear is deactivated if smaller zero).
*/
/*! \var bool            PolygonBackgroundBase::_sfCleanup
    Clear depth/ stencil buffer after applying the material.
*/
/*! \var bool            PolygonBackgroundBase::_sfTile
    If true the image tiles in multi window settings.
*/

//! PolygonBackground description

FieldDescription* PolygonBackgroundBase::_desc[] = {
    new FieldDescription(SFMaterialPtr::getClassType(), "material", MaterialFieldId,
        MaterialFieldMask, false, (FieldAccessMethod)&PolygonBackgroundBase::getSFMaterial),
    new FieldDescription(MFVec3f::getClassType(), "texCoords", TexCoordsFieldId, TexCoordsFieldMask,
        false, (FieldAccessMethod)&PolygonBackgroundBase::getMFTexCoords),
    new FieldDescription(MFPnt2f::getClassType(), "positions", PositionsFieldId, PositionsFieldMask,
        false, (FieldAccessMethod)&PolygonBackgroundBase::getMFPositions),
    new FieldDescription(SFBool::getClassType(), "normalizedX", NormalizedXFieldId,
        NormalizedXFieldMask, false, (FieldAccessMethod)&PolygonBackgroundBase::getSFNormalizedX),
    new FieldDescription(SFBool::getClassType(), "normalizedY", NormalizedYFieldId,
        NormalizedYFieldMask, false, (FieldAccessMethod)&PolygonBackgroundBase::getSFNormalizedY),
    new FieldDescription(SFUInt16::getClassType(), "aspectHeight", AspectHeightFieldId,
        AspectHeightFieldMask, false, (FieldAccessMethod)&PolygonBackgroundBase::getSFAspectHeight),
    new FieldDescription(SFUInt16::getClassType(), "aspectWidth", AspectWidthFieldId,
        AspectWidthFieldMask, false, (FieldAccessMethod)&PolygonBackgroundBase::getSFAspectWidth),
    new FieldDescription(SFReal32::getClassType(), "scale", ScaleFieldId, ScaleFieldMask, false,
        (FieldAccessMethod)&PolygonBackgroundBase::getSFScale),
    new FieldDescription(SFInt32::getClassType(), "clearStencilBit", ClearStencilBitFieldId,
        ClearStencilBitFieldMask, false,
        (FieldAccessMethod)&PolygonBackgroundBase::getSFClearStencilBit),
    new FieldDescription(SFBool::getClassType(), "cleanup", CleanupFieldId, CleanupFieldMask, false,
        (FieldAccessMethod)&PolygonBackgroundBase::getSFCleanup),
    new FieldDescription(SFBool::getClassType(), "tile", TileFieldId, TileFieldMask, false,
        (FieldAccessMethod)&PolygonBackgroundBase::getSFTile)};

FieldContainerType PolygonBackgroundBase::_type("PolygonBackground", "Background", NULL,
    (PrototypeCreateF)&PolygonBackgroundBase::createEmpty, PolygonBackground::initMethod, _desc,
    sizeof(_desc));

// OSG_FIELD_CONTAINER_DEF(PolygonBackgroundBase, PolygonBackgroundPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType& PolygonBackgroundBase::getType(void) {
  return _type;
}

const FieldContainerType& PolygonBackgroundBase::getType(void) const {
  return _type;
}

FieldContainerPtr PolygonBackgroundBase::shallowCopy(void) const {
  PolygonBackgroundPtr returnValue;

  newPtr(returnValue, dynamic_cast<const PolygonBackground*>(this));

  return returnValue;
}

UInt32 PolygonBackgroundBase::getContainerSize(void) const {
  return sizeof(PolygonBackground);
}

#if !defined(OSG_FIXED_MFIELDSYNC)
void PolygonBackgroundBase::executeSync(FieldContainer& other, const BitVector& whichField) {
  this->executeSyncImpl((PolygonBackgroundBase*)&other, whichField);
}
#else
void PolygonBackgroundBase::executeSync(
    FieldContainer& other, const BitVector& whichField, const SyncInfo& sInfo) {
  this->executeSyncImpl((PolygonBackgroundBase*)&other, whichField, sInfo);
}
void PolygonBackgroundBase::execBeginEdit(
    const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize) {
  this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void PolygonBackgroundBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect) {
  Inherited::onDestroyAspect(uiId, uiAspect);

  _mfTexCoords.terminateShare(uiAspect, this->getContainerSize());
  _mfPositions.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning(disable : 383)
#endif

PolygonBackgroundBase::PolygonBackgroundBase(void)
    : _sfMaterial()
    , _mfTexCoords()
    , _mfPositions()
    , _sfNormalizedX(bool(true))
    , _sfNormalizedY(bool(true))
    , _sfAspectHeight(UInt16(0))
    , _sfAspectWidth(UInt16(0))
    , _sfScale(Real32(1.0))
    , _sfClearStencilBit(Int32(-1))
    , _sfCleanup(bool(true))
    , _sfTile(bool(true))
    , Inherited() {
}

#ifdef OSG_WIN32_ICL
#pragma warning(default : 383)
#endif

PolygonBackgroundBase::PolygonBackgroundBase(const PolygonBackgroundBase& source)
    : _sfMaterial(source._sfMaterial)
    , _mfTexCoords(source._mfTexCoords)
    , _mfPositions(source._mfPositions)
    , _sfNormalizedX(source._sfNormalizedX)
    , _sfNormalizedY(source._sfNormalizedY)
    , _sfAspectHeight(source._sfAspectHeight)
    , _sfAspectWidth(source._sfAspectWidth)
    , _sfScale(source._sfScale)
    , _sfClearStencilBit(source._sfClearStencilBit)
    , _sfCleanup(source._sfCleanup)
    , _sfTile(source._sfTile)
    , Inherited(source) {
}

/*-------------------------- destructors ----------------------------------*/

PolygonBackgroundBase::~PolygonBackgroundBase(void) {
}

/*------------------------------ access -----------------------------------*/

UInt32 PolygonBackgroundBase::getBinSize(const BitVector& whichField) {
  UInt32 returnValue = Inherited::getBinSize(whichField);

  if (FieldBits::NoField != (MaterialFieldMask & whichField)) {
    returnValue += _sfMaterial.getBinSize();
  }

  if (FieldBits::NoField != (TexCoordsFieldMask & whichField)) {
    returnValue += _mfTexCoords.getBinSize();
  }

  if (FieldBits::NoField != (PositionsFieldMask & whichField)) {
    returnValue += _mfPositions.getBinSize();
  }

  if (FieldBits::NoField != (NormalizedXFieldMask & whichField)) {
    returnValue += _sfNormalizedX.getBinSize();
  }

  if (FieldBits::NoField != (NormalizedYFieldMask & whichField)) {
    returnValue += _sfNormalizedY.getBinSize();
  }

  if (FieldBits::NoField != (AspectHeightFieldMask & whichField)) {
    returnValue += _sfAspectHeight.getBinSize();
  }

  if (FieldBits::NoField != (AspectWidthFieldMask & whichField)) {
    returnValue += _sfAspectWidth.getBinSize();
  }

  if (FieldBits::NoField != (ScaleFieldMask & whichField)) {
    returnValue += _sfScale.getBinSize();
  }

  if (FieldBits::NoField != (ClearStencilBitFieldMask & whichField)) {
    returnValue += _sfClearStencilBit.getBinSize();
  }

  if (FieldBits::NoField != (CleanupFieldMask & whichField)) {
    returnValue += _sfCleanup.getBinSize();
  }

  if (FieldBits::NoField != (TileFieldMask & whichField)) {
    returnValue += _sfTile.getBinSize();
  }

  return returnValue;
}

void PolygonBackgroundBase::copyToBin(BinaryDataHandler& pMem, const BitVector& whichField) {
  Inherited::copyToBin(pMem, whichField);

  if (FieldBits::NoField != (MaterialFieldMask & whichField)) {
    _sfMaterial.copyToBin(pMem);
  }

  if (FieldBits::NoField != (TexCoordsFieldMask & whichField)) {
    _mfTexCoords.copyToBin(pMem);
  }

  if (FieldBits::NoField != (PositionsFieldMask & whichField)) {
    _mfPositions.copyToBin(pMem);
  }

  if (FieldBits::NoField != (NormalizedXFieldMask & whichField)) {
    _sfNormalizedX.copyToBin(pMem);
  }

  if (FieldBits::NoField != (NormalizedYFieldMask & whichField)) {
    _sfNormalizedY.copyToBin(pMem);
  }

  if (FieldBits::NoField != (AspectHeightFieldMask & whichField)) {
    _sfAspectHeight.copyToBin(pMem);
  }

  if (FieldBits::NoField != (AspectWidthFieldMask & whichField)) {
    _sfAspectWidth.copyToBin(pMem);
  }

  if (FieldBits::NoField != (ScaleFieldMask & whichField)) {
    _sfScale.copyToBin(pMem);
  }

  if (FieldBits::NoField != (ClearStencilBitFieldMask & whichField)) {
    _sfClearStencilBit.copyToBin(pMem);
  }

  if (FieldBits::NoField != (CleanupFieldMask & whichField)) {
    _sfCleanup.copyToBin(pMem);
  }

  if (FieldBits::NoField != (TileFieldMask & whichField)) {
    _sfTile.copyToBin(pMem);
  }
}

void PolygonBackgroundBase::copyFromBin(BinaryDataHandler& pMem, const BitVector& whichField) {
  Inherited::copyFromBin(pMem, whichField);

  if (FieldBits::NoField != (MaterialFieldMask & whichField)) {
    _sfMaterial.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (TexCoordsFieldMask & whichField)) {
    _mfTexCoords.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (PositionsFieldMask & whichField)) {
    _mfPositions.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (NormalizedXFieldMask & whichField)) {
    _sfNormalizedX.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (NormalizedYFieldMask & whichField)) {
    _sfNormalizedY.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (AspectHeightFieldMask & whichField)) {
    _sfAspectHeight.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (AspectWidthFieldMask & whichField)) {
    _sfAspectWidth.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (ScaleFieldMask & whichField)) {
    _sfScale.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (ClearStencilBitFieldMask & whichField)) {
    _sfClearStencilBit.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (CleanupFieldMask & whichField)) {
    _sfCleanup.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (TileFieldMask & whichField)) {
    _sfTile.copyFromBin(pMem);
  }
}

#if !defined(OSG_FIXED_MFIELDSYNC)
void PolygonBackgroundBase::executeSyncImpl(
    PolygonBackgroundBase* pOther, const BitVector& whichField) {

  Inherited::executeSyncImpl(pOther, whichField);

  if (FieldBits::NoField != (MaterialFieldMask & whichField))
    _sfMaterial.syncWith(pOther->_sfMaterial);

  if (FieldBits::NoField != (TexCoordsFieldMask & whichField))
    _mfTexCoords.syncWith(pOther->_mfTexCoords);

  if (FieldBits::NoField != (PositionsFieldMask & whichField))
    _mfPositions.syncWith(pOther->_mfPositions);

  if (FieldBits::NoField != (NormalizedXFieldMask & whichField))
    _sfNormalizedX.syncWith(pOther->_sfNormalizedX);

  if (FieldBits::NoField != (NormalizedYFieldMask & whichField))
    _sfNormalizedY.syncWith(pOther->_sfNormalizedY);

  if (FieldBits::NoField != (AspectHeightFieldMask & whichField))
    _sfAspectHeight.syncWith(pOther->_sfAspectHeight);

  if (FieldBits::NoField != (AspectWidthFieldMask & whichField))
    _sfAspectWidth.syncWith(pOther->_sfAspectWidth);

  if (FieldBits::NoField != (ScaleFieldMask & whichField))
    _sfScale.syncWith(pOther->_sfScale);

  if (FieldBits::NoField != (ClearStencilBitFieldMask & whichField))
    _sfClearStencilBit.syncWith(pOther->_sfClearStencilBit);

  if (FieldBits::NoField != (CleanupFieldMask & whichField))
    _sfCleanup.syncWith(pOther->_sfCleanup);

  if (FieldBits::NoField != (TileFieldMask & whichField))
    _sfTile.syncWith(pOther->_sfTile);
}
#else
void PolygonBackgroundBase::executeSyncImpl(
    PolygonBackgroundBase* pOther, const BitVector& whichField, const SyncInfo& sInfo) {

  Inherited::executeSyncImpl(pOther, whichField, sInfo);

  if (FieldBits::NoField != (MaterialFieldMask & whichField))
    _sfMaterial.syncWith(pOther->_sfMaterial);

  if (FieldBits::NoField != (NormalizedXFieldMask & whichField))
    _sfNormalizedX.syncWith(pOther->_sfNormalizedX);

  if (FieldBits::NoField != (NormalizedYFieldMask & whichField))
    _sfNormalizedY.syncWith(pOther->_sfNormalizedY);

  if (FieldBits::NoField != (AspectHeightFieldMask & whichField))
    _sfAspectHeight.syncWith(pOther->_sfAspectHeight);

  if (FieldBits::NoField != (AspectWidthFieldMask & whichField))
    _sfAspectWidth.syncWith(pOther->_sfAspectWidth);

  if (FieldBits::NoField != (ScaleFieldMask & whichField))
    _sfScale.syncWith(pOther->_sfScale);

  if (FieldBits::NoField != (ClearStencilBitFieldMask & whichField))
    _sfClearStencilBit.syncWith(pOther->_sfClearStencilBit);

  if (FieldBits::NoField != (CleanupFieldMask & whichField))
    _sfCleanup.syncWith(pOther->_sfCleanup);

  if (FieldBits::NoField != (TileFieldMask & whichField))
    _sfTile.syncWith(pOther->_sfTile);

  if (FieldBits::NoField != (TexCoordsFieldMask & whichField))
    _mfTexCoords.syncWith(pOther->_mfTexCoords, sInfo);

  if (FieldBits::NoField != (PositionsFieldMask & whichField))
    _mfPositions.syncWith(pOther->_mfPositions, sInfo);
}

void PolygonBackgroundBase::execBeginEditImpl(
    const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize) {
  Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

  if (FieldBits::NoField != (TexCoordsFieldMask & whichField))
    _mfTexCoords.beginEdit(uiAspect, uiContainerSize);

  if (FieldBits::NoField != (PositionsFieldMask & whichField))
    _mfPositions.beginEdit(uiAspect, uiContainerSize);
}
#endif

OSG_END_NAMESPACE

#include <OSGSFieldTypeDef.inl>
#include <OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<PolygonBackgroundPtr>::_type("PolygonBackgroundPtr", "BackgroundPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(PolygonBackgroundPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(PolygonBackgroundPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);

OSG_END_NAMESPACE
