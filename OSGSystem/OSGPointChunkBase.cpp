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
 **     class PointChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEPOINTCHUNKINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGPointChunkBase.h"
#include "OSGPointChunk.h"

#include <OSGGL.h>                        // Smooth default header
#include <OSGGL.h>                        // Sprite default header
#include <OSGGL.h>                        // RMode default header

OSG_USING_NAMESPACE

const OSG::BitVector  PointChunkBase::SizeFieldMask = 
    (TypeTraits<BitVector>::One << PointChunkBase::SizeFieldId);

const OSG::BitVector  PointChunkBase::SmoothFieldMask = 
    (TypeTraits<BitVector>::One << PointChunkBase::SmoothFieldId);

const OSG::BitVector  PointChunkBase::MinSizeFieldMask = 
    (TypeTraits<BitVector>::One << PointChunkBase::MinSizeFieldId);

const OSG::BitVector  PointChunkBase::MaxSizeFieldMask = 
    (TypeTraits<BitVector>::One << PointChunkBase::MaxSizeFieldId);

const OSG::BitVector  PointChunkBase::ConstantAttenuationFieldMask = 
    (TypeTraits<BitVector>::One << PointChunkBase::ConstantAttenuationFieldId);

const OSG::BitVector  PointChunkBase::LinearAttenuationFieldMask = 
    (TypeTraits<BitVector>::One << PointChunkBase::LinearAttenuationFieldId);

const OSG::BitVector  PointChunkBase::QuadraticAttenuationFieldMask = 
    (TypeTraits<BitVector>::One << PointChunkBase::QuadraticAttenuationFieldId);

const OSG::BitVector  PointChunkBase::FadeThresholdFieldMask = 
    (TypeTraits<BitVector>::One << PointChunkBase::FadeThresholdFieldId);

const OSG::BitVector  PointChunkBase::SpriteFieldMask = 
    (TypeTraits<BitVector>::One << PointChunkBase::SpriteFieldId);

const OSG::BitVector  PointChunkBase::RModeFieldMask = 
    (TypeTraits<BitVector>::One << PointChunkBase::RModeFieldId);

const OSG::BitVector PointChunkBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Real32          PointChunkBase::_sfSize
    The point's size in pixel.
*/
/*! \var bool            PointChunkBase::_sfSmooth
    Defines if line antialiasing is used.
*/
/*! \var Real32          PointChunkBase::_sfMinSize
    Minimum point size for attenuation, less than 0 for disabling it. See ARB_point_parameters extension.
*/
/*! \var Real32          PointChunkBase::_sfMaxSize
    Maximum point size for attenuation. See ARB_point_parameters extension.
*/
/*! \var Real32          PointChunkBase::_sfConstantAttenuation
    The point size's constant attenuation.
*/
/*! \var Real32          PointChunkBase::_sfLinearAttenuation
    The point size's linear attenuation.
*/
/*! \var Real32          PointChunkBase::_sfQuadraticAttenuation
    The point size's quadratic attenuation.
*/
/*! \var Real32          PointChunkBase::_sfFadeThreshold
    Minimum point size for attenuation. See ARB_point_parameters extension.
*/
/*! \var bool            PointChunkBase::_sfSprite
    Flag to enable point sprites, see NV_point_sprite for details.
*/
/*! \var GLenum          PointChunkBase::_sfRMode
    
*/

//! PointChunk description

FieldDescription *PointChunkBase::_desc[] = 
{
    new FieldDescription(SFReal32::getClassType(), 
                     "size", 
                     SizeFieldId, SizeFieldMask,
                     false,
                     (FieldAccessMethod) &PointChunkBase::getSFSize),
    new FieldDescription(SFBool::getClassType(), 
                     "smooth", 
                     SmoothFieldId, SmoothFieldMask,
                     false,
                     (FieldAccessMethod) &PointChunkBase::getSFSmooth),
    new FieldDescription(SFReal32::getClassType(), 
                     "minSize", 
                     MinSizeFieldId, MinSizeFieldMask,
                     false,
                     (FieldAccessMethod) &PointChunkBase::getSFMinSize),
    new FieldDescription(SFReal32::getClassType(), 
                     "maxSize", 
                     MaxSizeFieldId, MaxSizeFieldMask,
                     false,
                     (FieldAccessMethod) &PointChunkBase::getSFMaxSize),
    new FieldDescription(SFReal32::getClassType(), 
                     "constantAttenuation", 
                     ConstantAttenuationFieldId, ConstantAttenuationFieldMask,
                     false,
                     (FieldAccessMethod) &PointChunkBase::getSFConstantAttenuation),
    new FieldDescription(SFReal32::getClassType(), 
                     "linearAttenuation", 
                     LinearAttenuationFieldId, LinearAttenuationFieldMask,
                     false,
                     (FieldAccessMethod) &PointChunkBase::getSFLinearAttenuation),
    new FieldDescription(SFReal32::getClassType(), 
                     "quadraticAttenuation", 
                     QuadraticAttenuationFieldId, QuadraticAttenuationFieldMask,
                     false,
                     (FieldAccessMethod) &PointChunkBase::getSFQuadraticAttenuation),
    new FieldDescription(SFReal32::getClassType(), 
                     "fadeThreshold", 
                     FadeThresholdFieldId, FadeThresholdFieldMask,
                     false,
                     (FieldAccessMethod) &PointChunkBase::getSFFadeThreshold),
    new FieldDescription(SFBool::getClassType(), 
                     "sprite", 
                     SpriteFieldId, SpriteFieldMask,
                     false,
                     (FieldAccessMethod) &PointChunkBase::getSFSprite),
    new FieldDescription(SFGLenum::getClassType(), 
                     "rMode", 
                     RModeFieldId, RModeFieldMask,
                     false,
                     (FieldAccessMethod) &PointChunkBase::getSFRMode)
};


FieldContainerType PointChunkBase::_type(
    "PointChunk",
    "StateChunk",
    NULL,
    (PrototypeCreateF) &PointChunkBase::createEmpty,
    PointChunk::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(PointChunkBase, PointChunkPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &PointChunkBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &PointChunkBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr PointChunkBase::shallowCopy(void) const 
{ 
    PointChunkPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const PointChunk *>(this)); 

    return returnValue; 
}

UInt32 PointChunkBase::getContainerSize(void) const 
{ 
    return sizeof(PointChunk); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void PointChunkBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((PointChunkBase *) &other, whichField);
}
#else
void PointChunkBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((PointChunkBase *) &other, whichField, sInfo);
}
void PointChunkBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void PointChunkBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

PointChunkBase::PointChunkBase(void) :
    _sfSize                   (Real32(1)), 
    _sfSmooth                 (bool(GL_FALSE)), 
    _sfMinSize                (Real32(-1.f)), 
    _sfMaxSize                (Real32(-1.f)), 
    _sfConstantAttenuation    (Real32(1)), 
    _sfLinearAttenuation      (Real32(0)), 
    _sfQuadraticAttenuation   (Real32(0)), 
    _sfFadeThreshold          (Real32(0.f)), 
    _sfSprite                 (bool(GL_FALSE)), 
    _sfRMode                  (GLenum(GL_ZERO)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

PointChunkBase::PointChunkBase(const PointChunkBase &source) :
    _sfSize                   (source._sfSize                   ), 
    _sfSmooth                 (source._sfSmooth                 ), 
    _sfMinSize                (source._sfMinSize                ), 
    _sfMaxSize                (source._sfMaxSize                ), 
    _sfConstantAttenuation    (source._sfConstantAttenuation    ), 
    _sfLinearAttenuation      (source._sfLinearAttenuation      ), 
    _sfQuadraticAttenuation   (source._sfQuadraticAttenuation   ), 
    _sfFadeThreshold          (source._sfFadeThreshold          ), 
    _sfSprite                 (source._sfSprite                 ), 
    _sfRMode                  (source._sfRMode                  ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

PointChunkBase::~PointChunkBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 PointChunkBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (SizeFieldMask & whichField))
    {
        returnValue += _sfSize.getBinSize();
    }

    if(FieldBits::NoField != (SmoothFieldMask & whichField))
    {
        returnValue += _sfSmooth.getBinSize();
    }

    if(FieldBits::NoField != (MinSizeFieldMask & whichField))
    {
        returnValue += _sfMinSize.getBinSize();
    }

    if(FieldBits::NoField != (MaxSizeFieldMask & whichField))
    {
        returnValue += _sfMaxSize.getBinSize();
    }

    if(FieldBits::NoField != (ConstantAttenuationFieldMask & whichField))
    {
        returnValue += _sfConstantAttenuation.getBinSize();
    }

    if(FieldBits::NoField != (LinearAttenuationFieldMask & whichField))
    {
        returnValue += _sfLinearAttenuation.getBinSize();
    }

    if(FieldBits::NoField != (QuadraticAttenuationFieldMask & whichField))
    {
        returnValue += _sfQuadraticAttenuation.getBinSize();
    }

    if(FieldBits::NoField != (FadeThresholdFieldMask & whichField))
    {
        returnValue += _sfFadeThreshold.getBinSize();
    }

    if(FieldBits::NoField != (SpriteFieldMask & whichField))
    {
        returnValue += _sfSprite.getBinSize();
    }

    if(FieldBits::NoField != (RModeFieldMask & whichField))
    {
        returnValue += _sfRMode.getBinSize();
    }


    return returnValue;
}

void PointChunkBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (SizeFieldMask & whichField))
    {
        _sfSize.copyToBin(pMem);
    }

    if(FieldBits::NoField != (SmoothFieldMask & whichField))
    {
        _sfSmooth.copyToBin(pMem);
    }

    if(FieldBits::NoField != (MinSizeFieldMask & whichField))
    {
        _sfMinSize.copyToBin(pMem);
    }

    if(FieldBits::NoField != (MaxSizeFieldMask & whichField))
    {
        _sfMaxSize.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ConstantAttenuationFieldMask & whichField))
    {
        _sfConstantAttenuation.copyToBin(pMem);
    }

    if(FieldBits::NoField != (LinearAttenuationFieldMask & whichField))
    {
        _sfLinearAttenuation.copyToBin(pMem);
    }

    if(FieldBits::NoField != (QuadraticAttenuationFieldMask & whichField))
    {
        _sfQuadraticAttenuation.copyToBin(pMem);
    }

    if(FieldBits::NoField != (FadeThresholdFieldMask & whichField))
    {
        _sfFadeThreshold.copyToBin(pMem);
    }

    if(FieldBits::NoField != (SpriteFieldMask & whichField))
    {
        _sfSprite.copyToBin(pMem);
    }

    if(FieldBits::NoField != (RModeFieldMask & whichField))
    {
        _sfRMode.copyToBin(pMem);
    }


}

void PointChunkBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (SizeFieldMask & whichField))
    {
        _sfSize.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (SmoothFieldMask & whichField))
    {
        _sfSmooth.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (MinSizeFieldMask & whichField))
    {
        _sfMinSize.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (MaxSizeFieldMask & whichField))
    {
        _sfMaxSize.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ConstantAttenuationFieldMask & whichField))
    {
        _sfConstantAttenuation.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (LinearAttenuationFieldMask & whichField))
    {
        _sfLinearAttenuation.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (QuadraticAttenuationFieldMask & whichField))
    {
        _sfQuadraticAttenuation.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (FadeThresholdFieldMask & whichField))
    {
        _sfFadeThreshold.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (SpriteFieldMask & whichField))
    {
        _sfSprite.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (RModeFieldMask & whichField))
    {
        _sfRMode.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void PointChunkBase::executeSyncImpl(      PointChunkBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (SizeFieldMask & whichField))
        _sfSize.syncWith(pOther->_sfSize);

    if(FieldBits::NoField != (SmoothFieldMask & whichField))
        _sfSmooth.syncWith(pOther->_sfSmooth);

    if(FieldBits::NoField != (MinSizeFieldMask & whichField))
        _sfMinSize.syncWith(pOther->_sfMinSize);

    if(FieldBits::NoField != (MaxSizeFieldMask & whichField))
        _sfMaxSize.syncWith(pOther->_sfMaxSize);

    if(FieldBits::NoField != (ConstantAttenuationFieldMask & whichField))
        _sfConstantAttenuation.syncWith(pOther->_sfConstantAttenuation);

    if(FieldBits::NoField != (LinearAttenuationFieldMask & whichField))
        _sfLinearAttenuation.syncWith(pOther->_sfLinearAttenuation);

    if(FieldBits::NoField != (QuadraticAttenuationFieldMask & whichField))
        _sfQuadraticAttenuation.syncWith(pOther->_sfQuadraticAttenuation);

    if(FieldBits::NoField != (FadeThresholdFieldMask & whichField))
        _sfFadeThreshold.syncWith(pOther->_sfFadeThreshold);

    if(FieldBits::NoField != (SpriteFieldMask & whichField))
        _sfSprite.syncWith(pOther->_sfSprite);

    if(FieldBits::NoField != (RModeFieldMask & whichField))
        _sfRMode.syncWith(pOther->_sfRMode);


}
#else
void PointChunkBase::executeSyncImpl(      PointChunkBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (SizeFieldMask & whichField))
        _sfSize.syncWith(pOther->_sfSize);

    if(FieldBits::NoField != (SmoothFieldMask & whichField))
        _sfSmooth.syncWith(pOther->_sfSmooth);

    if(FieldBits::NoField != (MinSizeFieldMask & whichField))
        _sfMinSize.syncWith(pOther->_sfMinSize);

    if(FieldBits::NoField != (MaxSizeFieldMask & whichField))
        _sfMaxSize.syncWith(pOther->_sfMaxSize);

    if(FieldBits::NoField != (ConstantAttenuationFieldMask & whichField))
        _sfConstantAttenuation.syncWith(pOther->_sfConstantAttenuation);

    if(FieldBits::NoField != (LinearAttenuationFieldMask & whichField))
        _sfLinearAttenuation.syncWith(pOther->_sfLinearAttenuation);

    if(FieldBits::NoField != (QuadraticAttenuationFieldMask & whichField))
        _sfQuadraticAttenuation.syncWith(pOther->_sfQuadraticAttenuation);

    if(FieldBits::NoField != (FadeThresholdFieldMask & whichField))
        _sfFadeThreshold.syncWith(pOther->_sfFadeThreshold);

    if(FieldBits::NoField != (SpriteFieldMask & whichField))
        _sfSprite.syncWith(pOther->_sfSprite);

    if(FieldBits::NoField != (RModeFieldMask & whichField))
        _sfRMode.syncWith(pOther->_sfRMode);



}

void PointChunkBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<PointChunkPtr>::_type("PointChunkPtr", "StateChunkPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(PointChunkPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(PointChunkPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);

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
    static Char8 cvsid_hpp       [] = OSGPOINTCHUNKBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGPOINTCHUNKBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGPOINTCHUNKFIELDS_HEADER_CVSID;
}

