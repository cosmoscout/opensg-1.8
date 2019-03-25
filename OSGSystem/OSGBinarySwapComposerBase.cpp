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
 **     class BinarySwapComposer!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEBINARYSWAPCOMPOSERINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGBinarySwapComposerBase.h"
#include "OSGBinarySwapComposer.h"


OSG_USING_NAMESPACE

const OSG::BitVector  BinarySwapComposerBase::ShortFieldMask = 
    (TypeTraits<BitVector>::One << BinarySwapComposerBase::ShortFieldId);

const OSG::BitVector  BinarySwapComposerBase::AlphaFieldMask = 
    (TypeTraits<BitVector>::One << BinarySwapComposerBase::AlphaFieldId);

const OSG::BitVector  BinarySwapComposerBase::TileSizeFieldMask = 
    (TypeTraits<BitVector>::One << BinarySwapComposerBase::TileSizeFieldId);

const OSG::BitVector BinarySwapComposerBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var bool            BinarySwapComposerBase::_sfShort
    
*/
/*! \var bool            BinarySwapComposerBase::_sfAlpha
    
*/
/*! \var UInt32          BinarySwapComposerBase::_sfTileSize
    
*/

//! BinarySwapComposer description

FieldDescription *BinarySwapComposerBase::_desc[] = 
{
    new FieldDescription(SFBool::getClassType(), 
                     "short", 
                     ShortFieldId, ShortFieldMask,
                     false,
                     (FieldAccessMethod) &BinarySwapComposerBase::getSFShort),
    new FieldDescription(SFBool::getClassType(), 
                     "alpha", 
                     AlphaFieldId, AlphaFieldMask,
                     false,
                     (FieldAccessMethod) &BinarySwapComposerBase::getSFAlpha),
    new FieldDescription(SFUInt32::getClassType(), 
                     "tileSize", 
                     TileSizeFieldId, TileSizeFieldMask,
                     false,
                     (FieldAccessMethod) &BinarySwapComposerBase::getSFTileSize)
};


FieldContainerType BinarySwapComposerBase::_type(
    "BinarySwapComposer",
    "ImageComposer",
    NULL,
    (PrototypeCreateF) &BinarySwapComposerBase::createEmpty,
    BinarySwapComposer::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(BinarySwapComposerBase, BinarySwapComposerPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &BinarySwapComposerBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &BinarySwapComposerBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr BinarySwapComposerBase::shallowCopy(void) const 
{ 
    BinarySwapComposerPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const BinarySwapComposer *>(this)); 

    return returnValue; 
}

UInt32 BinarySwapComposerBase::getContainerSize(void) const 
{ 
    return sizeof(BinarySwapComposer); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void BinarySwapComposerBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((BinarySwapComposerBase *) &other, whichField);
}
#else
void BinarySwapComposerBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((BinarySwapComposerBase *) &other, whichField, sInfo);
}
void BinarySwapComposerBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void BinarySwapComposerBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

BinarySwapComposerBase::BinarySwapComposerBase(void) :
    _sfShort                  (bool(true)), 
    _sfAlpha                  (bool(false)), 
    _sfTileSize               (UInt32(44)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

BinarySwapComposerBase::BinarySwapComposerBase(const BinarySwapComposerBase &source) :
    _sfShort                  (source._sfShort                  ), 
    _sfAlpha                  (source._sfAlpha                  ), 
    _sfTileSize               (source._sfTileSize               ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

BinarySwapComposerBase::~BinarySwapComposerBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 BinarySwapComposerBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ShortFieldMask & whichField))
    {
        returnValue += _sfShort.getBinSize();
    }

    if(FieldBits::NoField != (AlphaFieldMask & whichField))
    {
        returnValue += _sfAlpha.getBinSize();
    }

    if(FieldBits::NoField != (TileSizeFieldMask & whichField))
    {
        returnValue += _sfTileSize.getBinSize();
    }


    return returnValue;
}

void BinarySwapComposerBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ShortFieldMask & whichField))
    {
        _sfShort.copyToBin(pMem);
    }

    if(FieldBits::NoField != (AlphaFieldMask & whichField))
    {
        _sfAlpha.copyToBin(pMem);
    }

    if(FieldBits::NoField != (TileSizeFieldMask & whichField))
    {
        _sfTileSize.copyToBin(pMem);
    }


}

void BinarySwapComposerBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ShortFieldMask & whichField))
    {
        _sfShort.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (AlphaFieldMask & whichField))
    {
        _sfAlpha.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (TileSizeFieldMask & whichField))
    {
        _sfTileSize.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void BinarySwapComposerBase::executeSyncImpl(      BinarySwapComposerBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (ShortFieldMask & whichField))
        _sfShort.syncWith(pOther->_sfShort);

    if(FieldBits::NoField != (AlphaFieldMask & whichField))
        _sfAlpha.syncWith(pOther->_sfAlpha);

    if(FieldBits::NoField != (TileSizeFieldMask & whichField))
        _sfTileSize.syncWith(pOther->_sfTileSize);


}
#else
void BinarySwapComposerBase::executeSyncImpl(      BinarySwapComposerBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (ShortFieldMask & whichField))
        _sfShort.syncWith(pOther->_sfShort);

    if(FieldBits::NoField != (AlphaFieldMask & whichField))
        _sfAlpha.syncWith(pOther->_sfAlpha);

    if(FieldBits::NoField != (TileSizeFieldMask & whichField))
        _sfTileSize.syncWith(pOther->_sfTileSize);



}

void BinarySwapComposerBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

}
#endif



OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<BinarySwapComposerPtr>::_type("BinarySwapComposerPtr", "ImageComposerPtr");
#endif


OSG_END_NAMESPACE


/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static Char8 cvsid_cpp       [] = "@(#)$Id: FCBaseTemplate_cpp.h,v 1.45 2005/07/20 00:10:14 vossg Exp $";
    static Char8 cvsid_hpp       [] = OSGBINARYSWAPCOMPOSERBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGBINARYSWAPCOMPOSERBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGBINARYSWAPCOMPOSERFIELDS_HEADER_CVSID;
}

