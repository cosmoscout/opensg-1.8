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
 **     class DVRClipObjects!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#define OSG_COMPILEDVRCLIPOBJECTSINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGDVRClipObjectsBase.h"
#include "OSGDVRClipObjects.h"

OSG_USING_NAMESPACE

const OSG::BitVector DVRClipObjectsBase::ClipObjectsFieldMask =
    (TypeTraits<BitVector>::One << DVRClipObjectsBase::ClipObjectsFieldId);

const OSG::BitVector DVRClipObjectsBase::ClipModeFieldMask =
    (TypeTraits<BitVector>::One << DVRClipObjectsBase::ClipModeFieldId);

const OSG::BitVector DVRClipObjectsBase::DoContoursFieldMask =
    (TypeTraits<BitVector>::One << DVRClipObjectsBase::DoContoursFieldId);

const OSG::BitVector DVRClipObjectsBase::MTInfluenceMask =
    (Inherited::MTInfluenceMask) | (static_cast<BitVector>(0x0) << Inherited::NextFieldId);

// Field descriptions

/*! \var DVRClipGeometryPtr DVRClipObjectsBase::_mfClipObjects
    The list of objects to clip with
*/
/*! \var Int32           DVRClipObjectsBase::_sfClipMode
    Defines the clipping Mode: Off, Intersection or Subtraction
*/
/*! \var bool            DVRClipObjectsBase::_sfDoContours
    Enables/Disables display of contours instead of drawing the clipped slices
*/

//! DVRClipObjects description

FieldDescription* DVRClipObjectsBase::_desc[] = {
    new FieldDescription(MFDVRClipGeometryPtr::getClassType(), "clipObjects", ClipObjectsFieldId,
        ClipObjectsFieldMask, false, (FieldAccessMethod)&DVRClipObjectsBase::getMFClipObjects),
    new FieldDescription(SFInt32::getClassType(), "clipMode", ClipModeFieldId, ClipModeFieldMask,
        false, (FieldAccessMethod)&DVRClipObjectsBase::getSFClipMode),
    new FieldDescription(SFBool::getClassType(), "doContours", DoContoursFieldId,
        DoContoursFieldMask, true, (FieldAccessMethod)&DVRClipObjectsBase::getSFDoContours)};

FieldContainerType DVRClipObjectsBase::_type("DVRClipObjects", "Attachment", NULL,
    (PrototypeCreateF)&DVRClipObjectsBase::createEmpty, DVRClipObjects::initMethod, _desc,
    sizeof(_desc));

// OSG_FIELD_CONTAINER_DEF(DVRClipObjectsBase, DVRClipObjectsPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType& DVRClipObjectsBase::getType(void) {
  return _type;
}

const FieldContainerType& DVRClipObjectsBase::getType(void) const {
  return _type;
}

FieldContainerPtr DVRClipObjectsBase::shallowCopy(void) const {
  DVRClipObjectsPtr returnValue;

  newPtr(returnValue, dynamic_cast<const DVRClipObjects*>(this));

  return returnValue;
}

UInt32 DVRClipObjectsBase::getContainerSize(void) const {
  return sizeof(DVRClipObjects);
}

#if !defined(OSG_FIXED_MFIELDSYNC)
void DVRClipObjectsBase::executeSync(FieldContainer& other, const BitVector& whichField) {
  this->executeSyncImpl((DVRClipObjectsBase*)&other, whichField);
}
#else
void DVRClipObjectsBase::executeSync(
    FieldContainer& other, const BitVector& whichField, const SyncInfo& sInfo) {
  this->executeSyncImpl((DVRClipObjectsBase*)&other, whichField, sInfo);
}
void DVRClipObjectsBase::execBeginEdit(
    const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize) {
  this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void DVRClipObjectsBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect) {
  Inherited::onDestroyAspect(uiId, uiAspect);

  _mfClipObjects.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning(disable : 383)
#endif

DVRClipObjectsBase::DVRClipObjectsBase(void)
    : _mfClipObjects()
    , _sfClipMode(Int32(2))
    , _sfDoContours(bool(false))
    , Inherited() {
}

#ifdef OSG_WIN32_ICL
#pragma warning(default : 383)
#endif

DVRClipObjectsBase::DVRClipObjectsBase(const DVRClipObjectsBase& source)
    : _mfClipObjects(source._mfClipObjects)
    , _sfClipMode(source._sfClipMode)
    , _sfDoContours(source._sfDoContours)
    , Inherited(source) {
}

/*-------------------------- destructors ----------------------------------*/

DVRClipObjectsBase::~DVRClipObjectsBase(void) {
}

/*------------------------------ access -----------------------------------*/

UInt32 DVRClipObjectsBase::getBinSize(const BitVector& whichField) {
  UInt32 returnValue = Inherited::getBinSize(whichField);

  if (FieldBits::NoField != (ClipObjectsFieldMask & whichField)) {
    returnValue += _mfClipObjects.getBinSize();
  }

  if (FieldBits::NoField != (ClipModeFieldMask & whichField)) {
    returnValue += _sfClipMode.getBinSize();
  }

  if (FieldBits::NoField != (DoContoursFieldMask & whichField)) {
    returnValue += _sfDoContours.getBinSize();
  }

  return returnValue;
}

void DVRClipObjectsBase::copyToBin(BinaryDataHandler& pMem, const BitVector& whichField) {
  Inherited::copyToBin(pMem, whichField);

  if (FieldBits::NoField != (ClipObjectsFieldMask & whichField)) {
    _mfClipObjects.copyToBin(pMem);
  }

  if (FieldBits::NoField != (ClipModeFieldMask & whichField)) {
    _sfClipMode.copyToBin(pMem);
  }

  if (FieldBits::NoField != (DoContoursFieldMask & whichField)) {
    _sfDoContours.copyToBin(pMem);
  }
}

void DVRClipObjectsBase::copyFromBin(BinaryDataHandler& pMem, const BitVector& whichField) {
  Inherited::copyFromBin(pMem, whichField);

  if (FieldBits::NoField != (ClipObjectsFieldMask & whichField)) {
    _mfClipObjects.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (ClipModeFieldMask & whichField)) {
    _sfClipMode.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (DoContoursFieldMask & whichField)) {
    _sfDoContours.copyFromBin(pMem);
  }
}

#if !defined(OSG_FIXED_MFIELDSYNC)
void DVRClipObjectsBase::executeSyncImpl(DVRClipObjectsBase* pOther, const BitVector& whichField) {

  Inherited::executeSyncImpl(pOther, whichField);

  if (FieldBits::NoField != (ClipObjectsFieldMask & whichField))
    _mfClipObjects.syncWith(pOther->_mfClipObjects);

  if (FieldBits::NoField != (ClipModeFieldMask & whichField))
    _sfClipMode.syncWith(pOther->_sfClipMode);

  if (FieldBits::NoField != (DoContoursFieldMask & whichField))
    _sfDoContours.syncWith(pOther->_sfDoContours);
}
#else
void DVRClipObjectsBase::executeSyncImpl(
    DVRClipObjectsBase* pOther, const BitVector& whichField, const SyncInfo& sInfo) {

  Inherited::executeSyncImpl(pOther, whichField, sInfo);

  if (FieldBits::NoField != (ClipModeFieldMask & whichField))
    _sfClipMode.syncWith(pOther->_sfClipMode);

  if (FieldBits::NoField != (DoContoursFieldMask & whichField))
    _sfDoContours.syncWith(pOther->_sfDoContours);

  if (FieldBits::NoField != (ClipObjectsFieldMask & whichField))
    _mfClipObjects.syncWith(pOther->_mfClipObjects, sInfo);
}

void DVRClipObjectsBase::execBeginEditImpl(
    const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize) {
  Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

  if (FieldBits::NoField != (ClipObjectsFieldMask & whichField))
    _mfClipObjects.beginEdit(uiAspect, uiContainerSize);
}
#endif

#include <OSGSFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<DVRClipObjectsPtr>::_type("DVRClipObjectsPtr", "AttachmentPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(DVRClipObjectsPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);

OSG_END_NAMESPACE
