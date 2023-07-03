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
 **     class ProgramChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#define OSG_COMPILEPROGRAMCHUNKINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGProgramChunkBase.h"
#include "OSGProgramChunk.h"

OSG_USING_NAMESPACE

const OSG::BitVector ProgramChunkBase::ProgramFieldMask =
    (TypeTraits<BitVector>::One << ProgramChunkBase::ProgramFieldId);

const OSG::BitVector ProgramChunkBase::ParamValuesFieldMask =
    (TypeTraits<BitVector>::One << ProgramChunkBase::ParamValuesFieldId);

const OSG::BitVector ProgramChunkBase::ParamNamesFieldMask =
    (TypeTraits<BitVector>::One << ProgramChunkBase::ParamNamesFieldId);

const OSG::BitVector ProgramChunkBase::GLIdFieldMask =
    (TypeTraits<BitVector>::One << ProgramChunkBase::GLIdFieldId);

const OSG::BitVector ProgramChunkBase::MTInfluenceMask =
    (Inherited::MTInfluenceMask) | (static_cast<BitVector>(0x0) << Inherited::NextFieldId);

// Field descriptions

/*! \var std::string     ProgramChunkBase::_sfProgram
    The program source code.
*/
/*! \var Vec4f           ProgramChunkBase::_mfParamValues
    Program Parameters
*/
/*! \var std::string     ProgramChunkBase::_mfParamNames
    Symbolic names for the program parameters.
*/
/*! \var UInt32          ProgramChunkBase::_sfGLId
    The OpenGL ID of the program.
*/

//! ProgramChunk description

FieldDescription* ProgramChunkBase::_desc[] = {
    new FieldDescription(SFString::getClassType(), "program", ProgramFieldId, ProgramFieldMask,
        false, (FieldAccessMethod)&ProgramChunkBase::getSFProgram),
    new FieldDescription(MFVec4f::getClassType(), "paramValues", ParamValuesFieldId,
        ParamValuesFieldMask, false, (FieldAccessMethod)&ProgramChunkBase::getMFParamValues),
    new FieldDescription(MFString::getClassType(), "paramNames", ParamNamesFieldId,
        ParamNamesFieldMask, false, (FieldAccessMethod)&ProgramChunkBase::getMFParamNames),
    new FieldDescription(SFUInt32::getClassType(), "GLId", GLIdFieldId, GLIdFieldMask, true,
        (FieldAccessMethod)&ProgramChunkBase::getSFGLId)};

FieldContainerType ProgramChunkBase::_type(
    "ProgramChunk", "StateChunk", NULL, NULL, ProgramChunk::initMethod, _desc, sizeof(_desc));

// OSG_FIELD_CONTAINER_DEF(ProgramChunkBase, ProgramChunkPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType& ProgramChunkBase::getType(void) {
  return _type;
}

const FieldContainerType& ProgramChunkBase::getType(void) const {
  return _type;
}

UInt32 ProgramChunkBase::getContainerSize(void) const {
  return sizeof(ProgramChunk);
}

#if !defined(OSG_FIXED_MFIELDSYNC)
void ProgramChunkBase::executeSync(FieldContainer& other, const BitVector& whichField) {
  this->executeSyncImpl((ProgramChunkBase*)&other, whichField);
}
#else
void ProgramChunkBase::executeSync(
    FieldContainer& other, const BitVector& whichField, const SyncInfo& sInfo) {
  this->executeSyncImpl((ProgramChunkBase*)&other, whichField, sInfo);
}
void ProgramChunkBase::execBeginEdit(
    const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize) {
  this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void ProgramChunkBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect) {
  Inherited::onDestroyAspect(uiId, uiAspect);

  _mfParamValues.terminateShare(uiAspect, this->getContainerSize());
  _mfParamNames.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning(disable : 383)
#endif

ProgramChunkBase::ProgramChunkBase(void)
    : _sfProgram()
    , _mfParamValues()
    , _mfParamNames()
    , _sfGLId(UInt32(0))
    , Inherited() {
}

#ifdef OSG_WIN32_ICL
#pragma warning(default : 383)
#endif

ProgramChunkBase::ProgramChunkBase(const ProgramChunkBase& source)
    : _sfProgram(source._sfProgram)
    , _mfParamValues(source._mfParamValues)
    , _mfParamNames(source._mfParamNames)
    , _sfGLId(source._sfGLId)
    , Inherited(source) {
}

/*-------------------------- destructors ----------------------------------*/

ProgramChunkBase::~ProgramChunkBase(void) {
}

/*------------------------------ access -----------------------------------*/

UInt32 ProgramChunkBase::getBinSize(const BitVector& whichField) {
  UInt32 returnValue = Inherited::getBinSize(whichField);

  if (FieldBits::NoField != (ProgramFieldMask & whichField)) {
    returnValue += _sfProgram.getBinSize();
  }

  if (FieldBits::NoField != (ParamValuesFieldMask & whichField)) {
    returnValue += _mfParamValues.getBinSize();
  }

  if (FieldBits::NoField != (ParamNamesFieldMask & whichField)) {
    returnValue += _mfParamNames.getBinSize();
  }

  if (FieldBits::NoField != (GLIdFieldMask & whichField)) {
    returnValue += _sfGLId.getBinSize();
  }

  return returnValue;
}

void ProgramChunkBase::copyToBin(BinaryDataHandler& pMem, const BitVector& whichField) {
  Inherited::copyToBin(pMem, whichField);

  if (FieldBits::NoField != (ProgramFieldMask & whichField)) {
    _sfProgram.copyToBin(pMem);
  }

  if (FieldBits::NoField != (ParamValuesFieldMask & whichField)) {
    _mfParamValues.copyToBin(pMem);
  }

  if (FieldBits::NoField != (ParamNamesFieldMask & whichField)) {
    _mfParamNames.copyToBin(pMem);
  }

  if (FieldBits::NoField != (GLIdFieldMask & whichField)) {
    _sfGLId.copyToBin(pMem);
  }
}

void ProgramChunkBase::copyFromBin(BinaryDataHandler& pMem, const BitVector& whichField) {
  Inherited::copyFromBin(pMem, whichField);

  if (FieldBits::NoField != (ProgramFieldMask & whichField)) {
    _sfProgram.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (ParamValuesFieldMask & whichField)) {
    _mfParamValues.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (ParamNamesFieldMask & whichField)) {
    _mfParamNames.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (GLIdFieldMask & whichField)) {
    _sfGLId.copyFromBin(pMem);
  }
}

#if !defined(OSG_FIXED_MFIELDSYNC)
void ProgramChunkBase::executeSyncImpl(ProgramChunkBase* pOther, const BitVector& whichField) {

  Inherited::executeSyncImpl(pOther, whichField);

  if (FieldBits::NoField != (ProgramFieldMask & whichField))
    _sfProgram.syncWith(pOther->_sfProgram);

  if (FieldBits::NoField != (ParamValuesFieldMask & whichField))
    _mfParamValues.syncWith(pOther->_mfParamValues);

  if (FieldBits::NoField != (ParamNamesFieldMask & whichField))
    _mfParamNames.syncWith(pOther->_mfParamNames);

  if (FieldBits::NoField != (GLIdFieldMask & whichField))
    _sfGLId.syncWith(pOther->_sfGLId);
}
#else
void ProgramChunkBase::executeSyncImpl(
    ProgramChunkBase* pOther, const BitVector& whichField, const SyncInfo& sInfo) {

  Inherited::executeSyncImpl(pOther, whichField, sInfo);

  if (FieldBits::NoField != (ProgramFieldMask & whichField))
    _sfProgram.syncWith(pOther->_sfProgram);

  if (FieldBits::NoField != (GLIdFieldMask & whichField))
    _sfGLId.syncWith(pOther->_sfGLId);

  if (FieldBits::NoField != (ParamValuesFieldMask & whichField))
    _mfParamValues.syncWith(pOther->_mfParamValues, sInfo);

  if (FieldBits::NoField != (ParamNamesFieldMask & whichField))
    _mfParamNames.syncWith(pOther->_mfParamNames, sInfo);
}

void ProgramChunkBase::execBeginEditImpl(
    const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize) {
  Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

  if (FieldBits::NoField != (ParamValuesFieldMask & whichField))
    _mfParamValues.beginEdit(uiAspect, uiContainerSize);

  if (FieldBits::NoField != (ParamNamesFieldMask & whichField))
    _mfParamNames.beginEdit(uiAspect, uiContainerSize);
}
#endif

#include <OSGSFieldTypeDef.inl>
#include <OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<ProgramChunkPtr>::_type("ProgramChunkPtr", "StateChunkPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(ProgramChunkPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(ProgramChunkPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);

OSG_END_NAMESPACE
