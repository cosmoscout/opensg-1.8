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
 **     class LineChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &LineChunkBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 LineChunkBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
LineChunkPtr LineChunkBase::create(void) 
{
    LineChunkPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = LineChunkPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
LineChunkPtr LineChunkBase::createEmpty(void) 
{ 
    LineChunkPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the LineChunk::_sfWidth field.
inline
SFReal32 *LineChunkBase::getSFWidth(void)
{
    return &_sfWidth;
}

//! Get the LineChunk::_sfStippleRepeat field.
inline
SFInt32 *LineChunkBase::getSFStippleRepeat(void)
{
    return &_sfStippleRepeat;
}

//! Get the LineChunk::_sfStipplePattern field.
inline
SFUInt16 *LineChunkBase::getSFStipplePattern(void)
{
    return &_sfStipplePattern;
}

//! Get the LineChunk::_sfSmooth field.
inline
SFBool *LineChunkBase::getSFSmooth(void)
{
    return &_sfSmooth;
}


//! Get the value of the LineChunk::_sfWidth field.
inline
Real32 &LineChunkBase::getWidth(void)
{
    return _sfWidth.getValue();
}

//! Get the value of the LineChunk::_sfWidth field.
inline
const Real32 &LineChunkBase::getWidth(void) const
{
    return _sfWidth.getValue();
}

//! Set the value of the LineChunk::_sfWidth field.
inline
void LineChunkBase::setWidth(const Real32 &value)
{
    _sfWidth.setValue(value);
}

//! Get the value of the LineChunk::_sfStippleRepeat field.
inline
Int32 &LineChunkBase::getStippleRepeat(void)
{
    return _sfStippleRepeat.getValue();
}

//! Get the value of the LineChunk::_sfStippleRepeat field.
inline
const Int32 &LineChunkBase::getStippleRepeat(void) const
{
    return _sfStippleRepeat.getValue();
}

//! Set the value of the LineChunk::_sfStippleRepeat field.
inline
void LineChunkBase::setStippleRepeat(const Int32 &value)
{
    _sfStippleRepeat.setValue(value);
}

//! Get the value of the LineChunk::_sfStipplePattern field.
inline
UInt16 &LineChunkBase::getStipplePattern(void)
{
    return _sfStipplePattern.getValue();
}

//! Get the value of the LineChunk::_sfStipplePattern field.
inline
const UInt16 &LineChunkBase::getStipplePattern(void) const
{
    return _sfStipplePattern.getValue();
}

//! Set the value of the LineChunk::_sfStipplePattern field.
inline
void LineChunkBase::setStipplePattern(const UInt16 &value)
{
    _sfStipplePattern.setValue(value);
}

//! Get the value of the LineChunk::_sfSmooth field.
inline
bool &LineChunkBase::getSmooth(void)
{
    return _sfSmooth.getValue();
}

//! Get the value of the LineChunk::_sfSmooth field.
inline
const bool &LineChunkBase::getSmooth(void) const
{
    return _sfSmooth.getValue();
}

//! Set the value of the LineChunk::_sfSmooth field.
inline
void LineChunkBase::setSmooth(const bool &value)
{
    _sfSmooth.setValue(value);
}


OSG_END_NAMESPACE

#define OSGLINECHUNKBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

