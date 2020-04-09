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
 **     class DVRIsoShader!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEDVRISOSHADERINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGDVRIsoShaderBase.h"
#include "OSGDVRIsoShader.h"


OSG_USING_NAMESPACE

const OSG::BitVector  DVRIsoShaderBase::ShadeModeFieldMask = 
    (TypeTraits<BitVector>::One << DVRIsoShaderBase::ShadeModeFieldId);

const OSG::BitVector  DVRIsoShaderBase::ActiveShadeModeFieldMask = 
    (TypeTraits<BitVector>::One << DVRIsoShaderBase::ActiveShadeModeFieldId);

const OSG::BitVector DVRIsoShaderBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Int8            DVRIsoShaderBase::_sfShadeMode
    Debug field to manually select a hardware method
*/
/*! \var Int8            DVRIsoShaderBase::_sfActiveShadeMode
    READ ONLY - The currently active hardware method
*/

//! DVRIsoShader description

FieldDescription *DVRIsoShaderBase::_desc[] = 
{
    new FieldDescription(SFInt8::getClassType(), 
                     "shadeMode", 
                     ShadeModeFieldId, ShadeModeFieldMask,
                     true,
                     (FieldAccessMethod) &DVRIsoShaderBase::getSFShadeMode),
    new FieldDescription(SFInt8::getClassType(), 
                     "activeShadeMode", 
                     ActiveShadeModeFieldId, ActiveShadeModeFieldMask,
                     true,
                     (FieldAccessMethod) &DVRIsoShaderBase::getSFActiveShadeMode)
};


FieldContainerType DVRIsoShaderBase::_type(
    "DVRIsoShader",
    "DVRShader",
    NULL,
    (PrototypeCreateF) &DVRIsoShaderBase::createEmpty,
    DVRIsoShader::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(DVRIsoShaderBase, DVRIsoShaderPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &DVRIsoShaderBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &DVRIsoShaderBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr DVRIsoShaderBase::shallowCopy(void) const 
{ 
    DVRIsoShaderPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const DVRIsoShader *>(this)); 

    return returnValue; 
}

UInt32 DVRIsoShaderBase::getContainerSize(void) const 
{ 
    return sizeof(DVRIsoShader); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void DVRIsoShaderBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((DVRIsoShaderBase *) &other, whichField);
}
#else
void DVRIsoShaderBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((DVRIsoShaderBase *) &other, whichField, sInfo);
}
void DVRIsoShaderBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void DVRIsoShaderBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

DVRIsoShaderBase::DVRIsoShaderBase(void) :
    _sfShadeMode              (Int8(0)), 
    _sfActiveShadeMode        (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

DVRIsoShaderBase::DVRIsoShaderBase(const DVRIsoShaderBase &source) :
    _sfShadeMode              (source._sfShadeMode              ), 
    _sfActiveShadeMode        (source._sfActiveShadeMode        ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

DVRIsoShaderBase::~DVRIsoShaderBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 DVRIsoShaderBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ShadeModeFieldMask & whichField))
    {
        returnValue += _sfShadeMode.getBinSize();
    }

    if(FieldBits::NoField != (ActiveShadeModeFieldMask & whichField))
    {
        returnValue += _sfActiveShadeMode.getBinSize();
    }


    return returnValue;
}

void DVRIsoShaderBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ShadeModeFieldMask & whichField))
    {
        _sfShadeMode.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ActiveShadeModeFieldMask & whichField))
    {
        _sfActiveShadeMode.copyToBin(pMem);
    }


}

void DVRIsoShaderBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ShadeModeFieldMask & whichField))
    {
        _sfShadeMode.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ActiveShadeModeFieldMask & whichField))
    {
        _sfActiveShadeMode.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void DVRIsoShaderBase::executeSyncImpl(      DVRIsoShaderBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (ShadeModeFieldMask & whichField))
        _sfShadeMode.syncWith(pOther->_sfShadeMode);

    if(FieldBits::NoField != (ActiveShadeModeFieldMask & whichField))
        _sfActiveShadeMode.syncWith(pOther->_sfActiveShadeMode);


}
#else
void DVRIsoShaderBase::executeSyncImpl(      DVRIsoShaderBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (ShadeModeFieldMask & whichField))
        _sfShadeMode.syncWith(pOther->_sfShadeMode);

    if(FieldBits::NoField != (ActiveShadeModeFieldMask & whichField))
        _sfActiveShadeMode.syncWith(pOther->_sfActiveShadeMode);



}

void DVRIsoShaderBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

}
#endif



OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<DVRIsoShaderPtr>::_type("DVRIsoShaderPtr", "DVRShaderPtr");
#endif


OSG_END_NAMESPACE
