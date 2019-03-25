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
 **     class LightModelChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &LightModelChunkBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 LightModelChunkBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
LightModelChunkPtr LightModelChunkBase::create(void) 
{
    LightModelChunkPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = LightModelChunkPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
LightModelChunkPtr LightModelChunkBase::createEmpty(void) 
{ 
    LightModelChunkPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the LightModelChunk::_sfAmbient field.
inline
SFColor4f *LightModelChunkBase::getSFAmbient(void)
{
    return &_sfAmbient;
}

//! Get the LightModelChunk::_sfColorControl field.
inline
SFGLenum *LightModelChunkBase::getSFColorControl(void)
{
    return &_sfColorControl;
}

//! Get the LightModelChunk::_sfLocalViewer field.
inline
SFBool *LightModelChunkBase::getSFLocalViewer(void)
{
    return &_sfLocalViewer;
}


//! Get the value of the LightModelChunk::_sfAmbient field.
inline
Color4f &LightModelChunkBase::getAmbient(void)
{
    return _sfAmbient.getValue();
}

//! Get the value of the LightModelChunk::_sfAmbient field.
inline
const Color4f &LightModelChunkBase::getAmbient(void) const
{
    return _sfAmbient.getValue();
}

//! Set the value of the LightModelChunk::_sfAmbient field.
inline
void LightModelChunkBase::setAmbient(const Color4f &value)
{
    _sfAmbient.setValue(value);
}

//! Get the value of the LightModelChunk::_sfColorControl field.
inline
GLenum &LightModelChunkBase::getColorControl(void)
{
    return _sfColorControl.getValue();
}

//! Get the value of the LightModelChunk::_sfColorControl field.
inline
const GLenum &LightModelChunkBase::getColorControl(void) const
{
    return _sfColorControl.getValue();
}

//! Set the value of the LightModelChunk::_sfColorControl field.
inline
void LightModelChunkBase::setColorControl(const GLenum &value)
{
    _sfColorControl.setValue(value);
}

//! Get the value of the LightModelChunk::_sfLocalViewer field.
inline
bool &LightModelChunkBase::getLocalViewer(void)
{
    return _sfLocalViewer.getValue();
}

//! Get the value of the LightModelChunk::_sfLocalViewer field.
inline
const bool &LightModelChunkBase::getLocalViewer(void) const
{
    return _sfLocalViewer.getValue();
}

//! Set the value of the LightModelChunk::_sfLocalViewer field.
inline
void LightModelChunkBase::setLocalViewer(const bool &value)
{
    _sfLocalViewer.setValue(value);
}


OSG_END_NAMESPACE

#define OSGLIGHTMODELCHUNKBASE_INLINE_CVSID "@(#)$Id: OSGLightModelChunkBase.inl,v 1.3 2006/02/20 16:54:19 dirk Exp $"

