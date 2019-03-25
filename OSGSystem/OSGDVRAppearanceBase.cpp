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
 **     class DVRAppearance!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEDVRAPPEARANCEINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGDVRAppearanceBase.h"
#include "OSGDVRAppearance.h"


OSG_USING_NAMESPACE

const OSG::BitVector DVRAppearanceBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 



FieldContainerType DVRAppearanceBase::_type(
    "DVRAppearance",
    "ChunkMaterial",
    NULL,
    (PrototypeCreateF) &DVRAppearanceBase::createEmpty,
    DVRAppearance::initMethod,
    NULL,
    0);

//OSG_FIELD_CONTAINER_DEF(DVRAppearanceBase, DVRAppearancePtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &DVRAppearanceBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &DVRAppearanceBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr DVRAppearanceBase::shallowCopy(void) const 
{ 
    DVRAppearancePtr returnValue; 

    newPtr(returnValue, dynamic_cast<const DVRAppearance *>(this)); 

    return returnValue; 
}

UInt32 DVRAppearanceBase::getContainerSize(void) const 
{ 
    return sizeof(DVRAppearance); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void DVRAppearanceBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((DVRAppearanceBase *) &other, whichField);
}
#else
void DVRAppearanceBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((DVRAppearanceBase *) &other, whichField, sInfo);
}
void DVRAppearanceBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void DVRAppearanceBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

DVRAppearanceBase::DVRAppearanceBase(void) :
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

DVRAppearanceBase::DVRAppearanceBase(const DVRAppearanceBase &source) :
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

DVRAppearanceBase::~DVRAppearanceBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 DVRAppearanceBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void DVRAppearanceBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);


}

void DVRAppearanceBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void DVRAppearanceBase::executeSyncImpl(      DVRAppearanceBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);


}
#else
void DVRAppearanceBase::executeSyncImpl(      DVRAppearanceBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);



}

void DVRAppearanceBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

}
#endif



#include <OSGSFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<DVRAppearancePtr>::_type("DVRAppearancePtr", "ChunkMaterialPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(DVRAppearancePtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);

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
    static Char8 cvsid_hpp       [] = OSGDVRAPPEARANCEBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGDVRAPPEARANCEBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGDVRAPPEARANCEFIELDS_HEADER_CVSID;
}

