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
 **     class Light!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILELIGHTINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGLightBase.h"
#include "OSGLight.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  LightBase::AmbientFieldMask = 
    (TypeTraits<BitVector>::One << LightBase::AmbientFieldId);

const OSG::BitVector  LightBase::DiffuseFieldMask = 
    (TypeTraits<BitVector>::One << LightBase::DiffuseFieldId);

const OSG::BitVector  LightBase::SpecularFieldMask = 
    (TypeTraits<BitVector>::One << LightBase::SpecularFieldId);

const OSG::BitVector  LightBase::BeaconFieldMask = 
    (TypeTraits<BitVector>::One << LightBase::BeaconFieldId);

const OSG::BitVector  LightBase::OnFieldMask = 
    (TypeTraits<BitVector>::One << LightBase::OnFieldId);

const OSG::BitVector  LightBase::ConstantAttenuationFieldMask = 
    (TypeTraits<BitVector>::One << LightBase::ConstantAttenuationFieldId);

const OSG::BitVector  LightBase::LinearAttenuationFieldMask = 
    (TypeTraits<BitVector>::One << LightBase::LinearAttenuationFieldId);

const OSG::BitVector  LightBase::QuadraticAttenuationFieldMask = 
    (TypeTraits<BitVector>::One << LightBase::QuadraticAttenuationFieldId);

const OSG::BitVector  LightBase::ShadowIntensityFieldMask = 
    (TypeTraits<BitVector>::One << LightBase::ShadowIntensityFieldId);

const OSG::BitVector  LightBase::ShadowModeFieldMask = 
    (TypeTraits<BitVector>::One << LightBase::ShadowModeFieldId);

const OSG::BitVector LightBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Color4f         LightBase::_sfAmbient
    The light's ambient component.
*/
/*! \var Color4f         LightBase::_sfDiffuse
    The light's diffuse color.
*/
/*! \var Color4f         LightBase::_sfSpecular
    The light's specular color.
*/
/*! \var NodePtr         LightBase::_sfBeacon
    
*/
/*! \var bool            LightBase::_sfOn
    
*/
/*! \var Real32          LightBase::_sfConstantAttenuation
    The light's constant attenuation.
*/
/*! \var Real32          LightBase::_sfLinearAttenuation
    The light's linear attenuation.
*/
/*! \var Real32          LightBase::_sfQuadraticAttenuation
    The light's quadratic attenuation.
*/
/*! \var Real32          LightBase::_sfShadowIntensity
    
*/
/*! \var UInt32          LightBase::_sfShadowMode
    possible values are CAST_SHADOW_AUTO, CAST_SHADOW_ON, CAST_SHADOW_OFF in auto mode the light source casts shadows if the light is on and the shadow intensity is greater than zero.
*/

//! Light description

FieldDescription *LightBase::_desc[] = 
{
    new FieldDescription(SFColor4f::getClassType(), 
                     "ambient", 
                     AmbientFieldId, AmbientFieldMask,
                     false,
                     (FieldAccessMethod) &LightBase::getSFAmbient),
    new FieldDescription(SFColor4f::getClassType(), 
                     "diffuse", 
                     DiffuseFieldId, DiffuseFieldMask,
                     false,
                     (FieldAccessMethod) &LightBase::getSFDiffuse),
    new FieldDescription(SFColor4f::getClassType(), 
                     "specular", 
                     SpecularFieldId, SpecularFieldMask,
                     false,
                     (FieldAccessMethod) &LightBase::getSFSpecular),
    new FieldDescription(SFNodePtr::getClassType(), 
                     "beacon", 
                     BeaconFieldId, BeaconFieldMask,
                     false,
                     (FieldAccessMethod) &LightBase::getSFBeacon),
    new FieldDescription(SFBool::getClassType(), 
                     "on", 
                     OnFieldId, OnFieldMask,
                     false,
                     (FieldAccessMethod) &LightBase::getSFOn),
    new FieldDescription(SFReal32::getClassType(), 
                     "constantAttenuation", 
                     ConstantAttenuationFieldId, ConstantAttenuationFieldMask,
                     false,
                     (FieldAccessMethod) &LightBase::getSFConstantAttenuation),
    new FieldDescription(SFReal32::getClassType(), 
                     "linearAttenuation", 
                     LinearAttenuationFieldId, LinearAttenuationFieldMask,
                     false,
                     (FieldAccessMethod) &LightBase::getSFLinearAttenuation),
    new FieldDescription(SFReal32::getClassType(), 
                     "quadraticAttenuation", 
                     QuadraticAttenuationFieldId, QuadraticAttenuationFieldMask,
                     false,
                     (FieldAccessMethod) &LightBase::getSFQuadraticAttenuation),
    new FieldDescription(SFReal32::getClassType(), 
                     "shadowIntensity", 
                     ShadowIntensityFieldId, ShadowIntensityFieldMask,
                     false,
                     (FieldAccessMethod) &LightBase::getSFShadowIntensity),
    new FieldDescription(SFUInt32::getClassType(), 
                     "shadowMode", 
                     ShadowModeFieldId, ShadowModeFieldMask,
                     false,
                     (FieldAccessMethod) &LightBase::getSFShadowMode)
};


FieldContainerType LightBase::_type(
    "Light",
    "Group",
    NULL,
    NULL, 
    Light::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(LightBase, LightPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &LightBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &LightBase::getType(void) const 
{
    return _type;
} 


UInt32 LightBase::getContainerSize(void) const 
{ 
    return sizeof(Light); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void LightBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((LightBase *) &other, whichField);
}
#else
void LightBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((LightBase *) &other, whichField, sInfo);
}
void LightBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void LightBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

LightBase::LightBase(void) :
    _sfAmbient                (Color4f(0,0,0,1)), 
    _sfDiffuse                (Color4f(1,1,1,1)), 
    _sfSpecular               (Color4f(1,1,1,1)), 
    _sfBeacon                 (), 
    _sfOn                     (bool(true)), 
    _sfConstantAttenuation    (Real32(1)), 
    _sfLinearAttenuation      (Real32(0)), 
    _sfQuadraticAttenuation   (Real32(0)), 
    _sfShadowIntensity        (Real32(0.0f)), 
    _sfShadowMode             (UInt32(0)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

LightBase::LightBase(const LightBase &source) :
    _sfAmbient                (source._sfAmbient                ), 
    _sfDiffuse                (source._sfDiffuse                ), 
    _sfSpecular               (source._sfSpecular               ), 
    _sfBeacon                 (source._sfBeacon                 ), 
    _sfOn                     (source._sfOn                     ), 
    _sfConstantAttenuation    (source._sfConstantAttenuation    ), 
    _sfLinearAttenuation      (source._sfLinearAttenuation      ), 
    _sfQuadraticAttenuation   (source._sfQuadraticAttenuation   ), 
    _sfShadowIntensity        (source._sfShadowIntensity        ), 
    _sfShadowMode             (source._sfShadowMode             ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

LightBase::~LightBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 LightBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (AmbientFieldMask & whichField))
    {
        returnValue += _sfAmbient.getBinSize();
    }

    if(FieldBits::NoField != (DiffuseFieldMask & whichField))
    {
        returnValue += _sfDiffuse.getBinSize();
    }

    if(FieldBits::NoField != (SpecularFieldMask & whichField))
    {
        returnValue += _sfSpecular.getBinSize();
    }

    if(FieldBits::NoField != (BeaconFieldMask & whichField))
    {
        returnValue += _sfBeacon.getBinSize();
    }

    if(FieldBits::NoField != (OnFieldMask & whichField))
    {
        returnValue += _sfOn.getBinSize();
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

    if(FieldBits::NoField != (ShadowIntensityFieldMask & whichField))
    {
        returnValue += _sfShadowIntensity.getBinSize();
    }

    if(FieldBits::NoField != (ShadowModeFieldMask & whichField))
    {
        returnValue += _sfShadowMode.getBinSize();
    }


    return returnValue;
}

void LightBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (AmbientFieldMask & whichField))
    {
        _sfAmbient.copyToBin(pMem);
    }

    if(FieldBits::NoField != (DiffuseFieldMask & whichField))
    {
        _sfDiffuse.copyToBin(pMem);
    }

    if(FieldBits::NoField != (SpecularFieldMask & whichField))
    {
        _sfSpecular.copyToBin(pMem);
    }

    if(FieldBits::NoField != (BeaconFieldMask & whichField))
    {
        _sfBeacon.copyToBin(pMem);
    }

    if(FieldBits::NoField != (OnFieldMask & whichField))
    {
        _sfOn.copyToBin(pMem);
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

    if(FieldBits::NoField != (ShadowIntensityFieldMask & whichField))
    {
        _sfShadowIntensity.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ShadowModeFieldMask & whichField))
    {
        _sfShadowMode.copyToBin(pMem);
    }


}

void LightBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (AmbientFieldMask & whichField))
    {
        _sfAmbient.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (DiffuseFieldMask & whichField))
    {
        _sfDiffuse.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (SpecularFieldMask & whichField))
    {
        _sfSpecular.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (BeaconFieldMask & whichField))
    {
        _sfBeacon.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (OnFieldMask & whichField))
    {
        _sfOn.copyFromBin(pMem);
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

    if(FieldBits::NoField != (ShadowIntensityFieldMask & whichField))
    {
        _sfShadowIntensity.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ShadowModeFieldMask & whichField))
    {
        _sfShadowMode.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void LightBase::executeSyncImpl(      LightBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (AmbientFieldMask & whichField))
        _sfAmbient.syncWith(pOther->_sfAmbient);

    if(FieldBits::NoField != (DiffuseFieldMask & whichField))
        _sfDiffuse.syncWith(pOther->_sfDiffuse);

    if(FieldBits::NoField != (SpecularFieldMask & whichField))
        _sfSpecular.syncWith(pOther->_sfSpecular);

    if(FieldBits::NoField != (BeaconFieldMask & whichField))
        _sfBeacon.syncWith(pOther->_sfBeacon);

    if(FieldBits::NoField != (OnFieldMask & whichField))
        _sfOn.syncWith(pOther->_sfOn);

    if(FieldBits::NoField != (ConstantAttenuationFieldMask & whichField))
        _sfConstantAttenuation.syncWith(pOther->_sfConstantAttenuation);

    if(FieldBits::NoField != (LinearAttenuationFieldMask & whichField))
        _sfLinearAttenuation.syncWith(pOther->_sfLinearAttenuation);

    if(FieldBits::NoField != (QuadraticAttenuationFieldMask & whichField))
        _sfQuadraticAttenuation.syncWith(pOther->_sfQuadraticAttenuation);

    if(FieldBits::NoField != (ShadowIntensityFieldMask & whichField))
        _sfShadowIntensity.syncWith(pOther->_sfShadowIntensity);

    if(FieldBits::NoField != (ShadowModeFieldMask & whichField))
        _sfShadowMode.syncWith(pOther->_sfShadowMode);


}
#else
void LightBase::executeSyncImpl(      LightBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (AmbientFieldMask & whichField))
        _sfAmbient.syncWith(pOther->_sfAmbient);

    if(FieldBits::NoField != (DiffuseFieldMask & whichField))
        _sfDiffuse.syncWith(pOther->_sfDiffuse);

    if(FieldBits::NoField != (SpecularFieldMask & whichField))
        _sfSpecular.syncWith(pOther->_sfSpecular);

    if(FieldBits::NoField != (BeaconFieldMask & whichField))
        _sfBeacon.syncWith(pOther->_sfBeacon);

    if(FieldBits::NoField != (OnFieldMask & whichField))
        _sfOn.syncWith(pOther->_sfOn);

    if(FieldBits::NoField != (ConstantAttenuationFieldMask & whichField))
        _sfConstantAttenuation.syncWith(pOther->_sfConstantAttenuation);

    if(FieldBits::NoField != (LinearAttenuationFieldMask & whichField))
        _sfLinearAttenuation.syncWith(pOther->_sfLinearAttenuation);

    if(FieldBits::NoField != (QuadraticAttenuationFieldMask & whichField))
        _sfQuadraticAttenuation.syncWith(pOther->_sfQuadraticAttenuation);

    if(FieldBits::NoField != (ShadowIntensityFieldMask & whichField))
        _sfShadowIntensity.syncWith(pOther->_sfShadowIntensity);

    if(FieldBits::NoField != (ShadowModeFieldMask & whichField))
        _sfShadowMode.syncWith(pOther->_sfShadowMode);



}

void LightBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

}
#endif



#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<LightPtr>::_type("LightPtr", "GroupPtr");
#endif

OSG_END_NAMESPACE

