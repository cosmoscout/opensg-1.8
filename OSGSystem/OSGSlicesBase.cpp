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
 **     class Slices!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESLICESINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGSlicesBase.h"
#include "OSGSlices.h"


OSG_USING_NAMESPACE

const OSG::BitVector  SlicesBase::SizeFieldMask = 
    (TypeTraits<BitVector>::One << SlicesBase::SizeFieldId);

const OSG::BitVector  SlicesBase::SliceDistanceFieldMask = 
    (TypeTraits<BitVector>::One << SlicesBase::SliceDistanceFieldId);

const OSG::BitVector SlicesBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Vec3f           SlicesBase::_sfSize
    terrain size in local coords
*/
/*! \var Real32          SlicesBase::_sfSliceDistance
    
*/

//! Slices description

FieldDescription *SlicesBase::_desc[] = 
{
    new FieldDescription(SFVec3f::getClassType(), 
                     "size", 
                     SizeFieldId, SizeFieldMask,
                     false,
                     (FieldAccessMethod) &SlicesBase::getSFSize),
    new FieldDescription(SFReal32::getClassType(), 
                     "sliceDistance", 
                     SliceDistanceFieldId, SliceDistanceFieldMask,
                     false,
                     (FieldAccessMethod) &SlicesBase::getSFSliceDistance)
};


FieldContainerType SlicesBase::_type(
    "Slices",
    "MaterialDrawable",
    NULL,
    (PrototypeCreateF) &SlicesBase::createEmpty,
    Slices::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(SlicesBase, SlicesPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &SlicesBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &SlicesBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr SlicesBase::shallowCopy(void) const 
{ 
    SlicesPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const Slices *>(this)); 

    return returnValue; 
}

UInt32 SlicesBase::getContainerSize(void) const 
{ 
    return sizeof(Slices); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void SlicesBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((SlicesBase *) &other, whichField);
}
#else
void SlicesBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((SlicesBase *) &other, whichField, sInfo);
}
void SlicesBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void SlicesBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

SlicesBase::SlicesBase(void) :
    _sfSize                   (Vec3f(1, 1, 1)), 
    _sfSliceDistance          (Real32(100)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

SlicesBase::SlicesBase(const SlicesBase &source) :
    _sfSize                   (source._sfSize                   ), 
    _sfSliceDistance          (source._sfSliceDistance          ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

SlicesBase::~SlicesBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 SlicesBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (SizeFieldMask & whichField))
    {
        returnValue += _sfSize.getBinSize();
    }

    if(FieldBits::NoField != (SliceDistanceFieldMask & whichField))
    {
        returnValue += _sfSliceDistance.getBinSize();
    }


    return returnValue;
}

void SlicesBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (SizeFieldMask & whichField))
    {
        _sfSize.copyToBin(pMem);
    }

    if(FieldBits::NoField != (SliceDistanceFieldMask & whichField))
    {
        _sfSliceDistance.copyToBin(pMem);
    }


}

void SlicesBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (SizeFieldMask & whichField))
    {
        _sfSize.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (SliceDistanceFieldMask & whichField))
    {
        _sfSliceDistance.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void SlicesBase::executeSyncImpl(      SlicesBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (SizeFieldMask & whichField))
        _sfSize.syncWith(pOther->_sfSize);

    if(FieldBits::NoField != (SliceDistanceFieldMask & whichField))
        _sfSliceDistance.syncWith(pOther->_sfSliceDistance);


}
#else
void SlicesBase::executeSyncImpl(      SlicesBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (SizeFieldMask & whichField))
        _sfSize.syncWith(pOther->_sfSize);

    if(FieldBits::NoField != (SliceDistanceFieldMask & whichField))
        _sfSliceDistance.syncWith(pOther->_sfSliceDistance);



}

void SlicesBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<SlicesPtr>::_type("SlicesPtr", "MaterialDrawablePtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(SlicesPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(SlicesPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);

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
    static Char8 cvsid_hpp       [] = OSGSLICESBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGSLICESBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGSLICESFIELDS_HEADER_CVSID;
}
