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
 **     class MoveManipulator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#define OSG_COMPILEMOVEMANIPULATORINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGMoveManipulatorBase.h"
#include "OSGMoveManipulator.h"

OSG_USING_NAMESPACE

const OSG::BitVector MoveManipulatorBase::MTInfluenceMask =
    (Inherited::MTInfluenceMask) | (static_cast<BitVector>(0x0) << Inherited::NextFieldId);

FieldContainerType MoveManipulatorBase::_type("MoveManipulator", "Manipulator", NULL,
    (PrototypeCreateF)&MoveManipulatorBase::createEmpty, MoveManipulator::initMethod, NULL, 0);

// OSG_FIELD_CONTAINER_DEF(MoveManipulatorBase, MoveManipulatorPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType& MoveManipulatorBase::getType(void) {
  return _type;
}

const FieldContainerType& MoveManipulatorBase::getType(void) const {
  return _type;
}

FieldContainerPtr MoveManipulatorBase::shallowCopy(void) const {
  MoveManipulatorPtr returnValue;

  newPtr(returnValue, dynamic_cast<const MoveManipulator*>(this));

  return returnValue;
}

UInt32 MoveManipulatorBase::getContainerSize(void) const {
  return sizeof(MoveManipulator);
}

#if !defined(OSG_FIXED_MFIELDSYNC)
void MoveManipulatorBase::executeSync(FieldContainer& other, const BitVector& whichField) {
  this->executeSyncImpl((MoveManipulatorBase*)&other, whichField);
}
#else
void MoveManipulatorBase::executeSync(
    FieldContainer& other, const BitVector& whichField, const SyncInfo& sInfo) {
  this->executeSyncImpl((MoveManipulatorBase*)&other, whichField, sInfo);
}
void MoveManipulatorBase::execBeginEdit(
    const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize) {
  this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void MoveManipulatorBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect) {
  Inherited::onDestroyAspect(uiId, uiAspect);
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning(disable : 383)
#endif

MoveManipulatorBase::MoveManipulatorBase(void)
    : Inherited() {
}

#ifdef OSG_WIN32_ICL
#pragma warning(default : 383)
#endif

MoveManipulatorBase::MoveManipulatorBase(const MoveManipulatorBase& source)
    : Inherited(source) {
}

/*-------------------------- destructors ----------------------------------*/

MoveManipulatorBase::~MoveManipulatorBase(void) {
}

/*------------------------------ access -----------------------------------*/

UInt32 MoveManipulatorBase::getBinSize(const BitVector& whichField) {
  UInt32 returnValue = Inherited::getBinSize(whichField);

  return returnValue;
}

void MoveManipulatorBase::copyToBin(BinaryDataHandler& pMem, const BitVector& whichField) {
  Inherited::copyToBin(pMem, whichField);
}

void MoveManipulatorBase::copyFromBin(BinaryDataHandler& pMem, const BitVector& whichField) {
  Inherited::copyFromBin(pMem, whichField);
}

#if !defined(OSG_FIXED_MFIELDSYNC)
void MoveManipulatorBase::executeSyncImpl(
    MoveManipulatorBase* pOther, const BitVector& whichField) {

  Inherited::executeSyncImpl(pOther, whichField);
}
#else
void MoveManipulatorBase::executeSyncImpl(
    MoveManipulatorBase* pOther, const BitVector& whichField, const SyncInfo& sInfo) {

  Inherited::executeSyncImpl(pOther, whichField, sInfo);
}

void MoveManipulatorBase::execBeginEditImpl(
    const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize) {
  Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}
#endif

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<MoveManipulatorPtr>::_type("MoveManipulatorPtr", "ManipulatorPtr");
#endif

OSG_END_NAMESPACE
