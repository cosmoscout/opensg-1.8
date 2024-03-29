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
 **     class SolidBackground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#define OSG_COMPILESOLIDBACKGROUNDINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGSolidBackgroundBase.h"
#include "OSGSolidBackground.h"

OSG_BEGIN_NAMESPACE

const OSG::BitVector SolidBackgroundBase::ColorFieldMask =
    (TypeTraits<BitVector>::One << SolidBackgroundBase::ColorFieldId);

const OSG::BitVector SolidBackgroundBase::ClearStencilBitFieldMask =
    (TypeTraits<BitVector>::One << SolidBackgroundBase::ClearStencilBitFieldId);

const OSG::BitVector SolidBackgroundBase::AlphaFieldMask =
    (TypeTraits<BitVector>::One << SolidBackgroundBase::AlphaFieldId);

const OSG::BitVector SolidBackgroundBase::DepthFieldMask =
    (TypeTraits<BitVector>::One << SolidBackgroundBase::DepthFieldId);

const OSG::BitVector SolidBackgroundBase::MTInfluenceMask =
    (Inherited::MTInfluenceMask) | (static_cast<BitVector>(0x0) << Inherited::NextFieldId);

// Field descriptions

/*! \var Color3f         SolidBackgroundBase::_sfColor
    The background color.
*/
/*! \var Int32           SolidBackgroundBase::_sfClearStencilBit
    Usually 0 is used to clear all stencil bitplanes (clear is deactivated if smaller zero).
*/
/*! \var Real32          SolidBackgroundBase::_sfAlpha
    Alpha value (to allow transparent clears).
*/
/*! \var Real32          SolidBackgroundBase::_sfDepth
    Depth value for clear, defaults to 1.
*/

//! SolidBackground description

FieldDescription* SolidBackgroundBase::_desc[] = {
    new FieldDescription(SFColor3f::getClassType(), "color", ColorFieldId, ColorFieldMask, false,
        (FieldAccessMethod)&SolidBackgroundBase::getSFColor),
    new FieldDescription(SFInt32::getClassType(), "clearStencilBit", ClearStencilBitFieldId,
        ClearStencilBitFieldMask, false,
        (FieldAccessMethod)&SolidBackgroundBase::getSFClearStencilBit),
    new FieldDescription(SFReal32::getClassType(), "alpha", AlphaFieldId, AlphaFieldMask, false,
        (FieldAccessMethod)&SolidBackgroundBase::getSFAlpha),
    new FieldDescription(SFReal32::getClassType(), "depth", DepthFieldId, DepthFieldMask, false,
        (FieldAccessMethod)&SolidBackgroundBase::getSFDepth)};

FieldContainerType SolidBackgroundBase::_type("SolidBackground", "Background", NULL,
    (PrototypeCreateF)&SolidBackgroundBase::createEmpty, SolidBackground::initMethod, _desc,
    sizeof(_desc));

// OSG_FIELD_CONTAINER_DEF(SolidBackgroundBase, SolidBackgroundPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType& SolidBackgroundBase::getType(void) {
  return _type;
}

const FieldContainerType& SolidBackgroundBase::getType(void) const {
  return _type;
}

FieldContainerPtr SolidBackgroundBase::shallowCopy(void) const {
  SolidBackgroundPtr returnValue;

  newPtr(returnValue, dynamic_cast<const SolidBackground*>(this));

  return returnValue;
}

UInt32 SolidBackgroundBase::getContainerSize(void) const {
  return sizeof(SolidBackground);
}

#if !defined(OSG_FIXED_MFIELDSYNC)
void SolidBackgroundBase::executeSync(FieldContainer& other, const BitVector& whichField) {
  this->executeSyncImpl((SolidBackgroundBase*)&other, whichField);
}
#else
void SolidBackgroundBase::executeSync(
    FieldContainer& other, const BitVector& whichField, const SyncInfo& sInfo) {
  this->executeSyncImpl((SolidBackgroundBase*)&other, whichField, sInfo);
}
void SolidBackgroundBase::execBeginEdit(
    const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize) {
  this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void SolidBackgroundBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect) {
  Inherited::onDestroyAspect(uiId, uiAspect);
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning(disable : 383)
#endif

SolidBackgroundBase::SolidBackgroundBase(void)
    : _sfColor(Color3f(0, 0, 0))
    , _sfClearStencilBit(Int32(-1))
    , _sfAlpha(Real32(1.f))
    ,
#ifdef OSG_INFINITE_REVERSE_PROJECTION
    _sfDepth(Real32(0.f))
    ,
#else
    _sfDepth(Real32(1.f))
    ,
#endif
    Inherited() {
}

#ifdef OSG_WIN32_ICL
#pragma warning(default : 383)
#endif

SolidBackgroundBase::SolidBackgroundBase(const SolidBackgroundBase& source)
    : _sfColor(source._sfColor)
    , _sfClearStencilBit(source._sfClearStencilBit)
    , _sfAlpha(source._sfAlpha)
    , _sfDepth(source._sfDepth)
    , Inherited(source) {
}

/*-------------------------- destructors ----------------------------------*/

SolidBackgroundBase::~SolidBackgroundBase(void) {
}

/*------------------------------ access -----------------------------------*/

UInt32 SolidBackgroundBase::getBinSize(const BitVector& whichField) {
  UInt32 returnValue = Inherited::getBinSize(whichField);

  if (FieldBits::NoField != (ColorFieldMask & whichField)) {
    returnValue += _sfColor.getBinSize();
  }

  if (FieldBits::NoField != (ClearStencilBitFieldMask & whichField)) {
    returnValue += _sfClearStencilBit.getBinSize();
  }

  if (FieldBits::NoField != (AlphaFieldMask & whichField)) {
    returnValue += _sfAlpha.getBinSize();
  }

  if (FieldBits::NoField != (DepthFieldMask & whichField)) {
    returnValue += _sfDepth.getBinSize();
  }

  return returnValue;
}

void SolidBackgroundBase::copyToBin(BinaryDataHandler& pMem, const BitVector& whichField) {
  Inherited::copyToBin(pMem, whichField);

  if (FieldBits::NoField != (ColorFieldMask & whichField)) {
    _sfColor.copyToBin(pMem);
  }

  if (FieldBits::NoField != (ClearStencilBitFieldMask & whichField)) {
    _sfClearStencilBit.copyToBin(pMem);
  }

  if (FieldBits::NoField != (AlphaFieldMask & whichField)) {
    _sfAlpha.copyToBin(pMem);
  }

  if (FieldBits::NoField != (DepthFieldMask & whichField)) {
    _sfDepth.copyToBin(pMem);
  }
}

void SolidBackgroundBase::copyFromBin(BinaryDataHandler& pMem, const BitVector& whichField) {
  Inherited::copyFromBin(pMem, whichField);

  if (FieldBits::NoField != (ColorFieldMask & whichField)) {
    _sfColor.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (ClearStencilBitFieldMask & whichField)) {
    _sfClearStencilBit.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (AlphaFieldMask & whichField)) {
    _sfAlpha.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (DepthFieldMask & whichField)) {
    _sfDepth.copyFromBin(pMem);
  }
}

#if !defined(OSG_FIXED_MFIELDSYNC)
void SolidBackgroundBase::executeSyncImpl(
    SolidBackgroundBase* pOther, const BitVector& whichField) {

  Inherited::executeSyncImpl(pOther, whichField);

  if (FieldBits::NoField != (ColorFieldMask & whichField))
    _sfColor.syncWith(pOther->_sfColor);

  if (FieldBits::NoField != (ClearStencilBitFieldMask & whichField))
    _sfClearStencilBit.syncWith(pOther->_sfClearStencilBit);

  if (FieldBits::NoField != (AlphaFieldMask & whichField))
    _sfAlpha.syncWith(pOther->_sfAlpha);

  if (FieldBits::NoField != (DepthFieldMask & whichField))
    _sfDepth.syncWith(pOther->_sfDepth);
}
#else
void SolidBackgroundBase::executeSyncImpl(
    SolidBackgroundBase* pOther, const BitVector& whichField, const SyncInfo& sInfo) {

  Inherited::executeSyncImpl(pOther, whichField, sInfo);

  if (FieldBits::NoField != (ColorFieldMask & whichField))
    _sfColor.syncWith(pOther->_sfColor);

  if (FieldBits::NoField != (ClearStencilBitFieldMask & whichField))
    _sfClearStencilBit.syncWith(pOther->_sfClearStencilBit);

  if (FieldBits::NoField != (AlphaFieldMask & whichField))
    _sfAlpha.syncWith(pOther->_sfAlpha);

  if (FieldBits::NoField != (DepthFieldMask & whichField))
    _sfDepth.syncWith(pOther->_sfDepth);
}

void SolidBackgroundBase::execBeginEditImpl(
    const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize) {
  Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}
#endif

OSG_END_NAMESPACE

#include <OSGSFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<SolidBackgroundPtr>::_type("SolidBackgroundPtr", "BackgroundPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(SolidBackgroundPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);

OSG_END_NAMESPACE
