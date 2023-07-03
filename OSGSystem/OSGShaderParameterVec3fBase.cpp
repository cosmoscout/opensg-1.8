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
 **     class ShaderParameterVec3f!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#define OSG_COMPILESHADERPARAMETERVEC3FINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGShaderParameterVec3fBase.h"
#include "OSGShaderParameterVec3f.h"

OSG_USING_NAMESPACE

const OSG::BitVector ShaderParameterVec3fBase::ValueFieldMask =
    (TypeTraits<BitVector>::One << ShaderParameterVec3fBase::ValueFieldId);

const OSG::BitVector ShaderParameterVec3fBase::MTInfluenceMask =
    (Inherited::MTInfluenceMask) | (static_cast<BitVector>(0x0) << Inherited::NextFieldId);

// Field descriptions

/*! \var Vec3f           ShaderParameterVec3fBase::_sfValue
    parameter value
*/

//! ShaderParameterVec3f description

FieldDescription* ShaderParameterVec3fBase::_desc[] = {
    new FieldDescription(SFVec3f::getClassType(), "value", ValueFieldId, ValueFieldMask, false,
        (FieldAccessMethod)&ShaderParameterVec3fBase::getSFValue)};

FieldContainerType ShaderParameterVec3fBase::_type("ShaderParameterVec3f", "ShaderParameter", NULL,
    (PrototypeCreateF)&ShaderParameterVec3fBase::createEmpty, ShaderParameterVec3f::initMethod,
    _desc, sizeof(_desc));

// OSG_FIELD_CONTAINER_DEF(ShaderParameterVec3fBase, ShaderParameterVec3fPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType& ShaderParameterVec3fBase::getType(void) {
  return _type;
}

const FieldContainerType& ShaderParameterVec3fBase::getType(void) const {
  return _type;
}

FieldContainerPtr ShaderParameterVec3fBase::shallowCopy(void) const {
  ShaderParameterVec3fPtr returnValue;

  newPtr(returnValue, dynamic_cast<const ShaderParameterVec3f*>(this));

  return returnValue;
}

UInt32 ShaderParameterVec3fBase::getContainerSize(void) const {
  return sizeof(ShaderParameterVec3f);
}

#if !defined(OSG_FIXED_MFIELDSYNC)
void ShaderParameterVec3fBase::executeSync(FieldContainer& other, const BitVector& whichField) {
  this->executeSyncImpl((ShaderParameterVec3fBase*)&other, whichField);
}
#else
void ShaderParameterVec3fBase::executeSync(
    FieldContainer& other, const BitVector& whichField, const SyncInfo& sInfo) {
  this->executeSyncImpl((ShaderParameterVec3fBase*)&other, whichField, sInfo);
}
void ShaderParameterVec3fBase::execBeginEdit(
    const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize) {
  this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void ShaderParameterVec3fBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect) {
  Inherited::onDestroyAspect(uiId, uiAspect);
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning(disable : 383)
#endif

ShaderParameterVec3fBase::ShaderParameterVec3fBase(void)
    : _sfValue()
    , Inherited() {
}

#ifdef OSG_WIN32_ICL
#pragma warning(default : 383)
#endif

ShaderParameterVec3fBase::ShaderParameterVec3fBase(const ShaderParameterVec3fBase& source)
    : _sfValue(source._sfValue)
    , Inherited(source) {
}

/*-------------------------- destructors ----------------------------------*/

ShaderParameterVec3fBase::~ShaderParameterVec3fBase(void) {
}

/*------------------------------ access -----------------------------------*/

UInt32 ShaderParameterVec3fBase::getBinSize(const BitVector& whichField) {
  UInt32 returnValue = Inherited::getBinSize(whichField);

  if (FieldBits::NoField != (ValueFieldMask & whichField)) {
    returnValue += _sfValue.getBinSize();
  }

  return returnValue;
}

void ShaderParameterVec3fBase::copyToBin(BinaryDataHandler& pMem, const BitVector& whichField) {
  Inherited::copyToBin(pMem, whichField);

  if (FieldBits::NoField != (ValueFieldMask & whichField)) {
    _sfValue.copyToBin(pMem);
  }
}

void ShaderParameterVec3fBase::copyFromBin(BinaryDataHandler& pMem, const BitVector& whichField) {
  Inherited::copyFromBin(pMem, whichField);

  if (FieldBits::NoField != (ValueFieldMask & whichField)) {
    _sfValue.copyFromBin(pMem);
  }
}

#if !defined(OSG_FIXED_MFIELDSYNC)
void ShaderParameterVec3fBase::executeSyncImpl(
    ShaderParameterVec3fBase* pOther, const BitVector& whichField) {

  Inherited::executeSyncImpl(pOther, whichField);

  if (FieldBits::NoField != (ValueFieldMask & whichField))
    _sfValue.syncWith(pOther->_sfValue);
}
#else
void ShaderParameterVec3fBase::executeSyncImpl(
    ShaderParameterVec3fBase* pOther, const BitVector& whichField, const SyncInfo& sInfo) {

  Inherited::executeSyncImpl(pOther, whichField, sInfo);

  if (FieldBits::NoField != (ValueFieldMask & whichField))
    _sfValue.syncWith(pOther->_sfValue);
}

void ShaderParameterVec3fBase::execBeginEditImpl(
    const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize) {
  Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}
#endif

#include <OSGSFieldTypeDef.inl>
#include <OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<ShaderParameterVec3fPtr>::_type(
    "ShaderParameterVec3fPtr", "ShaderParameterPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(ShaderParameterVec3fPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(ShaderParameterVec3fPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);

OSG_END_NAMESPACE
