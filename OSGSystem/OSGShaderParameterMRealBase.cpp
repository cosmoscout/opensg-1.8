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
 **     class ShaderParameterMReal!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESHADERPARAMETERMREALINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGShaderParameterMRealBase.h"
#include "OSGShaderParameterMReal.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  ShaderParameterMRealBase::ValueFieldMask = 
    (TypeTraits<BitVector>::One << ShaderParameterMRealBase::ValueFieldId);

const OSG::BitVector ShaderParameterMRealBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Real32          ShaderParameterMRealBase::_mfValue
    parameter value
*/

//! ShaderParameterMReal description

FieldDescription *ShaderParameterMRealBase::_desc[] = 
{
    new FieldDescription(MFReal32::getClassType(), 
                     "value", 
                     ValueFieldId, ValueFieldMask,
                     false,
                     (FieldAccessMethod) &ShaderParameterMRealBase::getMFValue)
};


FieldContainerType ShaderParameterMRealBase::_type(
    "ShaderParameterMReal",
    "ShaderParameter",
    NULL,
    (PrototypeCreateF) &ShaderParameterMRealBase::createEmpty,
    ShaderParameterMReal::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(ShaderParameterMRealBase, ShaderParameterMRealPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &ShaderParameterMRealBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &ShaderParameterMRealBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr ShaderParameterMRealBase::shallowCopy(void) const 
{ 
    ShaderParameterMRealPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const ShaderParameterMReal *>(this)); 

    return returnValue; 
}

UInt32 ShaderParameterMRealBase::getContainerSize(void) const 
{ 
    return sizeof(ShaderParameterMReal); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void ShaderParameterMRealBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((ShaderParameterMRealBase *) &other, whichField);
}
#else
void ShaderParameterMRealBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((ShaderParameterMRealBase *) &other, whichField, sInfo);
}
void ShaderParameterMRealBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void ShaderParameterMRealBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

    _mfValue.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

ShaderParameterMRealBase::ShaderParameterMRealBase(void) :
    _mfValue                  (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

ShaderParameterMRealBase::ShaderParameterMRealBase(const ShaderParameterMRealBase &source) :
    _mfValue                  (source._mfValue                  ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

ShaderParameterMRealBase::~ShaderParameterMRealBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 ShaderParameterMRealBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        returnValue += _mfValue.getBinSize();
    }


    return returnValue;
}

void ShaderParameterMRealBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _mfValue.copyToBin(pMem);
    }


}

void ShaderParameterMRealBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _mfValue.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void ShaderParameterMRealBase::executeSyncImpl(      ShaderParameterMRealBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
        _mfValue.syncWith(pOther->_mfValue);


}
#else
void ShaderParameterMRealBase::executeSyncImpl(      ShaderParameterMRealBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);


    if(FieldBits::NoField != (ValueFieldMask & whichField))
        _mfValue.syncWith(pOther->_mfValue, sInfo);


}

void ShaderParameterMRealBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
        _mfValue.beginEdit(uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OSGSFieldTypeDef.inl>
#include <OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<ShaderParameterMRealPtr>::_type("ShaderParameterMRealPtr", "ShaderParameterPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(ShaderParameterMRealPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(ShaderParameterMRealPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_cpp       [] = "@(#)$Id: OSGShaderParameterMRealBase.cpp,v 1.1 2007/03/09 18:11:48 a-m-z Exp $";
    static Char8 cvsid_hpp       [] = OSGSHADERPARAMETERMREALBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGSHADERPARAMETERMREALBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGSHADERPARAMETERMREALFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE
