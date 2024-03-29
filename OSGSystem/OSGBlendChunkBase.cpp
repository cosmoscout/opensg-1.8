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
 **     class BlendChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#define OSG_COMPILEBLENDCHUNKINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGBlendChunkBase.h"
#include "OSGBlendChunk.h"

#include <OSGGL.h> // SrcFactor default header
#include <OSGGL.h> // DestFactor default header
#include <OSGGL.h> // Equation default header
#include <OSGGL.h> // AlphaFunc default header
#include <OSGGL.h> // AlphaSrcFactor default header
#include <OSGGL.h> // AlphaDestFactor default header

OSG_USING_NAMESPACE

const OSG::BitVector BlendChunkBase::SrcFactorFieldMask =
    (TypeTraits<BitVector>::One << BlendChunkBase::SrcFactorFieldId);

const OSG::BitVector BlendChunkBase::DestFactorFieldMask =
    (TypeTraits<BitVector>::One << BlendChunkBase::DestFactorFieldId);

const OSG::BitVector BlendChunkBase::EquationFieldMask =
    (TypeTraits<BitVector>::One << BlendChunkBase::EquationFieldId);

const OSG::BitVector BlendChunkBase::ColorFieldMask =
    (TypeTraits<BitVector>::One << BlendChunkBase::ColorFieldId);

const OSG::BitVector BlendChunkBase::AlphaFuncFieldMask =
    (TypeTraits<BitVector>::One << BlendChunkBase::AlphaFuncFieldId);

const OSG::BitVector BlendChunkBase::AlphaValueFieldMask =
    (TypeTraits<BitVector>::One << BlendChunkBase::AlphaValueFieldId);

const OSG::BitVector BlendChunkBase::AlphaSrcFactorFieldMask =
    (TypeTraits<BitVector>::One << BlendChunkBase::AlphaSrcFactorFieldId);

const OSG::BitVector BlendChunkBase::AlphaDestFactorFieldMask =
    (TypeTraits<BitVector>::One << BlendChunkBase::AlphaDestFactorFieldId);

const OSG::BitVector BlendChunkBase::MTInfluenceMask =
    (Inherited::MTInfluenceMask) | (static_cast<BitVector>(0x0) << Inherited::NextFieldId);

// Field descriptions

/*! \var GLenum          BlendChunkBase::_sfSrcFactor
    The incoming pixel is multiplied by the source factor. Legal values are directly taken from the
   glBlendFunc() manpage.
*/
/*! \var GLenum          BlendChunkBase::_sfDestFactor
    The frame buffer pixel is multiplied by the destination factor. Legal values are directly taken
   from the glBlendFunc() manpage.
*/
/*! \var GLenum          BlendChunkBase::_sfEquation
    The equation used to combine the two values. Only available where GL_ARB_imaging is supported.
   See glBlendEquation() for details.
*/
/*! \var Color4f         BlendChunkBase::_sfColor
    This is the constant color used by blend modes *_CONSTANT_*.
*/
/*! \var GLenum          BlendChunkBase::_sfAlphaFunc
    The alphaFunc defines how fragments which do not fulfill a certain condition are handled. See
   glAlphaFunc() for details. GL_NONE is used to disable alpha comparison.
*/
/*! \var Real32          BlendChunkBase::_sfAlphaValue
    The value used in alpha comparison.
*/
/*! \var GLenum          BlendChunkBase::_sfAlphaSrcFactor
    The incoming alpha is multiplied by the source factor before being stored          in the frame
   buffer. Only available where GL_EXT_blend_func_separate is supported.         The default is
   GL_NONE, which indicates using the standard BlendFunction.
*/
/*! \var GLenum          BlendChunkBase::_sfAlphaDestFactor
    The frame buffer alpha is multiplied by the source factor before being stored          in the
   frame buffer. Only available where GL_EXT_blend_func_separate is supported.         The default
   is GL_NONE, which indicates using the standard BlendFunction.
*/

//! BlendChunk description

FieldDescription* BlendChunkBase::_desc[] = {
    new FieldDescription(SFGLenum::getClassType(), "srcFactor", SrcFactorFieldId,
        SrcFactorFieldMask, false, (FieldAccessMethod)&BlendChunkBase::getSFSrcFactor),
    new FieldDescription(SFGLenum::getClassType(), "destFactor", DestFactorFieldId,
        DestFactorFieldMask, false, (FieldAccessMethod)&BlendChunkBase::getSFDestFactor),
    new FieldDescription(SFGLenum::getClassType(), "equation", EquationFieldId, EquationFieldMask,
        false, (FieldAccessMethod)&BlendChunkBase::getSFEquation),
    new FieldDescription(SFColor4f::getClassType(), "color", ColorFieldId, ColorFieldMask, false,
        (FieldAccessMethod)&BlendChunkBase::getSFColor),
    new FieldDescription(SFGLenum::getClassType(), "alphaFunc", AlphaFuncFieldId,
        AlphaFuncFieldMask, false, (FieldAccessMethod)&BlendChunkBase::getSFAlphaFunc),
    new FieldDescription(SFReal32::getClassType(), "alphaValue", AlphaValueFieldId,
        AlphaValueFieldMask, false, (FieldAccessMethod)&BlendChunkBase::getSFAlphaValue),
    new FieldDescription(SFGLenum::getClassType(), "alphaSrcFactor", AlphaSrcFactorFieldId,
        AlphaSrcFactorFieldMask, false, (FieldAccessMethod)&BlendChunkBase::getSFAlphaSrcFactor),
    new FieldDescription(SFGLenum::getClassType(), "alphaDestFactor", AlphaDestFactorFieldId,
        AlphaDestFactorFieldMask, false, (FieldAccessMethod)&BlendChunkBase::getSFAlphaDestFactor)};

FieldContainerType BlendChunkBase::_type("BlendChunk", "StateChunk", NULL,
    (PrototypeCreateF)&BlendChunkBase::createEmpty, BlendChunk::initMethod, _desc, sizeof(_desc));

// OSG_FIELD_CONTAINER_DEF(BlendChunkBase, BlendChunkPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType& BlendChunkBase::getType(void) {
  return _type;
}

const FieldContainerType& BlendChunkBase::getType(void) const {
  return _type;
}

FieldContainerPtr BlendChunkBase::shallowCopy(void) const {
  BlendChunkPtr returnValue;

  newPtr(returnValue, dynamic_cast<const BlendChunk*>(this));

  return returnValue;
}

UInt32 BlendChunkBase::getContainerSize(void) const {
  return sizeof(BlendChunk);
}

#if !defined(OSG_FIXED_MFIELDSYNC)
void BlendChunkBase::executeSync(FieldContainer& other, const BitVector& whichField) {
  this->executeSyncImpl((BlendChunkBase*)&other, whichField);
}
#else
void BlendChunkBase::executeSync(
    FieldContainer& other, const BitVector& whichField, const SyncInfo& sInfo) {
  this->executeSyncImpl((BlendChunkBase*)&other, whichField, sInfo);
}
void BlendChunkBase::execBeginEdit(
    const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize) {
  this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void BlendChunkBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect) {
  Inherited::onDestroyAspect(uiId, uiAspect);
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning(disable : 383)
#endif

BlendChunkBase::BlendChunkBase(void)
    : _sfSrcFactor(GLenum(GL_ONE))
    , _sfDestFactor(GLenum(GL_ZERO))
    , _sfEquation(GLenum(GL_NONE))
    , _sfColor(Color4f(0, 0, 0, 0))
    , _sfAlphaFunc(GLenum(GL_NONE))
    , _sfAlphaValue(Real32(0))
    , _sfAlphaSrcFactor(GLenum(OSG_GL_UNUSED))
    , _sfAlphaDestFactor(GLenum(OSG_GL_UNUSED))
    , Inherited() {
}

#ifdef OSG_WIN32_ICL
#pragma warning(default : 383)
#endif

BlendChunkBase::BlendChunkBase(const BlendChunkBase& source)
    : _sfSrcFactor(source._sfSrcFactor)
    , _sfDestFactor(source._sfDestFactor)
    , _sfEquation(source._sfEquation)
    , _sfColor(source._sfColor)
    , _sfAlphaFunc(source._sfAlphaFunc)
    , _sfAlphaValue(source._sfAlphaValue)
    , _sfAlphaSrcFactor(source._sfAlphaSrcFactor)
    , _sfAlphaDestFactor(source._sfAlphaDestFactor)
    , Inherited(source) {
}

/*-------------------------- destructors ----------------------------------*/

BlendChunkBase::~BlendChunkBase(void) {
}

/*------------------------------ access -----------------------------------*/

UInt32 BlendChunkBase::getBinSize(const BitVector& whichField) {
  UInt32 returnValue = Inherited::getBinSize(whichField);

  if (FieldBits::NoField != (SrcFactorFieldMask & whichField)) {
    returnValue += _sfSrcFactor.getBinSize();
  }

  if (FieldBits::NoField != (DestFactorFieldMask & whichField)) {
    returnValue += _sfDestFactor.getBinSize();
  }

  if (FieldBits::NoField != (EquationFieldMask & whichField)) {
    returnValue += _sfEquation.getBinSize();
  }

  if (FieldBits::NoField != (ColorFieldMask & whichField)) {
    returnValue += _sfColor.getBinSize();
  }

  if (FieldBits::NoField != (AlphaFuncFieldMask & whichField)) {
    returnValue += _sfAlphaFunc.getBinSize();
  }

  if (FieldBits::NoField != (AlphaValueFieldMask & whichField)) {
    returnValue += _sfAlphaValue.getBinSize();
  }

  if (FieldBits::NoField != (AlphaSrcFactorFieldMask & whichField)) {
    returnValue += _sfAlphaSrcFactor.getBinSize();
  }

  if (FieldBits::NoField != (AlphaDestFactorFieldMask & whichField)) {
    returnValue += _sfAlphaDestFactor.getBinSize();
  }

  return returnValue;
}

void BlendChunkBase::copyToBin(BinaryDataHandler& pMem, const BitVector& whichField) {
  Inherited::copyToBin(pMem, whichField);

  if (FieldBits::NoField != (SrcFactorFieldMask & whichField)) {
    _sfSrcFactor.copyToBin(pMem);
  }

  if (FieldBits::NoField != (DestFactorFieldMask & whichField)) {
    _sfDestFactor.copyToBin(pMem);
  }

  if (FieldBits::NoField != (EquationFieldMask & whichField)) {
    _sfEquation.copyToBin(pMem);
  }

  if (FieldBits::NoField != (ColorFieldMask & whichField)) {
    _sfColor.copyToBin(pMem);
  }

  if (FieldBits::NoField != (AlphaFuncFieldMask & whichField)) {
    _sfAlphaFunc.copyToBin(pMem);
  }

  if (FieldBits::NoField != (AlphaValueFieldMask & whichField)) {
    _sfAlphaValue.copyToBin(pMem);
  }

  if (FieldBits::NoField != (AlphaSrcFactorFieldMask & whichField)) {
    _sfAlphaSrcFactor.copyToBin(pMem);
  }

  if (FieldBits::NoField != (AlphaDestFactorFieldMask & whichField)) {
    _sfAlphaDestFactor.copyToBin(pMem);
  }
}

void BlendChunkBase::copyFromBin(BinaryDataHandler& pMem, const BitVector& whichField) {
  Inherited::copyFromBin(pMem, whichField);

  if (FieldBits::NoField != (SrcFactorFieldMask & whichField)) {
    _sfSrcFactor.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (DestFactorFieldMask & whichField)) {
    _sfDestFactor.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (EquationFieldMask & whichField)) {
    _sfEquation.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (ColorFieldMask & whichField)) {
    _sfColor.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (AlphaFuncFieldMask & whichField)) {
    _sfAlphaFunc.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (AlphaValueFieldMask & whichField)) {
    _sfAlphaValue.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (AlphaSrcFactorFieldMask & whichField)) {
    _sfAlphaSrcFactor.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (AlphaDestFactorFieldMask & whichField)) {
    _sfAlphaDestFactor.copyFromBin(pMem);
  }
}

#if !defined(OSG_FIXED_MFIELDSYNC)
void BlendChunkBase::executeSyncImpl(BlendChunkBase* pOther, const BitVector& whichField) {

  Inherited::executeSyncImpl(pOther, whichField);

  if (FieldBits::NoField != (SrcFactorFieldMask & whichField))
    _sfSrcFactor.syncWith(pOther->_sfSrcFactor);

  if (FieldBits::NoField != (DestFactorFieldMask & whichField))
    _sfDestFactor.syncWith(pOther->_sfDestFactor);

  if (FieldBits::NoField != (EquationFieldMask & whichField))
    _sfEquation.syncWith(pOther->_sfEquation);

  if (FieldBits::NoField != (ColorFieldMask & whichField))
    _sfColor.syncWith(pOther->_sfColor);

  if (FieldBits::NoField != (AlphaFuncFieldMask & whichField))
    _sfAlphaFunc.syncWith(pOther->_sfAlphaFunc);

  if (FieldBits::NoField != (AlphaValueFieldMask & whichField))
    _sfAlphaValue.syncWith(pOther->_sfAlphaValue);

  if (FieldBits::NoField != (AlphaSrcFactorFieldMask & whichField))
    _sfAlphaSrcFactor.syncWith(pOther->_sfAlphaSrcFactor);

  if (FieldBits::NoField != (AlphaDestFactorFieldMask & whichField))
    _sfAlphaDestFactor.syncWith(pOther->_sfAlphaDestFactor);
}
#else
void BlendChunkBase::executeSyncImpl(
    BlendChunkBase* pOther, const BitVector& whichField, const SyncInfo& sInfo) {

  Inherited::executeSyncImpl(pOther, whichField, sInfo);

  if (FieldBits::NoField != (SrcFactorFieldMask & whichField))
    _sfSrcFactor.syncWith(pOther->_sfSrcFactor);

  if (FieldBits::NoField != (DestFactorFieldMask & whichField))
    _sfDestFactor.syncWith(pOther->_sfDestFactor);

  if (FieldBits::NoField != (EquationFieldMask & whichField))
    _sfEquation.syncWith(pOther->_sfEquation);

  if (FieldBits::NoField != (ColorFieldMask & whichField))
    _sfColor.syncWith(pOther->_sfColor);

  if (FieldBits::NoField != (AlphaFuncFieldMask & whichField))
    _sfAlphaFunc.syncWith(pOther->_sfAlphaFunc);

  if (FieldBits::NoField != (AlphaValueFieldMask & whichField))
    _sfAlphaValue.syncWith(pOther->_sfAlphaValue);

  if (FieldBits::NoField != (AlphaSrcFactorFieldMask & whichField))
    _sfAlphaSrcFactor.syncWith(pOther->_sfAlphaSrcFactor);

  if (FieldBits::NoField != (AlphaDestFactorFieldMask & whichField))
    _sfAlphaDestFactor.syncWith(pOther->_sfAlphaDestFactor);
}

void BlendChunkBase::execBeginEditImpl(
    const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize) {
  Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}
#endif

#include <OSGSFieldTypeDef.inl>
#include <OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<BlendChunkPtr>::_type("BlendChunkPtr", "StateChunkPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(BlendChunkPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(BlendChunkPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);

OSG_END_NAMESPACE
