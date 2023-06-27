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
 **     class StereoCameraDecorator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#define OSG_COMPILESTEREOCAMERADECORATORINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGStereoCameraDecoratorBase.h"
#include "OSGStereoCameraDecorator.h"

OSG_USING_NAMESPACE

const OSG::BitVector StereoCameraDecoratorBase::LeftEyeFieldMask =
    (TypeTraits<BitVector>::One << StereoCameraDecoratorBase::LeftEyeFieldId);

const OSG::BitVector StereoCameraDecoratorBase::EyeSeparationFieldMask =
    (TypeTraits<BitVector>::One << StereoCameraDecoratorBase::EyeSeparationFieldId);

const OSG::BitVector StereoCameraDecoratorBase::MTInfluenceMask =
    (Inherited::MTInfluenceMask) | (static_cast<BitVector>(0x0) << Inherited::NextFieldId);

// Field descriptions

/*! \var bool            StereoCameraDecoratorBase::_sfLeftEye
    Flag to distinguish between left and right eye views.
*/
/*! \var Real32          StereoCameraDecoratorBase::_sfEyeSeparation
    The distance between the two eyes.
*/

//! StereoCameraDecorator description

FieldDescription* StereoCameraDecoratorBase::_desc[] = {
    new FieldDescription(SFBool::getClassType(), "leftEye", LeftEyeFieldId, LeftEyeFieldMask, false,
        (FieldAccessMethod)&StereoCameraDecoratorBase::getSFLeftEye),
    new FieldDescription(SFReal32::getClassType(), "eyeSeparation", EyeSeparationFieldId,
        EyeSeparationFieldMask, false,
        (FieldAccessMethod)&StereoCameraDecoratorBase::getSFEyeSeparation)};

FieldContainerType StereoCameraDecoratorBase::_type("StereoCameraDecorator", "CameraDecorator",
    NULL, NULL, StereoCameraDecorator::initMethod, _desc, sizeof(_desc));

// OSG_FIELD_CONTAINER_DEF(StereoCameraDecoratorBase, StereoCameraDecoratorPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType& StereoCameraDecoratorBase::getType(void) {
  return _type;
}

const FieldContainerType& StereoCameraDecoratorBase::getType(void) const {
  return _type;
}

UInt32 StereoCameraDecoratorBase::getContainerSize(void) const {
  return sizeof(StereoCameraDecorator);
}

#if !defined(OSG_FIXED_MFIELDSYNC)
void StereoCameraDecoratorBase::executeSync(FieldContainer& other, const BitVector& whichField) {
  this->executeSyncImpl((StereoCameraDecoratorBase*)&other, whichField);
}
#else
void StereoCameraDecoratorBase::executeSync(
    FieldContainer& other, const BitVector& whichField, const SyncInfo& sInfo) {
  this->executeSyncImpl((StereoCameraDecoratorBase*)&other, whichField, sInfo);
}
void StereoCameraDecoratorBase::execBeginEdit(
    const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize) {
  this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void StereoCameraDecoratorBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect) {
  Inherited::onDestroyAspect(uiId, uiAspect);
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning(disable : 383)
#endif

StereoCameraDecoratorBase::StereoCameraDecoratorBase(void)
    : _sfLeftEye()
    , _sfEyeSeparation()
    , Inherited() {
}

#ifdef OSG_WIN32_ICL
#pragma warning(default : 383)
#endif

StereoCameraDecoratorBase::StereoCameraDecoratorBase(const StereoCameraDecoratorBase& source)
    : _sfLeftEye(source._sfLeftEye)
    , _sfEyeSeparation(source._sfEyeSeparation)
    , Inherited(source) {
}

/*-------------------------- destructors ----------------------------------*/

StereoCameraDecoratorBase::~StereoCameraDecoratorBase(void) {
}

/*------------------------------ access -----------------------------------*/

UInt32 StereoCameraDecoratorBase::getBinSize(const BitVector& whichField) {
  UInt32 returnValue = Inherited::getBinSize(whichField);

  if (FieldBits::NoField != (LeftEyeFieldMask & whichField)) {
    returnValue += _sfLeftEye.getBinSize();
  }

  if (FieldBits::NoField != (EyeSeparationFieldMask & whichField)) {
    returnValue += _sfEyeSeparation.getBinSize();
  }

  return returnValue;
}

void StereoCameraDecoratorBase::copyToBin(BinaryDataHandler& pMem, const BitVector& whichField) {
  Inherited::copyToBin(pMem, whichField);

  if (FieldBits::NoField != (LeftEyeFieldMask & whichField)) {
    _sfLeftEye.copyToBin(pMem);
  }

  if (FieldBits::NoField != (EyeSeparationFieldMask & whichField)) {
    _sfEyeSeparation.copyToBin(pMem);
  }
}

void StereoCameraDecoratorBase::copyFromBin(BinaryDataHandler& pMem, const BitVector& whichField) {
  Inherited::copyFromBin(pMem, whichField);

  if (FieldBits::NoField != (LeftEyeFieldMask & whichField)) {
    _sfLeftEye.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (EyeSeparationFieldMask & whichField)) {
    _sfEyeSeparation.copyFromBin(pMem);
  }
}

#if !defined(OSG_FIXED_MFIELDSYNC)
void StereoCameraDecoratorBase::executeSyncImpl(
    StereoCameraDecoratorBase* pOther, const BitVector& whichField) {

  Inherited::executeSyncImpl(pOther, whichField);

  if (FieldBits::NoField != (LeftEyeFieldMask & whichField))
    _sfLeftEye.syncWith(pOther->_sfLeftEye);

  if (FieldBits::NoField != (EyeSeparationFieldMask & whichField))
    _sfEyeSeparation.syncWith(pOther->_sfEyeSeparation);
}
#else
void StereoCameraDecoratorBase::executeSyncImpl(
    StereoCameraDecoratorBase* pOther, const BitVector& whichField, const SyncInfo& sInfo) {

  Inherited::executeSyncImpl(pOther, whichField, sInfo);

  if (FieldBits::NoField != (LeftEyeFieldMask & whichField))
    _sfLeftEye.syncWith(pOther->_sfLeftEye);

  if (FieldBits::NoField != (EyeSeparationFieldMask & whichField))
    _sfEyeSeparation.syncWith(pOther->_sfEyeSeparation);
}

void StereoCameraDecoratorBase::execBeginEditImpl(
    const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize) {
  Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}
#endif

#include <OSGSFieldTypeDef.inl>
#include <OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<StereoCameraDecoratorPtr>::_type(
    "StereoCameraDecoratorPtr", "CameraDecoratorPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(StereoCameraDecoratorPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(StereoCameraDecoratorPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);

OSG_END_NAMESPACE
