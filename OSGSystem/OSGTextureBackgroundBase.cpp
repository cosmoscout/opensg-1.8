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
 **     class TextureBackground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILETEXTUREBACKGROUNDINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGTextureBackgroundBase.h"
#include "OSGTextureBackground.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  TextureBackgroundBase::ColorFieldMask = 
    (TypeTraits<BitVector>::One << TextureBackgroundBase::ColorFieldId);

const OSG::BitVector  TextureBackgroundBase::TextureFieldMask = 
    (TypeTraits<BitVector>::One << TextureBackgroundBase::TextureFieldId);

const OSG::BitVector  TextureBackgroundBase::TexCoordsFieldMask = 
    (TypeTraits<BitVector>::One << TextureBackgroundBase::TexCoordsFieldId);

const OSG::BitVector  TextureBackgroundBase::RadialDistortionFieldMask = 
    (TypeTraits<BitVector>::One << TextureBackgroundBase::RadialDistortionFieldId);

const OSG::BitVector  TextureBackgroundBase::CenterOfDistortionFieldMask = 
    (TypeTraits<BitVector>::One << TextureBackgroundBase::CenterOfDistortionFieldId);

const OSG::BitVector  TextureBackgroundBase::HorFieldMask = 
    (TypeTraits<BitVector>::One << TextureBackgroundBase::HorFieldId);

const OSG::BitVector  TextureBackgroundBase::VertFieldMask = 
    (TypeTraits<BitVector>::One << TextureBackgroundBase::VertFieldId);

const OSG::BitVector  TextureBackgroundBase::ClearStencilBitFieldMask = 
    (TypeTraits<BitVector>::One << TextureBackgroundBase::ClearStencilBitFieldId);

const OSG::BitVector TextureBackgroundBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Color4f         TextureBackgroundBase::_sfColor
    
*/
/*! \var TextureChunkPtr TextureBackgroundBase::_sfTexture
    
*/
/*! \var Pnt2f           TextureBackgroundBase::_mfTexCoords
    
*/
/*! \var Real32          TextureBackgroundBase::_sfRadialDistortion
    
*/
/*! \var Vec2f           TextureBackgroundBase::_sfCenterOfDistortion
    
*/
/*! \var UInt16          TextureBackgroundBase::_sfHor
    horizontal subdivision
*/
/*! \var UInt16          TextureBackgroundBase::_sfVert
    vertical subdivision
*/
/*! \var Int32           TextureBackgroundBase::_sfClearStencilBit
    Usually 0 is used to clear all stencil bitplanes (clear is deactivated if smaller zero).
*/

//! TextureBackground description

FieldDescription *TextureBackgroundBase::_desc[] = 
{
    new FieldDescription(SFColor4f::getClassType(), 
                     "color", 
                     ColorFieldId, ColorFieldMask,
                     false,
                     (FieldAccessMethod) &TextureBackgroundBase::getSFColor),
    new FieldDescription(SFTextureChunkPtr::getClassType(), 
                     "texture", 
                     TextureFieldId, TextureFieldMask,
                     false,
                     (FieldAccessMethod) &TextureBackgroundBase::getSFTexture),
    new FieldDescription(MFPnt2f::getClassType(), 
                     "texCoords", 
                     TexCoordsFieldId, TexCoordsFieldMask,
                     false,
                     (FieldAccessMethod) &TextureBackgroundBase::getMFTexCoords),
    new FieldDescription(SFReal32::getClassType(), 
                     "radialDistortion", 
                     RadialDistortionFieldId, RadialDistortionFieldMask,
                     false,
                     (FieldAccessMethod) &TextureBackgroundBase::getSFRadialDistortion),
    new FieldDescription(SFVec2f::getClassType(), 
                     "centerOfDistortion", 
                     CenterOfDistortionFieldId, CenterOfDistortionFieldMask,
                     false,
                     (FieldAccessMethod) &TextureBackgroundBase::getSFCenterOfDistortion),
    new FieldDescription(SFUInt16::getClassType(), 
                     "hor", 
                     HorFieldId, HorFieldMask,
                     false,
                     (FieldAccessMethod) &TextureBackgroundBase::getSFHor),
    new FieldDescription(SFUInt16::getClassType(), 
                     "vert", 
                     VertFieldId, VertFieldMask,
                     false,
                     (FieldAccessMethod) &TextureBackgroundBase::getSFVert),
    new FieldDescription(SFInt32::getClassType(), 
                     "clearStencilBit", 
                     ClearStencilBitFieldId, ClearStencilBitFieldMask,
                     false,
                     (FieldAccessMethod) &TextureBackgroundBase::getSFClearStencilBit)
};


FieldContainerType TextureBackgroundBase::_type(
    "TextureBackground",
    "Background",
    NULL,
    (PrototypeCreateF) &TextureBackgroundBase::createEmpty,
    TextureBackground::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(TextureBackgroundBase, TextureBackgroundPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &TextureBackgroundBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &TextureBackgroundBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr TextureBackgroundBase::shallowCopy(void) const 
{ 
    TextureBackgroundPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const TextureBackground *>(this)); 

    return returnValue; 
}

UInt32 TextureBackgroundBase::getContainerSize(void) const 
{ 
    return sizeof(TextureBackground); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void TextureBackgroundBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((TextureBackgroundBase *) &other, whichField);
}
#else
void TextureBackgroundBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((TextureBackgroundBase *) &other, whichField, sInfo);
}
void TextureBackgroundBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void TextureBackgroundBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

    _mfTexCoords.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

TextureBackgroundBase::TextureBackgroundBase(void) :
    _sfColor                  (), 
    _sfTexture                (), 
    _mfTexCoords              (), 
    _sfRadialDistortion       (Real32(0)), 
    _sfCenterOfDistortion     (Vec2f(0.5, 0.5)), 
    _sfHor                    (UInt16(2)), 
    _sfVert                   (UInt16(2)), 
    _sfClearStencilBit        (Int32(-1)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

TextureBackgroundBase::TextureBackgroundBase(const TextureBackgroundBase &source) :
    _sfColor                  (source._sfColor                  ), 
    _sfTexture                (source._sfTexture                ), 
    _mfTexCoords              (source._mfTexCoords              ), 
    _sfRadialDistortion       (source._sfRadialDistortion       ), 
    _sfCenterOfDistortion     (source._sfCenterOfDistortion     ), 
    _sfHor                    (source._sfHor                    ), 
    _sfVert                   (source._sfVert                   ), 
    _sfClearStencilBit        (source._sfClearStencilBit        ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

TextureBackgroundBase::~TextureBackgroundBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 TextureBackgroundBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        returnValue += _sfColor.getBinSize();
    }

    if(FieldBits::NoField != (TextureFieldMask & whichField))
    {
        returnValue += _sfTexture.getBinSize();
    }

    if(FieldBits::NoField != (TexCoordsFieldMask & whichField))
    {
        returnValue += _mfTexCoords.getBinSize();
    }

    if(FieldBits::NoField != (RadialDistortionFieldMask & whichField))
    {
        returnValue += _sfRadialDistortion.getBinSize();
    }

    if(FieldBits::NoField != (CenterOfDistortionFieldMask & whichField))
    {
        returnValue += _sfCenterOfDistortion.getBinSize();
    }

    if(FieldBits::NoField != (HorFieldMask & whichField))
    {
        returnValue += _sfHor.getBinSize();
    }

    if(FieldBits::NoField != (VertFieldMask & whichField))
    {
        returnValue += _sfVert.getBinSize();
    }

    if(FieldBits::NoField != (ClearStencilBitFieldMask & whichField))
    {
        returnValue += _sfClearStencilBit.getBinSize();
    }


    return returnValue;
}

void TextureBackgroundBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        _sfColor.copyToBin(pMem);
    }

    if(FieldBits::NoField != (TextureFieldMask & whichField))
    {
        _sfTexture.copyToBin(pMem);
    }

    if(FieldBits::NoField != (TexCoordsFieldMask & whichField))
    {
        _mfTexCoords.copyToBin(pMem);
    }

    if(FieldBits::NoField != (RadialDistortionFieldMask & whichField))
    {
        _sfRadialDistortion.copyToBin(pMem);
    }

    if(FieldBits::NoField != (CenterOfDistortionFieldMask & whichField))
    {
        _sfCenterOfDistortion.copyToBin(pMem);
    }

    if(FieldBits::NoField != (HorFieldMask & whichField))
    {
        _sfHor.copyToBin(pMem);
    }

    if(FieldBits::NoField != (VertFieldMask & whichField))
    {
        _sfVert.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ClearStencilBitFieldMask & whichField))
    {
        _sfClearStencilBit.copyToBin(pMem);
    }


}

void TextureBackgroundBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        _sfColor.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (TextureFieldMask & whichField))
    {
        _sfTexture.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (TexCoordsFieldMask & whichField))
    {
        _mfTexCoords.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (RadialDistortionFieldMask & whichField))
    {
        _sfRadialDistortion.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (CenterOfDistortionFieldMask & whichField))
    {
        _sfCenterOfDistortion.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (HorFieldMask & whichField))
    {
        _sfHor.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (VertFieldMask & whichField))
    {
        _sfVert.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ClearStencilBitFieldMask & whichField))
    {
        _sfClearStencilBit.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void TextureBackgroundBase::executeSyncImpl(      TextureBackgroundBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
        _sfColor.syncWith(pOther->_sfColor);

    if(FieldBits::NoField != (TextureFieldMask & whichField))
        _sfTexture.syncWith(pOther->_sfTexture);

    if(FieldBits::NoField != (TexCoordsFieldMask & whichField))
        _mfTexCoords.syncWith(pOther->_mfTexCoords);

    if(FieldBits::NoField != (RadialDistortionFieldMask & whichField))
        _sfRadialDistortion.syncWith(pOther->_sfRadialDistortion);

    if(FieldBits::NoField != (CenterOfDistortionFieldMask & whichField))
        _sfCenterOfDistortion.syncWith(pOther->_sfCenterOfDistortion);

    if(FieldBits::NoField != (HorFieldMask & whichField))
        _sfHor.syncWith(pOther->_sfHor);

    if(FieldBits::NoField != (VertFieldMask & whichField))
        _sfVert.syncWith(pOther->_sfVert);

    if(FieldBits::NoField != (ClearStencilBitFieldMask & whichField))
        _sfClearStencilBit.syncWith(pOther->_sfClearStencilBit);


}
#else
void TextureBackgroundBase::executeSyncImpl(      TextureBackgroundBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
        _sfColor.syncWith(pOther->_sfColor);

    if(FieldBits::NoField != (TextureFieldMask & whichField))
        _sfTexture.syncWith(pOther->_sfTexture);

    if(FieldBits::NoField != (RadialDistortionFieldMask & whichField))
        _sfRadialDistortion.syncWith(pOther->_sfRadialDistortion);

    if(FieldBits::NoField != (CenterOfDistortionFieldMask & whichField))
        _sfCenterOfDistortion.syncWith(pOther->_sfCenterOfDistortion);

    if(FieldBits::NoField != (HorFieldMask & whichField))
        _sfHor.syncWith(pOther->_sfHor);

    if(FieldBits::NoField != (VertFieldMask & whichField))
        _sfVert.syncWith(pOther->_sfVert);

    if(FieldBits::NoField != (ClearStencilBitFieldMask & whichField))
        _sfClearStencilBit.syncWith(pOther->_sfClearStencilBit);


    if(FieldBits::NoField != (TexCoordsFieldMask & whichField))
        _mfTexCoords.syncWith(pOther->_mfTexCoords, sInfo);


}

void TextureBackgroundBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (TexCoordsFieldMask & whichField))
        _mfTexCoords.beginEdit(uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OSGSFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<TextureBackgroundPtr>::_type("TextureBackgroundPtr", "BackgroundPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(TextureBackgroundPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);

OSG_END_NAMESPACE

