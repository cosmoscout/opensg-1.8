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
 **     class GraphicStatisticsForeground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#define OSG_COMPILEGRAPHICSTATISTICSFOREGROUNDINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGGraphicStatisticsForegroundBase.h"
#include "OSGGraphicStatisticsForeground.h"

OSG_USING_NAMESPACE

const OSG::BitVector GraphicStatisticsForegroundBase::DisplayTypeFieldMask =
    (TypeTraits<BitVector>::One << GraphicStatisticsForegroundBase::DisplayTypeFieldId);

const OSG::BitVector GraphicStatisticsForegroundBase::SizeFieldMask =
    (TypeTraits<BitVector>::One << GraphicStatisticsForegroundBase::SizeFieldId);

const OSG::BitVector GraphicStatisticsForegroundBase::PosFieldMask =
    (TypeTraits<BitVector>::One << GraphicStatisticsForegroundBase::PosFieldId);

const OSG::BitVector GraphicStatisticsForegroundBase::ColorMaxFieldMask =
    (TypeTraits<BitVector>::One << GraphicStatisticsForegroundBase::ColorMaxFieldId);

const OSG::BitVector GraphicStatisticsForegroundBase::ColorMinFieldMask =
    (TypeTraits<BitVector>::One << GraphicStatisticsForegroundBase::ColorMinFieldId);

const OSG::BitVector GraphicStatisticsForegroundBase::ColorCurrentFieldMask =
    (TypeTraits<BitVector>::One << GraphicStatisticsForegroundBase::ColorCurrentFieldId);

const OSG::BitVector GraphicStatisticsForegroundBase::MinValueFieldMask =
    (TypeTraits<BitVector>::One << GraphicStatisticsForegroundBase::MinValueFieldId);

const OSG::BitVector GraphicStatisticsForegroundBase::MaxValueFieldMask =
    (TypeTraits<BitVector>::One << GraphicStatisticsForegroundBase::MaxValueFieldId);

const OSG::BitVector GraphicStatisticsForegroundBase::FlagsFieldMask =
    (TypeTraits<BitVector>::One << GraphicStatisticsForegroundBase::FlagsFieldId);

const OSG::BitVector GraphicStatisticsForegroundBase::HistorySizeFieldMask =
    (TypeTraits<BitVector>::One << GraphicStatisticsForegroundBase::HistorySizeFieldId);

const OSG::BitVector GraphicStatisticsForegroundBase::DescriptionFieldMask =
    (TypeTraits<BitVector>::One << GraphicStatisticsForegroundBase::DescriptionFieldId);

const OSG::BitVector GraphicStatisticsForegroundBase::LineWidthFieldMask =
    (TypeTraits<BitVector>::One << GraphicStatisticsForegroundBase::LineWidthFieldId);

const OSG::BitVector GraphicStatisticsForegroundBase::BackgroundColorFieldMask =
    (TypeTraits<BitVector>::One << GraphicStatisticsForegroundBase::BackgroundColorFieldId);

const OSG::BitVector GraphicStatisticsForegroundBase::TextEnabledFieldMask =
    (TypeTraits<BitVector>::One << GraphicStatisticsForegroundBase::TextEnabledFieldId);

const OSG::BitVector GraphicStatisticsForegroundBase::BackgroundEnabledFieldMask =
    (TypeTraits<BitVector>::One << GraphicStatisticsForegroundBase::BackgroundEnabledFieldId);

const OSG::BitVector GraphicStatisticsForegroundBase::BorderEnabledFieldMask =
    (TypeTraits<BitVector>::One << GraphicStatisticsForegroundBase::BorderEnabledFieldId);

const OSG::BitVector GraphicStatisticsForegroundBase::MTInfluenceMask =
    (Inherited::MTInfluenceMask) | (static_cast<BitVector>(0x0) << Inherited::NextFieldId);

// Field descriptions

/*! \var UInt32          GraphicStatisticsForegroundBase::_mfDisplayType
    type[i] sets the graphical representation of this statistics data
*/
/*! \var Vec2f           GraphicStatisticsForegroundBase::_mfSize
    size of this StatisticsElement
*/
/*! \var Vec2f           GraphicStatisticsForegroundBase::_mfPos
    Position at which this StatisticsElement should be drawn
*/
/*! \var Color4f         GraphicStatisticsForegroundBase::_mfColorMax
    max color of this StatisticsElement
*/
/*! \var Color4f         GraphicStatisticsForegroundBase::_mfColorMin
    color2[i] is the second color of this StatisticsElement
*/
/*! \var Color4f         GraphicStatisticsForegroundBase::_mfColorCurrent
    color2[i] is the third color of this StatisticsElement
*/
/*! \var Real32          GraphicStatisticsForegroundBase::_mfMinValue
    The minimum value to be displayed by the Statistic
*/
/*! \var Real32          GraphicStatisticsForegroundBase::_mfMaxValue
    The maximum value to be displayed by the Statistic
*/
/*! \var UInt32          GraphicStatisticsForegroundBase::_mfFlags

*/
/*! \var UInt32          GraphicStatisticsForegroundBase::_mfHistorySize

*/
/*! \var std::string     GraphicStatisticsForegroundBase::_mfDescription
    The description for every id
*/
/*! \var Real32          GraphicStatisticsForegroundBase::_sfLineWidth
    The default line width to be used by this foreground
*/
/*! \var Color3f         GraphicStatisticsForegroundBase::_sfBackgroundColor
    BackgroundColor of the statistics Display
*/
/*! \var bool            GraphicStatisticsForegroundBase::_sfTextEnabled
    Set this to false to disable the text
*/
/*! \var bool            GraphicStatisticsForegroundBase::_sfBackgroundEnabled
    Set this to "false" to disable the backround of all Graphs
*/
/*! \var bool            GraphicStatisticsForegroundBase::_sfBorderEnabled
    Set this to false to disable the border around elements
*/

//! GraphicStatisticsForeground description

FieldDescription* GraphicStatisticsForegroundBase::_desc[] = {
    new FieldDescription(MFUInt32::getClassType(), "displayType", DisplayTypeFieldId,
        DisplayTypeFieldMask, false,
        (FieldAccessMethod)&GraphicStatisticsForegroundBase::getMFDisplayType),
    new FieldDescription(MFVec2f::getClassType(), "size", SizeFieldId, SizeFieldMask, false,
        (FieldAccessMethod)&GraphicStatisticsForegroundBase::getMFSize),
    new FieldDescription(MFVec2f::getClassType(), "pos", PosFieldId, PosFieldMask, false,
        (FieldAccessMethod)&GraphicStatisticsForegroundBase::getMFPos),
    new FieldDescription(MFColor4f::getClassType(), "colorMax", ColorMaxFieldId, ColorMaxFieldMask,
        false, (FieldAccessMethod)&GraphicStatisticsForegroundBase::getMFColorMax),
    new FieldDescription(MFColor4f::getClassType(), "colorMin", ColorMinFieldId, ColorMinFieldMask,
        false, (FieldAccessMethod)&GraphicStatisticsForegroundBase::getMFColorMin),
    new FieldDescription(MFColor4f::getClassType(), "colorCurrent", ColorCurrentFieldId,
        ColorCurrentFieldMask, false,
        (FieldAccessMethod)&GraphicStatisticsForegroundBase::getMFColorCurrent),
    new FieldDescription(MFReal32::getClassType(), "minValue", MinValueFieldId, MinValueFieldMask,
        false, (FieldAccessMethod)&GraphicStatisticsForegroundBase::getMFMinValue),
    new FieldDescription(MFReal32::getClassType(), "maxValue", MaxValueFieldId, MaxValueFieldMask,
        false, (FieldAccessMethod)&GraphicStatisticsForegroundBase::getMFMaxValue),
    new FieldDescription(MFUInt32::getClassType(), "flags", FlagsFieldId, FlagsFieldMask, false,
        (FieldAccessMethod)&GraphicStatisticsForegroundBase::getMFFlags),
    new FieldDescription(MFUInt32::getClassType(), "historySize", HistorySizeFieldId,
        HistorySizeFieldMask, false,
        (FieldAccessMethod)&GraphicStatisticsForegroundBase::getMFHistorySize),
    new FieldDescription(MFString::getClassType(), "description", DescriptionFieldId,
        DescriptionFieldMask, false,
        (FieldAccessMethod)&GraphicStatisticsForegroundBase::getMFDescription),
    new FieldDescription(SFReal32::getClassType(), "lineWidth", LineWidthFieldId,
        LineWidthFieldMask, false,
        (FieldAccessMethod)&GraphicStatisticsForegroundBase::getSFLineWidth),
    new FieldDescription(SFColor3f::getClassType(), "backgroundColor", BackgroundColorFieldId,
        BackgroundColorFieldMask, false,
        (FieldAccessMethod)&GraphicStatisticsForegroundBase::getSFBackgroundColor),
    new FieldDescription(SFBool::getClassType(), "textEnabled", TextEnabledFieldId,
        TextEnabledFieldMask, false,
        (FieldAccessMethod)&GraphicStatisticsForegroundBase::getSFTextEnabled),
    new FieldDescription(SFBool::getClassType(), "backgroundEnabled", BackgroundEnabledFieldId,
        BackgroundEnabledFieldMask, false,
        (FieldAccessMethod)&GraphicStatisticsForegroundBase::getSFBackgroundEnabled),
    new FieldDescription(SFBool::getClassType(), "borderEnabled", BorderEnabledFieldId,
        BorderEnabledFieldMask, false,
        (FieldAccessMethod)&GraphicStatisticsForegroundBase::getSFBorderEnabled)};

FieldContainerType GraphicStatisticsForegroundBase::_type("GraphicStatisticsForeground",
    "StatisticsForeground", NULL, (PrototypeCreateF)&GraphicStatisticsForegroundBase::createEmpty,
    GraphicStatisticsForeground::initMethod, _desc, sizeof(_desc));

// OSG_FIELD_CONTAINER_DEF(GraphicStatisticsForegroundBase, GraphicStatisticsForegroundPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType& GraphicStatisticsForegroundBase::getType(void) {
  return _type;
}

const FieldContainerType& GraphicStatisticsForegroundBase::getType(void) const {
  return _type;
}

FieldContainerPtr GraphicStatisticsForegroundBase::shallowCopy(void) const {
  GraphicStatisticsForegroundPtr returnValue;

  newPtr(returnValue, dynamic_cast<const GraphicStatisticsForeground*>(this));

  return returnValue;
}

UInt32 GraphicStatisticsForegroundBase::getContainerSize(void) const {
  return sizeof(GraphicStatisticsForeground);
}

#if !defined(OSG_FIXED_MFIELDSYNC)
void GraphicStatisticsForegroundBase::executeSync(
    FieldContainer& other, const BitVector& whichField) {
  this->executeSyncImpl((GraphicStatisticsForegroundBase*)&other, whichField);
}
#else
void GraphicStatisticsForegroundBase::executeSync(
    FieldContainer& other, const BitVector& whichField, const SyncInfo& sInfo) {
  this->executeSyncImpl((GraphicStatisticsForegroundBase*)&other, whichField, sInfo);
}
void GraphicStatisticsForegroundBase::execBeginEdit(
    const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize) {
  this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void GraphicStatisticsForegroundBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect) {
  Inherited::onDestroyAspect(uiId, uiAspect);

  _mfDisplayType.terminateShare(uiAspect, this->getContainerSize());
  _mfSize.terminateShare(uiAspect, this->getContainerSize());
  _mfPos.terminateShare(uiAspect, this->getContainerSize());
  _mfColorMax.terminateShare(uiAspect, this->getContainerSize());
  _mfColorMin.terminateShare(uiAspect, this->getContainerSize());
  _mfColorCurrent.terminateShare(uiAspect, this->getContainerSize());
  _mfMinValue.terminateShare(uiAspect, this->getContainerSize());
  _mfMaxValue.terminateShare(uiAspect, this->getContainerSize());
  _mfFlags.terminateShare(uiAspect, this->getContainerSize());
  _mfHistorySize.terminateShare(uiAspect, this->getContainerSize());
  _mfDescription.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning(disable : 383)
#endif

GraphicStatisticsForegroundBase::GraphicStatisticsForegroundBase(void)
    : _mfDisplayType()
    , _mfSize()
    , _mfPos()
    , _mfColorMax()
    , _mfColorMin()
    , _mfColorCurrent()
    , _mfMinValue()
    , _mfMaxValue()
    , _mfFlags()
    , _mfHistorySize()
    , _mfDescription()
    , _sfLineWidth(Real32(1.0))
    , _sfBackgroundColor(Color3f(0.0, 0.0, 0.0))
    , _sfTextEnabled(bool(true))
    , _sfBackgroundEnabled(bool(true))
    , _sfBorderEnabled(bool(true))
    , Inherited() {
}

#ifdef OSG_WIN32_ICL
#pragma warning(default : 383)
#endif

GraphicStatisticsForegroundBase::GraphicStatisticsForegroundBase(
    const GraphicStatisticsForegroundBase& source)
    : _mfDisplayType(source._mfDisplayType)
    , _mfSize(source._mfSize)
    , _mfPos(source._mfPos)
    , _mfColorMax(source._mfColorMax)
    , _mfColorMin(source._mfColorMin)
    , _mfColorCurrent(source._mfColorCurrent)
    , _mfMinValue(source._mfMinValue)
    , _mfMaxValue(source._mfMaxValue)
    , _mfFlags(source._mfFlags)
    , _mfHistorySize(source._mfHistorySize)
    , _mfDescription(source._mfDescription)
    , _sfLineWidth(source._sfLineWidth)
    , _sfBackgroundColor(source._sfBackgroundColor)
    , _sfTextEnabled(source._sfTextEnabled)
    , _sfBackgroundEnabled(source._sfBackgroundEnabled)
    , _sfBorderEnabled(source._sfBorderEnabled)
    , Inherited(source) {
}

/*-------------------------- destructors ----------------------------------*/

GraphicStatisticsForegroundBase::~GraphicStatisticsForegroundBase(void) {
}

/*------------------------------ access -----------------------------------*/

UInt32 GraphicStatisticsForegroundBase::getBinSize(const BitVector& whichField) {
  UInt32 returnValue = Inherited::getBinSize(whichField);

  if (FieldBits::NoField != (DisplayTypeFieldMask & whichField)) {
    returnValue += _mfDisplayType.getBinSize();
  }

  if (FieldBits::NoField != (SizeFieldMask & whichField)) {
    returnValue += _mfSize.getBinSize();
  }

  if (FieldBits::NoField != (PosFieldMask & whichField)) {
    returnValue += _mfPos.getBinSize();
  }

  if (FieldBits::NoField != (ColorMaxFieldMask & whichField)) {
    returnValue += _mfColorMax.getBinSize();
  }

  if (FieldBits::NoField != (ColorMinFieldMask & whichField)) {
    returnValue += _mfColorMin.getBinSize();
  }

  if (FieldBits::NoField != (ColorCurrentFieldMask & whichField)) {
    returnValue += _mfColorCurrent.getBinSize();
  }

  if (FieldBits::NoField != (MinValueFieldMask & whichField)) {
    returnValue += _mfMinValue.getBinSize();
  }

  if (FieldBits::NoField != (MaxValueFieldMask & whichField)) {
    returnValue += _mfMaxValue.getBinSize();
  }

  if (FieldBits::NoField != (FlagsFieldMask & whichField)) {
    returnValue += _mfFlags.getBinSize();
  }

  if (FieldBits::NoField != (HistorySizeFieldMask & whichField)) {
    returnValue += _mfHistorySize.getBinSize();
  }

  if (FieldBits::NoField != (DescriptionFieldMask & whichField)) {
    returnValue += _mfDescription.getBinSize();
  }

  if (FieldBits::NoField != (LineWidthFieldMask & whichField)) {
    returnValue += _sfLineWidth.getBinSize();
  }

  if (FieldBits::NoField != (BackgroundColorFieldMask & whichField)) {
    returnValue += _sfBackgroundColor.getBinSize();
  }

  if (FieldBits::NoField != (TextEnabledFieldMask & whichField)) {
    returnValue += _sfTextEnabled.getBinSize();
  }

  if (FieldBits::NoField != (BackgroundEnabledFieldMask & whichField)) {
    returnValue += _sfBackgroundEnabled.getBinSize();
  }

  if (FieldBits::NoField != (BorderEnabledFieldMask & whichField)) {
    returnValue += _sfBorderEnabled.getBinSize();
  }

  return returnValue;
}

void GraphicStatisticsForegroundBase::copyToBin(
    BinaryDataHandler& pMem, const BitVector& whichField) {
  Inherited::copyToBin(pMem, whichField);

  if (FieldBits::NoField != (DisplayTypeFieldMask & whichField)) {
    _mfDisplayType.copyToBin(pMem);
  }

  if (FieldBits::NoField != (SizeFieldMask & whichField)) {
    _mfSize.copyToBin(pMem);
  }

  if (FieldBits::NoField != (PosFieldMask & whichField)) {
    _mfPos.copyToBin(pMem);
  }

  if (FieldBits::NoField != (ColorMaxFieldMask & whichField)) {
    _mfColorMax.copyToBin(pMem);
  }

  if (FieldBits::NoField != (ColorMinFieldMask & whichField)) {
    _mfColorMin.copyToBin(pMem);
  }

  if (FieldBits::NoField != (ColorCurrentFieldMask & whichField)) {
    _mfColorCurrent.copyToBin(pMem);
  }

  if (FieldBits::NoField != (MinValueFieldMask & whichField)) {
    _mfMinValue.copyToBin(pMem);
  }

  if (FieldBits::NoField != (MaxValueFieldMask & whichField)) {
    _mfMaxValue.copyToBin(pMem);
  }

  if (FieldBits::NoField != (FlagsFieldMask & whichField)) {
    _mfFlags.copyToBin(pMem);
  }

  if (FieldBits::NoField != (HistorySizeFieldMask & whichField)) {
    _mfHistorySize.copyToBin(pMem);
  }

  if (FieldBits::NoField != (DescriptionFieldMask & whichField)) {
    _mfDescription.copyToBin(pMem);
  }

  if (FieldBits::NoField != (LineWidthFieldMask & whichField)) {
    _sfLineWidth.copyToBin(pMem);
  }

  if (FieldBits::NoField != (BackgroundColorFieldMask & whichField)) {
    _sfBackgroundColor.copyToBin(pMem);
  }

  if (FieldBits::NoField != (TextEnabledFieldMask & whichField)) {
    _sfTextEnabled.copyToBin(pMem);
  }

  if (FieldBits::NoField != (BackgroundEnabledFieldMask & whichField)) {
    _sfBackgroundEnabled.copyToBin(pMem);
  }

  if (FieldBits::NoField != (BorderEnabledFieldMask & whichField)) {
    _sfBorderEnabled.copyToBin(pMem);
  }
}

void GraphicStatisticsForegroundBase::copyFromBin(
    BinaryDataHandler& pMem, const BitVector& whichField) {
  Inherited::copyFromBin(pMem, whichField);

  if (FieldBits::NoField != (DisplayTypeFieldMask & whichField)) {
    _mfDisplayType.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (SizeFieldMask & whichField)) {
    _mfSize.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (PosFieldMask & whichField)) {
    _mfPos.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (ColorMaxFieldMask & whichField)) {
    _mfColorMax.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (ColorMinFieldMask & whichField)) {
    _mfColorMin.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (ColorCurrentFieldMask & whichField)) {
    _mfColorCurrent.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (MinValueFieldMask & whichField)) {
    _mfMinValue.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (MaxValueFieldMask & whichField)) {
    _mfMaxValue.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (FlagsFieldMask & whichField)) {
    _mfFlags.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (HistorySizeFieldMask & whichField)) {
    _mfHistorySize.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (DescriptionFieldMask & whichField)) {
    _mfDescription.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (LineWidthFieldMask & whichField)) {
    _sfLineWidth.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (BackgroundColorFieldMask & whichField)) {
    _sfBackgroundColor.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (TextEnabledFieldMask & whichField)) {
    _sfTextEnabled.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (BackgroundEnabledFieldMask & whichField)) {
    _sfBackgroundEnabled.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (BorderEnabledFieldMask & whichField)) {
    _sfBorderEnabled.copyFromBin(pMem);
  }
}

#if !defined(OSG_FIXED_MFIELDSYNC)
void GraphicStatisticsForegroundBase::executeSyncImpl(
    GraphicStatisticsForegroundBase* pOther, const BitVector& whichField) {

  Inherited::executeSyncImpl(pOther, whichField);

  if (FieldBits::NoField != (DisplayTypeFieldMask & whichField))
    _mfDisplayType.syncWith(pOther->_mfDisplayType);

  if (FieldBits::NoField != (SizeFieldMask & whichField))
    _mfSize.syncWith(pOther->_mfSize);

  if (FieldBits::NoField != (PosFieldMask & whichField))
    _mfPos.syncWith(pOther->_mfPos);

  if (FieldBits::NoField != (ColorMaxFieldMask & whichField))
    _mfColorMax.syncWith(pOther->_mfColorMax);

  if (FieldBits::NoField != (ColorMinFieldMask & whichField))
    _mfColorMin.syncWith(pOther->_mfColorMin);

  if (FieldBits::NoField != (ColorCurrentFieldMask & whichField))
    _mfColorCurrent.syncWith(pOther->_mfColorCurrent);

  if (FieldBits::NoField != (MinValueFieldMask & whichField))
    _mfMinValue.syncWith(pOther->_mfMinValue);

  if (FieldBits::NoField != (MaxValueFieldMask & whichField))
    _mfMaxValue.syncWith(pOther->_mfMaxValue);

  if (FieldBits::NoField != (FlagsFieldMask & whichField))
    _mfFlags.syncWith(pOther->_mfFlags);

  if (FieldBits::NoField != (HistorySizeFieldMask & whichField))
    _mfHistorySize.syncWith(pOther->_mfHistorySize);

  if (FieldBits::NoField != (DescriptionFieldMask & whichField))
    _mfDescription.syncWith(pOther->_mfDescription);

  if (FieldBits::NoField != (LineWidthFieldMask & whichField))
    _sfLineWidth.syncWith(pOther->_sfLineWidth);

  if (FieldBits::NoField != (BackgroundColorFieldMask & whichField))
    _sfBackgroundColor.syncWith(pOther->_sfBackgroundColor);

  if (FieldBits::NoField != (TextEnabledFieldMask & whichField))
    _sfTextEnabled.syncWith(pOther->_sfTextEnabled);

  if (FieldBits::NoField != (BackgroundEnabledFieldMask & whichField))
    _sfBackgroundEnabled.syncWith(pOther->_sfBackgroundEnabled);

  if (FieldBits::NoField != (BorderEnabledFieldMask & whichField))
    _sfBorderEnabled.syncWith(pOther->_sfBorderEnabled);
}
#else
void GraphicStatisticsForegroundBase::executeSyncImpl(
    GraphicStatisticsForegroundBase* pOther, const BitVector& whichField, const SyncInfo& sInfo) {

  Inherited::executeSyncImpl(pOther, whichField, sInfo);

  if (FieldBits::NoField != (LineWidthFieldMask & whichField))
    _sfLineWidth.syncWith(pOther->_sfLineWidth);

  if (FieldBits::NoField != (BackgroundColorFieldMask & whichField))
    _sfBackgroundColor.syncWith(pOther->_sfBackgroundColor);

  if (FieldBits::NoField != (TextEnabledFieldMask & whichField))
    _sfTextEnabled.syncWith(pOther->_sfTextEnabled);

  if (FieldBits::NoField != (BackgroundEnabledFieldMask & whichField))
    _sfBackgroundEnabled.syncWith(pOther->_sfBackgroundEnabled);

  if (FieldBits::NoField != (BorderEnabledFieldMask & whichField))
    _sfBorderEnabled.syncWith(pOther->_sfBorderEnabled);

  if (FieldBits::NoField != (DisplayTypeFieldMask & whichField))
    _mfDisplayType.syncWith(pOther->_mfDisplayType, sInfo);

  if (FieldBits::NoField != (SizeFieldMask & whichField))
    _mfSize.syncWith(pOther->_mfSize, sInfo);

  if (FieldBits::NoField != (PosFieldMask & whichField))
    _mfPos.syncWith(pOther->_mfPos, sInfo);

  if (FieldBits::NoField != (ColorMaxFieldMask & whichField))
    _mfColorMax.syncWith(pOther->_mfColorMax, sInfo);

  if (FieldBits::NoField != (ColorMinFieldMask & whichField))
    _mfColorMin.syncWith(pOther->_mfColorMin, sInfo);

  if (FieldBits::NoField != (ColorCurrentFieldMask & whichField))
    _mfColorCurrent.syncWith(pOther->_mfColorCurrent, sInfo);

  if (FieldBits::NoField != (MinValueFieldMask & whichField))
    _mfMinValue.syncWith(pOther->_mfMinValue, sInfo);

  if (FieldBits::NoField != (MaxValueFieldMask & whichField))
    _mfMaxValue.syncWith(pOther->_mfMaxValue, sInfo);

  if (FieldBits::NoField != (FlagsFieldMask & whichField))
    _mfFlags.syncWith(pOther->_mfFlags, sInfo);

  if (FieldBits::NoField != (HistorySizeFieldMask & whichField))
    _mfHistorySize.syncWith(pOther->_mfHistorySize, sInfo);

  if (FieldBits::NoField != (DescriptionFieldMask & whichField))
    _mfDescription.syncWith(pOther->_mfDescription, sInfo);
}

void GraphicStatisticsForegroundBase::execBeginEditImpl(
    const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize) {
  Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

  if (FieldBits::NoField != (DisplayTypeFieldMask & whichField))
    _mfDisplayType.beginEdit(uiAspect, uiContainerSize);

  if (FieldBits::NoField != (SizeFieldMask & whichField))
    _mfSize.beginEdit(uiAspect, uiContainerSize);

  if (FieldBits::NoField != (PosFieldMask & whichField))
    _mfPos.beginEdit(uiAspect, uiContainerSize);

  if (FieldBits::NoField != (ColorMaxFieldMask & whichField))
    _mfColorMax.beginEdit(uiAspect, uiContainerSize);

  if (FieldBits::NoField != (ColorMinFieldMask & whichField))
    _mfColorMin.beginEdit(uiAspect, uiContainerSize);

  if (FieldBits::NoField != (ColorCurrentFieldMask & whichField))
    _mfColorCurrent.beginEdit(uiAspect, uiContainerSize);

  if (FieldBits::NoField != (MinValueFieldMask & whichField))
    _mfMinValue.beginEdit(uiAspect, uiContainerSize);

  if (FieldBits::NoField != (MaxValueFieldMask & whichField))
    _mfMaxValue.beginEdit(uiAspect, uiContainerSize);

  if (FieldBits::NoField != (FlagsFieldMask & whichField))
    _mfFlags.beginEdit(uiAspect, uiContainerSize);

  if (FieldBits::NoField != (HistorySizeFieldMask & whichField))
    _mfHistorySize.beginEdit(uiAspect, uiContainerSize);

  if (FieldBits::NoField != (DescriptionFieldMask & whichField))
    _mfDescription.beginEdit(uiAspect, uiContainerSize);
}
#endif

#include <OSGSFieldTypeDef.inl>
#include <OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<GraphicStatisticsForegroundPtr>::_type(
    "GraphicStatisticsForegroundPtr", "StatisticsForegroundPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(GraphicStatisticsForegroundPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(GraphicStatisticsForegroundPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);

OSG_END_NAMESPACE
