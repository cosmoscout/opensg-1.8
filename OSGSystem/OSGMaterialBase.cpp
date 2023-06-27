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
 **     class Material!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#define OSG_COMPILEMATERIALINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGMaterialBase.h"
#include "OSGMaterial.h"

OSG_BEGIN_NAMESPACE

const OSG::BitVector MaterialBase::SortKeyFieldMask =
    (TypeTraits<BitVector>::One << MaterialBase::SortKeyFieldId);

const OSG::BitVector MaterialBase::TransparencyModeFieldMask =
    (TypeTraits<BitVector>::One << MaterialBase::TransparencyModeFieldId);

const OSG::BitVector MaterialBase::MTInfluenceMask =
    (Inherited::MTInfluenceMask) | (static_cast<BitVector>(0x0) << Inherited::NextFieldId);

// Field descriptions

/*! \var Int32           MaterialBase::_sfSortKey

*/
/*! \var Int32           MaterialBase::_sfTransparencyMode
    Set the transparency mode, possible values are TransparencyAutoDetection,
   TransparencyForceTransparent and TransparencyForceOpaque
*/

//! Material description

FieldDescription* MaterialBase::_desc[] = {
    new FieldDescription(SFInt32::getClassType(), "sortKey", SortKeyFieldId, SortKeyFieldMask,
        false, (FieldAccessMethod)&MaterialBase::getSFSortKey),
    new FieldDescription(SFInt32::getClassType(), "transparencyMode", TransparencyModeFieldId,
        TransparencyModeFieldMask, false, (FieldAccessMethod)&MaterialBase::getSFTransparencyMode)};

FieldContainerType MaterialBase::_type(
    "Material", "AttachmentContainer", NULL, NULL, Material::initMethod, _desc, sizeof(_desc));

// OSG_FIELD_CONTAINER_DEF(MaterialBase, MaterialPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType& MaterialBase::getType(void) {
  return _type;
}

const FieldContainerType& MaterialBase::getType(void) const {
  return _type;
}

UInt32 MaterialBase::getContainerSize(void) const {
  return sizeof(Material);
}

#if !defined(OSG_FIXED_MFIELDSYNC)
void MaterialBase::executeSync(FieldContainer& other, const BitVector& whichField) {
  this->executeSyncImpl((MaterialBase*)&other, whichField);
}
#else
void MaterialBase::executeSync(
    FieldContainer& other, const BitVector& whichField, const SyncInfo& sInfo) {
  this->executeSyncImpl((MaterialBase*)&other, whichField, sInfo);
}
void MaterialBase::execBeginEdit(
    const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize) {
  this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void MaterialBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect) {
  Inherited::onDestroyAspect(uiId, uiAspect);
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning(disable : 383)
#endif

MaterialBase::MaterialBase(void)
    : _sfSortKey(Int32(0))
    , _sfTransparencyMode(Int32(0))
    , Inherited() {
}

#ifdef OSG_WIN32_ICL
#pragma warning(default : 383)
#endif

MaterialBase::MaterialBase(const MaterialBase& source)
    : _sfSortKey(source._sfSortKey)
    , _sfTransparencyMode(source._sfTransparencyMode)
    , Inherited(source) {
}

/*-------------------------- destructors ----------------------------------*/

MaterialBase::~MaterialBase(void) {
}

/*------------------------------ access -----------------------------------*/

UInt32 MaterialBase::getBinSize(const BitVector& whichField) {
  UInt32 returnValue = Inherited::getBinSize(whichField);

  if (FieldBits::NoField != (SortKeyFieldMask & whichField)) {
    returnValue += _sfSortKey.getBinSize();
  }

  if (FieldBits::NoField != (TransparencyModeFieldMask & whichField)) {
    returnValue += _sfTransparencyMode.getBinSize();
  }

  return returnValue;
}

void MaterialBase::copyToBin(BinaryDataHandler& pMem, const BitVector& whichField) {
  Inherited::copyToBin(pMem, whichField);

  if (FieldBits::NoField != (SortKeyFieldMask & whichField)) {
    _sfSortKey.copyToBin(pMem);
  }

  if (FieldBits::NoField != (TransparencyModeFieldMask & whichField)) {
    _sfTransparencyMode.copyToBin(pMem);
  }
}

void MaterialBase::copyFromBin(BinaryDataHandler& pMem, const BitVector& whichField) {
  Inherited::copyFromBin(pMem, whichField);

  if (FieldBits::NoField != (SortKeyFieldMask & whichField)) {
    _sfSortKey.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (TransparencyModeFieldMask & whichField)) {
    _sfTransparencyMode.copyFromBin(pMem);
  }
}

#if !defined(OSG_FIXED_MFIELDSYNC)
void MaterialBase::executeSyncImpl(MaterialBase* pOther, const BitVector& whichField) {

  Inherited::executeSyncImpl(pOther, whichField);

  if (FieldBits::NoField != (SortKeyFieldMask & whichField))
    _sfSortKey.syncWith(pOther->_sfSortKey);

  if (FieldBits::NoField != (TransparencyModeFieldMask & whichField))
    _sfTransparencyMode.syncWith(pOther->_sfTransparencyMode);
}
#else
void MaterialBase::executeSyncImpl(
    MaterialBase* pOther, const BitVector& whichField, const SyncInfo& sInfo) {

  Inherited::executeSyncImpl(pOther, whichField, sInfo);

  if (FieldBits::NoField != (SortKeyFieldMask & whichField))
    _sfSortKey.syncWith(pOther->_sfSortKey);

  if (FieldBits::NoField != (TransparencyModeFieldMask & whichField))
    _sfTransparencyMode.syncWith(pOther->_sfTransparencyMode);
}

void MaterialBase::execBeginEditImpl(
    const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize) {
  Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}
#endif

OSG_END_NAMESPACE

#include <OSGSFieldTypeDef.inl>
#include <OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<MaterialPtr>::_type("MaterialPtr", "AttachmentContainerPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(MaterialPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(MaterialPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);

OSG_END_NAMESPACE
