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
 **     class TextureTransformChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILETEXTURETRANSFORMCHUNKINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGTextureTransformChunkBase.h"
#include "OSGTextureTransformChunk.h"


OSG_USING_NAMESPACE

const OSG::BitVector  TextureTransformChunkBase::UseCameraBeaconFieldMask = 
    (TypeTraits<BitVector>::One << TextureTransformChunkBase::UseCameraBeaconFieldId);

const OSG::BitVector TextureTransformChunkBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var bool            TextureTransformChunkBase::_sfUseCameraBeacon
    If enabled it uses the camera beacon matrix (for cube textures)
*/

//! TextureTransformChunk description

FieldDescription *TextureTransformChunkBase::_desc[] = 
{
    new FieldDescription(SFBool::getClassType(), 
                     "useCameraBeacon", 
                     UseCameraBeaconFieldId, UseCameraBeaconFieldMask,
                     false,
                     (FieldAccessMethod) &TextureTransformChunkBase::getSFUseCameraBeacon)
};


FieldContainerType TextureTransformChunkBase::_type(
    "TextureTransformChunk",
    "TransformChunk",
    NULL,
    (PrototypeCreateF) &TextureTransformChunkBase::createEmpty,
    TextureTransformChunk::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(TextureTransformChunkBase, TextureTransformChunkPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &TextureTransformChunkBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &TextureTransformChunkBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr TextureTransformChunkBase::shallowCopy(void) const 
{ 
    TextureTransformChunkPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const TextureTransformChunk *>(this)); 

    return returnValue; 
}

UInt32 TextureTransformChunkBase::getContainerSize(void) const 
{ 
    return sizeof(TextureTransformChunk); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void TextureTransformChunkBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((TextureTransformChunkBase *) &other, whichField);
}
#else
void TextureTransformChunkBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((TextureTransformChunkBase *) &other, whichField, sInfo);
}
void TextureTransformChunkBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void TextureTransformChunkBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

TextureTransformChunkBase::TextureTransformChunkBase(void) :
    _sfUseCameraBeacon        (bool(false)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

TextureTransformChunkBase::TextureTransformChunkBase(const TextureTransformChunkBase &source) :
    _sfUseCameraBeacon        (source._sfUseCameraBeacon        ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

TextureTransformChunkBase::~TextureTransformChunkBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 TextureTransformChunkBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (UseCameraBeaconFieldMask & whichField))
    {
        returnValue += _sfUseCameraBeacon.getBinSize();
    }


    return returnValue;
}

void TextureTransformChunkBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (UseCameraBeaconFieldMask & whichField))
    {
        _sfUseCameraBeacon.copyToBin(pMem);
    }


}

void TextureTransformChunkBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (UseCameraBeaconFieldMask & whichField))
    {
        _sfUseCameraBeacon.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void TextureTransformChunkBase::executeSyncImpl(      TextureTransformChunkBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (UseCameraBeaconFieldMask & whichField))
        _sfUseCameraBeacon.syncWith(pOther->_sfUseCameraBeacon);


}
#else
void TextureTransformChunkBase::executeSyncImpl(      TextureTransformChunkBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (UseCameraBeaconFieldMask & whichField))
        _sfUseCameraBeacon.syncWith(pOther->_sfUseCameraBeacon);



}

void TextureTransformChunkBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<TextureTransformChunkPtr>::_type("TextureTransformChunkPtr", "TransformChunkPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(TextureTransformChunkPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(TextureTransformChunkPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);

OSG_END_NAMESPACE
