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
 **     class ShaderParameterChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#define OSG_COMPILESHADERPARAMETERCHUNKINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGShaderParameterChunkBase.h"
#include "OSGShaderParameterChunk.h"

OSG_USING_NAMESPACE

const OSG::BitVector ShaderParameterChunkBase::ParametersFieldMask =
    (TypeTraits<BitVector>::One << ShaderParameterChunkBase::ParametersFieldId);

const OSG::BitVector ShaderParameterChunkBase::MTInfluenceMask =
    (Inherited::MTInfluenceMask) | (static_cast<BitVector>(0x0) << Inherited::NextFieldId);

// Field descriptions

/*! \var ShaderParameterPtr ShaderParameterChunkBase::_mfParameters
    parameter list
*/

//! ShaderParameterChunk description

FieldDescription* ShaderParameterChunkBase::_desc[] = {
    new FieldDescription(MFShaderParameterPtr::getClassType(), "parameters", ParametersFieldId,
        ParametersFieldMask, false, (FieldAccessMethod)&ShaderParameterChunkBase::getMFParameters)};

FieldContainerType ShaderParameterChunkBase::_type("ShaderParameterChunk", "StateChunk", NULL, NULL,
    ShaderParameterChunk::initMethod, _desc, sizeof(_desc));

// OSG_FIELD_CONTAINER_DEF(ShaderParameterChunkBase, ShaderParameterChunkPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType& ShaderParameterChunkBase::getType(void) {
  return _type;
}

const FieldContainerType& ShaderParameterChunkBase::getType(void) const {
  return _type;
}

UInt32 ShaderParameterChunkBase::getContainerSize(void) const {
  return sizeof(ShaderParameterChunk);
}

#if !defined(OSG_FIXED_MFIELDSYNC)
void ShaderParameterChunkBase::executeSync(FieldContainer& other, const BitVector& whichField) {
  this->executeSyncImpl((ShaderParameterChunkBase*)&other, whichField);
}
#else
void ShaderParameterChunkBase::executeSync(
    FieldContainer& other, const BitVector& whichField, const SyncInfo& sInfo) {
  this->executeSyncImpl((ShaderParameterChunkBase*)&other, whichField, sInfo);
}
void ShaderParameterChunkBase::execBeginEdit(
    const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize) {
  this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void ShaderParameterChunkBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect) {
  Inherited::onDestroyAspect(uiId, uiAspect);

  _mfParameters.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning(disable : 383)
#endif

ShaderParameterChunkBase::ShaderParameterChunkBase(void)
    : _mfParameters()
    , Inherited() {
}

#ifdef OSG_WIN32_ICL
#pragma warning(default : 383)
#endif

ShaderParameterChunkBase::ShaderParameterChunkBase(const ShaderParameterChunkBase& source)
    : _mfParameters(source._mfParameters)
    , Inherited(source) {
}

/*-------------------------- destructors ----------------------------------*/

ShaderParameterChunkBase::~ShaderParameterChunkBase(void) {
}

/*------------------------------ access -----------------------------------*/

UInt32 ShaderParameterChunkBase::getBinSize(const BitVector& whichField) {
  UInt32 returnValue = Inherited::getBinSize(whichField);

  if (FieldBits::NoField != (ParametersFieldMask & whichField)) {
    returnValue += _mfParameters.getBinSize();
  }

  return returnValue;
}

void ShaderParameterChunkBase::copyToBin(BinaryDataHandler& pMem, const BitVector& whichField) {
  Inherited::copyToBin(pMem, whichField);

  if (FieldBits::NoField != (ParametersFieldMask & whichField)) {
    _mfParameters.copyToBin(pMem);
  }
}

void ShaderParameterChunkBase::copyFromBin(BinaryDataHandler& pMem, const BitVector& whichField) {
  Inherited::copyFromBin(pMem, whichField);

  if (FieldBits::NoField != (ParametersFieldMask & whichField)) {
    _mfParameters.copyFromBin(pMem);
  }
}

#if !defined(OSG_FIXED_MFIELDSYNC)
void ShaderParameterChunkBase::executeSyncImpl(
    ShaderParameterChunkBase* pOther, const BitVector& whichField) {

  Inherited::executeSyncImpl(pOther, whichField);

  if (FieldBits::NoField != (ParametersFieldMask & whichField))
    _mfParameters.syncWith(pOther->_mfParameters);
}
#else
void ShaderParameterChunkBase::executeSyncImpl(
    ShaderParameterChunkBase* pOther, const BitVector& whichField, const SyncInfo& sInfo) {

  Inherited::executeSyncImpl(pOther, whichField, sInfo);

  if (FieldBits::NoField != (ParametersFieldMask & whichField))
    _mfParameters.syncWith(pOther->_mfParameters, sInfo);
}

void ShaderParameterChunkBase::execBeginEditImpl(
    const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize) {
  Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

  if (FieldBits::NoField != (ParametersFieldMask & whichField))
    _mfParameters.beginEdit(uiAspect, uiContainerSize);
}
#endif

#include <OSGSFieldTypeDef.inl>
#include <OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<ShaderParameterChunkPtr>::_type(
    "ShaderParameterChunkPtr", "StateChunkPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(ShaderParameterChunkPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(ShaderParameterChunkPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);

OSG_END_NAMESPACE
