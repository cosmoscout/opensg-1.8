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
 **     class PointChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &PointChunkBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 PointChunkBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
PointChunkPtr PointChunkBase::create(void) 
{
    PointChunkPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = PointChunkPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
PointChunkPtr PointChunkBase::createEmpty(void) 
{ 
    PointChunkPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the PointChunk::_sfSize field.
inline
SFReal32 *PointChunkBase::getSFSize(void)
{
    return &_sfSize;
}

//! Get the PointChunk::_sfSmooth field.
inline
SFBool *PointChunkBase::getSFSmooth(void)
{
    return &_sfSmooth;
}

//! Get the PointChunk::_sfMinSize field.
inline
SFReal32 *PointChunkBase::getSFMinSize(void)
{
    return &_sfMinSize;
}

//! Get the PointChunk::_sfMaxSize field.
inline
SFReal32 *PointChunkBase::getSFMaxSize(void)
{
    return &_sfMaxSize;
}

//! Get the PointChunk::_sfConstantAttenuation field.
inline
SFReal32 *PointChunkBase::getSFConstantAttenuation(void)
{
    return &_sfConstantAttenuation;
}

//! Get the PointChunk::_sfLinearAttenuation field.
inline
SFReal32 *PointChunkBase::getSFLinearAttenuation(void)
{
    return &_sfLinearAttenuation;
}

//! Get the PointChunk::_sfQuadraticAttenuation field.
inline
SFReal32 *PointChunkBase::getSFQuadraticAttenuation(void)
{
    return &_sfQuadraticAttenuation;
}

//! Get the PointChunk::_sfFadeThreshold field.
inline
SFReal32 *PointChunkBase::getSFFadeThreshold(void)
{
    return &_sfFadeThreshold;
}

//! Get the PointChunk::_sfSprite field.
inline
SFBool *PointChunkBase::getSFSprite(void)
{
    return &_sfSprite;
}

//! Get the PointChunk::_sfRMode field.
inline
SFGLenum *PointChunkBase::getSFRMode(void)
{
    return &_sfRMode;
}


//! Get the value of the PointChunk::_sfSize field.
inline
Real32 &PointChunkBase::getSize(void)
{
    return _sfSize.getValue();
}

//! Get the value of the PointChunk::_sfSize field.
inline
const Real32 &PointChunkBase::getSize(void) const
{
    return _sfSize.getValue();
}

//! Set the value of the PointChunk::_sfSize field.
inline
void PointChunkBase::setSize(const Real32 &value)
{
    _sfSize.setValue(value);
}

//! Get the value of the PointChunk::_sfSmooth field.
inline
bool &PointChunkBase::getSmooth(void)
{
    return _sfSmooth.getValue();
}

//! Get the value of the PointChunk::_sfSmooth field.
inline
const bool &PointChunkBase::getSmooth(void) const
{
    return _sfSmooth.getValue();
}

//! Set the value of the PointChunk::_sfSmooth field.
inline
void PointChunkBase::setSmooth(const bool &value)
{
    _sfSmooth.setValue(value);
}

//! Get the value of the PointChunk::_sfMinSize field.
inline
Real32 &PointChunkBase::getMinSize(void)
{
    return _sfMinSize.getValue();
}

//! Get the value of the PointChunk::_sfMinSize field.
inline
const Real32 &PointChunkBase::getMinSize(void) const
{
    return _sfMinSize.getValue();
}

//! Set the value of the PointChunk::_sfMinSize field.
inline
void PointChunkBase::setMinSize(const Real32 &value)
{
    _sfMinSize.setValue(value);
}

//! Get the value of the PointChunk::_sfMaxSize field.
inline
Real32 &PointChunkBase::getMaxSize(void)
{
    return _sfMaxSize.getValue();
}

//! Get the value of the PointChunk::_sfMaxSize field.
inline
const Real32 &PointChunkBase::getMaxSize(void) const
{
    return _sfMaxSize.getValue();
}

//! Set the value of the PointChunk::_sfMaxSize field.
inline
void PointChunkBase::setMaxSize(const Real32 &value)
{
    _sfMaxSize.setValue(value);
}

//! Get the value of the PointChunk::_sfConstantAttenuation field.
inline
Real32 &PointChunkBase::getConstantAttenuation(void)
{
    return _sfConstantAttenuation.getValue();
}

//! Get the value of the PointChunk::_sfConstantAttenuation field.
inline
const Real32 &PointChunkBase::getConstantAttenuation(void) const
{
    return _sfConstantAttenuation.getValue();
}

//! Set the value of the PointChunk::_sfConstantAttenuation field.
inline
void PointChunkBase::setConstantAttenuation(const Real32 &value)
{
    _sfConstantAttenuation.setValue(value);
}

//! Get the value of the PointChunk::_sfLinearAttenuation field.
inline
Real32 &PointChunkBase::getLinearAttenuation(void)
{
    return _sfLinearAttenuation.getValue();
}

//! Get the value of the PointChunk::_sfLinearAttenuation field.
inline
const Real32 &PointChunkBase::getLinearAttenuation(void) const
{
    return _sfLinearAttenuation.getValue();
}

//! Set the value of the PointChunk::_sfLinearAttenuation field.
inline
void PointChunkBase::setLinearAttenuation(const Real32 &value)
{
    _sfLinearAttenuation.setValue(value);
}

//! Get the value of the PointChunk::_sfQuadraticAttenuation field.
inline
Real32 &PointChunkBase::getQuadraticAttenuation(void)
{
    return _sfQuadraticAttenuation.getValue();
}

//! Get the value of the PointChunk::_sfQuadraticAttenuation field.
inline
const Real32 &PointChunkBase::getQuadraticAttenuation(void) const
{
    return _sfQuadraticAttenuation.getValue();
}

//! Set the value of the PointChunk::_sfQuadraticAttenuation field.
inline
void PointChunkBase::setQuadraticAttenuation(const Real32 &value)
{
    _sfQuadraticAttenuation.setValue(value);
}

//! Get the value of the PointChunk::_sfFadeThreshold field.
inline
Real32 &PointChunkBase::getFadeThreshold(void)
{
    return _sfFadeThreshold.getValue();
}

//! Get the value of the PointChunk::_sfFadeThreshold field.
inline
const Real32 &PointChunkBase::getFadeThreshold(void) const
{
    return _sfFadeThreshold.getValue();
}

//! Set the value of the PointChunk::_sfFadeThreshold field.
inline
void PointChunkBase::setFadeThreshold(const Real32 &value)
{
    _sfFadeThreshold.setValue(value);
}

//! Get the value of the PointChunk::_sfSprite field.
inline
bool &PointChunkBase::getSprite(void)
{
    return _sfSprite.getValue();
}

//! Get the value of the PointChunk::_sfSprite field.
inline
const bool &PointChunkBase::getSprite(void) const
{
    return _sfSprite.getValue();
}

//! Set the value of the PointChunk::_sfSprite field.
inline
void PointChunkBase::setSprite(const bool &value)
{
    _sfSprite.setValue(value);
}

//! Get the value of the PointChunk::_sfRMode field.
inline
GLenum &PointChunkBase::getRMode(void)
{
    return _sfRMode.getValue();
}

//! Get the value of the PointChunk::_sfRMode field.
inline
const GLenum &PointChunkBase::getRMode(void) const
{
    return _sfRMode.getValue();
}

//! Set the value of the PointChunk::_sfRMode field.
inline
void PointChunkBase::setRMode(const GLenum &value)
{
    _sfRMode.setValue(value);
}


OSG_END_NAMESPACE

#define OSGPOINTCHUNKBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"
