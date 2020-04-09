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
 **     class ClusterWindow!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILECLUSTERWINDOWINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGClusterWindowBase.h"
#include "OSGClusterWindow.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  ClusterWindowBase::ServersFieldMask = 
    (TypeTraits<BitVector>::One << ClusterWindowBase::ServersFieldId);

const OSG::BitVector  ClusterWindowBase::ConnectionTypeFieldMask = 
    (TypeTraits<BitVector>::One << ClusterWindowBase::ConnectionTypeFieldId);

const OSG::BitVector  ClusterWindowBase::ConnectionInterfaceFieldMask = 
    (TypeTraits<BitVector>::One << ClusterWindowBase::ConnectionInterfaceFieldId);

const OSG::BitVector  ClusterWindowBase::ConnectionDestinationFieldMask = 
    (TypeTraits<BitVector>::One << ClusterWindowBase::ConnectionDestinationFieldId);

const OSG::BitVector  ClusterWindowBase::ConnectionParamsFieldMask = 
    (TypeTraits<BitVector>::One << ClusterWindowBase::ConnectionParamsFieldId);

const OSG::BitVector  ClusterWindowBase::ServicePortFieldMask = 
    (TypeTraits<BitVector>::One << ClusterWindowBase::ServicePortFieldId);

const OSG::BitVector  ClusterWindowBase::ServiceAddressFieldMask = 
    (TypeTraits<BitVector>::One << ClusterWindowBase::ServiceAddressFieldId);

const OSG::BitVector  ClusterWindowBase::ServiceInterfaceFieldMask = 
    (TypeTraits<BitVector>::One << ClusterWindowBase::ServiceInterfaceFieldId);

const OSG::BitVector  ClusterWindowBase::ClientWindowFieldMask = 
    (TypeTraits<BitVector>::One << ClusterWindowBase::ClientWindowFieldId);

const OSG::BitVector  ClusterWindowBase::InterleaveFieldMask = 
    (TypeTraits<BitVector>::One << ClusterWindowBase::InterleaveFieldId);

const OSG::BitVector  ClusterWindowBase::FrameCountFieldMask = 
    (TypeTraits<BitVector>::One << ClusterWindowBase::FrameCountFieldId);

const OSG::BitVector  ClusterWindowBase::ComposerFieldMask = 
    (TypeTraits<BitVector>::One << ClusterWindowBase::ComposerFieldId);

const OSG::BitVector  ClusterWindowBase::AutostartFieldMask = 
    (TypeTraits<BitVector>::One << ClusterWindowBase::AutostartFieldId);

const OSG::BitVector  ClusterWindowBase::CalibrationFieldMask = 
    (TypeTraits<BitVector>::One << ClusterWindowBase::CalibrationFieldId);

const OSG::BitVector  ClusterWindowBase::FilterFieldMask = 
    (TypeTraits<BitVector>::One << ClusterWindowBase::FilterFieldId);

const OSG::BitVector  ClusterWindowBase::DirtyFieldMask = 
    (TypeTraits<BitVector>::One << ClusterWindowBase::DirtyFieldId);

const OSG::BitVector ClusterWindowBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var std::string     ClusterWindowBase::_mfServers
    List of all symbolic server names
*/
/*! \var std::string     ClusterWindowBase::_sfConnectionType
    How to connect to the servers
*/
/*! \var std::string     ClusterWindowBase::_sfConnectionInterface
    Which network interface to use for communication
*/
/*! \var std::string     ClusterWindowBase::_sfConnectionDestination
    Multicast address for multicast connections
*/
/*! \var std::string     ClusterWindowBase::_sfConnectionParams
    Optional parameters e.g. "TTL=2"
*/
/*! \var UInt32          ClusterWindowBase::_sfServicePort
    Broadcastport used for server search
*/
/*! \var std::string     ClusterWindowBase::_sfServiceAddress
    Broadcast or Multicast address used for server search
*/
/*! \var std::string     ClusterWindowBase::_sfServiceInterface
    Ethernet interface to be used for server search
*/
/*! \var WindowPtr       ClusterWindowBase::_sfClientWindow
    Window for client rendering
*/
/*! \var UInt32          ClusterWindowBase::_sfInterleave
    
*/
/*! \var UInt32          ClusterWindowBase::_sfFrameCount
    
*/
/*! \var ImageComposerPtr ClusterWindowBase::_sfComposer
    
*/
/*! \var std::string     ClusterWindowBase::_mfAutostart
    
*/
/*! \var DisplayCalibrationPtr ClusterWindowBase::_mfCalibration
    
*/
/*! \var DisplayFilterForegroundPtr ClusterWindowBase::_mfFilter
    Display filter foregrounds can be used instead of calibration
*/
/*! \var bool            ClusterWindowBase::_sfDirty
    Internally set for forceing re-initialization of foregrounds
*/

//! ClusterWindow description

FieldDescription *ClusterWindowBase::_desc[] = 
{
    new FieldDescription(MFString::getClassType(), 
                     "servers", 
                     ServersFieldId, ServersFieldMask,
                     false,
                     (FieldAccessMethod) &ClusterWindowBase::getMFServers),
    new FieldDescription(SFString::getClassType(), 
                     "connectionType", 
                     ConnectionTypeFieldId, ConnectionTypeFieldMask,
                     false,
                     (FieldAccessMethod) &ClusterWindowBase::getSFConnectionType),
    new FieldDescription(SFString::getClassType(), 
                     "connectionInterface", 
                     ConnectionInterfaceFieldId, ConnectionInterfaceFieldMask,
                     false,
                     (FieldAccessMethod) &ClusterWindowBase::getSFConnectionInterface),
    new FieldDescription(SFString::getClassType(), 
                     "connectionDestination", 
                     ConnectionDestinationFieldId, ConnectionDestinationFieldMask,
                     false,
                     (FieldAccessMethod) &ClusterWindowBase::getSFConnectionDestination),
    new FieldDescription(SFString::getClassType(), 
                     "connectionParams", 
                     ConnectionParamsFieldId, ConnectionParamsFieldMask,
                     false,
                     (FieldAccessMethod) &ClusterWindowBase::getSFConnectionParams),
    new FieldDescription(SFUInt32::getClassType(), 
                     "servicePort", 
                     ServicePortFieldId, ServicePortFieldMask,
                     false,
                     (FieldAccessMethod) &ClusterWindowBase::getSFServicePort),
    new FieldDescription(SFString::getClassType(), 
                     "serviceAddress", 
                     ServiceAddressFieldId, ServiceAddressFieldMask,
                     false,
                     (FieldAccessMethod) &ClusterWindowBase::getSFServiceAddress),
    new FieldDescription(SFString::getClassType(), 
                     "serviceInterface", 
                     ServiceInterfaceFieldId, ServiceInterfaceFieldMask,
                     false,
                     (FieldAccessMethod) &ClusterWindowBase::getSFServiceInterface),
    new FieldDescription(SFWindowPtr::getClassType(), 
                     "clientWindow", 
                     ClientWindowFieldId, ClientWindowFieldMask,
                     false,
                     (FieldAccessMethod) &ClusterWindowBase::getSFClientWindow),
    new FieldDescription(SFUInt32::getClassType(), 
                     "interleave", 
                     InterleaveFieldId, InterleaveFieldMask,
                     false,
                     (FieldAccessMethod) &ClusterWindowBase::getSFInterleave),
    new FieldDescription(SFUInt32::getClassType(), 
                     "frameCount", 
                     FrameCountFieldId, FrameCountFieldMask,
                     false,
                     (FieldAccessMethod) &ClusterWindowBase::getSFFrameCount),
    new FieldDescription(SFImageComposerPtr::getClassType(), 
                     "composer", 
                     ComposerFieldId, ComposerFieldMask,
                     false,
                     (FieldAccessMethod) &ClusterWindowBase::getSFComposer),
    new FieldDescription(MFString::getClassType(), 
                     "autostart", 
                     AutostartFieldId, AutostartFieldMask,
                     false,
                     (FieldAccessMethod) &ClusterWindowBase::getMFAutostart),
    new FieldDescription(MFDisplayCalibrationPtr::getClassType(), 
                     "calibration", 
                     CalibrationFieldId, CalibrationFieldMask,
                     false,
                     (FieldAccessMethod) &ClusterWindowBase::getMFCalibration),
    new FieldDescription(MFDisplayFilterForegroundPtr::getClassType(), 
                     "filter", 
                     FilterFieldId, FilterFieldMask,
                     false,
                     (FieldAccessMethod) &ClusterWindowBase::getMFFilter),
    new FieldDescription(SFBool::getClassType(), 
                     "dirty", 
                     DirtyFieldId, DirtyFieldMask,
                     false,
                     (FieldAccessMethod) &ClusterWindowBase::getSFDirty)
};


FieldContainerType ClusterWindowBase::_type(
    "ClusterWindow",
    "Window",
    NULL,
    (PrototypeCreateF) &ClusterWindowBase::createEmpty,
    ClusterWindow::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(ClusterWindowBase, ClusterWindowPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &ClusterWindowBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &ClusterWindowBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr ClusterWindowBase::shallowCopy(void) const 
{ 
    ClusterWindowPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const ClusterWindow *>(this)); 

    return returnValue; 
}

UInt32 ClusterWindowBase::getContainerSize(void) const 
{ 
    return sizeof(ClusterWindow); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void ClusterWindowBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((ClusterWindowBase *) &other, whichField);
}
#else
void ClusterWindowBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((ClusterWindowBase *) &other, whichField, sInfo);
}
void ClusterWindowBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void ClusterWindowBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

    _mfServers.terminateShare(uiAspect, this->getContainerSize());
    _mfAutostart.terminateShare(uiAspect, this->getContainerSize());
    _mfCalibration.terminateShare(uiAspect, this->getContainerSize());
    _mfFilter.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

ClusterWindowBase::ClusterWindowBase(void) :
    _mfServers                (), 
    _sfConnectionType         (), 
    _sfConnectionInterface    (), 
    _sfConnectionDestination  (), 
    _sfConnectionParams       (), 
    _sfServicePort            (UInt32(8437)), 
    _sfServiceAddress         (std::string("224.245.211.234")), 
    _sfServiceInterface       (), 
    _sfClientWindow           (), 
    _sfInterleave             (UInt32(0)), 
    _sfFrameCount             (UInt32(0)), 
    _sfComposer               (), 
    _mfAutostart              (), 
    _mfCalibration            (), 
    _mfFilter                 (), 
    _sfDirty                  (bool(false)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

ClusterWindowBase::ClusterWindowBase(const ClusterWindowBase &source) :
    _mfServers                (source._mfServers                ), 
    _sfConnectionType         (source._sfConnectionType         ), 
    _sfConnectionInterface    (source._sfConnectionInterface    ), 
    _sfConnectionDestination  (source._sfConnectionDestination  ), 
    _sfConnectionParams       (source._sfConnectionParams       ), 
    _sfServicePort            (source._sfServicePort            ), 
    _sfServiceAddress         (source._sfServiceAddress         ), 
    _sfServiceInterface       (source._sfServiceInterface       ), 
    _sfClientWindow           (source._sfClientWindow           ), 
    _sfInterleave             (source._sfInterleave             ), 
    _sfFrameCount             (source._sfFrameCount             ), 
    _sfComposer               (source._sfComposer               ), 
    _mfAutostart              (source._mfAutostart              ), 
    _mfCalibration            (source._mfCalibration            ), 
    _mfFilter                 (source._mfFilter                 ), 
    _sfDirty                  (source._sfDirty                  ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

ClusterWindowBase::~ClusterWindowBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 ClusterWindowBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ServersFieldMask & whichField))
    {
        returnValue += _mfServers.getBinSize();
    }

    if(FieldBits::NoField != (ConnectionTypeFieldMask & whichField))
    {
        returnValue += _sfConnectionType.getBinSize();
    }

    if(FieldBits::NoField != (ConnectionInterfaceFieldMask & whichField))
    {
        returnValue += _sfConnectionInterface.getBinSize();
    }

    if(FieldBits::NoField != (ConnectionDestinationFieldMask & whichField))
    {
        returnValue += _sfConnectionDestination.getBinSize();
    }

    if(FieldBits::NoField != (ConnectionParamsFieldMask & whichField))
    {
        returnValue += _sfConnectionParams.getBinSize();
    }

    if(FieldBits::NoField != (ServicePortFieldMask & whichField))
    {
        returnValue += _sfServicePort.getBinSize();
    }

    if(FieldBits::NoField != (ServiceAddressFieldMask & whichField))
    {
        returnValue += _sfServiceAddress.getBinSize();
    }

    if(FieldBits::NoField != (ServiceInterfaceFieldMask & whichField))
    {
        returnValue += _sfServiceInterface.getBinSize();
    }

    if(FieldBits::NoField != (ClientWindowFieldMask & whichField))
    {
        returnValue += _sfClientWindow.getBinSize();
    }

    if(FieldBits::NoField != (InterleaveFieldMask & whichField))
    {
        returnValue += _sfInterleave.getBinSize();
    }

    if(FieldBits::NoField != (FrameCountFieldMask & whichField))
    {
        returnValue += _sfFrameCount.getBinSize();
    }

    if(FieldBits::NoField != (ComposerFieldMask & whichField))
    {
        returnValue += _sfComposer.getBinSize();
    }

    if(FieldBits::NoField != (AutostartFieldMask & whichField))
    {
        returnValue += _mfAutostart.getBinSize();
    }

    if(FieldBits::NoField != (CalibrationFieldMask & whichField))
    {
        returnValue += _mfCalibration.getBinSize();
    }

    if(FieldBits::NoField != (FilterFieldMask & whichField))
    {
        returnValue += _mfFilter.getBinSize();
    }

    if(FieldBits::NoField != (DirtyFieldMask & whichField))
    {
        returnValue += _sfDirty.getBinSize();
    }


    return returnValue;
}

void ClusterWindowBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ServersFieldMask & whichField))
    {
        _mfServers.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ConnectionTypeFieldMask & whichField))
    {
        _sfConnectionType.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ConnectionInterfaceFieldMask & whichField))
    {
        _sfConnectionInterface.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ConnectionDestinationFieldMask & whichField))
    {
        _sfConnectionDestination.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ConnectionParamsFieldMask & whichField))
    {
        _sfConnectionParams.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ServicePortFieldMask & whichField))
    {
        _sfServicePort.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ServiceAddressFieldMask & whichField))
    {
        _sfServiceAddress.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ServiceInterfaceFieldMask & whichField))
    {
        _sfServiceInterface.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ClientWindowFieldMask & whichField))
    {
        _sfClientWindow.copyToBin(pMem);
    }

    if(FieldBits::NoField != (InterleaveFieldMask & whichField))
    {
        _sfInterleave.copyToBin(pMem);
    }

    if(FieldBits::NoField != (FrameCountFieldMask & whichField))
    {
        _sfFrameCount.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ComposerFieldMask & whichField))
    {
        _sfComposer.copyToBin(pMem);
    }

    if(FieldBits::NoField != (AutostartFieldMask & whichField))
    {
        _mfAutostart.copyToBin(pMem);
    }

    if(FieldBits::NoField != (CalibrationFieldMask & whichField))
    {
        _mfCalibration.copyToBin(pMem);
    }

    if(FieldBits::NoField != (FilterFieldMask & whichField))
    {
        _mfFilter.copyToBin(pMem);
    }

    if(FieldBits::NoField != (DirtyFieldMask & whichField))
    {
        _sfDirty.copyToBin(pMem);
    }


}

void ClusterWindowBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ServersFieldMask & whichField))
    {
        _mfServers.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ConnectionTypeFieldMask & whichField))
    {
        _sfConnectionType.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ConnectionInterfaceFieldMask & whichField))
    {
        _sfConnectionInterface.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ConnectionDestinationFieldMask & whichField))
    {
        _sfConnectionDestination.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ConnectionParamsFieldMask & whichField))
    {
        _sfConnectionParams.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ServicePortFieldMask & whichField))
    {
        _sfServicePort.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ServiceAddressFieldMask & whichField))
    {
        _sfServiceAddress.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ServiceInterfaceFieldMask & whichField))
    {
        _sfServiceInterface.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ClientWindowFieldMask & whichField))
    {
        _sfClientWindow.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (InterleaveFieldMask & whichField))
    {
        _sfInterleave.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (FrameCountFieldMask & whichField))
    {
        _sfFrameCount.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ComposerFieldMask & whichField))
    {
        _sfComposer.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (AutostartFieldMask & whichField))
    {
        _mfAutostart.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (CalibrationFieldMask & whichField))
    {
        _mfCalibration.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (FilterFieldMask & whichField))
    {
        _mfFilter.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (DirtyFieldMask & whichField))
    {
        _sfDirty.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void ClusterWindowBase::executeSyncImpl(      ClusterWindowBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (ServersFieldMask & whichField))
        _mfServers.syncWith(pOther->_mfServers);

    if(FieldBits::NoField != (ConnectionTypeFieldMask & whichField))
        _sfConnectionType.syncWith(pOther->_sfConnectionType);

    if(FieldBits::NoField != (ConnectionInterfaceFieldMask & whichField))
        _sfConnectionInterface.syncWith(pOther->_sfConnectionInterface);

    if(FieldBits::NoField != (ConnectionDestinationFieldMask & whichField))
        _sfConnectionDestination.syncWith(pOther->_sfConnectionDestination);

    if(FieldBits::NoField != (ConnectionParamsFieldMask & whichField))
        _sfConnectionParams.syncWith(pOther->_sfConnectionParams);

    if(FieldBits::NoField != (ServicePortFieldMask & whichField))
        _sfServicePort.syncWith(pOther->_sfServicePort);

    if(FieldBits::NoField != (ServiceAddressFieldMask & whichField))
        _sfServiceAddress.syncWith(pOther->_sfServiceAddress);

    if(FieldBits::NoField != (ServiceInterfaceFieldMask & whichField))
        _sfServiceInterface.syncWith(pOther->_sfServiceInterface);

    if(FieldBits::NoField != (ClientWindowFieldMask & whichField))
        _sfClientWindow.syncWith(pOther->_sfClientWindow);

    if(FieldBits::NoField != (InterleaveFieldMask & whichField))
        _sfInterleave.syncWith(pOther->_sfInterleave);

    if(FieldBits::NoField != (FrameCountFieldMask & whichField))
        _sfFrameCount.syncWith(pOther->_sfFrameCount);

    if(FieldBits::NoField != (ComposerFieldMask & whichField))
        _sfComposer.syncWith(pOther->_sfComposer);

    if(FieldBits::NoField != (AutostartFieldMask & whichField))
        _mfAutostart.syncWith(pOther->_mfAutostart);

    if(FieldBits::NoField != (CalibrationFieldMask & whichField))
        _mfCalibration.syncWith(pOther->_mfCalibration);

    if(FieldBits::NoField != (FilterFieldMask & whichField))
        _mfFilter.syncWith(pOther->_mfFilter);

    if(FieldBits::NoField != (DirtyFieldMask & whichField))
        _sfDirty.syncWith(pOther->_sfDirty);


}
#else
void ClusterWindowBase::executeSyncImpl(      ClusterWindowBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (ConnectionTypeFieldMask & whichField))
        _sfConnectionType.syncWith(pOther->_sfConnectionType);

    if(FieldBits::NoField != (ConnectionInterfaceFieldMask & whichField))
        _sfConnectionInterface.syncWith(pOther->_sfConnectionInterface);

    if(FieldBits::NoField != (ConnectionDestinationFieldMask & whichField))
        _sfConnectionDestination.syncWith(pOther->_sfConnectionDestination);

    if(FieldBits::NoField != (ConnectionParamsFieldMask & whichField))
        _sfConnectionParams.syncWith(pOther->_sfConnectionParams);

    if(FieldBits::NoField != (ServicePortFieldMask & whichField))
        _sfServicePort.syncWith(pOther->_sfServicePort);

    if(FieldBits::NoField != (ServiceAddressFieldMask & whichField))
        _sfServiceAddress.syncWith(pOther->_sfServiceAddress);

    if(FieldBits::NoField != (ServiceInterfaceFieldMask & whichField))
        _sfServiceInterface.syncWith(pOther->_sfServiceInterface);

    if(FieldBits::NoField != (ClientWindowFieldMask & whichField))
        _sfClientWindow.syncWith(pOther->_sfClientWindow);

    if(FieldBits::NoField != (InterleaveFieldMask & whichField))
        _sfInterleave.syncWith(pOther->_sfInterleave);

    if(FieldBits::NoField != (FrameCountFieldMask & whichField))
        _sfFrameCount.syncWith(pOther->_sfFrameCount);

    if(FieldBits::NoField != (ComposerFieldMask & whichField))
        _sfComposer.syncWith(pOther->_sfComposer);

    if(FieldBits::NoField != (DirtyFieldMask & whichField))
        _sfDirty.syncWith(pOther->_sfDirty);


    if(FieldBits::NoField != (ServersFieldMask & whichField))
        _mfServers.syncWith(pOther->_mfServers, sInfo);

    if(FieldBits::NoField != (AutostartFieldMask & whichField))
        _mfAutostart.syncWith(pOther->_mfAutostart, sInfo);

    if(FieldBits::NoField != (CalibrationFieldMask & whichField))
        _mfCalibration.syncWith(pOther->_mfCalibration, sInfo);

    if(FieldBits::NoField != (FilterFieldMask & whichField))
        _mfFilter.syncWith(pOther->_mfFilter, sInfo);


}

void ClusterWindowBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (ServersFieldMask & whichField))
        _mfServers.beginEdit(uiAspect, uiContainerSize);

    if(FieldBits::NoField != (AutostartFieldMask & whichField))
        _mfAutostart.beginEdit(uiAspect, uiContainerSize);

    if(FieldBits::NoField != (CalibrationFieldMask & whichField))
        _mfCalibration.beginEdit(uiAspect, uiContainerSize);

    if(FieldBits::NoField != (FilterFieldMask & whichField))
        _mfFilter.beginEdit(uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OSGSFieldTypeDef.inl>
#include <OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<ClusterWindowPtr>::_type("ClusterWindowPtr", "WindowPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(ClusterWindowPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(ClusterWindowPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);

OSG_END_NAMESPACE

