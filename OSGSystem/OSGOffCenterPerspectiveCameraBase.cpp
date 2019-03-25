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
 **     class OffCenterPerspectiveCamera!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEOFFCENTERPERSPECTIVECAMERAINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGOffCenterPerspectiveCameraBase.h"
#include "OSGOffCenterPerspectiveCamera.h"


OSG_USING_NAMESPACE

const OSG::BitVector  OffCenterPerspectiveCameraBase::PrincipalPointFieldMask = 
    (TypeTraits<BitVector>::One << OffCenterPerspectiveCameraBase::PrincipalPointFieldId);

const OSG::BitVector OffCenterPerspectiveCameraBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Vec2f           OffCenterPerspectiveCameraBase::_sfPrincipalPoint
    The relative position of the principal point.
*/

//! OffCenterPerspectiveCamera description

FieldDescription *OffCenterPerspectiveCameraBase::_desc[] = 
{
    new FieldDescription(SFVec2f::getClassType(), 
                     "principalPoint", 
                     PrincipalPointFieldId, PrincipalPointFieldMask,
                     false,
                     (FieldAccessMethod) &OffCenterPerspectiveCameraBase::getSFPrincipalPoint)
};


FieldContainerType OffCenterPerspectiveCameraBase::_type(
    "OffCenterPerspectiveCamera",
    "PerspectiveCamera",
    NULL,
    (PrototypeCreateF) &OffCenterPerspectiveCameraBase::createEmpty,
    OffCenterPerspectiveCamera::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(OffCenterPerspectiveCameraBase, OffCenterPerspectiveCameraPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &OffCenterPerspectiveCameraBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &OffCenterPerspectiveCameraBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr OffCenterPerspectiveCameraBase::shallowCopy(void) const 
{ 
    OffCenterPerspectiveCameraPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const OffCenterPerspectiveCamera *>(this)); 

    return returnValue; 
}

UInt32 OffCenterPerspectiveCameraBase::getContainerSize(void) const 
{ 
    return sizeof(OffCenterPerspectiveCamera); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void OffCenterPerspectiveCameraBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((OffCenterPerspectiveCameraBase *) &other, whichField);
}
#else
void OffCenterPerspectiveCameraBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((OffCenterPerspectiveCameraBase *) &other, whichField, sInfo);
}
void OffCenterPerspectiveCameraBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void OffCenterPerspectiveCameraBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

OffCenterPerspectiveCameraBase::OffCenterPerspectiveCameraBase(void) :
    _sfPrincipalPoint         (Vec2f(0,0)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

OffCenterPerspectiveCameraBase::OffCenterPerspectiveCameraBase(const OffCenterPerspectiveCameraBase &source) :
    _sfPrincipalPoint         (source._sfPrincipalPoint         ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

OffCenterPerspectiveCameraBase::~OffCenterPerspectiveCameraBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 OffCenterPerspectiveCameraBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (PrincipalPointFieldMask & whichField))
    {
        returnValue += _sfPrincipalPoint.getBinSize();
    }


    return returnValue;
}

void OffCenterPerspectiveCameraBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (PrincipalPointFieldMask & whichField))
    {
        _sfPrincipalPoint.copyToBin(pMem);
    }


}

void OffCenterPerspectiveCameraBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (PrincipalPointFieldMask & whichField))
    {
        _sfPrincipalPoint.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void OffCenterPerspectiveCameraBase::executeSyncImpl(      OffCenterPerspectiveCameraBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (PrincipalPointFieldMask & whichField))
        _sfPrincipalPoint.syncWith(pOther->_sfPrincipalPoint);


}
#else
void OffCenterPerspectiveCameraBase::executeSyncImpl(      OffCenterPerspectiveCameraBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (PrincipalPointFieldMask & whichField))
        _sfPrincipalPoint.syncWith(pOther->_sfPrincipalPoint);



}

void OffCenterPerspectiveCameraBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<OffCenterPerspectiveCameraPtr>::_type("OffCenterPerspectiveCameraPtr", "PerspectiveCameraPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(OffCenterPerspectiveCameraPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(OffCenterPerspectiveCameraPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);

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
    static Char8 cvsid_cpp       [] = "@(#)$Id: OSGOffCenterPerspectiveCameraBase.cpp,v 1.2 2006/02/20 16:54:30 dirk Exp $";
    static Char8 cvsid_hpp       [] = OSGOFFCENTERPERSPECTIVECAMERABASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGOFFCENTERPERSPECTIVECAMERABASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGOFFCENTERPERSPECTIVECAMERAFIELDS_HEADER_CVSID;
}

