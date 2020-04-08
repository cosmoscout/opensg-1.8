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
 **     class BalancedMultiWindow!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEBALANCEDMULTIWINDOWINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGBalancedMultiWindowBase.h"
#include "OSGBalancedMultiWindow.h"


OSG_USING_NAMESPACE

const OSG::BitVector  BalancedMultiWindowBase::BalanceFieldMask = 
    (TypeTraits<BitVector>::One << BalancedMultiWindowBase::BalanceFieldId);

const OSG::BitVector  BalancedMultiWindowBase::BestCutFieldMask = 
    (TypeTraits<BitVector>::One << BalancedMultiWindowBase::BestCutFieldId);

const OSG::BitVector  BalancedMultiWindowBase::ShowBalancingFieldMask = 
    (TypeTraits<BitVector>::One << BalancedMultiWindowBase::ShowBalancingFieldId);

const OSG::BitVector  BalancedMultiWindowBase::TileSizeFieldMask = 
    (TypeTraits<BitVector>::One << BalancedMultiWindowBase::TileSizeFieldId);

const OSG::BitVector  BalancedMultiWindowBase::ShortFieldMask = 
    (TypeTraits<BitVector>::One << BalancedMultiWindowBase::ShortFieldId);

const OSG::BitVector BalancedMultiWindowBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var bool            BalancedMultiWindowBase::_sfBalance
    If true load balancing is eanbled. If falst it behaves like a MultiDisplayWindow
*/
/*! \var bool            BalancedMultiWindowBase::_sfBestCut
    If true horizontal and vertical cuts are testet. Otherwise the longes side of a viewport is split.
*/
/*! \var bool            BalancedMultiWindowBase::_sfShowBalancing
    Mark regions rendered by other hosts
*/
/*! \var UInt32          BalancedMultiWindowBase::_sfTileSize
    
*/
/*! \var bool            BalancedMultiWindowBase::_sfShort
    
*/

//! BalancedMultiWindow description

FieldDescription *BalancedMultiWindowBase::_desc[] = 
{
    new FieldDescription(SFBool::getClassType(), 
                     "balance", 
                     BalanceFieldId, BalanceFieldMask,
                     false,
                     (FieldAccessMethod) &BalancedMultiWindowBase::getSFBalance),
    new FieldDescription(SFBool::getClassType(), 
                     "bestCut", 
                     BestCutFieldId, BestCutFieldMask,
                     false,
                     (FieldAccessMethod) &BalancedMultiWindowBase::getSFBestCut),
    new FieldDescription(SFBool::getClassType(), 
                     "showBalancing", 
                     ShowBalancingFieldId, ShowBalancingFieldMask,
                     false,
                     (FieldAccessMethod) &BalancedMultiWindowBase::getSFShowBalancing),
    new FieldDescription(SFUInt32::getClassType(), 
                     "tileSize", 
                     TileSizeFieldId, TileSizeFieldMask,
                     false,
                     (FieldAccessMethod) &BalancedMultiWindowBase::getSFTileSize),
    new FieldDescription(SFBool::getClassType(), 
                     "short", 
                     ShortFieldId, ShortFieldMask,
                     false,
                     (FieldAccessMethod) &BalancedMultiWindowBase::getSFShort)
};


FieldContainerType BalancedMultiWindowBase::_type(
    "BalancedMultiWindow",
    "MultiDisplayWindow",
    NULL,
    (PrototypeCreateF) &BalancedMultiWindowBase::createEmpty,
    BalancedMultiWindow::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(BalancedMultiWindowBase, BalancedMultiWindowPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &BalancedMultiWindowBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &BalancedMultiWindowBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr BalancedMultiWindowBase::shallowCopy(void) const 
{ 
    BalancedMultiWindowPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const BalancedMultiWindow *>(this)); 

    return returnValue; 
}

UInt32 BalancedMultiWindowBase::getContainerSize(void) const 
{ 
    return sizeof(BalancedMultiWindow); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void BalancedMultiWindowBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((BalancedMultiWindowBase *) &other, whichField);
}
#else
void BalancedMultiWindowBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((BalancedMultiWindowBase *) &other, whichField, sInfo);
}
void BalancedMultiWindowBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void BalancedMultiWindowBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

BalancedMultiWindowBase::BalancedMultiWindowBase(void) :
    _sfBalance                (bool(true)), 
    _sfBestCut                (bool(false)), 
    _sfShowBalancing          (bool(false)), 
    _sfTileSize               (UInt32(44)), 
    _sfShort                  (bool(true)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

BalancedMultiWindowBase::BalancedMultiWindowBase(const BalancedMultiWindowBase &source) :
    _sfBalance                (source._sfBalance                ), 
    _sfBestCut                (source._sfBestCut                ), 
    _sfShowBalancing          (source._sfShowBalancing          ), 
    _sfTileSize               (source._sfTileSize               ), 
    _sfShort                  (source._sfShort                  ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

BalancedMultiWindowBase::~BalancedMultiWindowBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 BalancedMultiWindowBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (BalanceFieldMask & whichField))
    {
        returnValue += _sfBalance.getBinSize();
    }

    if(FieldBits::NoField != (BestCutFieldMask & whichField))
    {
        returnValue += _sfBestCut.getBinSize();
    }

    if(FieldBits::NoField != (ShowBalancingFieldMask & whichField))
    {
        returnValue += _sfShowBalancing.getBinSize();
    }

    if(FieldBits::NoField != (TileSizeFieldMask & whichField))
    {
        returnValue += _sfTileSize.getBinSize();
    }

    if(FieldBits::NoField != (ShortFieldMask & whichField))
    {
        returnValue += _sfShort.getBinSize();
    }


    return returnValue;
}

void BalancedMultiWindowBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (BalanceFieldMask & whichField))
    {
        _sfBalance.copyToBin(pMem);
    }

    if(FieldBits::NoField != (BestCutFieldMask & whichField))
    {
        _sfBestCut.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ShowBalancingFieldMask & whichField))
    {
        _sfShowBalancing.copyToBin(pMem);
    }

    if(FieldBits::NoField != (TileSizeFieldMask & whichField))
    {
        _sfTileSize.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ShortFieldMask & whichField))
    {
        _sfShort.copyToBin(pMem);
    }


}

void BalancedMultiWindowBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (BalanceFieldMask & whichField))
    {
        _sfBalance.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (BestCutFieldMask & whichField))
    {
        _sfBestCut.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ShowBalancingFieldMask & whichField))
    {
        _sfShowBalancing.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (TileSizeFieldMask & whichField))
    {
        _sfTileSize.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ShortFieldMask & whichField))
    {
        _sfShort.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void BalancedMultiWindowBase::executeSyncImpl(      BalancedMultiWindowBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (BalanceFieldMask & whichField))
        _sfBalance.syncWith(pOther->_sfBalance);

    if(FieldBits::NoField != (BestCutFieldMask & whichField))
        _sfBestCut.syncWith(pOther->_sfBestCut);

    if(FieldBits::NoField != (ShowBalancingFieldMask & whichField))
        _sfShowBalancing.syncWith(pOther->_sfShowBalancing);

    if(FieldBits::NoField != (TileSizeFieldMask & whichField))
        _sfTileSize.syncWith(pOther->_sfTileSize);

    if(FieldBits::NoField != (ShortFieldMask & whichField))
        _sfShort.syncWith(pOther->_sfShort);


}
#else
void BalancedMultiWindowBase::executeSyncImpl(      BalancedMultiWindowBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (BalanceFieldMask & whichField))
        _sfBalance.syncWith(pOther->_sfBalance);

    if(FieldBits::NoField != (BestCutFieldMask & whichField))
        _sfBestCut.syncWith(pOther->_sfBestCut);

    if(FieldBits::NoField != (ShowBalancingFieldMask & whichField))
        _sfShowBalancing.syncWith(pOther->_sfShowBalancing);

    if(FieldBits::NoField != (TileSizeFieldMask & whichField))
        _sfTileSize.syncWith(pOther->_sfTileSize);

    if(FieldBits::NoField != (ShortFieldMask & whichField))
        _sfShort.syncWith(pOther->_sfShort);



}

void BalancedMultiWindowBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

}
#endif



OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<BalancedMultiWindowPtr>::_type("BalancedMultiWindowPtr", "MultiDisplayWindowPtr");
#endif


OSG_END_NAMESPACE


