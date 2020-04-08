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
 **     class PointLight!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEPOINTLIGHTINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGPointLightBase.h"
#include "OSGPointLight.h"


OSG_USING_NAMESPACE

const OSG::BitVector  PointLightBase::PositionFieldMask = 
    (TypeTraits<BitVector>::One << PointLightBase::PositionFieldId);

const OSG::BitVector PointLightBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Pnt3f           PointLightBase::_sfPosition
    
*/

//! PointLight description

FieldDescription *PointLightBase::_desc[] = 
{
    new FieldDescription(SFPnt3f::getClassType(), 
                     "position", 
                     PositionFieldId, PositionFieldMask,
                     false,
                     (FieldAccessMethod) &PointLightBase::getSFPosition)
};


FieldContainerType PointLightBase::_type(
    "PointLight",
    "Light",
    NULL,
    (PrototypeCreateF) &PointLightBase::createEmpty,
    PointLight::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(PointLightBase, PointLightPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &PointLightBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &PointLightBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr PointLightBase::shallowCopy(void) const 
{ 
    PointLightPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const PointLight *>(this)); 

    return returnValue; 
}

UInt32 PointLightBase::getContainerSize(void) const 
{ 
    return sizeof(PointLight); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void PointLightBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((PointLightBase *) &other, whichField);
}
#else
void PointLightBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((PointLightBase *) &other, whichField, sInfo);
}
void PointLightBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void PointLightBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

PointLightBase::PointLightBase(void) :
    _sfPosition               (Pnt3f(0,0,0)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

PointLightBase::PointLightBase(const PointLightBase &source) :
    _sfPosition               (source._sfPosition               ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

PointLightBase::~PointLightBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 PointLightBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (PositionFieldMask & whichField))
    {
        returnValue += _sfPosition.getBinSize();
    }


    return returnValue;
}

void PointLightBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (PositionFieldMask & whichField))
    {
        _sfPosition.copyToBin(pMem);
    }


}

void PointLightBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (PositionFieldMask & whichField))
    {
        _sfPosition.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void PointLightBase::executeSyncImpl(      PointLightBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (PositionFieldMask & whichField))
        _sfPosition.syncWith(pOther->_sfPosition);


}
#else
void PointLightBase::executeSyncImpl(      PointLightBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (PositionFieldMask & whichField))
        _sfPosition.syncWith(pOther->_sfPosition);



}

void PointLightBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

}
#endif



OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<PointLightPtr>::_type("PointLightPtr", "LightPtr");
#endif


OSG_END_NAMESPACE
