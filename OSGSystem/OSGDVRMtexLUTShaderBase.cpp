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
 **     class DVRMtexLUTShader!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEDVRMTEXLUTSHADERINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGDVRMtexLUTShaderBase.h"
#include "OSGDVRMtexLUTShader.h"


OSG_USING_NAMESPACE

const OSG::BitVector DVRMtexLUTShaderBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 



FieldContainerType DVRMtexLUTShaderBase::_type(
    "DVRMtexLUTShader",
    "DVRSimpleLUTShader",
    NULL,
    (PrototypeCreateF) &DVRMtexLUTShaderBase::createEmpty,
    DVRMtexLUTShader::initMethod,
    NULL,
    0);

//OSG_FIELD_CONTAINER_DEF(DVRMtexLUTShaderBase, DVRMtexLUTShaderPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &DVRMtexLUTShaderBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &DVRMtexLUTShaderBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr DVRMtexLUTShaderBase::shallowCopy(void) const 
{ 
    DVRMtexLUTShaderPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const DVRMtexLUTShader *>(this)); 

    return returnValue; 
}

UInt32 DVRMtexLUTShaderBase::getContainerSize(void) const 
{ 
    return sizeof(DVRMtexLUTShader); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void DVRMtexLUTShaderBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((DVRMtexLUTShaderBase *) &other, whichField);
}
#else
void DVRMtexLUTShaderBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((DVRMtexLUTShaderBase *) &other, whichField, sInfo);
}
void DVRMtexLUTShaderBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void DVRMtexLUTShaderBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

DVRMtexLUTShaderBase::DVRMtexLUTShaderBase(void) :
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

DVRMtexLUTShaderBase::DVRMtexLUTShaderBase(const DVRMtexLUTShaderBase &source) :
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

DVRMtexLUTShaderBase::~DVRMtexLUTShaderBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 DVRMtexLUTShaderBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void DVRMtexLUTShaderBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);


}

void DVRMtexLUTShaderBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void DVRMtexLUTShaderBase::executeSyncImpl(      DVRMtexLUTShaderBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);


}
#else
void DVRMtexLUTShaderBase::executeSyncImpl(      DVRMtexLUTShaderBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);



}

void DVRMtexLUTShaderBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

}
#endif



OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<DVRMtexLUTShaderPtr>::_type("DVRMtexLUTShaderPtr", "DVRSimpleLUTShaderPtr");
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
    static Char8 cvsid_hpp       [] = OSGDVRMTEXLUTSHADERBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGDVRMTEXLUTSHADERBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGDVRMTEXLUTSHADERFIELDS_HEADER_CVSID;
}
