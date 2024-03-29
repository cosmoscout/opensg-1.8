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
 **     class SimpleTexturedMaterial!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#define OSG_COMPILESIMPLETEXTUREDMATERIALINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGSimpleTexturedMaterialBase.h"
#include "OSGSimpleTexturedMaterial.h"

#include <OSGGL.h> // MinFilter default header
#include <OSGGL.h> // MagFilter default header
#include <OSGGL.h> // EnvMode default header

OSG_USING_NAMESPACE

const OSG::BitVector SimpleTexturedMaterialBase::ImageFieldMask =
    (TypeTraits<BitVector>::One << SimpleTexturedMaterialBase::ImageFieldId);

const OSG::BitVector SimpleTexturedMaterialBase::MinFilterFieldMask =
    (TypeTraits<BitVector>::One << SimpleTexturedMaterialBase::MinFilterFieldId);

const OSG::BitVector SimpleTexturedMaterialBase::MagFilterFieldMask =
    (TypeTraits<BitVector>::One << SimpleTexturedMaterialBase::MagFilterFieldId);

const OSG::BitVector SimpleTexturedMaterialBase::EnvModeFieldMask =
    (TypeTraits<BitVector>::One << SimpleTexturedMaterialBase::EnvModeFieldId);

const OSG::BitVector SimpleTexturedMaterialBase::EnvMapFieldMask =
    (TypeTraits<BitVector>::One << SimpleTexturedMaterialBase::EnvMapFieldId);

const OSG::BitVector SimpleTexturedMaterialBase::MTInfluenceMask =
    (Inherited::MTInfluenceMask) | (static_cast<BitVector>(0x0) << Inherited::NextFieldId);

// Field descriptions

/*! \var ImagePtr        SimpleTexturedMaterialBase::_sfImage
    Defines the texture image.
*/
/*! \var GLenum          SimpleTexturedMaterialBase::_sfMinFilter
    Defines the minification filter, see glTexParameter for details.          Default:
   GL_LINEAR_MIPMAP_LINEAR.
*/
/*! \var GLenum          SimpleTexturedMaterialBase::_sfMagFilter
    Defines the magnification filter, see glTexParameter for details.          Default: GL_LINEAR
*/
/*! \var GLenum          SimpleTexturedMaterialBase::_sfEnvMode
    Sets the environment mode, defining how texture and lighting color interact.         Default:
   GL_REPLACE.
*/
/*! \var bool            SimpleTexturedMaterialBase::_sfEnvMap
    Defines whether to use the texture as a spherical environment map.
*/

//! SimpleTexturedMaterial description

FieldDescription* SimpleTexturedMaterialBase::_desc[] = {
    new FieldDescription(SFImagePtr::getClassType(), "image", ImageFieldId, ImageFieldMask, false,
        (FieldAccessMethod)&SimpleTexturedMaterialBase::getSFImage),
    new FieldDescription(SFGLenum::getClassType(), "minFilter", MinFilterFieldId,
        MinFilterFieldMask, false, (FieldAccessMethod)&SimpleTexturedMaterialBase::getSFMinFilter),
    new FieldDescription(SFGLenum::getClassType(), "magFilter", MagFilterFieldId,
        MagFilterFieldMask, false, (FieldAccessMethod)&SimpleTexturedMaterialBase::getSFMagFilter),
    new FieldDescription(SFGLenum::getClassType(), "envMode", EnvModeFieldId, EnvModeFieldMask,
        false, (FieldAccessMethod)&SimpleTexturedMaterialBase::getSFEnvMode),
    new FieldDescription(SFBool::getClassType(), "envMap", EnvMapFieldId, EnvMapFieldMask, false,
        (FieldAccessMethod)&SimpleTexturedMaterialBase::getSFEnvMap)};

FieldContainerType SimpleTexturedMaterialBase::_type("SimpleTexturedMaterial", "SimpleMaterial",
    NULL, (PrototypeCreateF)&SimpleTexturedMaterialBase::createEmpty,
    SimpleTexturedMaterial::initMethod, _desc, sizeof(_desc));

// OSG_FIELD_CONTAINER_DEF(SimpleTexturedMaterialBase, SimpleTexturedMaterialPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType& SimpleTexturedMaterialBase::getType(void) {
  return _type;
}

const FieldContainerType& SimpleTexturedMaterialBase::getType(void) const {
  return _type;
}

FieldContainerPtr SimpleTexturedMaterialBase::shallowCopy(void) const {
  SimpleTexturedMaterialPtr returnValue;

  newPtr(returnValue, dynamic_cast<const SimpleTexturedMaterial*>(this));

  return returnValue;
}

UInt32 SimpleTexturedMaterialBase::getContainerSize(void) const {
  return sizeof(SimpleTexturedMaterial);
}

#if !defined(OSG_FIXED_MFIELDSYNC)
void SimpleTexturedMaterialBase::executeSync(FieldContainer& other, const BitVector& whichField) {
  this->executeSyncImpl((SimpleTexturedMaterialBase*)&other, whichField);
}
#else
void SimpleTexturedMaterialBase::executeSync(
    FieldContainer& other, const BitVector& whichField, const SyncInfo& sInfo) {
  this->executeSyncImpl((SimpleTexturedMaterialBase*)&other, whichField, sInfo);
}
void SimpleTexturedMaterialBase::execBeginEdit(
    const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize) {
  this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void SimpleTexturedMaterialBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect) {
  Inherited::onDestroyAspect(uiId, uiAspect);
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning(disable : 383)
#endif

SimpleTexturedMaterialBase::SimpleTexturedMaterialBase(void)
    : _sfImage()
    , _sfMinFilter(GLenum(GL_LINEAR_MIPMAP_LINEAR))
    , _sfMagFilter(GLenum(GL_LINEAR))
    , _sfEnvMode(GLenum(GL_REPLACE))
    , _sfEnvMap(bool(false))
    , Inherited() {
}

#ifdef OSG_WIN32_ICL
#pragma warning(default : 383)
#endif

SimpleTexturedMaterialBase::SimpleTexturedMaterialBase(const SimpleTexturedMaterialBase& source)
    : _sfImage(source._sfImage)
    , _sfMinFilter(source._sfMinFilter)
    , _sfMagFilter(source._sfMagFilter)
    , _sfEnvMode(source._sfEnvMode)
    , _sfEnvMap(source._sfEnvMap)
    , Inherited(source) {
}

/*-------------------------- destructors ----------------------------------*/

SimpleTexturedMaterialBase::~SimpleTexturedMaterialBase(void) {
}

/*------------------------------ access -----------------------------------*/

UInt32 SimpleTexturedMaterialBase::getBinSize(const BitVector& whichField) {
  UInt32 returnValue = Inherited::getBinSize(whichField);

  if (FieldBits::NoField != (ImageFieldMask & whichField)) {
    returnValue += _sfImage.getBinSize();
  }

  if (FieldBits::NoField != (MinFilterFieldMask & whichField)) {
    returnValue += _sfMinFilter.getBinSize();
  }

  if (FieldBits::NoField != (MagFilterFieldMask & whichField)) {
    returnValue += _sfMagFilter.getBinSize();
  }

  if (FieldBits::NoField != (EnvModeFieldMask & whichField)) {
    returnValue += _sfEnvMode.getBinSize();
  }

  if (FieldBits::NoField != (EnvMapFieldMask & whichField)) {
    returnValue += _sfEnvMap.getBinSize();
  }

  return returnValue;
}

void SimpleTexturedMaterialBase::copyToBin(BinaryDataHandler& pMem, const BitVector& whichField) {
  Inherited::copyToBin(pMem, whichField);

  if (FieldBits::NoField != (ImageFieldMask & whichField)) {
    _sfImage.copyToBin(pMem);
  }

  if (FieldBits::NoField != (MinFilterFieldMask & whichField)) {
    _sfMinFilter.copyToBin(pMem);
  }

  if (FieldBits::NoField != (MagFilterFieldMask & whichField)) {
    _sfMagFilter.copyToBin(pMem);
  }

  if (FieldBits::NoField != (EnvModeFieldMask & whichField)) {
    _sfEnvMode.copyToBin(pMem);
  }

  if (FieldBits::NoField != (EnvMapFieldMask & whichField)) {
    _sfEnvMap.copyToBin(pMem);
  }
}

void SimpleTexturedMaterialBase::copyFromBin(BinaryDataHandler& pMem, const BitVector& whichField) {
  Inherited::copyFromBin(pMem, whichField);

  if (FieldBits::NoField != (ImageFieldMask & whichField)) {
    _sfImage.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (MinFilterFieldMask & whichField)) {
    _sfMinFilter.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (MagFilterFieldMask & whichField)) {
    _sfMagFilter.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (EnvModeFieldMask & whichField)) {
    _sfEnvMode.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (EnvMapFieldMask & whichField)) {
    _sfEnvMap.copyFromBin(pMem);
  }
}

#if !defined(OSG_FIXED_MFIELDSYNC)
void SimpleTexturedMaterialBase::executeSyncImpl(
    SimpleTexturedMaterialBase* pOther, const BitVector& whichField) {

  Inherited::executeSyncImpl(pOther, whichField);

  if (FieldBits::NoField != (ImageFieldMask & whichField))
    _sfImage.syncWith(pOther->_sfImage);

  if (FieldBits::NoField != (MinFilterFieldMask & whichField))
    _sfMinFilter.syncWith(pOther->_sfMinFilter);

  if (FieldBits::NoField != (MagFilterFieldMask & whichField))
    _sfMagFilter.syncWith(pOther->_sfMagFilter);

  if (FieldBits::NoField != (EnvModeFieldMask & whichField))
    _sfEnvMode.syncWith(pOther->_sfEnvMode);

  if (FieldBits::NoField != (EnvMapFieldMask & whichField))
    _sfEnvMap.syncWith(pOther->_sfEnvMap);
}
#else
void SimpleTexturedMaterialBase::executeSyncImpl(
    SimpleTexturedMaterialBase* pOther, const BitVector& whichField, const SyncInfo& sInfo) {

  Inherited::executeSyncImpl(pOther, whichField, sInfo);

  if (FieldBits::NoField != (ImageFieldMask & whichField))
    _sfImage.syncWith(pOther->_sfImage);

  if (FieldBits::NoField != (MinFilterFieldMask & whichField))
    _sfMinFilter.syncWith(pOther->_sfMinFilter);

  if (FieldBits::NoField != (MagFilterFieldMask & whichField))
    _sfMagFilter.syncWith(pOther->_sfMagFilter);

  if (FieldBits::NoField != (EnvModeFieldMask & whichField))
    _sfEnvMode.syncWith(pOther->_sfEnvMode);

  if (FieldBits::NoField != (EnvMapFieldMask & whichField))
    _sfEnvMap.syncWith(pOther->_sfEnvMap);
}

void SimpleTexturedMaterialBase::execBeginEditImpl(
    const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize) {
  Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}
#endif

#include <OSGSFieldTypeDef.inl>
#include <OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<SimpleTexturedMaterialPtr>::_type(
    "SimpleTexturedMaterialPtr", "SimpleMaterialPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(SimpleTexturedMaterialPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(SimpleTexturedMaterialPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);

OSG_END_NAMESPACE
