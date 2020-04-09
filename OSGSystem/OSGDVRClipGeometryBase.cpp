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
 **     class DVRClipGeometry!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEDVRCLIPGEOMETRYINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGDVRClipGeometryBase.h"
#include "OSGDVRClipGeometry.h"


OSG_USING_NAMESPACE

const OSG::BitVector  DVRClipGeometryBase::GeometryNodeFieldMask = 
    (TypeTraits<BitVector>::One << DVRClipGeometryBase::GeometryNodeFieldId);

const OSG::BitVector  DVRClipGeometryBase::BeaconFieldMask = 
    (TypeTraits<BitVector>::One << DVRClipGeometryBase::BeaconFieldId);

const OSG::BitVector DVRClipGeometryBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var NodePtr         DVRClipGeometryBase::_sfGeometryNode
    The node holding the clip objects geometry core
*/
/*! \var NodePtr         DVRClipGeometryBase::_sfBeacon
    Pointer to the transform beacon for this clip object
*/

//! DVRClipGeometry description

FieldDescription *DVRClipGeometryBase::_desc[] = 
{
    new FieldDescription(SFNodePtr::getClassType(), 
                     "geometryNode", 
                     GeometryNodeFieldId, GeometryNodeFieldMask,
                     false,
                     (FieldAccessMethod) &DVRClipGeometryBase::getSFGeometryNode),
    new FieldDescription(SFNodePtr::getClassType(), 
                     "beacon", 
                     BeaconFieldId, BeaconFieldMask,
                     false,
                     (FieldAccessMethod) &DVRClipGeometryBase::getSFBeacon)
};


FieldContainerType DVRClipGeometryBase::_type(
    "DVRClipGeometry",
    "FieldContainer",
    NULL,
    (PrototypeCreateF) &DVRClipGeometryBase::createEmpty,
    DVRClipGeometry::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(DVRClipGeometryBase, DVRClipGeometryPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &DVRClipGeometryBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &DVRClipGeometryBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr DVRClipGeometryBase::shallowCopy(void) const 
{ 
    DVRClipGeometryPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const DVRClipGeometry *>(this)); 

    return returnValue; 
}

UInt32 DVRClipGeometryBase::getContainerSize(void) const 
{ 
    return sizeof(DVRClipGeometry); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void DVRClipGeometryBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((DVRClipGeometryBase *) &other, whichField);
}
#else
void DVRClipGeometryBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((DVRClipGeometryBase *) &other, whichField, sInfo);
}
void DVRClipGeometryBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void DVRClipGeometryBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

DVRClipGeometryBase::DVRClipGeometryBase(void) :
    _sfGeometryNode           (NodePtr(NullFC)), 
    _sfBeacon                 (NodePtr(NullFC)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

DVRClipGeometryBase::DVRClipGeometryBase(const DVRClipGeometryBase &source) :
    _sfGeometryNode           (source._sfGeometryNode           ), 
    _sfBeacon                 (source._sfBeacon                 ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

DVRClipGeometryBase::~DVRClipGeometryBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 DVRClipGeometryBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (GeometryNodeFieldMask & whichField))
    {
        returnValue += _sfGeometryNode.getBinSize();
    }

    if(FieldBits::NoField != (BeaconFieldMask & whichField))
    {
        returnValue += _sfBeacon.getBinSize();
    }


    return returnValue;
}

void DVRClipGeometryBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (GeometryNodeFieldMask & whichField))
    {
        _sfGeometryNode.copyToBin(pMem);
    }

    if(FieldBits::NoField != (BeaconFieldMask & whichField))
    {
        _sfBeacon.copyToBin(pMem);
    }


}

void DVRClipGeometryBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (GeometryNodeFieldMask & whichField))
    {
        _sfGeometryNode.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (BeaconFieldMask & whichField))
    {
        _sfBeacon.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void DVRClipGeometryBase::executeSyncImpl(      DVRClipGeometryBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (GeometryNodeFieldMask & whichField))
        _sfGeometryNode.syncWith(pOther->_sfGeometryNode);

    if(FieldBits::NoField != (BeaconFieldMask & whichField))
        _sfBeacon.syncWith(pOther->_sfBeacon);


}
#else
void DVRClipGeometryBase::executeSyncImpl(      DVRClipGeometryBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (GeometryNodeFieldMask & whichField))
        _sfGeometryNode.syncWith(pOther->_sfGeometryNode);

    if(FieldBits::NoField != (BeaconFieldMask & whichField))
        _sfBeacon.syncWith(pOther->_sfBeacon);



}

void DVRClipGeometryBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

}
#endif



#include <OSGSFieldTypeDef.inl>
#include <OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<DVRClipGeometryPtr>::_type("DVRClipGeometryPtr", "FieldContainerPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(DVRClipGeometryPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(DVRClipGeometryPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);

OSG_END_NAMESPACE
