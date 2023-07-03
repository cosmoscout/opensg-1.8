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
 **     class ComponentTransform!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#define OSG_COMPILECOMPONENTTRANSFORMINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGComponentTransformBase.h"
#include "OSGComponentTransform.h"

OSG_USING_NAMESPACE

const OSG::BitVector ComponentTransformBase::CenterFieldMask =
    (TypeTraits<BitVector>::One << ComponentTransformBase::CenterFieldId);

const OSG::BitVector ComponentTransformBase::RotationFieldMask =
    (TypeTraits<BitVector>::One << ComponentTransformBase::RotationFieldId);

const OSG::BitVector ComponentTransformBase::ScaleFieldMask =
    (TypeTraits<BitVector>::One << ComponentTransformBase::ScaleFieldId);

const OSG::BitVector ComponentTransformBase::ScaleOrientationFieldMask =
    (TypeTraits<BitVector>::One << ComponentTransformBase::ScaleOrientationFieldId);

const OSG::BitVector ComponentTransformBase::TranslationFieldMask =
    (TypeTraits<BitVector>::One << ComponentTransformBase::TranslationFieldId);

const OSG::BitVector ComponentTransformBase::MTInfluenceMask =
    (Inherited::MTInfluenceMask) | (static_cast<BitVector>(0x0) << Inherited::NextFieldId);

// Field descriptions

/*! \var Vec3f           ComponentTransformBase::_sfCenter

*/
/*! \var Quaternion      ComponentTransformBase::_sfRotation

*/
/*! \var Vec3f           ComponentTransformBase::_sfScale

*/
/*! \var Quaternion      ComponentTransformBase::_sfScaleOrientation

*/
/*! \var Vec3f           ComponentTransformBase::_sfTranslation

*/

//! ComponentTransform description

FieldDescription* ComponentTransformBase::_desc[] = {
    new FieldDescription(SFVec3f::getClassType(), "center", CenterFieldId, CenterFieldMask, false,
        (FieldAccessMethod)&ComponentTransformBase::getSFCenter),
    new FieldDescription(SFQuaternion::getClassType(), "rotation", RotationFieldId,
        RotationFieldMask, false, (FieldAccessMethod)&ComponentTransformBase::getSFRotation),
    new FieldDescription(SFVec3f::getClassType(), "scale", ScaleFieldId, ScaleFieldMask, false,
        (FieldAccessMethod)&ComponentTransformBase::getSFScale),
    new FieldDescription(SFQuaternion::getClassType(), "scaleOrientation", ScaleOrientationFieldId,
        ScaleOrientationFieldMask, false,
        (FieldAccessMethod)&ComponentTransformBase::getSFScaleOrientation),
    new FieldDescription(SFVec3f::getClassType(), "translation", TranslationFieldId,
        TranslationFieldMask, false, (FieldAccessMethod)&ComponentTransformBase::getSFTranslation)};

FieldContainerType ComponentTransformBase::_type("ComponentTransform", "Transform", NULL,
    (PrototypeCreateF)&ComponentTransformBase::createEmpty, ComponentTransform::initMethod, _desc,
    sizeof(_desc));

// OSG_FIELD_CONTAINER_DEF(ComponentTransformBase, ComponentTransformPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType& ComponentTransformBase::getType(void) {
  return _type;
}

const FieldContainerType& ComponentTransformBase::getType(void) const {
  return _type;
}

FieldContainerPtr ComponentTransformBase::shallowCopy(void) const {
  ComponentTransformPtr returnValue;

  newPtr(returnValue, dynamic_cast<const ComponentTransform*>(this));

  return returnValue;
}

UInt32 ComponentTransformBase::getContainerSize(void) const {
  return sizeof(ComponentTransform);
}

#if !defined(OSG_FIXED_MFIELDSYNC)
void ComponentTransformBase::executeSync(FieldContainer& other, const BitVector& whichField) {
  this->executeSyncImpl((ComponentTransformBase*)&other, whichField);
}
#else
void ComponentTransformBase::executeSync(
    FieldContainer& other, const BitVector& whichField, const SyncInfo& sInfo) {
  this->executeSyncImpl((ComponentTransformBase*)&other, whichField, sInfo);
}
void ComponentTransformBase::execBeginEdit(
    const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize) {
  this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void ComponentTransformBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect) {
  Inherited::onDestroyAspect(uiId, uiAspect);
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning(disable : 383)
#endif

ComponentTransformBase::ComponentTransformBase(void)
    : _sfCenter()
    , _sfRotation()
    , _sfScale()
    , _sfScaleOrientation()
    , _sfTranslation()
    , Inherited() {
}

#ifdef OSG_WIN32_ICL
#pragma warning(default : 383)
#endif

ComponentTransformBase::ComponentTransformBase(const ComponentTransformBase& source)
    : _sfCenter(source._sfCenter)
    , _sfRotation(source._sfRotation)
    , _sfScale(source._sfScale)
    , _sfScaleOrientation(source._sfScaleOrientation)
    , _sfTranslation(source._sfTranslation)
    , Inherited(source) {
}

/*-------------------------- destructors ----------------------------------*/

ComponentTransformBase::~ComponentTransformBase(void) {
}

/*------------------------------ access -----------------------------------*/

UInt32 ComponentTransformBase::getBinSize(const BitVector& whichField) {
  UInt32 returnValue = Inherited::getBinSize(whichField);

  if (FieldBits::NoField != (CenterFieldMask & whichField)) {
    returnValue += _sfCenter.getBinSize();
  }

  if (FieldBits::NoField != (RotationFieldMask & whichField)) {
    returnValue += _sfRotation.getBinSize();
  }

  if (FieldBits::NoField != (ScaleFieldMask & whichField)) {
    returnValue += _sfScale.getBinSize();
  }

  if (FieldBits::NoField != (ScaleOrientationFieldMask & whichField)) {
    returnValue += _sfScaleOrientation.getBinSize();
  }

  if (FieldBits::NoField != (TranslationFieldMask & whichField)) {
    returnValue += _sfTranslation.getBinSize();
  }

  return returnValue;
}

void ComponentTransformBase::copyToBin(BinaryDataHandler& pMem, const BitVector& whichField) {
  Inherited::copyToBin(pMem, whichField);

  if (FieldBits::NoField != (CenterFieldMask & whichField)) {
    _sfCenter.copyToBin(pMem);
  }

  if (FieldBits::NoField != (RotationFieldMask & whichField)) {
    _sfRotation.copyToBin(pMem);
  }

  if (FieldBits::NoField != (ScaleFieldMask & whichField)) {
    _sfScale.copyToBin(pMem);
  }

  if (FieldBits::NoField != (ScaleOrientationFieldMask & whichField)) {
    _sfScaleOrientation.copyToBin(pMem);
  }

  if (FieldBits::NoField != (TranslationFieldMask & whichField)) {
    _sfTranslation.copyToBin(pMem);
  }
}

void ComponentTransformBase::copyFromBin(BinaryDataHandler& pMem, const BitVector& whichField) {
  Inherited::copyFromBin(pMem, whichField);

  if (FieldBits::NoField != (CenterFieldMask & whichField)) {
    _sfCenter.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (RotationFieldMask & whichField)) {
    _sfRotation.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (ScaleFieldMask & whichField)) {
    _sfScale.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (ScaleOrientationFieldMask & whichField)) {
    _sfScaleOrientation.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (TranslationFieldMask & whichField)) {
    _sfTranslation.copyFromBin(pMem);
  }
}

#if !defined(OSG_FIXED_MFIELDSYNC)
void ComponentTransformBase::executeSyncImpl(
    ComponentTransformBase* pOther, const BitVector& whichField) {

  Inherited::executeSyncImpl(pOther, whichField);

  if (FieldBits::NoField != (CenterFieldMask & whichField))
    _sfCenter.syncWith(pOther->_sfCenter);

  if (FieldBits::NoField != (RotationFieldMask & whichField))
    _sfRotation.syncWith(pOther->_sfRotation);

  if (FieldBits::NoField != (ScaleFieldMask & whichField))
    _sfScale.syncWith(pOther->_sfScale);

  if (FieldBits::NoField != (ScaleOrientationFieldMask & whichField))
    _sfScaleOrientation.syncWith(pOther->_sfScaleOrientation);

  if (FieldBits::NoField != (TranslationFieldMask & whichField))
    _sfTranslation.syncWith(pOther->_sfTranslation);
}
#else
void ComponentTransformBase::executeSyncImpl(
    ComponentTransformBase* pOther, const BitVector& whichField, const SyncInfo& sInfo) {

  Inherited::executeSyncImpl(pOther, whichField, sInfo);

  if (FieldBits::NoField != (CenterFieldMask & whichField))
    _sfCenter.syncWith(pOther->_sfCenter);

  if (FieldBits::NoField != (RotationFieldMask & whichField))
    _sfRotation.syncWith(pOther->_sfRotation);

  if (FieldBits::NoField != (ScaleFieldMask & whichField))
    _sfScale.syncWith(pOther->_sfScale);

  if (FieldBits::NoField != (ScaleOrientationFieldMask & whichField))
    _sfScaleOrientation.syncWith(pOther->_sfScaleOrientation);

  if (FieldBits::NoField != (TranslationFieldMask & whichField))
    _sfTranslation.syncWith(pOther->_sfTranslation);
}

void ComponentTransformBase::execBeginEditImpl(
    const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize) {
  Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}
#endif

#include <OSGSFieldTypeDef.inl>
#include <OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<ComponentTransformPtr>::_type("ComponentTransformPtr", "TransformPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(ComponentTransformPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(ComponentTransformPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);

OSG_END_NAMESPACE
