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
 **     class FresnelMaterial!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#define OSG_COMPILEFRESNELMATERIALINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGFresnelMaterialBase.h"
#include "OSGFresnelMaterial.h"

#include <OSGGL.h> // ColorMaterial default header

OSG_USING_NAMESPACE

const OSG::BitVector FresnelMaterialBase::AmbientFieldMask =
    (TypeTraits<BitVector>::One << FresnelMaterialBase::AmbientFieldId);

const OSG::BitVector FresnelMaterialBase::DiffuseFieldMask =
    (TypeTraits<BitVector>::One << FresnelMaterialBase::DiffuseFieldId);

const OSG::BitVector FresnelMaterialBase::SpecularFieldMask =
    (TypeTraits<BitVector>::One << FresnelMaterialBase::SpecularFieldId);

const OSG::BitVector FresnelMaterialBase::ShininessFieldMask =
    (TypeTraits<BitVector>::One << FresnelMaterialBase::ShininessFieldId);

const OSG::BitVector FresnelMaterialBase::EmissionFieldMask =
    (TypeTraits<BitVector>::One << FresnelMaterialBase::EmissionFieldId);

const OSG::BitVector FresnelMaterialBase::TransparencyFieldMask =
    (TypeTraits<BitVector>::One << FresnelMaterialBase::TransparencyFieldId);

const OSG::BitVector FresnelMaterialBase::LitFieldMask =
    (TypeTraits<BitVector>::One << FresnelMaterialBase::LitFieldId);

const OSG::BitVector FresnelMaterialBase::ColorMaterialFieldMask =
    (TypeTraits<BitVector>::One << FresnelMaterialBase::ColorMaterialFieldId);

const OSG::BitVector FresnelMaterialBase::IndexFieldMask =
    (TypeTraits<BitVector>::One << FresnelMaterialBase::IndexFieldId);

const OSG::BitVector FresnelMaterialBase::ScaleFieldMask =
    (TypeTraits<BitVector>::One << FresnelMaterialBase::ScaleFieldId);

const OSG::BitVector FresnelMaterialBase::BiasFieldMask =
    (TypeTraits<BitVector>::One << FresnelMaterialBase::BiasFieldId);

const OSG::BitVector FresnelMaterialBase::ImageFieldMask =
    (TypeTraits<BitVector>::One << FresnelMaterialBase::ImageFieldId);

const OSG::BitVector FresnelMaterialBase::MTInfluenceMask =
    (Inherited::MTInfluenceMask) | (static_cast<BitVector>(0x0) << Inherited::NextFieldId);

// Field descriptions

/*! \var Color3f         FresnelMaterialBase::_sfAmbient

*/
/*! \var Color3f         FresnelMaterialBase::_sfDiffuse

*/
/*! \var Color3f         FresnelMaterialBase::_sfSpecular

*/
/*! \var Real32          FresnelMaterialBase::_sfShininess

*/
/*! \var Color3f         FresnelMaterialBase::_sfEmission

*/
/*! \var Real32          FresnelMaterialBase::_sfTransparency

*/
/*! \var bool            FresnelMaterialBase::_sfLit

*/
/*! \var GLenum          FresnelMaterialBase::_sfColorMaterial

*/
/*! \var Real32          FresnelMaterialBase::_sfIndex

*/
/*! \var Real32          FresnelMaterialBase::_sfScale

*/
/*! \var Real32          FresnelMaterialBase::_sfBias

*/
/*! \var ImagePtr        FresnelMaterialBase::_sfImage

*/

//! FresnelMaterial description

FieldDescription* FresnelMaterialBase::_desc[] = {
    new FieldDescription(SFColor3f::getClassType(), "ambient", AmbientFieldId, AmbientFieldMask,
        false, (FieldAccessMethod)&FresnelMaterialBase::getSFAmbient),
    new FieldDescription(SFColor3f::getClassType(), "diffuse", DiffuseFieldId, DiffuseFieldMask,
        false, (FieldAccessMethod)&FresnelMaterialBase::getSFDiffuse),
    new FieldDescription(SFColor3f::getClassType(), "specular", SpecularFieldId, SpecularFieldMask,
        false, (FieldAccessMethod)&FresnelMaterialBase::getSFSpecular),
    new FieldDescription(SFReal32::getClassType(), "shininess", ShininessFieldId,
        ShininessFieldMask, false, (FieldAccessMethod)&FresnelMaterialBase::getSFShininess),
    new FieldDescription(SFColor3f::getClassType(), "emission", EmissionFieldId, EmissionFieldMask,
        false, (FieldAccessMethod)&FresnelMaterialBase::getSFEmission),
    new FieldDescription(SFReal32::getClassType(), "transparency", TransparencyFieldId,
        TransparencyFieldMask, false, (FieldAccessMethod)&FresnelMaterialBase::getSFTransparency),
    new FieldDescription(SFBool::getClassType(), "lit", LitFieldId, LitFieldMask, false,
        (FieldAccessMethod)&FresnelMaterialBase::getSFLit),
    new FieldDescription(SFGLenum::getClassType(), "colorMaterial", ColorMaterialFieldId,
        ColorMaterialFieldMask, false, (FieldAccessMethod)&FresnelMaterialBase::getSFColorMaterial),
    new FieldDescription(SFReal32::getClassType(), "index", IndexFieldId, IndexFieldMask, false,
        (FieldAccessMethod)&FresnelMaterialBase::getSFIndex),
    new FieldDescription(SFReal32::getClassType(), "scale", ScaleFieldId, ScaleFieldMask, false,
        (FieldAccessMethod)&FresnelMaterialBase::getSFScale),
    new FieldDescription(SFReal32::getClassType(), "bias", BiasFieldId, BiasFieldMask, false,
        (FieldAccessMethod)&FresnelMaterialBase::getSFBias),
    new FieldDescription(SFImagePtr::getClassType(), "image", ImageFieldId, ImageFieldMask, false,
        (FieldAccessMethod)&FresnelMaterialBase::getSFImage)};

FieldContainerType FresnelMaterialBase::_type("FresnelMaterial", "ChunkMaterial", NULL,
    (PrototypeCreateF)&FresnelMaterialBase::createEmpty, FresnelMaterial::initMethod, _desc,
    sizeof(_desc));

// OSG_FIELD_CONTAINER_DEF(FresnelMaterialBase, FresnelMaterialPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType& FresnelMaterialBase::getType(void) {
  return _type;
}

const FieldContainerType& FresnelMaterialBase::getType(void) const {
  return _type;
}

FieldContainerPtr FresnelMaterialBase::shallowCopy(void) const {
  FresnelMaterialPtr returnValue;

  newPtr(returnValue, dynamic_cast<const FresnelMaterial*>(this));

  return returnValue;
}

UInt32 FresnelMaterialBase::getContainerSize(void) const {
  return sizeof(FresnelMaterial);
}

#if !defined(OSG_FIXED_MFIELDSYNC)
void FresnelMaterialBase::executeSync(FieldContainer& other, const BitVector& whichField) {
  this->executeSyncImpl((FresnelMaterialBase*)&other, whichField);
}
#else
void FresnelMaterialBase::executeSync(
    FieldContainer& other, const BitVector& whichField, const SyncInfo& sInfo) {
  this->executeSyncImpl((FresnelMaterialBase*)&other, whichField, sInfo);
}
void FresnelMaterialBase::execBeginEdit(
    const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize) {
  this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void FresnelMaterialBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect) {
  Inherited::onDestroyAspect(uiId, uiAspect);
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning(disable : 383)
#endif

FresnelMaterialBase::FresnelMaterialBase(void)
    : _sfAmbient(Color3f(0, 0, 0))
    , _sfDiffuse(Color3f(0, 0, 0))
    , _sfSpecular(Color3f(0, 0, 0))
    , _sfShininess(Real32(1))
    , _sfEmission(Color3f(0, 0, 0))
    , _sfTransparency(Real32(0))
    , _sfLit(bool(true))
    , _sfColorMaterial(GLenum(GL_DIFFUSE))
    , _sfIndex(Real32(0))
    , _sfScale(Real32(1))
    , _sfBias(Real32(1))
    , _sfImage()
    , Inherited() {
}

#ifdef OSG_WIN32_ICL
#pragma warning(default : 383)
#endif

FresnelMaterialBase::FresnelMaterialBase(const FresnelMaterialBase& source)
    : _sfAmbient(source._sfAmbient)
    , _sfDiffuse(source._sfDiffuse)
    , _sfSpecular(source._sfSpecular)
    , _sfShininess(source._sfShininess)
    , _sfEmission(source._sfEmission)
    , _sfTransparency(source._sfTransparency)
    , _sfLit(source._sfLit)
    , _sfColorMaterial(source._sfColorMaterial)
    , _sfIndex(source._sfIndex)
    , _sfScale(source._sfScale)
    , _sfBias(source._sfBias)
    , _sfImage(source._sfImage)
    , Inherited(source) {
}

/*-------------------------- destructors ----------------------------------*/

FresnelMaterialBase::~FresnelMaterialBase(void) {
}

/*------------------------------ access -----------------------------------*/

UInt32 FresnelMaterialBase::getBinSize(const BitVector& whichField) {
  UInt32 returnValue = Inherited::getBinSize(whichField);

  if (FieldBits::NoField != (AmbientFieldMask & whichField)) {
    returnValue += _sfAmbient.getBinSize();
  }

  if (FieldBits::NoField != (DiffuseFieldMask & whichField)) {
    returnValue += _sfDiffuse.getBinSize();
  }

  if (FieldBits::NoField != (SpecularFieldMask & whichField)) {
    returnValue += _sfSpecular.getBinSize();
  }

  if (FieldBits::NoField != (ShininessFieldMask & whichField)) {
    returnValue += _sfShininess.getBinSize();
  }

  if (FieldBits::NoField != (EmissionFieldMask & whichField)) {
    returnValue += _sfEmission.getBinSize();
  }

  if (FieldBits::NoField != (TransparencyFieldMask & whichField)) {
    returnValue += _sfTransparency.getBinSize();
  }

  if (FieldBits::NoField != (LitFieldMask & whichField)) {
    returnValue += _sfLit.getBinSize();
  }

  if (FieldBits::NoField != (ColorMaterialFieldMask & whichField)) {
    returnValue += _sfColorMaterial.getBinSize();
  }

  if (FieldBits::NoField != (IndexFieldMask & whichField)) {
    returnValue += _sfIndex.getBinSize();
  }

  if (FieldBits::NoField != (ScaleFieldMask & whichField)) {
    returnValue += _sfScale.getBinSize();
  }

  if (FieldBits::NoField != (BiasFieldMask & whichField)) {
    returnValue += _sfBias.getBinSize();
  }

  if (FieldBits::NoField != (ImageFieldMask & whichField)) {
    returnValue += _sfImage.getBinSize();
  }

  return returnValue;
}

void FresnelMaterialBase::copyToBin(BinaryDataHandler& pMem, const BitVector& whichField) {
  Inherited::copyToBin(pMem, whichField);

  if (FieldBits::NoField != (AmbientFieldMask & whichField)) {
    _sfAmbient.copyToBin(pMem);
  }

  if (FieldBits::NoField != (DiffuseFieldMask & whichField)) {
    _sfDiffuse.copyToBin(pMem);
  }

  if (FieldBits::NoField != (SpecularFieldMask & whichField)) {
    _sfSpecular.copyToBin(pMem);
  }

  if (FieldBits::NoField != (ShininessFieldMask & whichField)) {
    _sfShininess.copyToBin(pMem);
  }

  if (FieldBits::NoField != (EmissionFieldMask & whichField)) {
    _sfEmission.copyToBin(pMem);
  }

  if (FieldBits::NoField != (TransparencyFieldMask & whichField)) {
    _sfTransparency.copyToBin(pMem);
  }

  if (FieldBits::NoField != (LitFieldMask & whichField)) {
    _sfLit.copyToBin(pMem);
  }

  if (FieldBits::NoField != (ColorMaterialFieldMask & whichField)) {
    _sfColorMaterial.copyToBin(pMem);
  }

  if (FieldBits::NoField != (IndexFieldMask & whichField)) {
    _sfIndex.copyToBin(pMem);
  }

  if (FieldBits::NoField != (ScaleFieldMask & whichField)) {
    _sfScale.copyToBin(pMem);
  }

  if (FieldBits::NoField != (BiasFieldMask & whichField)) {
    _sfBias.copyToBin(pMem);
  }

  if (FieldBits::NoField != (ImageFieldMask & whichField)) {
    _sfImage.copyToBin(pMem);
  }
}

void FresnelMaterialBase::copyFromBin(BinaryDataHandler& pMem, const BitVector& whichField) {
  Inherited::copyFromBin(pMem, whichField);

  if (FieldBits::NoField != (AmbientFieldMask & whichField)) {
    _sfAmbient.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (DiffuseFieldMask & whichField)) {
    _sfDiffuse.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (SpecularFieldMask & whichField)) {
    _sfSpecular.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (ShininessFieldMask & whichField)) {
    _sfShininess.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (EmissionFieldMask & whichField)) {
    _sfEmission.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (TransparencyFieldMask & whichField)) {
    _sfTransparency.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (LitFieldMask & whichField)) {
    _sfLit.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (ColorMaterialFieldMask & whichField)) {
    _sfColorMaterial.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (IndexFieldMask & whichField)) {
    _sfIndex.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (ScaleFieldMask & whichField)) {
    _sfScale.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (BiasFieldMask & whichField)) {
    _sfBias.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (ImageFieldMask & whichField)) {
    _sfImage.copyFromBin(pMem);
  }
}

#if !defined(OSG_FIXED_MFIELDSYNC)
void FresnelMaterialBase::executeSyncImpl(
    FresnelMaterialBase* pOther, const BitVector& whichField) {

  Inherited::executeSyncImpl(pOther, whichField);

  if (FieldBits::NoField != (AmbientFieldMask & whichField))
    _sfAmbient.syncWith(pOther->_sfAmbient);

  if (FieldBits::NoField != (DiffuseFieldMask & whichField))
    _sfDiffuse.syncWith(pOther->_sfDiffuse);

  if (FieldBits::NoField != (SpecularFieldMask & whichField))
    _sfSpecular.syncWith(pOther->_sfSpecular);

  if (FieldBits::NoField != (ShininessFieldMask & whichField))
    _sfShininess.syncWith(pOther->_sfShininess);

  if (FieldBits::NoField != (EmissionFieldMask & whichField))
    _sfEmission.syncWith(pOther->_sfEmission);

  if (FieldBits::NoField != (TransparencyFieldMask & whichField))
    _sfTransparency.syncWith(pOther->_sfTransparency);

  if (FieldBits::NoField != (LitFieldMask & whichField))
    _sfLit.syncWith(pOther->_sfLit);

  if (FieldBits::NoField != (ColorMaterialFieldMask & whichField))
    _sfColorMaterial.syncWith(pOther->_sfColorMaterial);

  if (FieldBits::NoField != (IndexFieldMask & whichField))
    _sfIndex.syncWith(pOther->_sfIndex);

  if (FieldBits::NoField != (ScaleFieldMask & whichField))
    _sfScale.syncWith(pOther->_sfScale);

  if (FieldBits::NoField != (BiasFieldMask & whichField))
    _sfBias.syncWith(pOther->_sfBias);

  if (FieldBits::NoField != (ImageFieldMask & whichField))
    _sfImage.syncWith(pOther->_sfImage);
}
#else
void FresnelMaterialBase::executeSyncImpl(
    FresnelMaterialBase* pOther, const BitVector& whichField, const SyncInfo& sInfo) {

  Inherited::executeSyncImpl(pOther, whichField, sInfo);

  if (FieldBits::NoField != (AmbientFieldMask & whichField))
    _sfAmbient.syncWith(pOther->_sfAmbient);

  if (FieldBits::NoField != (DiffuseFieldMask & whichField))
    _sfDiffuse.syncWith(pOther->_sfDiffuse);

  if (FieldBits::NoField != (SpecularFieldMask & whichField))
    _sfSpecular.syncWith(pOther->_sfSpecular);

  if (FieldBits::NoField != (ShininessFieldMask & whichField))
    _sfShininess.syncWith(pOther->_sfShininess);

  if (FieldBits::NoField != (EmissionFieldMask & whichField))
    _sfEmission.syncWith(pOther->_sfEmission);

  if (FieldBits::NoField != (TransparencyFieldMask & whichField))
    _sfTransparency.syncWith(pOther->_sfTransparency);

  if (FieldBits::NoField != (LitFieldMask & whichField))
    _sfLit.syncWith(pOther->_sfLit);

  if (FieldBits::NoField != (ColorMaterialFieldMask & whichField))
    _sfColorMaterial.syncWith(pOther->_sfColorMaterial);

  if (FieldBits::NoField != (IndexFieldMask & whichField))
    _sfIndex.syncWith(pOther->_sfIndex);

  if (FieldBits::NoField != (ScaleFieldMask & whichField))
    _sfScale.syncWith(pOther->_sfScale);

  if (FieldBits::NoField != (BiasFieldMask & whichField))
    _sfBias.syncWith(pOther->_sfBias);

  if (FieldBits::NoField != (ImageFieldMask & whichField))
    _sfImage.syncWith(pOther->_sfImage);
}

void FresnelMaterialBase::execBeginEditImpl(
    const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize) {
  Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}
#endif

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<FresnelMaterialPtr>::_type("FresnelMaterialPtr", "ChunkMaterialPtr");
#endif

OSG_END_NAMESPACE
