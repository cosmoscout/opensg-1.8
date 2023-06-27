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
 **     class InverseTransform!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#define OSG_COMPILEINVERSETRANSFORMINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGInverseTransformBase.h"
#include "OSGInverseTransform.h"

OSG_USING_NAMESPACE

const OSG::BitVector InverseTransformBase::MTInfluenceMask =
    (Inherited::MTInfluenceMask) | (static_cast<BitVector>(0x0) << Inherited::NextFieldId);

FieldContainerType InverseTransformBase::_type("InverseTransform", "Group", NULL,
    (PrototypeCreateF)&InverseTransformBase::createEmpty, InverseTransform::initMethod, NULL, 0);

// OSG_FIELD_CONTAINER_DEF(InverseTransformBase, InverseTransformPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType& InverseTransformBase::getType(void) {
  return _type;
}

const FieldContainerType& InverseTransformBase::getType(void) const {
  return _type;
}

FieldContainerPtr InverseTransformBase::shallowCopy(void) const {
  InverseTransformPtr returnValue;

  newPtr(returnValue, dynamic_cast<const InverseTransform*>(this));

  return returnValue;
}

UInt32 InverseTransformBase::getContainerSize(void) const {
  return sizeof(InverseTransform);
}

#if !defined(OSG_FIXED_MFIELDSYNC)
void InverseTransformBase::executeSync(FieldContainer& other, const BitVector& whichField) {
  this->executeSyncImpl((InverseTransformBase*)&other, whichField);
}
#else
void InverseTransformBase::executeSync(
    FieldContainer& other, const BitVector& whichField, const SyncInfo& sInfo) {
  this->executeSyncImpl((InverseTransformBase*)&other, whichField, sInfo);
}
void InverseTransformBase::execBeginEdit(
    const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize) {
  this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void InverseTransformBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect) {
  Inherited::onDestroyAspect(uiId, uiAspect);
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning(disable : 383)
#endif

InverseTransformBase::InverseTransformBase(void)
    : Inherited() {
}

#ifdef OSG_WIN32_ICL
#pragma warning(default : 383)
#endif

InverseTransformBase::InverseTransformBase(const InverseTransformBase& source)
    : Inherited(source) {
}

/*-------------------------- destructors ----------------------------------*/

InverseTransformBase::~InverseTransformBase(void) {
}

/*------------------------------ access -----------------------------------*/

UInt32 InverseTransformBase::getBinSize(const BitVector& whichField) {
  UInt32 returnValue = Inherited::getBinSize(whichField);

  return returnValue;
}

void InverseTransformBase::copyToBin(BinaryDataHandler& pMem, const BitVector& whichField) {
  Inherited::copyToBin(pMem, whichField);
}

void InverseTransformBase::copyFromBin(BinaryDataHandler& pMem, const BitVector& whichField) {
  Inherited::copyFromBin(pMem, whichField);
}

#if !defined(OSG_FIXED_MFIELDSYNC)
void InverseTransformBase::executeSyncImpl(
    InverseTransformBase* pOther, const BitVector& whichField) {

  Inherited::executeSyncImpl(pOther, whichField);
}
#else
void InverseTransformBase::executeSyncImpl(
    InverseTransformBase* pOther, const BitVector& whichField, const SyncInfo& sInfo) {

  Inherited::executeSyncImpl(pOther, whichField, sInfo);
}

void InverseTransformBase::execBeginEditImpl(
    const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize) {
  Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}
#endif

#include <OSGSFieldTypeDef.inl>
#include <OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<InverseTransformPtr>::_type("InverseTransformPtr", "GroupPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(InverseTransformPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(InverseTransformPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);

OSG_END_NAMESPACE
