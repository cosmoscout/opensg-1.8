/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
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
 **     class ShadowViewport!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ShadowViewportBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 ShadowViewportBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
ShadowViewportPtr ShadowViewportBase::create(void) 
{
    ShadowViewportPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = ShadowViewportPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
ShadowViewportPtr ShadowViewportBase::createEmpty(void) 
{ 
    ShadowViewportPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the ShadowViewport::_sfOffBias field.
inline
SFReal32 *ShadowViewportBase::getSFOffBias(void)
{
    return &_sfOffBias;
}

//! Get the ShadowViewport::_sfOffFactor field.
inline
SFReal32 *ShadowViewportBase::getSFOffFactor(void)
{
    return &_sfOffFactor;
}

//! Get the ShadowViewport::_sfSceneRoot field.
inline
SFNodePtr *ShadowViewportBase::getSFSceneRoot(void)
{
    return &_sfSceneRoot;
}

//! Get the ShadowViewport::_sfMapSize field.
inline
SFUInt32 *ShadowViewportBase::getSFMapSize(void)
{
    return &_sfMapSize;
}

//! Get the ShadowViewport::_mfLightNodes field.
inline
MFNodePtr *ShadowViewportBase::getMFLightNodes(void)
{
    return &_mfLightNodes;
}

//! Get the ShadowViewport::_mfExcludeNodes field.
inline
MFNodePtr *ShadowViewportBase::getMFExcludeNodes(void)
{
    return &_mfExcludeNodes;
}

//! Get the ShadowViewport::_sfMapAutoUpdate field.
inline
SFBool *ShadowViewportBase::getSFMapAutoUpdate(void)
{
    return &_sfMapAutoUpdate;
}

//! Get the ShadowViewport::_sfShadowMode field.
inline
SFUInt32 *ShadowViewportBase::getSFShadowMode(void)
{
    return &_sfShadowMode;
}

//! Get the ShadowViewport::_sfShadowSmoothness field.
inline
SFReal32 *ShadowViewportBase::getSFShadowSmoothness(void)
{
    return &_sfShadowSmoothness;
}

//! Get the ShadowViewport::_sfShadowOn field.
inline
SFBool *ShadowViewportBase::getSFShadowOn(void)
{
    return &_sfShadowOn;
}

//! Get the ShadowViewport::_sfAutoSearchForLights field.
inline
SFBool *ShadowViewportBase::getSFAutoSearchForLights(void)
{
    return &_sfAutoSearchForLights;
}

//! Get the ShadowViewport::_sfGlobalShadowIntensity field.
inline
SFReal32 *ShadowViewportBase::getSFGlobalShadowIntensity(void)
{
    return &_sfGlobalShadowIntensity;
}

//! Get the ShadowViewport::_sfFboOn field.
inline
SFBool *ShadowViewportBase::getSFFboOn(void)
{
    return &_sfFboOn;
}

//! Get the ShadowViewport::_sfAutoExcludeTransparentNodes field.
inline
SFBool *ShadowViewportBase::getSFAutoExcludeTransparentNodes(void)
{
    return &_sfAutoExcludeTransparentNodes;
}

//! Get the ShadowViewport::_sfRed field.
inline
SFBool *ShadowViewportBase::getSFRed(void)
{
    return &_sfRed;
}

//! Get the ShadowViewport::_sfBlue field.
inline
SFBool *ShadowViewportBase::getSFBlue(void)
{
    return &_sfBlue;
}

//! Get the ShadowViewport::_sfGreen field.
inline
SFBool *ShadowViewportBase::getSFGreen(void)
{
    return &_sfGreen;
}

//! Get the ShadowViewport::_sfAlpha field.
inline
SFBool *ShadowViewportBase::getSFAlpha(void)
{
    return &_sfAlpha;
}


//! Get the value of the ShadowViewport::_sfOffBias field.
inline
Real32 &ShadowViewportBase::getOffBias(void)
{
    return _sfOffBias.getValue();
}

//! Get the value of the ShadowViewport::_sfOffBias field.
inline
const Real32 &ShadowViewportBase::getOffBias(void) const
{
    return _sfOffBias.getValue();
}

//! Set the value of the ShadowViewport::_sfOffBias field.
inline
void ShadowViewportBase::setOffBias(const Real32 &value)
{
    _sfOffBias.setValue(value);
}

//! Get the value of the ShadowViewport::_sfOffFactor field.
inline
Real32 &ShadowViewportBase::getOffFactor(void)
{
    return _sfOffFactor.getValue();
}

//! Get the value of the ShadowViewport::_sfOffFactor field.
inline
const Real32 &ShadowViewportBase::getOffFactor(void) const
{
    return _sfOffFactor.getValue();
}

//! Set the value of the ShadowViewport::_sfOffFactor field.
inline
void ShadowViewportBase::setOffFactor(const Real32 &value)
{
    _sfOffFactor.setValue(value);
}

//! Get the value of the ShadowViewport::_sfSceneRoot field.
inline
NodePtr &ShadowViewportBase::getSceneRoot(void)
{
    return _sfSceneRoot.getValue();
}

//! Get the value of the ShadowViewport::_sfSceneRoot field.
inline
const NodePtr &ShadowViewportBase::getSceneRoot(void) const
{
    return _sfSceneRoot.getValue();
}

//! Set the value of the ShadowViewport::_sfSceneRoot field.
inline
void ShadowViewportBase::setSceneRoot(const NodePtr &value)
{
    _sfSceneRoot.setValue(value);
}

//! Get the value of the ShadowViewport::_sfMapSize field.
inline
UInt32 &ShadowViewportBase::getMapSize(void)
{
    return _sfMapSize.getValue();
}

//! Get the value of the ShadowViewport::_sfMapSize field.
inline
const UInt32 &ShadowViewportBase::getMapSize(void) const
{
    return _sfMapSize.getValue();
}

//! Set the value of the ShadowViewport::_sfMapSize field.
inline
void ShadowViewportBase::setMapSize(const UInt32 &value)
{
    _sfMapSize.setValue(value);
}

//! Get the value of the ShadowViewport::_sfMapAutoUpdate field.
inline
bool &ShadowViewportBase::getMapAutoUpdate(void)
{
    return _sfMapAutoUpdate.getValue();
}

//! Get the value of the ShadowViewport::_sfMapAutoUpdate field.
inline
const bool &ShadowViewportBase::getMapAutoUpdate(void) const
{
    return _sfMapAutoUpdate.getValue();
}

//! Set the value of the ShadowViewport::_sfMapAutoUpdate field.
inline
void ShadowViewportBase::setMapAutoUpdate(const bool &value)
{
    _sfMapAutoUpdate.setValue(value);
}

//! Get the value of the ShadowViewport::_sfShadowMode field.
inline
UInt32 &ShadowViewportBase::getShadowMode(void)
{
    return _sfShadowMode.getValue();
}

//! Get the value of the ShadowViewport::_sfShadowMode field.
inline
const UInt32 &ShadowViewportBase::getShadowMode(void) const
{
    return _sfShadowMode.getValue();
}

//! Set the value of the ShadowViewport::_sfShadowMode field.
inline
void ShadowViewportBase::setShadowMode(const UInt32 &value)
{
    _sfShadowMode.setValue(value);
}

//! Get the value of the ShadowViewport::_sfShadowSmoothness field.
inline
Real32 &ShadowViewportBase::getShadowSmoothness(void)
{
    return _sfShadowSmoothness.getValue();
}

//! Get the value of the ShadowViewport::_sfShadowSmoothness field.
inline
const Real32 &ShadowViewportBase::getShadowSmoothness(void) const
{
    return _sfShadowSmoothness.getValue();
}

//! Set the value of the ShadowViewport::_sfShadowSmoothness field.
inline
void ShadowViewportBase::setShadowSmoothness(const Real32 &value)
{
    _sfShadowSmoothness.setValue(value);
}

//! Get the value of the ShadowViewport::_sfShadowOn field.
inline
bool &ShadowViewportBase::getShadowOn(void)
{
    return _sfShadowOn.getValue();
}

//! Get the value of the ShadowViewport::_sfShadowOn field.
inline
const bool &ShadowViewportBase::getShadowOn(void) const
{
    return _sfShadowOn.getValue();
}

//! Set the value of the ShadowViewport::_sfShadowOn field.
inline
void ShadowViewportBase::setShadowOn(const bool &value)
{
    _sfShadowOn.setValue(value);
}

//! Get the value of the ShadowViewport::_sfAutoSearchForLights field.
inline
bool &ShadowViewportBase::getAutoSearchForLights(void)
{
    return _sfAutoSearchForLights.getValue();
}

//! Get the value of the ShadowViewport::_sfAutoSearchForLights field.
inline
const bool &ShadowViewportBase::getAutoSearchForLights(void) const
{
    return _sfAutoSearchForLights.getValue();
}

//! Set the value of the ShadowViewport::_sfAutoSearchForLights field.
inline
void ShadowViewportBase::setAutoSearchForLights(const bool &value)
{
    _sfAutoSearchForLights.setValue(value);
}

//! Get the value of the ShadowViewport::_sfGlobalShadowIntensity field.
inline
Real32 &ShadowViewportBase::getGlobalShadowIntensity(void)
{
    return _sfGlobalShadowIntensity.getValue();
}

//! Get the value of the ShadowViewport::_sfGlobalShadowIntensity field.
inline
const Real32 &ShadowViewportBase::getGlobalShadowIntensity(void) const
{
    return _sfGlobalShadowIntensity.getValue();
}

//! Set the value of the ShadowViewport::_sfGlobalShadowIntensity field.
inline
void ShadowViewportBase::setGlobalShadowIntensity(const Real32 &value)
{
    _sfGlobalShadowIntensity.setValue(value);
}

//! Get the value of the ShadowViewport::_sfFboOn field.
inline
bool &ShadowViewportBase::getFboOn(void)
{
    return _sfFboOn.getValue();
}

//! Get the value of the ShadowViewport::_sfFboOn field.
inline
const bool &ShadowViewportBase::getFboOn(void) const
{
    return _sfFboOn.getValue();
}

//! Set the value of the ShadowViewport::_sfFboOn field.
inline
void ShadowViewportBase::setFboOn(const bool &value)
{
    _sfFboOn.setValue(value);
}

//! Get the value of the ShadowViewport::_sfAutoExcludeTransparentNodes field.
inline
bool &ShadowViewportBase::getAutoExcludeTransparentNodes(void)
{
    return _sfAutoExcludeTransparentNodes.getValue();
}

//! Get the value of the ShadowViewport::_sfAutoExcludeTransparentNodes field.
inline
const bool &ShadowViewportBase::getAutoExcludeTransparentNodes(void) const
{
    return _sfAutoExcludeTransparentNodes.getValue();
}

//! Set the value of the ShadowViewport::_sfAutoExcludeTransparentNodes field.
inline
void ShadowViewportBase::setAutoExcludeTransparentNodes(const bool &value)
{
    _sfAutoExcludeTransparentNodes.setValue(value);
}

//! Get the value of the ShadowViewport::_sfRed field.
inline
bool &ShadowViewportBase::getRed(void)
{
    return _sfRed.getValue();
}

//! Get the value of the ShadowViewport::_sfRed field.
inline
const bool &ShadowViewportBase::getRed(void) const
{
    return _sfRed.getValue();
}

//! Set the value of the ShadowViewport::_sfRed field.
inline
void ShadowViewportBase::setRed(const bool &value)
{
    _sfRed.setValue(value);
}

//! Get the value of the ShadowViewport::_sfBlue field.
inline
bool &ShadowViewportBase::getBlue(void)
{
    return _sfBlue.getValue();
}

//! Get the value of the ShadowViewport::_sfBlue field.
inline
const bool &ShadowViewportBase::getBlue(void) const
{
    return _sfBlue.getValue();
}

//! Set the value of the ShadowViewport::_sfBlue field.
inline
void ShadowViewportBase::setBlue(const bool &value)
{
    _sfBlue.setValue(value);
}

//! Get the value of the ShadowViewport::_sfGreen field.
inline
bool &ShadowViewportBase::getGreen(void)
{
    return _sfGreen.getValue();
}

//! Get the value of the ShadowViewport::_sfGreen field.
inline
const bool &ShadowViewportBase::getGreen(void) const
{
    return _sfGreen.getValue();
}

//! Set the value of the ShadowViewport::_sfGreen field.
inline
void ShadowViewportBase::setGreen(const bool &value)
{
    _sfGreen.setValue(value);
}

//! Get the value of the ShadowViewport::_sfAlpha field.
inline
bool &ShadowViewportBase::getAlpha(void)
{
    return _sfAlpha.getValue();
}

//! Get the value of the ShadowViewport::_sfAlpha field.
inline
const bool &ShadowViewportBase::getAlpha(void) const
{
    return _sfAlpha.getValue();
}

//! Set the value of the ShadowViewport::_sfAlpha field.
inline
void ShadowViewportBase::setAlpha(const bool &value)
{
    _sfAlpha.setValue(value);
}


//! Get the value of the \a index element the ShadowViewport::_mfLightNodes field.
inline
NodePtr &ShadowViewportBase::getLightNodes(const UInt32 index)
{
    return _mfLightNodes[index];
}

//! Get the ShadowViewport::_mfLightNodes field.
inline
MFNodePtr &ShadowViewportBase::getLightNodes(void)
{
    return _mfLightNodes;
}

//! Get the ShadowViewport::_mfLightNodes field.
inline
const MFNodePtr &ShadowViewportBase::getLightNodes(void) const
{
    return _mfLightNodes;
}

//! Get the value of the \a index element the ShadowViewport::_mfExcludeNodes field.
inline
NodePtr &ShadowViewportBase::getExcludeNodes(const UInt32 index)
{
    return _mfExcludeNodes[index];
}

//! Get the ShadowViewport::_mfExcludeNodes field.
inline
MFNodePtr &ShadowViewportBase::getExcludeNodes(void)
{
    return _mfExcludeNodes;
}

//! Get the ShadowViewport::_mfExcludeNodes field.
inline
const MFNodePtr &ShadowViewportBase::getExcludeNodes(void) const
{
    return _mfExcludeNodes;
}

OSG_END_NAMESPACE

#define OSGSHADOWVIEWPORTBASE_INLINE_CVSID "@(#)$Id: OSGShadowViewportBase.inl,v 1.12 2006/12/01 18:12:43 a-m-z Exp $"
