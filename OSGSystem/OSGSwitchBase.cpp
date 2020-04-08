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
 **     class Switch!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESWITCHINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGSwitchBase.h"
#include "OSGSwitch.h"


OSG_USING_NAMESPACE

const OSG::BitVector  SwitchBase::ChoiceFieldMask = 
    (TypeTraits<BitVector>::One << SwitchBase::ChoiceFieldId);

const OSG::BitVector SwitchBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Int32           SwitchBase::_sfChoice
    
*/

//! Switch description

FieldDescription *SwitchBase::_desc[] = 
{
    new FieldDescription(SFInt32::getClassType(), 
                     "choice", 
                     ChoiceFieldId, ChoiceFieldMask,
                     false,
                     (FieldAccessMethod) &SwitchBase::getSFChoice)
};


FieldContainerType SwitchBase::_type(
    "Switch",
    "Group",
    NULL,
    (PrototypeCreateF) &SwitchBase::createEmpty,
    Switch::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(SwitchBase, SwitchPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &SwitchBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &SwitchBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr SwitchBase::shallowCopy(void) const 
{ 
    SwitchPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const Switch *>(this)); 

    return returnValue; 
}

UInt32 SwitchBase::getContainerSize(void) const 
{ 
    return sizeof(Switch); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void SwitchBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((SwitchBase *) &other, whichField);
}
#else
void SwitchBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((SwitchBase *) &other, whichField, sInfo);
}
void SwitchBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void SwitchBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

SwitchBase::SwitchBase(void) :
    _sfChoice                 (Int32(-1)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

SwitchBase::SwitchBase(const SwitchBase &source) :
    _sfChoice                 (source._sfChoice                 ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

SwitchBase::~SwitchBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 SwitchBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ChoiceFieldMask & whichField))
    {
        returnValue += _sfChoice.getBinSize();
    }


    return returnValue;
}

void SwitchBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ChoiceFieldMask & whichField))
    {
        _sfChoice.copyToBin(pMem);
    }


}

void SwitchBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ChoiceFieldMask & whichField))
    {
        _sfChoice.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void SwitchBase::executeSyncImpl(      SwitchBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (ChoiceFieldMask & whichField))
        _sfChoice.syncWith(pOther->_sfChoice);


}
#else
void SwitchBase::executeSyncImpl(      SwitchBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (ChoiceFieldMask & whichField))
        _sfChoice.syncWith(pOther->_sfChoice);



}

void SwitchBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<SwitchPtr>::_type("SwitchPtr", "GroupPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(SwitchPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(SwitchPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);

OSG_END_NAMESPACE


