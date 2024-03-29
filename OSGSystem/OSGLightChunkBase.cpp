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
 **     class LightChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#define OSG_COMPILELIGHTCHUNKINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGLightChunkBase.h"
#include "OSGLightChunk.h"

OSG_USING_NAMESPACE

const OSG::BitVector LightChunkBase::DiffuseFieldMask =
    (TypeTraits<BitVector>::One << LightChunkBase::DiffuseFieldId);

const OSG::BitVector LightChunkBase::AmbientFieldMask =
    (TypeTraits<BitVector>::One << LightChunkBase::AmbientFieldId);

const OSG::BitVector LightChunkBase::SpecularFieldMask =
    (TypeTraits<BitVector>::One << LightChunkBase::SpecularFieldId);

const OSG::BitVector LightChunkBase::PositionFieldMask =
    (TypeTraits<BitVector>::One << LightChunkBase::PositionFieldId);

const OSG::BitVector LightChunkBase::DirectionFieldMask =
    (TypeTraits<BitVector>::One << LightChunkBase::DirectionFieldId);

const OSG::BitVector LightChunkBase::ExponentFieldMask =
    (TypeTraits<BitVector>::One << LightChunkBase::ExponentFieldId);

const OSG::BitVector LightChunkBase::CutoffFieldMask =
    (TypeTraits<BitVector>::One << LightChunkBase::CutoffFieldId);

const OSG::BitVector LightChunkBase::ConstantAttenuationFieldMask =
    (TypeTraits<BitVector>::One << LightChunkBase::ConstantAttenuationFieldId);

const OSG::BitVector LightChunkBase::LinearAttenuationFieldMask =
    (TypeTraits<BitVector>::One << LightChunkBase::LinearAttenuationFieldId);

const OSG::BitVector LightChunkBase::QuadraticAttenuationFieldMask =
    (TypeTraits<BitVector>::One << LightChunkBase::QuadraticAttenuationFieldId);

const OSG::BitVector LightChunkBase::MTInfluenceMask =
    (Inherited::MTInfluenceMask) | (static_cast<BitVector>(0x0) << Inherited::NextFieldId);

// Field descriptions

/*! \var Color4f         LightChunkBase::_sfDiffuse
    The light's diffuse color.
*/
/*! \var Color4f         LightChunkBase::_sfAmbient
    The light's ambient color.
*/
/*! \var Color4f         LightChunkBase::_sfSpecular
    The light's specular color.
*/
/*! \var Vec4f           LightChunkBase::_sfPosition
    The light's position.
*/
/*! \var Vec3f           LightChunkBase::_sfDirection
    The light's direction (only for spotlights).
*/
/*! \var Real32          LightChunkBase::_sfExponent
    The light's spotlight exponent.
*/
/*! \var Real32          LightChunkBase::_sfCutoff
    The light's spotlight cutoff. As this chunk follows OpenGL conventions, this is the only angle
   in the system given in degrees.
*/
/*! \var Real32          LightChunkBase::_sfConstantAttenuation
    The light's constant attenuation.
*/
/*! \var Real32          LightChunkBase::_sfLinearAttenuation
    The light's linear attenuation.
*/
/*! \var Real32          LightChunkBase::_sfQuadraticAttenuation
    The light's quadratic attenuation.
*/

//! LightChunk description

FieldDescription* LightChunkBase::_desc[] = {
    new FieldDescription(SFColor4f::getClassType(), "diffuse", DiffuseFieldId, DiffuseFieldMask,
        false, (FieldAccessMethod)&LightChunkBase::getSFDiffuse),
    new FieldDescription(SFColor4f::getClassType(), "ambient", AmbientFieldId, AmbientFieldMask,
        false, (FieldAccessMethod)&LightChunkBase::getSFAmbient),
    new FieldDescription(SFColor4f::getClassType(), "specular", SpecularFieldId, SpecularFieldMask,
        false, (FieldAccessMethod)&LightChunkBase::getSFSpecular),
    new FieldDescription(SFVec4f::getClassType(), "position", PositionFieldId, PositionFieldMask,
        false, (FieldAccessMethod)&LightChunkBase::getSFPosition),
    new FieldDescription(SFVec3f::getClassType(), "direction", DirectionFieldId, DirectionFieldMask,
        false, (FieldAccessMethod)&LightChunkBase::getSFDirection),
    new FieldDescription(SFReal32::getClassType(), "exponent", ExponentFieldId, ExponentFieldMask,
        false, (FieldAccessMethod)&LightChunkBase::getSFExponent),
    new FieldDescription(SFReal32::getClassType(), "cutoff", CutoffFieldId, CutoffFieldMask, false,
        (FieldAccessMethod)&LightChunkBase::getSFCutoff),
    new FieldDescription(SFReal32::getClassType(), "constantAttenuation",
        ConstantAttenuationFieldId, ConstantAttenuationFieldMask, false,
        (FieldAccessMethod)&LightChunkBase::getSFConstantAttenuation),
    new FieldDescription(SFReal32::getClassType(), "linearAttenuation", LinearAttenuationFieldId,
        LinearAttenuationFieldMask, false,
        (FieldAccessMethod)&LightChunkBase::getSFLinearAttenuation),
    new FieldDescription(SFReal32::getClassType(), "quadraticAttenuation",
        QuadraticAttenuationFieldId, QuadraticAttenuationFieldMask, false,
        (FieldAccessMethod)&LightChunkBase::getSFQuadraticAttenuation)};

FieldContainerType LightChunkBase::_type("LightChunk", "StateChunk", NULL,
    (PrototypeCreateF)&LightChunkBase::createEmpty, LightChunk::initMethod, _desc, sizeof(_desc));

// OSG_FIELD_CONTAINER_DEF(LightChunkBase, LightChunkPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType& LightChunkBase::getType(void) {
  return _type;
}

const FieldContainerType& LightChunkBase::getType(void) const {
  return _type;
}

FieldContainerPtr LightChunkBase::shallowCopy(void) const {
  LightChunkPtr returnValue;

  newPtr(returnValue, dynamic_cast<const LightChunk*>(this));

  return returnValue;
}

UInt32 LightChunkBase::getContainerSize(void) const {
  return sizeof(LightChunk);
}

#if !defined(OSG_FIXED_MFIELDSYNC)
void LightChunkBase::executeSync(FieldContainer& other, const BitVector& whichField) {
  this->executeSyncImpl((LightChunkBase*)&other, whichField);
}
#else
void LightChunkBase::executeSync(
    FieldContainer& other, const BitVector& whichField, const SyncInfo& sInfo) {
  this->executeSyncImpl((LightChunkBase*)&other, whichField, sInfo);
}
void LightChunkBase::execBeginEdit(
    const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize) {
  this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void LightChunkBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect) {
  Inherited::onDestroyAspect(uiId, uiAspect);
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning(disable : 383)
#endif

LightChunkBase::LightChunkBase(void)
    : _sfDiffuse(Color4f(1, 1, 1, 0))
    , _sfAmbient(Color4f(.1, .1, .1, 0))
    , _sfSpecular(Color4f(1, 1, 1, 0))
    , _sfPosition(Vec4f(0, -1, 0, 0))
    , _sfDirection(Vec3f(0, 0, 1))
    , _sfExponent(Real32(2))
    , _sfCutoff(Real32(180))
    , _sfConstantAttenuation(Real32(1))
    , _sfLinearAttenuation(Real32(0))
    , _sfQuadraticAttenuation(Real32(0))
    , Inherited() {
}

#ifdef OSG_WIN32_ICL
#pragma warning(default : 383)
#endif

LightChunkBase::LightChunkBase(const LightChunkBase& source)
    : _sfDiffuse(source._sfDiffuse)
    , _sfAmbient(source._sfAmbient)
    , _sfSpecular(source._sfSpecular)
    , _sfPosition(source._sfPosition)
    , _sfDirection(source._sfDirection)
    , _sfExponent(source._sfExponent)
    , _sfCutoff(source._sfCutoff)
    , _sfConstantAttenuation(source._sfConstantAttenuation)
    , _sfLinearAttenuation(source._sfLinearAttenuation)
    , _sfQuadraticAttenuation(source._sfQuadraticAttenuation)
    , Inherited(source) {
}

/*-------------------------- destructors ----------------------------------*/

LightChunkBase::~LightChunkBase(void) {
}

/*------------------------------ access -----------------------------------*/

UInt32 LightChunkBase::getBinSize(const BitVector& whichField) {
  UInt32 returnValue = Inherited::getBinSize(whichField);

  if (FieldBits::NoField != (DiffuseFieldMask & whichField)) {
    returnValue += _sfDiffuse.getBinSize();
  }

  if (FieldBits::NoField != (AmbientFieldMask & whichField)) {
    returnValue += _sfAmbient.getBinSize();
  }

  if (FieldBits::NoField != (SpecularFieldMask & whichField)) {
    returnValue += _sfSpecular.getBinSize();
  }

  if (FieldBits::NoField != (PositionFieldMask & whichField)) {
    returnValue += _sfPosition.getBinSize();
  }

  if (FieldBits::NoField != (DirectionFieldMask & whichField)) {
    returnValue += _sfDirection.getBinSize();
  }

  if (FieldBits::NoField != (ExponentFieldMask & whichField)) {
    returnValue += _sfExponent.getBinSize();
  }

  if (FieldBits::NoField != (CutoffFieldMask & whichField)) {
    returnValue += _sfCutoff.getBinSize();
  }

  if (FieldBits::NoField != (ConstantAttenuationFieldMask & whichField)) {
    returnValue += _sfConstantAttenuation.getBinSize();
  }

  if (FieldBits::NoField != (LinearAttenuationFieldMask & whichField)) {
    returnValue += _sfLinearAttenuation.getBinSize();
  }

  if (FieldBits::NoField != (QuadraticAttenuationFieldMask & whichField)) {
    returnValue += _sfQuadraticAttenuation.getBinSize();
  }

  return returnValue;
}

void LightChunkBase::copyToBin(BinaryDataHandler& pMem, const BitVector& whichField) {
  Inherited::copyToBin(pMem, whichField);

  if (FieldBits::NoField != (DiffuseFieldMask & whichField)) {
    _sfDiffuse.copyToBin(pMem);
  }

  if (FieldBits::NoField != (AmbientFieldMask & whichField)) {
    _sfAmbient.copyToBin(pMem);
  }

  if (FieldBits::NoField != (SpecularFieldMask & whichField)) {
    _sfSpecular.copyToBin(pMem);
  }

  if (FieldBits::NoField != (PositionFieldMask & whichField)) {
    _sfPosition.copyToBin(pMem);
  }

  if (FieldBits::NoField != (DirectionFieldMask & whichField)) {
    _sfDirection.copyToBin(pMem);
  }

  if (FieldBits::NoField != (ExponentFieldMask & whichField)) {
    _sfExponent.copyToBin(pMem);
  }

  if (FieldBits::NoField != (CutoffFieldMask & whichField)) {
    _sfCutoff.copyToBin(pMem);
  }

  if (FieldBits::NoField != (ConstantAttenuationFieldMask & whichField)) {
    _sfConstantAttenuation.copyToBin(pMem);
  }

  if (FieldBits::NoField != (LinearAttenuationFieldMask & whichField)) {
    _sfLinearAttenuation.copyToBin(pMem);
  }

  if (FieldBits::NoField != (QuadraticAttenuationFieldMask & whichField)) {
    _sfQuadraticAttenuation.copyToBin(pMem);
  }
}

void LightChunkBase::copyFromBin(BinaryDataHandler& pMem, const BitVector& whichField) {
  Inherited::copyFromBin(pMem, whichField);

  if (FieldBits::NoField != (DiffuseFieldMask & whichField)) {
    _sfDiffuse.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (AmbientFieldMask & whichField)) {
    _sfAmbient.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (SpecularFieldMask & whichField)) {
    _sfSpecular.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (PositionFieldMask & whichField)) {
    _sfPosition.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (DirectionFieldMask & whichField)) {
    _sfDirection.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (ExponentFieldMask & whichField)) {
    _sfExponent.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (CutoffFieldMask & whichField)) {
    _sfCutoff.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (ConstantAttenuationFieldMask & whichField)) {
    _sfConstantAttenuation.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (LinearAttenuationFieldMask & whichField)) {
    _sfLinearAttenuation.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (QuadraticAttenuationFieldMask & whichField)) {
    _sfQuadraticAttenuation.copyFromBin(pMem);
  }
}

#if !defined(OSG_FIXED_MFIELDSYNC)
void LightChunkBase::executeSyncImpl(LightChunkBase* pOther, const BitVector& whichField) {

  Inherited::executeSyncImpl(pOther, whichField);

  if (FieldBits::NoField != (DiffuseFieldMask & whichField))
    _sfDiffuse.syncWith(pOther->_sfDiffuse);

  if (FieldBits::NoField != (AmbientFieldMask & whichField))
    _sfAmbient.syncWith(pOther->_sfAmbient);

  if (FieldBits::NoField != (SpecularFieldMask & whichField))
    _sfSpecular.syncWith(pOther->_sfSpecular);

  if (FieldBits::NoField != (PositionFieldMask & whichField))
    _sfPosition.syncWith(pOther->_sfPosition);

  if (FieldBits::NoField != (DirectionFieldMask & whichField))
    _sfDirection.syncWith(pOther->_sfDirection);

  if (FieldBits::NoField != (ExponentFieldMask & whichField))
    _sfExponent.syncWith(pOther->_sfExponent);

  if (FieldBits::NoField != (CutoffFieldMask & whichField))
    _sfCutoff.syncWith(pOther->_sfCutoff);

  if (FieldBits::NoField != (ConstantAttenuationFieldMask & whichField))
    _sfConstantAttenuation.syncWith(pOther->_sfConstantAttenuation);

  if (FieldBits::NoField != (LinearAttenuationFieldMask & whichField))
    _sfLinearAttenuation.syncWith(pOther->_sfLinearAttenuation);

  if (FieldBits::NoField != (QuadraticAttenuationFieldMask & whichField))
    _sfQuadraticAttenuation.syncWith(pOther->_sfQuadraticAttenuation);
}
#else
void LightChunkBase::executeSyncImpl(
    LightChunkBase* pOther, const BitVector& whichField, const SyncInfo& sInfo) {

  Inherited::executeSyncImpl(pOther, whichField, sInfo);

  if (FieldBits::NoField != (DiffuseFieldMask & whichField))
    _sfDiffuse.syncWith(pOther->_sfDiffuse);

  if (FieldBits::NoField != (AmbientFieldMask & whichField))
    _sfAmbient.syncWith(pOther->_sfAmbient);

  if (FieldBits::NoField != (SpecularFieldMask & whichField))
    _sfSpecular.syncWith(pOther->_sfSpecular);

  if (FieldBits::NoField != (PositionFieldMask & whichField))
    _sfPosition.syncWith(pOther->_sfPosition);

  if (FieldBits::NoField != (DirectionFieldMask & whichField))
    _sfDirection.syncWith(pOther->_sfDirection);

  if (FieldBits::NoField != (ExponentFieldMask & whichField))
    _sfExponent.syncWith(pOther->_sfExponent);

  if (FieldBits::NoField != (CutoffFieldMask & whichField))
    _sfCutoff.syncWith(pOther->_sfCutoff);

  if (FieldBits::NoField != (ConstantAttenuationFieldMask & whichField))
    _sfConstantAttenuation.syncWith(pOther->_sfConstantAttenuation);

  if (FieldBits::NoField != (LinearAttenuationFieldMask & whichField))
    _sfLinearAttenuation.syncWith(pOther->_sfLinearAttenuation);

  if (FieldBits::NoField != (QuadraticAttenuationFieldMask & whichField))
    _sfQuadraticAttenuation.syncWith(pOther->_sfQuadraticAttenuation);
}

void LightChunkBase::execBeginEditImpl(
    const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize) {
  Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}
#endif

#include <OSGSFieldTypeDef.inl>
#include <OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<LightChunkPtr>::_type("LightChunkPtr", "StateChunkPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(LightChunkPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(LightChunkPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);

OSG_END_NAMESPACE
