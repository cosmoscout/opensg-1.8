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
 **     class DisplayCalibration!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#define OSG_COMPILEDISPLAYCALIBRATIONINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGDisplayCalibrationBase.h"
#include "OSGDisplayCalibration.h"

OSG_USING_NAMESPACE

const OSG::BitVector DisplayCalibrationBase::EnabledFieldMask =
    (TypeTraits<BitVector>::One << DisplayCalibrationBase::EnabledFieldId);

const OSG::BitVector DisplayCalibrationBase::ServerFieldMask =
    (TypeTraits<BitVector>::One << DisplayCalibrationBase::ServerFieldId);

const OSG::BitVector DisplayCalibrationBase::ColorMatrixFieldMask =
    (TypeTraits<BitVector>::One << DisplayCalibrationBase::ColorMatrixFieldId);

const OSG::BitVector DisplayCalibrationBase::GammaFieldMask =
    (TypeTraits<BitVector>::One << DisplayCalibrationBase::GammaFieldId);

const OSG::BitVector DisplayCalibrationBase::GammaRampFieldMask =
    (TypeTraits<BitVector>::One << DisplayCalibrationBase::GammaRampFieldId);

const OSG::BitVector DisplayCalibrationBase::GridWidthFieldMask =
    (TypeTraits<BitVector>::One << DisplayCalibrationBase::GridWidthFieldId);

const OSG::BitVector DisplayCalibrationBase::GridHeightFieldMask =
    (TypeTraits<BitVector>::One << DisplayCalibrationBase::GridHeightFieldId);

const OSG::BitVector DisplayCalibrationBase::GridFieldMask =
    (TypeTraits<BitVector>::One << DisplayCalibrationBase::GridFieldId);

const OSG::BitVector DisplayCalibrationBase::ScaleDownFieldMask =
    (TypeTraits<BitVector>::One << DisplayCalibrationBase::ScaleDownFieldId);

const OSG::BitVector DisplayCalibrationBase::MTInfluenceMask =
    (Inherited::MTInfluenceMask) | (static_cast<BitVector>(0x0) << Inherited::NextFieldId);

// Field descriptions

/*! \var bool            DisplayCalibrationBase::_sfEnabled
    Do calibration if true
*/
/*! \var std::string     DisplayCalibrationBase::_sfServer
    Server to be calibrated
*/
/*! \var Matrix          DisplayCalibrationBase::_sfColorMatrix
    color matrix
*/
/*! \var Real32          DisplayCalibrationBase::_sfGamma
    gamma value
*/
/*! \var Color3f         DisplayCalibrationBase::_mfGammaRamp

*/
/*! \var UInt32          DisplayCalibrationBase::_sfGridWidth

*/
/*! \var UInt32          DisplayCalibrationBase::_sfGridHeight

*/
/*! \var Vec2f           DisplayCalibrationBase::_mfGrid

*/
/*! \var Real32          DisplayCalibrationBase::_sfScaleDown
    simulate lower resolutions
*/

//! DisplayCalibration description

FieldDescription* DisplayCalibrationBase::_desc[] = {
    new FieldDescription(SFBool::getClassType(), "enabled", EnabledFieldId, EnabledFieldMask, false,
        (FieldAccessMethod)&DisplayCalibrationBase::getSFEnabled),
    new FieldDescription(SFString::getClassType(), "server", ServerFieldId, ServerFieldMask, false,
        (FieldAccessMethod)&DisplayCalibrationBase::getSFServer),
    new FieldDescription(SFMatrix::getClassType(), "colorMatrix", ColorMatrixFieldId,
        ColorMatrixFieldMask, false, (FieldAccessMethod)&DisplayCalibrationBase::getSFColorMatrix),
    new FieldDescription(SFReal32::getClassType(), "gamma", GammaFieldId, GammaFieldMask, false,
        (FieldAccessMethod)&DisplayCalibrationBase::getSFGamma),
    new FieldDescription(MFColor3f::getClassType(), "gammaRamp", GammaRampFieldId,
        GammaRampFieldMask, false, (FieldAccessMethod)&DisplayCalibrationBase::getMFGammaRamp),
    new FieldDescription(SFUInt32::getClassType(), "gridWidth", GridWidthFieldId,
        GridWidthFieldMask, false, (FieldAccessMethod)&DisplayCalibrationBase::getSFGridWidth),
    new FieldDescription(SFUInt32::getClassType(), "gridHeight", GridHeightFieldId,
        GridHeightFieldMask, false, (FieldAccessMethod)&DisplayCalibrationBase::getSFGridHeight),
    new FieldDescription(MFVec2f::getClassType(), "grid", GridFieldId, GridFieldMask, false,
        (FieldAccessMethod)&DisplayCalibrationBase::getMFGrid),
    new FieldDescription(SFReal32::getClassType(), "scaleDown", ScaleDownFieldId,
        ScaleDownFieldMask, false, (FieldAccessMethod)&DisplayCalibrationBase::getSFScaleDown)};

FieldContainerType DisplayCalibrationBase::_type("DisplayCalibration", "AttachmentContainer", NULL,
    (PrototypeCreateF)&DisplayCalibrationBase::createEmpty, DisplayCalibration::initMethod, _desc,
    sizeof(_desc));

// OSG_FIELD_CONTAINER_DEF(DisplayCalibrationBase, DisplayCalibrationPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType& DisplayCalibrationBase::getType(void) {
  return _type;
}

const FieldContainerType& DisplayCalibrationBase::getType(void) const {
  return _type;
}

FieldContainerPtr DisplayCalibrationBase::shallowCopy(void) const {
  DisplayCalibrationPtr returnValue;

  newPtr(returnValue, dynamic_cast<const DisplayCalibration*>(this));

  return returnValue;
}

UInt32 DisplayCalibrationBase::getContainerSize(void) const {
  return sizeof(DisplayCalibration);
}

#if !defined(OSG_FIXED_MFIELDSYNC)
void DisplayCalibrationBase::executeSync(FieldContainer& other, const BitVector& whichField) {
  this->executeSyncImpl((DisplayCalibrationBase*)&other, whichField);
}
#else
void DisplayCalibrationBase::executeSync(
    FieldContainer& other, const BitVector& whichField, const SyncInfo& sInfo) {
  this->executeSyncImpl((DisplayCalibrationBase*)&other, whichField, sInfo);
}
void DisplayCalibrationBase::execBeginEdit(
    const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize) {
  this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void DisplayCalibrationBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect) {
  Inherited::onDestroyAspect(uiId, uiAspect);

  _mfGammaRamp.terminateShare(uiAspect, this->getContainerSize());
  _mfGrid.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning(disable : 383)
#endif

DisplayCalibrationBase::DisplayCalibrationBase(void)
    : _sfEnabled(bool(true))
    , _sfServer()
    , _sfColorMatrix()
    , _sfGamma(Real32(1))
    , _mfGammaRamp()
    , _sfGridWidth(UInt32(0))
    , _sfGridHeight(UInt32(0))
    , _mfGrid()
    , _sfScaleDown(Real32(1.0))
    , Inherited() {
}

#ifdef OSG_WIN32_ICL
#pragma warning(default : 383)
#endif

DisplayCalibrationBase::DisplayCalibrationBase(const DisplayCalibrationBase& source)
    : _sfEnabled(source._sfEnabled)
    , _sfServer(source._sfServer)
    , _sfColorMatrix(source._sfColorMatrix)
    , _sfGamma(source._sfGamma)
    , _mfGammaRamp(source._mfGammaRamp)
    , _sfGridWidth(source._sfGridWidth)
    , _sfGridHeight(source._sfGridHeight)
    , _mfGrid(source._mfGrid)
    , _sfScaleDown(source._sfScaleDown)
    , Inherited(source) {
}

/*-------------------------- destructors ----------------------------------*/

DisplayCalibrationBase::~DisplayCalibrationBase(void) {
}

/*------------------------------ access -----------------------------------*/

UInt32 DisplayCalibrationBase::getBinSize(const BitVector& whichField) {
  UInt32 returnValue = Inherited::getBinSize(whichField);

  if (FieldBits::NoField != (EnabledFieldMask & whichField)) {
    returnValue += _sfEnabled.getBinSize();
  }

  if (FieldBits::NoField != (ServerFieldMask & whichField)) {
    returnValue += _sfServer.getBinSize();
  }

  if (FieldBits::NoField != (ColorMatrixFieldMask & whichField)) {
    returnValue += _sfColorMatrix.getBinSize();
  }

  if (FieldBits::NoField != (GammaFieldMask & whichField)) {
    returnValue += _sfGamma.getBinSize();
  }

  if (FieldBits::NoField != (GammaRampFieldMask & whichField)) {
    returnValue += _mfGammaRamp.getBinSize();
  }

  if (FieldBits::NoField != (GridWidthFieldMask & whichField)) {
    returnValue += _sfGridWidth.getBinSize();
  }

  if (FieldBits::NoField != (GridHeightFieldMask & whichField)) {
    returnValue += _sfGridHeight.getBinSize();
  }

  if (FieldBits::NoField != (GridFieldMask & whichField)) {
    returnValue += _mfGrid.getBinSize();
  }

  if (FieldBits::NoField != (ScaleDownFieldMask & whichField)) {
    returnValue += _sfScaleDown.getBinSize();
  }

  return returnValue;
}

void DisplayCalibrationBase::copyToBin(BinaryDataHandler& pMem, const BitVector& whichField) {
  Inherited::copyToBin(pMem, whichField);

  if (FieldBits::NoField != (EnabledFieldMask & whichField)) {
    _sfEnabled.copyToBin(pMem);
  }

  if (FieldBits::NoField != (ServerFieldMask & whichField)) {
    _sfServer.copyToBin(pMem);
  }

  if (FieldBits::NoField != (ColorMatrixFieldMask & whichField)) {
    _sfColorMatrix.copyToBin(pMem);
  }

  if (FieldBits::NoField != (GammaFieldMask & whichField)) {
    _sfGamma.copyToBin(pMem);
  }

  if (FieldBits::NoField != (GammaRampFieldMask & whichField)) {
    _mfGammaRamp.copyToBin(pMem);
  }

  if (FieldBits::NoField != (GridWidthFieldMask & whichField)) {
    _sfGridWidth.copyToBin(pMem);
  }

  if (FieldBits::NoField != (GridHeightFieldMask & whichField)) {
    _sfGridHeight.copyToBin(pMem);
  }

  if (FieldBits::NoField != (GridFieldMask & whichField)) {
    _mfGrid.copyToBin(pMem);
  }

  if (FieldBits::NoField != (ScaleDownFieldMask & whichField)) {
    _sfScaleDown.copyToBin(pMem);
  }
}

void DisplayCalibrationBase::copyFromBin(BinaryDataHandler& pMem, const BitVector& whichField) {
  Inherited::copyFromBin(pMem, whichField);

  if (FieldBits::NoField != (EnabledFieldMask & whichField)) {
    _sfEnabled.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (ServerFieldMask & whichField)) {
    _sfServer.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (ColorMatrixFieldMask & whichField)) {
    _sfColorMatrix.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (GammaFieldMask & whichField)) {
    _sfGamma.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (GammaRampFieldMask & whichField)) {
    _mfGammaRamp.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (GridWidthFieldMask & whichField)) {
    _sfGridWidth.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (GridHeightFieldMask & whichField)) {
    _sfGridHeight.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (GridFieldMask & whichField)) {
    _mfGrid.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (ScaleDownFieldMask & whichField)) {
    _sfScaleDown.copyFromBin(pMem);
  }
}

#if !defined(OSG_FIXED_MFIELDSYNC)
void DisplayCalibrationBase::executeSyncImpl(
    DisplayCalibrationBase* pOther, const BitVector& whichField) {

  Inherited::executeSyncImpl(pOther, whichField);

  if (FieldBits::NoField != (EnabledFieldMask & whichField))
    _sfEnabled.syncWith(pOther->_sfEnabled);

  if (FieldBits::NoField != (ServerFieldMask & whichField))
    _sfServer.syncWith(pOther->_sfServer);

  if (FieldBits::NoField != (ColorMatrixFieldMask & whichField))
    _sfColorMatrix.syncWith(pOther->_sfColorMatrix);

  if (FieldBits::NoField != (GammaFieldMask & whichField))
    _sfGamma.syncWith(pOther->_sfGamma);

  if (FieldBits::NoField != (GammaRampFieldMask & whichField))
    _mfGammaRamp.syncWith(pOther->_mfGammaRamp);

  if (FieldBits::NoField != (GridWidthFieldMask & whichField))
    _sfGridWidth.syncWith(pOther->_sfGridWidth);

  if (FieldBits::NoField != (GridHeightFieldMask & whichField))
    _sfGridHeight.syncWith(pOther->_sfGridHeight);

  if (FieldBits::NoField != (GridFieldMask & whichField))
    _mfGrid.syncWith(pOther->_mfGrid);

  if (FieldBits::NoField != (ScaleDownFieldMask & whichField))
    _sfScaleDown.syncWith(pOther->_sfScaleDown);
}
#else
void DisplayCalibrationBase::executeSyncImpl(
    DisplayCalibrationBase* pOther, const BitVector& whichField, const SyncInfo& sInfo) {

  Inherited::executeSyncImpl(pOther, whichField, sInfo);

  if (FieldBits::NoField != (EnabledFieldMask & whichField))
    _sfEnabled.syncWith(pOther->_sfEnabled);

  if (FieldBits::NoField != (ServerFieldMask & whichField))
    _sfServer.syncWith(pOther->_sfServer);

  if (FieldBits::NoField != (ColorMatrixFieldMask & whichField))
    _sfColorMatrix.syncWith(pOther->_sfColorMatrix);

  if (FieldBits::NoField != (GammaFieldMask & whichField))
    _sfGamma.syncWith(pOther->_sfGamma);

  if (FieldBits::NoField != (GridWidthFieldMask & whichField))
    _sfGridWidth.syncWith(pOther->_sfGridWidth);

  if (FieldBits::NoField != (GridHeightFieldMask & whichField))
    _sfGridHeight.syncWith(pOther->_sfGridHeight);

  if (FieldBits::NoField != (ScaleDownFieldMask & whichField))
    _sfScaleDown.syncWith(pOther->_sfScaleDown);

  if (FieldBits::NoField != (GammaRampFieldMask & whichField))
    _mfGammaRamp.syncWith(pOther->_mfGammaRamp, sInfo);

  if (FieldBits::NoField != (GridFieldMask & whichField))
    _mfGrid.syncWith(pOther->_mfGrid, sInfo);
}

void DisplayCalibrationBase::execBeginEditImpl(
    const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize) {
  Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

  if (FieldBits::NoField != (GammaRampFieldMask & whichField))
    _mfGammaRamp.beginEdit(uiAspect, uiContainerSize);

  if (FieldBits::NoField != (GridFieldMask & whichField))
    _mfGrid.beginEdit(uiAspect, uiContainerSize);
}
#endif

#include <OSGSFieldTypeDef.inl>
#include <OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<DisplayCalibrationPtr>::_type(
    "DisplayCalibrationPtr", "AttachmentContainerPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(DisplayCalibrationPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(DisplayCalibrationPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);

OSG_END_NAMESPACE
