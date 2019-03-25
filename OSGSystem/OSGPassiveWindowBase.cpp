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
 **     class PassiveWindow!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEPASSIVEWINDOWINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGPassiveWindowBase.h"
#include "OSGPassiveWindow.h"


OSG_USING_NAMESPACE

const OSG::BitVector PassiveWindowBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 



FieldContainerType PassiveWindowBase::_type(
    "PassiveWindow",
    "Window",
    NULL,
    (PrototypeCreateF) &PassiveWindowBase::createEmpty,
    PassiveWindow::initMethod,
    NULL,
    0);

//OSG_FIELD_CONTAINER_DEF(PassiveWindowBase, PassiveWindowPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &PassiveWindowBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &PassiveWindowBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr PassiveWindowBase::shallowCopy(void) const 
{ 
    PassiveWindowPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const PassiveWindow *>(this)); 

    return returnValue; 
}

UInt32 PassiveWindowBase::getContainerSize(void) const 
{ 
    return sizeof(PassiveWindow); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void PassiveWindowBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((PassiveWindowBase *) &other, whichField);
}
#else
void PassiveWindowBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((PassiveWindowBase *) &other, whichField, sInfo);
}
void PassiveWindowBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void PassiveWindowBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

PassiveWindowBase::PassiveWindowBase(void) :
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

PassiveWindowBase::PassiveWindowBase(const PassiveWindowBase &source) :
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

PassiveWindowBase::~PassiveWindowBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 PassiveWindowBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void PassiveWindowBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);


}

void PassiveWindowBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void PassiveWindowBase::executeSyncImpl(      PassiveWindowBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);


}
#else
void PassiveWindowBase::executeSyncImpl(      PassiveWindowBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);



}

void PassiveWindowBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<PassiveWindowPtr>::_type("PassiveWindowPtr", "WindowPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(PassiveWindowPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(PassiveWindowPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);

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
    static Char8 cvsid_hpp       [] = OSGPASSIVEWINDOWBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGPASSIVEWINDOWBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGPASSIVEWINDOWFIELDS_HEADER_CVSID;
}

