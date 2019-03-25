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
 **     class RenderOptions!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &RenderOptionsBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 RenderOptionsBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
RenderOptionsPtr RenderOptionsBase::create(void) 
{
    RenderOptionsPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = RenderOptionsPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
RenderOptionsPtr RenderOptionsBase::createEmpty(void) 
{ 
    RenderOptionsPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the RenderOptions::_sfStatistic field.
inline
SFBool *RenderOptionsBase::getSFStatistic(void)
{
    return &_sfStatistic;
}

//! Get the RenderOptions::_sfPolygonMode field.
inline
SFGLenum *RenderOptionsBase::getSFPolygonMode(void)
{
    return &_sfPolygonMode;
}

//! Get the RenderOptions::_sfTwoSidedLighting field.
inline
SFBool *RenderOptionsBase::getSFTwoSidedLighting(void)
{
    return &_sfTwoSidedLighting;
}

//! Get the RenderOptions::_sfSpecTexLighting field.
inline
SFBool *RenderOptionsBase::getSFSpecTexLighting(void)
{
    return &_sfSpecTexLighting;
}

//! Get the RenderOptions::_sfSortTrans field.
inline
SFBool *RenderOptionsBase::getSFSortTrans(void)
{
    return &_sfSortTrans;
}

//! Get the RenderOptions::_sfZWriteTrans field.
inline
SFBool *RenderOptionsBase::getSFZWriteTrans(void)
{
    return &_sfZWriteTrans;
}

//! Get the RenderOptions::_sfLocalLights field.
inline
SFBool *RenderOptionsBase::getSFLocalLights(void)
{
    return &_sfLocalLights;
}

//! Get the RenderOptions::_sfCorrectTwoSidedLighting field.
inline
SFBool *RenderOptionsBase::getSFCorrectTwoSidedLighting(void)
{
    return &_sfCorrectTwoSidedLighting;
}

//! Get the RenderOptions::_sfOcclusionCulling field.
inline
SFBool *RenderOptionsBase::getSFOcclusionCulling(void)
{
    return &_sfOcclusionCulling;
}

//! Get the RenderOptions::_sfOcclusionCullingMode field.
inline
SFInt32 *RenderOptionsBase::getSFOcclusionCullingMode(void)
{
    return &_sfOcclusionCullingMode;
}

//! Get the RenderOptions::_sfOcclusionCullingPixels field.
inline
SFUInt32 *RenderOptionsBase::getSFOcclusionCullingPixels(void)
{
    return &_sfOcclusionCullingPixels;
}

//! Get the RenderOptions::_sfAntialiasing field.
inline
SFBool *RenderOptionsBase::getSFAntialiasing(void)
{
    return &_sfAntialiasing;
}

//! Get the RenderOptions::_sfAntialiasingDistance field.
inline
SFReal32 *RenderOptionsBase::getSFAntialiasingDistance(void)
{
    return &_sfAntialiasingDistance;
}

//! Get the RenderOptions::_sfAntialiasingScale field.
inline
SFReal32 *RenderOptionsBase::getSFAntialiasingScale(void)
{
    return &_sfAntialiasingScale;
}

//! Get the RenderOptions::_sfAntialiasingTrigger field.
inline
SFUInt32 *RenderOptionsBase::getSFAntialiasingTrigger(void)
{
    return &_sfAntialiasingTrigger;
}

//! Get the RenderOptions::_sfFrustumCulling field.
inline
SFBool *RenderOptionsBase::getSFFrustumCulling(void)
{
    return &_sfFrustumCulling;
}

//! Get the RenderOptions::_sfBackfaceCulling field.
inline
SFBool *RenderOptionsBase::getSFBackfaceCulling(void)
{
    return &_sfBackfaceCulling;
}

//! Get the RenderOptions::_sfSmallFeatureCulling field.
inline
SFBool *RenderOptionsBase::getSFSmallFeatureCulling(void)
{
    return &_sfSmallFeatureCulling;
}

//! Get the RenderOptions::_sfSmallFeaturePixels field.
inline
SFReal32 *RenderOptionsBase::getSFSmallFeaturePixels(void)
{
    return &_sfSmallFeaturePixels;
}

//! Get the RenderOptions::_sfSmallFeatureThreshold field.
inline
SFUInt32 *RenderOptionsBase::getSFSmallFeatureThreshold(void)
{
    return &_sfSmallFeatureThreshold;
}

//! Get the RenderOptions::_sfFirstFrame field.
inline
SFBool *RenderOptionsBase::getSFFirstFrame(void)
{
    return &_sfFirstFrame;
}


//! Get the value of the RenderOptions::_sfStatistic field.
inline
bool &RenderOptionsBase::getStatistic(void)
{
    return _sfStatistic.getValue();
}

//! Get the value of the RenderOptions::_sfStatistic field.
inline
const bool &RenderOptionsBase::getStatistic(void) const
{
    return _sfStatistic.getValue();
}

//! Set the value of the RenderOptions::_sfStatistic field.
inline
void RenderOptionsBase::setStatistic(const bool &value)
{
    _sfStatistic.setValue(value);
}

//! Get the value of the RenderOptions::_sfPolygonMode field.
inline
GLenum &RenderOptionsBase::getPolygonMode(void)
{
    return _sfPolygonMode.getValue();
}

//! Get the value of the RenderOptions::_sfPolygonMode field.
inline
const GLenum &RenderOptionsBase::getPolygonMode(void) const
{
    return _sfPolygonMode.getValue();
}

//! Set the value of the RenderOptions::_sfPolygonMode field.
inline
void RenderOptionsBase::setPolygonMode(const GLenum &value)
{
    _sfPolygonMode.setValue(value);
}

//! Get the value of the RenderOptions::_sfTwoSidedLighting field.
inline
bool &RenderOptionsBase::getTwoSidedLighting(void)
{
    return _sfTwoSidedLighting.getValue();
}

//! Get the value of the RenderOptions::_sfTwoSidedLighting field.
inline
const bool &RenderOptionsBase::getTwoSidedLighting(void) const
{
    return _sfTwoSidedLighting.getValue();
}

//! Set the value of the RenderOptions::_sfTwoSidedLighting field.
inline
void RenderOptionsBase::setTwoSidedLighting(const bool &value)
{
    _sfTwoSidedLighting.setValue(value);
}

//! Get the value of the RenderOptions::_sfSpecTexLighting field.
inline
bool &RenderOptionsBase::getSpecTexLighting(void)
{
    return _sfSpecTexLighting.getValue();
}

//! Get the value of the RenderOptions::_sfSpecTexLighting field.
inline
const bool &RenderOptionsBase::getSpecTexLighting(void) const
{
    return _sfSpecTexLighting.getValue();
}

//! Set the value of the RenderOptions::_sfSpecTexLighting field.
inline
void RenderOptionsBase::setSpecTexLighting(const bool &value)
{
    _sfSpecTexLighting.setValue(value);
}

//! Get the value of the RenderOptions::_sfSortTrans field.
inline
bool &RenderOptionsBase::getSortTrans(void)
{
    return _sfSortTrans.getValue();
}

//! Get the value of the RenderOptions::_sfSortTrans field.
inline
const bool &RenderOptionsBase::getSortTrans(void) const
{
    return _sfSortTrans.getValue();
}

//! Set the value of the RenderOptions::_sfSortTrans field.
inline
void RenderOptionsBase::setSortTrans(const bool &value)
{
    _sfSortTrans.setValue(value);
}

//! Get the value of the RenderOptions::_sfZWriteTrans field.
inline
bool &RenderOptionsBase::getZWriteTrans(void)
{
    return _sfZWriteTrans.getValue();
}

//! Get the value of the RenderOptions::_sfZWriteTrans field.
inline
const bool &RenderOptionsBase::getZWriteTrans(void) const
{
    return _sfZWriteTrans.getValue();
}

//! Set the value of the RenderOptions::_sfZWriteTrans field.
inline
void RenderOptionsBase::setZWriteTrans(const bool &value)
{
    _sfZWriteTrans.setValue(value);
}

//! Get the value of the RenderOptions::_sfLocalLights field.
inline
bool &RenderOptionsBase::getLocalLights(void)
{
    return _sfLocalLights.getValue();
}

//! Get the value of the RenderOptions::_sfLocalLights field.
inline
const bool &RenderOptionsBase::getLocalLights(void) const
{
    return _sfLocalLights.getValue();
}

//! Set the value of the RenderOptions::_sfLocalLights field.
inline
void RenderOptionsBase::setLocalLights(const bool &value)
{
    _sfLocalLights.setValue(value);
}

//! Get the value of the RenderOptions::_sfCorrectTwoSidedLighting field.
inline
bool &RenderOptionsBase::getCorrectTwoSidedLighting(void)
{
    return _sfCorrectTwoSidedLighting.getValue();
}

//! Get the value of the RenderOptions::_sfCorrectTwoSidedLighting field.
inline
const bool &RenderOptionsBase::getCorrectTwoSidedLighting(void) const
{
    return _sfCorrectTwoSidedLighting.getValue();
}

//! Set the value of the RenderOptions::_sfCorrectTwoSidedLighting field.
inline
void RenderOptionsBase::setCorrectTwoSidedLighting(const bool &value)
{
    _sfCorrectTwoSidedLighting.setValue(value);
}

//! Get the value of the RenderOptions::_sfOcclusionCulling field.
inline
bool &RenderOptionsBase::getOcclusionCulling(void)
{
    return _sfOcclusionCulling.getValue();
}

//! Get the value of the RenderOptions::_sfOcclusionCulling field.
inline
const bool &RenderOptionsBase::getOcclusionCulling(void) const
{
    return _sfOcclusionCulling.getValue();
}

//! Set the value of the RenderOptions::_sfOcclusionCulling field.
inline
void RenderOptionsBase::setOcclusionCulling(const bool &value)
{
    _sfOcclusionCulling.setValue(value);
}

//! Get the value of the RenderOptions::_sfOcclusionCullingMode field.
inline
Int32 &RenderOptionsBase::getOcclusionCullingMode(void)
{
    return _sfOcclusionCullingMode.getValue();
}

//! Get the value of the RenderOptions::_sfOcclusionCullingMode field.
inline
const Int32 &RenderOptionsBase::getOcclusionCullingMode(void) const
{
    return _sfOcclusionCullingMode.getValue();
}

//! Set the value of the RenderOptions::_sfOcclusionCullingMode field.
inline
void RenderOptionsBase::setOcclusionCullingMode(const Int32 &value)
{
    _sfOcclusionCullingMode.setValue(value);
}

//! Get the value of the RenderOptions::_sfOcclusionCullingPixels field.
inline
UInt32 &RenderOptionsBase::getOcclusionCullingPixels(void)
{
    return _sfOcclusionCullingPixels.getValue();
}

//! Get the value of the RenderOptions::_sfOcclusionCullingPixels field.
inline
const UInt32 &RenderOptionsBase::getOcclusionCullingPixels(void) const
{
    return _sfOcclusionCullingPixels.getValue();
}

//! Set the value of the RenderOptions::_sfOcclusionCullingPixels field.
inline
void RenderOptionsBase::setOcclusionCullingPixels(const UInt32 &value)
{
    _sfOcclusionCullingPixels.setValue(value);
}

//! Get the value of the RenderOptions::_sfAntialiasing field.
inline
bool &RenderOptionsBase::getAntialiasing(void)
{
    return _sfAntialiasing.getValue();
}

//! Get the value of the RenderOptions::_sfAntialiasing field.
inline
const bool &RenderOptionsBase::getAntialiasing(void) const
{
    return _sfAntialiasing.getValue();
}

//! Set the value of the RenderOptions::_sfAntialiasing field.
inline
void RenderOptionsBase::setAntialiasing(const bool &value)
{
    _sfAntialiasing.setValue(value);
}

//! Get the value of the RenderOptions::_sfAntialiasingDistance field.
inline
Real32 &RenderOptionsBase::getAntialiasingDistance(void)
{
    return _sfAntialiasingDistance.getValue();
}

//! Get the value of the RenderOptions::_sfAntialiasingDistance field.
inline
const Real32 &RenderOptionsBase::getAntialiasingDistance(void) const
{
    return _sfAntialiasingDistance.getValue();
}

//! Set the value of the RenderOptions::_sfAntialiasingDistance field.
inline
void RenderOptionsBase::setAntialiasingDistance(const Real32 &value)
{
    _sfAntialiasingDistance.setValue(value);
}

//! Get the value of the RenderOptions::_sfAntialiasingScale field.
inline
Real32 &RenderOptionsBase::getAntialiasingScale(void)
{
    return _sfAntialiasingScale.getValue();
}

//! Get the value of the RenderOptions::_sfAntialiasingScale field.
inline
const Real32 &RenderOptionsBase::getAntialiasingScale(void) const
{
    return _sfAntialiasingScale.getValue();
}

//! Set the value of the RenderOptions::_sfAntialiasingScale field.
inline
void RenderOptionsBase::setAntialiasingScale(const Real32 &value)
{
    _sfAntialiasingScale.setValue(value);
}

//! Get the value of the RenderOptions::_sfAntialiasingTrigger field.
inline
UInt32 &RenderOptionsBase::getAntialiasingTrigger(void)
{
    return _sfAntialiasingTrigger.getValue();
}

//! Get the value of the RenderOptions::_sfAntialiasingTrigger field.
inline
const UInt32 &RenderOptionsBase::getAntialiasingTrigger(void) const
{
    return _sfAntialiasingTrigger.getValue();
}

//! Set the value of the RenderOptions::_sfAntialiasingTrigger field.
inline
void RenderOptionsBase::setAntialiasingTrigger(const UInt32 &value)
{
    _sfAntialiasingTrigger.setValue(value);
}

//! Get the value of the RenderOptions::_sfFrustumCulling field.
inline
bool &RenderOptionsBase::getFrustumCulling(void)
{
    return _sfFrustumCulling.getValue();
}

//! Get the value of the RenderOptions::_sfFrustumCulling field.
inline
const bool &RenderOptionsBase::getFrustumCulling(void) const
{
    return _sfFrustumCulling.getValue();
}

//! Set the value of the RenderOptions::_sfFrustumCulling field.
inline
void RenderOptionsBase::setFrustumCulling(const bool &value)
{
    _sfFrustumCulling.setValue(value);
}

//! Get the value of the RenderOptions::_sfBackfaceCulling field.
inline
bool &RenderOptionsBase::getBackfaceCulling(void)
{
    return _sfBackfaceCulling.getValue();
}

//! Get the value of the RenderOptions::_sfBackfaceCulling field.
inline
const bool &RenderOptionsBase::getBackfaceCulling(void) const
{
    return _sfBackfaceCulling.getValue();
}

//! Set the value of the RenderOptions::_sfBackfaceCulling field.
inline
void RenderOptionsBase::setBackfaceCulling(const bool &value)
{
    _sfBackfaceCulling.setValue(value);
}

//! Get the value of the RenderOptions::_sfSmallFeatureCulling field.
inline
bool &RenderOptionsBase::getSmallFeatureCulling(void)
{
    return _sfSmallFeatureCulling.getValue();
}

//! Get the value of the RenderOptions::_sfSmallFeatureCulling field.
inline
const bool &RenderOptionsBase::getSmallFeatureCulling(void) const
{
    return _sfSmallFeatureCulling.getValue();
}

//! Set the value of the RenderOptions::_sfSmallFeatureCulling field.
inline
void RenderOptionsBase::setSmallFeatureCulling(const bool &value)
{
    _sfSmallFeatureCulling.setValue(value);
}

//! Get the value of the RenderOptions::_sfSmallFeaturePixels field.
inline
Real32 &RenderOptionsBase::getSmallFeaturePixels(void)
{
    return _sfSmallFeaturePixels.getValue();
}

//! Get the value of the RenderOptions::_sfSmallFeaturePixels field.
inline
const Real32 &RenderOptionsBase::getSmallFeaturePixels(void) const
{
    return _sfSmallFeaturePixels.getValue();
}

//! Set the value of the RenderOptions::_sfSmallFeaturePixels field.
inline
void RenderOptionsBase::setSmallFeaturePixels(const Real32 &value)
{
    _sfSmallFeaturePixels.setValue(value);
}

//! Get the value of the RenderOptions::_sfSmallFeatureThreshold field.
inline
UInt32 &RenderOptionsBase::getSmallFeatureThreshold(void)
{
    return _sfSmallFeatureThreshold.getValue();
}

//! Get the value of the RenderOptions::_sfSmallFeatureThreshold field.
inline
const UInt32 &RenderOptionsBase::getSmallFeatureThreshold(void) const
{
    return _sfSmallFeatureThreshold.getValue();
}

//! Set the value of the RenderOptions::_sfSmallFeatureThreshold field.
inline
void RenderOptionsBase::setSmallFeatureThreshold(const UInt32 &value)
{
    _sfSmallFeatureThreshold.setValue(value);
}

//! Get the value of the RenderOptions::_sfFirstFrame field.
inline
bool &RenderOptionsBase::getFirstFrame(void)
{
    return _sfFirstFrame.getValue();
}

//! Get the value of the RenderOptions::_sfFirstFrame field.
inline
const bool &RenderOptionsBase::getFirstFrame(void) const
{
    return _sfFirstFrame.getValue();
}

//! Set the value of the RenderOptions::_sfFirstFrame field.
inline
void RenderOptionsBase::setFirstFrame(const bool &value)
{
    _sfFirstFrame.setValue(value);
}


OSG_END_NAMESPACE

#define OSGRENDEROPTIONSBASE_INLINE_CVSID "@(#)$Id: OSGRenderOptionsBase.inl,v 1.7 2007/07/03 09:16:10 yjung Exp $"

