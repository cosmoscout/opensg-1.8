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
 **     class SortFirstWindow!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESORTFIRSTWINDOWINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGSortFirstWindowBase.h"
#include "OSGSortFirstWindow.h"


OSG_USING_NAMESPACE

const OSG::BitVector  SortFirstWindowBase::CompressionFieldMask = 
    (TypeTraits<BitVector>::One << SortFirstWindowBase::CompressionFieldId);

const OSG::BitVector  SortFirstWindowBase::SubtileSizeFieldMask = 
    (TypeTraits<BitVector>::One << SortFirstWindowBase::SubtileSizeFieldId);

const OSG::BitVector  SortFirstWindowBase::ComposeFieldMask = 
    (TypeTraits<BitVector>::One << SortFirstWindowBase::ComposeFieldId);

const OSG::BitVector  SortFirstWindowBase::RegionFieldMask = 
    (TypeTraits<BitVector>::One << SortFirstWindowBase::RegionFieldId);

const OSG::BitVector  SortFirstWindowBase::UseFaceDistributionFieldMask = 
    (TypeTraits<BitVector>::One << SortFirstWindowBase::UseFaceDistributionFieldId);

const OSG::BitVector SortFirstWindowBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var std::string     SortFirstWindowBase::_sfCompression
    
*/
/*! \var UInt32          SortFirstWindowBase::_sfSubtileSize
    
*/
/*! \var bool            SortFirstWindowBase::_sfCompose
    Transmit rendered image to cleint
*/
/*! \var UInt32          SortFirstWindowBase::_mfRegion
    left,right,bottom,top for each viewport
*/
/*! \var bool            SortFirstWindowBase::_sfUseFaceDistribution
    Enabe, disable analysation of face distribution
*/

//! SortFirstWindow description

FieldDescription *SortFirstWindowBase::_desc[] = 
{
    new FieldDescription(SFString::getClassType(), 
                     "compression", 
                     CompressionFieldId, CompressionFieldMask,
                     false,
                     (FieldAccessMethod) &SortFirstWindowBase::getSFCompression),
    new FieldDescription(SFUInt32::getClassType(), 
                     "subtileSize", 
                     SubtileSizeFieldId, SubtileSizeFieldMask,
                     false,
                     (FieldAccessMethod) &SortFirstWindowBase::getSFSubtileSize),
    new FieldDescription(SFBool::getClassType(), 
                     "compose", 
                     ComposeFieldId, ComposeFieldMask,
                     false,
                     (FieldAccessMethod) &SortFirstWindowBase::getSFCompose),
    new FieldDescription(MFUInt32::getClassType(), 
                     "region", 
                     RegionFieldId, RegionFieldMask,
                     false,
                     (FieldAccessMethod) &SortFirstWindowBase::getMFRegion),
    new FieldDescription(SFBool::getClassType(), 
                     "useFaceDistribution", 
                     UseFaceDistributionFieldId, UseFaceDistributionFieldMask,
                     false,
                     (FieldAccessMethod) &SortFirstWindowBase::getSFUseFaceDistribution)
};


FieldContainerType SortFirstWindowBase::_type(
    "SortFirstWindow",
    "ClusterWindow",
    NULL,
    (PrototypeCreateF) &SortFirstWindowBase::createEmpty,
    SortFirstWindow::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(SortFirstWindowBase, SortFirstWindowPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &SortFirstWindowBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &SortFirstWindowBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr SortFirstWindowBase::shallowCopy(void) const 
{ 
    SortFirstWindowPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const SortFirstWindow *>(this)); 

    return returnValue; 
}

UInt32 SortFirstWindowBase::getContainerSize(void) const 
{ 
    return sizeof(SortFirstWindow); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void SortFirstWindowBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((SortFirstWindowBase *) &other, whichField);
}
#else
void SortFirstWindowBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((SortFirstWindowBase *) &other, whichField, sInfo);
}
void SortFirstWindowBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void SortFirstWindowBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

    _mfRegion.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

SortFirstWindowBase::SortFirstWindowBase(void) :
    _sfCompression            (), 
    _sfSubtileSize            (UInt32(32)), 
    _sfCompose                (bool(true)), 
    _mfRegion                 (), 
    _sfUseFaceDistribution    (bool(false)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

SortFirstWindowBase::SortFirstWindowBase(const SortFirstWindowBase &source) :
    _sfCompression            (source._sfCompression            ), 
    _sfSubtileSize            (source._sfSubtileSize            ), 
    _sfCompose                (source._sfCompose                ), 
    _mfRegion                 (source._mfRegion                 ), 
    _sfUseFaceDistribution    (source._sfUseFaceDistribution    ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

SortFirstWindowBase::~SortFirstWindowBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 SortFirstWindowBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (CompressionFieldMask & whichField))
    {
        returnValue += _sfCompression.getBinSize();
    }

    if(FieldBits::NoField != (SubtileSizeFieldMask & whichField))
    {
        returnValue += _sfSubtileSize.getBinSize();
    }

    if(FieldBits::NoField != (ComposeFieldMask & whichField))
    {
        returnValue += _sfCompose.getBinSize();
    }

    if(FieldBits::NoField != (RegionFieldMask & whichField))
    {
        returnValue += _mfRegion.getBinSize();
    }

    if(FieldBits::NoField != (UseFaceDistributionFieldMask & whichField))
    {
        returnValue += _sfUseFaceDistribution.getBinSize();
    }


    return returnValue;
}

void SortFirstWindowBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (CompressionFieldMask & whichField))
    {
        _sfCompression.copyToBin(pMem);
    }

    if(FieldBits::NoField != (SubtileSizeFieldMask & whichField))
    {
        _sfSubtileSize.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ComposeFieldMask & whichField))
    {
        _sfCompose.copyToBin(pMem);
    }

    if(FieldBits::NoField != (RegionFieldMask & whichField))
    {
        _mfRegion.copyToBin(pMem);
    }

    if(FieldBits::NoField != (UseFaceDistributionFieldMask & whichField))
    {
        _sfUseFaceDistribution.copyToBin(pMem);
    }


}

void SortFirstWindowBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (CompressionFieldMask & whichField))
    {
        _sfCompression.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (SubtileSizeFieldMask & whichField))
    {
        _sfSubtileSize.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ComposeFieldMask & whichField))
    {
        _sfCompose.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (RegionFieldMask & whichField))
    {
        _mfRegion.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (UseFaceDistributionFieldMask & whichField))
    {
        _sfUseFaceDistribution.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void SortFirstWindowBase::executeSyncImpl(      SortFirstWindowBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (CompressionFieldMask & whichField))
        _sfCompression.syncWith(pOther->_sfCompression);

    if(FieldBits::NoField != (SubtileSizeFieldMask & whichField))
        _sfSubtileSize.syncWith(pOther->_sfSubtileSize);

    if(FieldBits::NoField != (ComposeFieldMask & whichField))
        _sfCompose.syncWith(pOther->_sfCompose);

    if(FieldBits::NoField != (RegionFieldMask & whichField))
        _mfRegion.syncWith(pOther->_mfRegion);

    if(FieldBits::NoField != (UseFaceDistributionFieldMask & whichField))
        _sfUseFaceDistribution.syncWith(pOther->_sfUseFaceDistribution);


}
#else
void SortFirstWindowBase::executeSyncImpl(      SortFirstWindowBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (CompressionFieldMask & whichField))
        _sfCompression.syncWith(pOther->_sfCompression);

    if(FieldBits::NoField != (SubtileSizeFieldMask & whichField))
        _sfSubtileSize.syncWith(pOther->_sfSubtileSize);

    if(FieldBits::NoField != (ComposeFieldMask & whichField))
        _sfCompose.syncWith(pOther->_sfCompose);

    if(FieldBits::NoField != (UseFaceDistributionFieldMask & whichField))
        _sfUseFaceDistribution.syncWith(pOther->_sfUseFaceDistribution);


    if(FieldBits::NoField != (RegionFieldMask & whichField))
        _mfRegion.syncWith(pOther->_mfRegion, sInfo);


}

void SortFirstWindowBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (RegionFieldMask & whichField))
        _mfRegion.beginEdit(uiAspect, uiContainerSize);

}
#endif



OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<SortFirstWindowPtr>::_type("SortFirstWindowPtr", "ClusterWindowPtr");
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
    static Char8 cvsid_hpp       [] = OSGSORTFIRSTWINDOWBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGSORTFIRSTWINDOWBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGSORTFIRSTWINDOWFIELDS_HEADER_CVSID;
}
