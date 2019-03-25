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
 **     class ProgramChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ProgramChunkBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 ProgramChunkBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 


/*------------------------------ get -----------------------------------*/

//! Get the ProgramChunk::_sfProgram field.
inline
SFString *ProgramChunkBase::getSFProgram(void)
{
    return &_sfProgram;
}

//! Get the ProgramChunk::_mfParamValues field.
inline
MFVec4f *ProgramChunkBase::getMFParamValues(void)
{
    return &_mfParamValues;
}

//! Get the ProgramChunk::_mfParamNames field.
inline
MFString *ProgramChunkBase::getMFParamNames(void)
{
    return &_mfParamNames;
}

//! Get the ProgramChunk::_sfGLId field.
inline
SFUInt32 *ProgramChunkBase::getSFGLId(void)
{
    return &_sfGLId;
}


//! Get the value of the ProgramChunk::_sfProgram field.
inline
std::string &ProgramChunkBase::getProgram(void)
{
    return _sfProgram.getValue();
}

//! Get the value of the ProgramChunk::_sfProgram field.
inline
const std::string &ProgramChunkBase::getProgram(void) const
{
    return _sfProgram.getValue();
}

//! Set the value of the ProgramChunk::_sfProgram field.
inline
void ProgramChunkBase::setProgram(const std::string &value)
{
    _sfProgram.setValue(value);
}

//! Get the value of the ProgramChunk::_sfGLId field.
inline
UInt32 &ProgramChunkBase::getGLId(void)
{
    return _sfGLId.getValue();
}

//! Get the value of the ProgramChunk::_sfGLId field.
inline
const UInt32 &ProgramChunkBase::getGLId(void) const
{
    return _sfGLId.getValue();
}

//! Set the value of the ProgramChunk::_sfGLId field.
inline
void ProgramChunkBase::setGLId(const UInt32 &value)
{
    _sfGLId.setValue(value);
}


//! Get the value of the \a index element the ProgramChunk::_mfParamValues field.
inline
Vec4f &ProgramChunkBase::getParamValues(const UInt32 index)
{
    return _mfParamValues[index];
}

//! Get the ProgramChunk::_mfParamValues field.
inline
MFVec4f &ProgramChunkBase::getParamValues(void)
{
    return _mfParamValues;
}

//! Get the ProgramChunk::_mfParamValues field.
inline
const MFVec4f &ProgramChunkBase::getParamValues(void) const
{
    return _mfParamValues;
}

//! Get the value of the \a index element the ProgramChunk::_mfParamNames field.
inline
std::string &ProgramChunkBase::getParamNames(const UInt32 index)
{
    return _mfParamNames[index];
}

//! Get the ProgramChunk::_mfParamNames field.
inline
MFString &ProgramChunkBase::getParamNames(void)
{
    return _mfParamNames;
}

//! Get the ProgramChunk::_mfParamNames field.
inline
const MFString &ProgramChunkBase::getParamNames(void) const
{
    return _mfParamNames;
}

OSG_END_NAMESPACE

#define OSGPROGRAMCHUNKBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"
