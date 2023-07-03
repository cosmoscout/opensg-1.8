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
 **     class Manipulator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#define OSG_COMPILEMANIPULATORINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGManipulatorBase.h"
#include "OSGManipulator.h"

OSG_USING_NAMESPACE

const OSG::BitVector ManipulatorBase::TargetFieldMask =
    (TypeTraits<BitVector>::One << ManipulatorBase::TargetFieldId);

const OSG::BitVector ManipulatorBase::ActiveSubHandleFieldMask =
    (TypeTraits<BitVector>::One << ManipulatorBase::ActiveSubHandleFieldId);

const OSG::BitVector ManipulatorBase::LastMousePosFieldMask =
    (TypeTraits<BitVector>::One << ManipulatorBase::LastMousePosFieldId);

const OSG::BitVector ManipulatorBase::ViewportFieldMask =
    (TypeTraits<BitVector>::One << ManipulatorBase::ViewportFieldId);

const OSG::BitVector ManipulatorBase::ActiveFieldMask =
    (TypeTraits<BitVector>::One << ManipulatorBase::ActiveFieldId);

const OSG::BitVector ManipulatorBase::LengthFieldMask =
    (TypeTraits<BitVector>::One << ManipulatorBase::LengthFieldId);

const OSG::BitVector ManipulatorBase::HandleXNodeFieldMask =
    (TypeTraits<BitVector>::One << ManipulatorBase::HandleXNodeFieldId);

const OSG::BitVector ManipulatorBase::HandleYNodeFieldMask =
    (TypeTraits<BitVector>::One << ManipulatorBase::HandleYNodeFieldId);

const OSG::BitVector ManipulatorBase::HandleZNodeFieldMask =
    (TypeTraits<BitVector>::One << ManipulatorBase::HandleZNodeFieldId);

const OSG::BitVector ManipulatorBase::TransXNodeFieldMask =
    (TypeTraits<BitVector>::One << ManipulatorBase::TransXNodeFieldId);

const OSG::BitVector ManipulatorBase::TransYNodeFieldMask =
    (TypeTraits<BitVector>::One << ManipulatorBase::TransYNodeFieldId);

const OSG::BitVector ManipulatorBase::TransZNodeFieldMask =
    (TypeTraits<BitVector>::One << ManipulatorBase::TransZNodeFieldId);

const OSG::BitVector ManipulatorBase::MaterialXFieldMask =
    (TypeTraits<BitVector>::One << ManipulatorBase::MaterialXFieldId);

const OSG::BitVector ManipulatorBase::MaterialYFieldMask =
    (TypeTraits<BitVector>::One << ManipulatorBase::MaterialYFieldId);

const OSG::BitVector ManipulatorBase::MaterialZFieldMask =
    (TypeTraits<BitVector>::One << ManipulatorBase::MaterialZFieldId);

const OSG::BitVector ManipulatorBase::AxisLinesNFieldMask =
    (TypeTraits<BitVector>::One << ManipulatorBase::AxisLinesNFieldId);

const OSG::BitVector ManipulatorBase::MTInfluenceMask =
    (Inherited::MTInfluenceMask) | (static_cast<BitVector>(0x0) << Inherited::NextFieldId);

// Field descriptions

/*! \var NodePtr         ManipulatorBase::_sfTarget

*/
/*! \var NodePtr         ManipulatorBase::_sfActiveSubHandle
    the active sub handle
*/
/*! \var Pnt2f           ManipulatorBase::_sfLastMousePos
    Last mouse position (in pixel, although 2f is used!)
*/
/*! \var ViewportPtr     ManipulatorBase::_sfViewport

*/
/*! \var bool            ManipulatorBase::_sfActive

*/
/*! \var Vec3f           ManipulatorBase::_sfLength
    The length of the three axes in one vector
*/
/*! \var NodePtr         ManipulatorBase::_sfHandleXNode
    The node for the x-handle geometry
*/
/*! \var NodePtr         ManipulatorBase::_sfHandleYNode
    The node for the y-handle geometry
*/
/*! \var NodePtr         ManipulatorBase::_sfHandleZNode
    The node for the z-handle geometry
*/
/*! \var NodePtr         ManipulatorBase::_sfTransXNode
    The node for the x-handle transform
*/
/*! \var NodePtr         ManipulatorBase::_sfTransYNode
    The node for the y-handle transform
*/
/*! \var NodePtr         ManipulatorBase::_sfTransZNode
    The node for the z-handle transform
*/
/*! \var MaterialPtr     ManipulatorBase::_sfMaterialX
    material for the x-axis geometry
*/
/*! \var MaterialPtr     ManipulatorBase::_sfMaterialY
    material for the y-axis geometry
*/
/*! \var MaterialPtr     ManipulatorBase::_sfMaterialZ
    material for the z-axis geometry
*/
/*! \var NodePtr         ManipulatorBase::_sfAxisLinesN

*/

//! Manipulator description

FieldDescription* ManipulatorBase::_desc[] = {
    new FieldDescription(SFNodePtr::getClassType(), "target", TargetFieldId, TargetFieldMask, false,
        (FieldAccessMethod)&ManipulatorBase::getSFTarget),
    new FieldDescription(SFNodePtr::getClassType(), "activeSubHandle", ActiveSubHandleFieldId,
        ActiveSubHandleFieldMask, true, (FieldAccessMethod)&ManipulatorBase::getSFActiveSubHandle),
    new FieldDescription(SFPnt2f::getClassType(), "lastMousePos", LastMousePosFieldId,
        LastMousePosFieldMask, false, (FieldAccessMethod)&ManipulatorBase::getSFLastMousePos),
    new FieldDescription(SFViewportPtr::getClassType(), "viewport", ViewportFieldId,
        ViewportFieldMask, true, (FieldAccessMethod)&ManipulatorBase::getSFViewport),
    new FieldDescription(SFBool::getClassType(), "active", ActiveFieldId, ActiveFieldMask, false,
        (FieldAccessMethod)&ManipulatorBase::getSFActive),
    new FieldDescription(SFVec3f::getClassType(), "length", LengthFieldId, LengthFieldMask, false,
        (FieldAccessMethod)&ManipulatorBase::getSFLength),
    new FieldDescription(SFNodePtr::getClassType(), "handleXNode", HandleXNodeFieldId,
        HandleXNodeFieldMask, true, (FieldAccessMethod)&ManipulatorBase::getSFHandleXNode),
    new FieldDescription(SFNodePtr::getClassType(), "handleYNode", HandleYNodeFieldId,
        HandleYNodeFieldMask, true, (FieldAccessMethod)&ManipulatorBase::getSFHandleYNode),
    new FieldDescription(SFNodePtr::getClassType(), "handleZNode", HandleZNodeFieldId,
        HandleZNodeFieldMask, true, (FieldAccessMethod)&ManipulatorBase::getSFHandleZNode),
    new FieldDescription(SFNodePtr::getClassType(), "transXNode", TransXNodeFieldId,
        TransXNodeFieldMask, true, (FieldAccessMethod)&ManipulatorBase::getSFTransXNode),
    new FieldDescription(SFNodePtr::getClassType(), "transYNode", TransYNodeFieldId,
        TransYNodeFieldMask, true, (FieldAccessMethod)&ManipulatorBase::getSFTransYNode),
    new FieldDescription(SFNodePtr::getClassType(), "transZNode", TransZNodeFieldId,
        TransZNodeFieldMask, true, (FieldAccessMethod)&ManipulatorBase::getSFTransZNode),
    new FieldDescription(SFMaterialPtr::getClassType(), "materialX", MaterialXFieldId,
        MaterialXFieldMask, true, (FieldAccessMethod)&ManipulatorBase::getSFMaterialX),
    new FieldDescription(SFMaterialPtr::getClassType(), "materialY", MaterialYFieldId,
        MaterialYFieldMask, true, (FieldAccessMethod)&ManipulatorBase::getSFMaterialY),
    new FieldDescription(SFMaterialPtr::getClassType(), "materialZ", MaterialZFieldId,
        MaterialZFieldMask, true, (FieldAccessMethod)&ManipulatorBase::getSFMaterialZ),
    new FieldDescription(SFNodePtr::getClassType(), "axisLinesN", AxisLinesNFieldId,
        AxisLinesNFieldMask, true, (FieldAccessMethod)&ManipulatorBase::getSFAxisLinesN)};

FieldContainerType ManipulatorBase::_type(
    "Manipulator", "Transform", NULL, NULL, Manipulator::initMethod, _desc, sizeof(_desc));

// OSG_FIELD_CONTAINER_DEF(ManipulatorBase, ManipulatorPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType& ManipulatorBase::getType(void) {
  return _type;
}

const FieldContainerType& ManipulatorBase::getType(void) const {
  return _type;
}

UInt32 ManipulatorBase::getContainerSize(void) const {
  return sizeof(Manipulator);
}

#if !defined(OSG_FIXED_MFIELDSYNC)
void ManipulatorBase::executeSync(FieldContainer& other, const BitVector& whichField) {
  this->executeSyncImpl((ManipulatorBase*)&other, whichField);
}
#else
void ManipulatorBase::executeSync(
    FieldContainer& other, const BitVector& whichField, const SyncInfo& sInfo) {
  this->executeSyncImpl((ManipulatorBase*)&other, whichField, sInfo);
}
void ManipulatorBase::execBeginEdit(
    const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize) {
  this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void ManipulatorBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect) {
  Inherited::onDestroyAspect(uiId, uiAspect);
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning(disable : 383)
#endif

ManipulatorBase::ManipulatorBase(void)
    : _sfTarget()
    , _sfActiveSubHandle()
    , _sfLastMousePos()
    , _sfViewport(ViewportPtr(NullFC))
    , _sfActive()
    , _sfLength(Vec3f(1, 1, 1))
    , _sfHandleXNode()
    , _sfHandleYNode()
    , _sfHandleZNode()
    , _sfTransXNode()
    , _sfTransYNode()
    , _sfTransZNode()
    , _sfMaterialX()
    , _sfMaterialY()
    , _sfMaterialZ()
    , _sfAxisLinesN()
    , Inherited() {
}

#ifdef OSG_WIN32_ICL
#pragma warning(default : 383)
#endif

ManipulatorBase::ManipulatorBase(const ManipulatorBase& source)
    : _sfTarget(source._sfTarget)
    , _sfActiveSubHandle(source._sfActiveSubHandle)
    , _sfLastMousePos(source._sfLastMousePos)
    , _sfViewport(source._sfViewport)
    , _sfActive(source._sfActive)
    , _sfLength(source._sfLength)
    , _sfHandleXNode(source._sfHandleXNode)
    , _sfHandleYNode(source._sfHandleYNode)
    , _sfHandleZNode(source._sfHandleZNode)
    , _sfTransXNode(source._sfTransXNode)
    , _sfTransYNode(source._sfTransYNode)
    , _sfTransZNode(source._sfTransZNode)
    , _sfMaterialX(source._sfMaterialX)
    , _sfMaterialY(source._sfMaterialY)
    , _sfMaterialZ(source._sfMaterialZ)
    , _sfAxisLinesN(source._sfAxisLinesN)
    , Inherited(source) {
}

/*-------------------------- destructors ----------------------------------*/

ManipulatorBase::~ManipulatorBase(void) {
}

/*------------------------------ access -----------------------------------*/

UInt32 ManipulatorBase::getBinSize(const BitVector& whichField) {
  UInt32 returnValue = Inherited::getBinSize(whichField);

  if (FieldBits::NoField != (TargetFieldMask & whichField)) {
    returnValue += _sfTarget.getBinSize();
  }

  if (FieldBits::NoField != (ActiveSubHandleFieldMask & whichField)) {
    returnValue += _sfActiveSubHandle.getBinSize();
  }

  if (FieldBits::NoField != (LastMousePosFieldMask & whichField)) {
    returnValue += _sfLastMousePos.getBinSize();
  }

  if (FieldBits::NoField != (ViewportFieldMask & whichField)) {
    returnValue += _sfViewport.getBinSize();
  }

  if (FieldBits::NoField != (ActiveFieldMask & whichField)) {
    returnValue += _sfActive.getBinSize();
  }

  if (FieldBits::NoField != (LengthFieldMask & whichField)) {
    returnValue += _sfLength.getBinSize();
  }

  if (FieldBits::NoField != (HandleXNodeFieldMask & whichField)) {
    returnValue += _sfHandleXNode.getBinSize();
  }

  if (FieldBits::NoField != (HandleYNodeFieldMask & whichField)) {
    returnValue += _sfHandleYNode.getBinSize();
  }

  if (FieldBits::NoField != (HandleZNodeFieldMask & whichField)) {
    returnValue += _sfHandleZNode.getBinSize();
  }

  if (FieldBits::NoField != (TransXNodeFieldMask & whichField)) {
    returnValue += _sfTransXNode.getBinSize();
  }

  if (FieldBits::NoField != (TransYNodeFieldMask & whichField)) {
    returnValue += _sfTransYNode.getBinSize();
  }

  if (FieldBits::NoField != (TransZNodeFieldMask & whichField)) {
    returnValue += _sfTransZNode.getBinSize();
  }

  if (FieldBits::NoField != (MaterialXFieldMask & whichField)) {
    returnValue += _sfMaterialX.getBinSize();
  }

  if (FieldBits::NoField != (MaterialYFieldMask & whichField)) {
    returnValue += _sfMaterialY.getBinSize();
  }

  if (FieldBits::NoField != (MaterialZFieldMask & whichField)) {
    returnValue += _sfMaterialZ.getBinSize();
  }

  if (FieldBits::NoField != (AxisLinesNFieldMask & whichField)) {
    returnValue += _sfAxisLinesN.getBinSize();
  }

  return returnValue;
}

void ManipulatorBase::copyToBin(BinaryDataHandler& pMem, const BitVector& whichField) {
  Inherited::copyToBin(pMem, whichField);

  if (FieldBits::NoField != (TargetFieldMask & whichField)) {
    _sfTarget.copyToBin(pMem);
  }

  if (FieldBits::NoField != (ActiveSubHandleFieldMask & whichField)) {
    _sfActiveSubHandle.copyToBin(pMem);
  }

  if (FieldBits::NoField != (LastMousePosFieldMask & whichField)) {
    _sfLastMousePos.copyToBin(pMem);
  }

  if (FieldBits::NoField != (ViewportFieldMask & whichField)) {
    _sfViewport.copyToBin(pMem);
  }

  if (FieldBits::NoField != (ActiveFieldMask & whichField)) {
    _sfActive.copyToBin(pMem);
  }

  if (FieldBits::NoField != (LengthFieldMask & whichField)) {
    _sfLength.copyToBin(pMem);
  }

  if (FieldBits::NoField != (HandleXNodeFieldMask & whichField)) {
    _sfHandleXNode.copyToBin(pMem);
  }

  if (FieldBits::NoField != (HandleYNodeFieldMask & whichField)) {
    _sfHandleYNode.copyToBin(pMem);
  }

  if (FieldBits::NoField != (HandleZNodeFieldMask & whichField)) {
    _sfHandleZNode.copyToBin(pMem);
  }

  if (FieldBits::NoField != (TransXNodeFieldMask & whichField)) {
    _sfTransXNode.copyToBin(pMem);
  }

  if (FieldBits::NoField != (TransYNodeFieldMask & whichField)) {
    _sfTransYNode.copyToBin(pMem);
  }

  if (FieldBits::NoField != (TransZNodeFieldMask & whichField)) {
    _sfTransZNode.copyToBin(pMem);
  }

  if (FieldBits::NoField != (MaterialXFieldMask & whichField)) {
    _sfMaterialX.copyToBin(pMem);
  }

  if (FieldBits::NoField != (MaterialYFieldMask & whichField)) {
    _sfMaterialY.copyToBin(pMem);
  }

  if (FieldBits::NoField != (MaterialZFieldMask & whichField)) {
    _sfMaterialZ.copyToBin(pMem);
  }

  if (FieldBits::NoField != (AxisLinesNFieldMask & whichField)) {
    _sfAxisLinesN.copyToBin(pMem);
  }
}

void ManipulatorBase::copyFromBin(BinaryDataHandler& pMem, const BitVector& whichField) {
  Inherited::copyFromBin(pMem, whichField);

  if (FieldBits::NoField != (TargetFieldMask & whichField)) {
    _sfTarget.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (ActiveSubHandleFieldMask & whichField)) {
    _sfActiveSubHandle.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (LastMousePosFieldMask & whichField)) {
    _sfLastMousePos.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (ViewportFieldMask & whichField)) {
    _sfViewport.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (ActiveFieldMask & whichField)) {
    _sfActive.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (LengthFieldMask & whichField)) {
    _sfLength.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (HandleXNodeFieldMask & whichField)) {
    _sfHandleXNode.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (HandleYNodeFieldMask & whichField)) {
    _sfHandleYNode.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (HandleZNodeFieldMask & whichField)) {
    _sfHandleZNode.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (TransXNodeFieldMask & whichField)) {
    _sfTransXNode.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (TransYNodeFieldMask & whichField)) {
    _sfTransYNode.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (TransZNodeFieldMask & whichField)) {
    _sfTransZNode.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (MaterialXFieldMask & whichField)) {
    _sfMaterialX.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (MaterialYFieldMask & whichField)) {
    _sfMaterialY.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (MaterialZFieldMask & whichField)) {
    _sfMaterialZ.copyFromBin(pMem);
  }

  if (FieldBits::NoField != (AxisLinesNFieldMask & whichField)) {
    _sfAxisLinesN.copyFromBin(pMem);
  }
}

#if !defined(OSG_FIXED_MFIELDSYNC)
void ManipulatorBase::executeSyncImpl(ManipulatorBase* pOther, const BitVector& whichField) {

  Inherited::executeSyncImpl(pOther, whichField);

  if (FieldBits::NoField != (TargetFieldMask & whichField))
    _sfTarget.syncWith(pOther->_sfTarget);

  if (FieldBits::NoField != (ActiveSubHandleFieldMask & whichField))
    _sfActiveSubHandle.syncWith(pOther->_sfActiveSubHandle);

  if (FieldBits::NoField != (LastMousePosFieldMask & whichField))
    _sfLastMousePos.syncWith(pOther->_sfLastMousePos);

  if (FieldBits::NoField != (ViewportFieldMask & whichField))
    _sfViewport.syncWith(pOther->_sfViewport);

  if (FieldBits::NoField != (ActiveFieldMask & whichField))
    _sfActive.syncWith(pOther->_sfActive);

  if (FieldBits::NoField != (LengthFieldMask & whichField))
    _sfLength.syncWith(pOther->_sfLength);

  if (FieldBits::NoField != (HandleXNodeFieldMask & whichField))
    _sfHandleXNode.syncWith(pOther->_sfHandleXNode);

  if (FieldBits::NoField != (HandleYNodeFieldMask & whichField))
    _sfHandleYNode.syncWith(pOther->_sfHandleYNode);

  if (FieldBits::NoField != (HandleZNodeFieldMask & whichField))
    _sfHandleZNode.syncWith(pOther->_sfHandleZNode);

  if (FieldBits::NoField != (TransXNodeFieldMask & whichField))
    _sfTransXNode.syncWith(pOther->_sfTransXNode);

  if (FieldBits::NoField != (TransYNodeFieldMask & whichField))
    _sfTransYNode.syncWith(pOther->_sfTransYNode);

  if (FieldBits::NoField != (TransZNodeFieldMask & whichField))
    _sfTransZNode.syncWith(pOther->_sfTransZNode);

  if (FieldBits::NoField != (MaterialXFieldMask & whichField))
    _sfMaterialX.syncWith(pOther->_sfMaterialX);

  if (FieldBits::NoField != (MaterialYFieldMask & whichField))
    _sfMaterialY.syncWith(pOther->_sfMaterialY);

  if (FieldBits::NoField != (MaterialZFieldMask & whichField))
    _sfMaterialZ.syncWith(pOther->_sfMaterialZ);

  if (FieldBits::NoField != (AxisLinesNFieldMask & whichField))
    _sfAxisLinesN.syncWith(pOther->_sfAxisLinesN);
}
#else
void ManipulatorBase::executeSyncImpl(
    ManipulatorBase* pOther, const BitVector& whichField, const SyncInfo& sInfo) {

  Inherited::executeSyncImpl(pOther, whichField, sInfo);

  if (FieldBits::NoField != (TargetFieldMask & whichField))
    _sfTarget.syncWith(pOther->_sfTarget);

  if (FieldBits::NoField != (ActiveSubHandleFieldMask & whichField))
    _sfActiveSubHandle.syncWith(pOther->_sfActiveSubHandle);

  if (FieldBits::NoField != (LastMousePosFieldMask & whichField))
    _sfLastMousePos.syncWith(pOther->_sfLastMousePos);

  if (FieldBits::NoField != (ViewportFieldMask & whichField))
    _sfViewport.syncWith(pOther->_sfViewport);

  if (FieldBits::NoField != (ActiveFieldMask & whichField))
    _sfActive.syncWith(pOther->_sfActive);

  if (FieldBits::NoField != (LengthFieldMask & whichField))
    _sfLength.syncWith(pOther->_sfLength);

  if (FieldBits::NoField != (HandleXNodeFieldMask & whichField))
    _sfHandleXNode.syncWith(pOther->_sfHandleXNode);

  if (FieldBits::NoField != (HandleYNodeFieldMask & whichField))
    _sfHandleYNode.syncWith(pOther->_sfHandleYNode);

  if (FieldBits::NoField != (HandleZNodeFieldMask & whichField))
    _sfHandleZNode.syncWith(pOther->_sfHandleZNode);

  if (FieldBits::NoField != (TransXNodeFieldMask & whichField))
    _sfTransXNode.syncWith(pOther->_sfTransXNode);

  if (FieldBits::NoField != (TransYNodeFieldMask & whichField))
    _sfTransYNode.syncWith(pOther->_sfTransYNode);

  if (FieldBits::NoField != (TransZNodeFieldMask & whichField))
    _sfTransZNode.syncWith(pOther->_sfTransZNode);

  if (FieldBits::NoField != (MaterialXFieldMask & whichField))
    _sfMaterialX.syncWith(pOther->_sfMaterialX);

  if (FieldBits::NoField != (MaterialYFieldMask & whichField))
    _sfMaterialY.syncWith(pOther->_sfMaterialY);

  if (FieldBits::NoField != (MaterialZFieldMask & whichField))
    _sfMaterialZ.syncWith(pOther->_sfMaterialZ);

  if (FieldBits::NoField != (AxisLinesNFieldMask & whichField))
    _sfAxisLinesN.syncWith(pOther->_sfAxisLinesN);
}

void ManipulatorBase::execBeginEditImpl(
    const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize) {
  Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}
#endif

#include <OSGSFieldTypeDef.inl>
#include <OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<ManipulatorPtr>::_type("ManipulatorPtr", "TransformPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(ManipulatorPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(ManipulatorPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);

OSG_END_NAMESPACE
