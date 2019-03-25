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
 **     class DistortionDisplayFilter!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &DistortionDisplayFilterBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 DistortionDisplayFilterBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
DistortionDisplayFilterPtr DistortionDisplayFilterBase::create(void) 
{
    DistortionDisplayFilterPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = DistortionDisplayFilterPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
DistortionDisplayFilterPtr DistortionDisplayFilterBase::createEmpty(void) 
{ 
    DistortionDisplayFilterPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the DistortionDisplayFilter::_sfRows field.
inline
SFUInt32 *DistortionDisplayFilterBase::getSFRows(void)
{
    return &_sfRows;
}

//! Get the DistortionDisplayFilter::_sfColumns field.
inline
SFUInt32 *DistortionDisplayFilterBase::getSFColumns(void)
{
    return &_sfColumns;
}

//! Get the DistortionDisplayFilter::_mfPositions field.
inline
MFVec2f *DistortionDisplayFilterBase::getMFPositions(void)
{
    return &_mfPositions;
}


//! Get the value of the DistortionDisplayFilter::_sfRows field.
inline
UInt32 &DistortionDisplayFilterBase::getRows(void)
{
    return _sfRows.getValue();
}

//! Get the value of the DistortionDisplayFilter::_sfRows field.
inline
const UInt32 &DistortionDisplayFilterBase::getRows(void) const
{
    return _sfRows.getValue();
}

//! Set the value of the DistortionDisplayFilter::_sfRows field.
inline
void DistortionDisplayFilterBase::setRows(const UInt32 &value)
{
    _sfRows.setValue(value);
}

//! Get the value of the DistortionDisplayFilter::_sfColumns field.
inline
UInt32 &DistortionDisplayFilterBase::getColumns(void)
{
    return _sfColumns.getValue();
}

//! Get the value of the DistortionDisplayFilter::_sfColumns field.
inline
const UInt32 &DistortionDisplayFilterBase::getColumns(void) const
{
    return _sfColumns.getValue();
}

//! Set the value of the DistortionDisplayFilter::_sfColumns field.
inline
void DistortionDisplayFilterBase::setColumns(const UInt32 &value)
{
    _sfColumns.setValue(value);
}


//! Get the value of the \a index element the DistortionDisplayFilter::_mfPositions field.
inline
Vec2f &DistortionDisplayFilterBase::getPositions(const UInt32 index)
{
    return _mfPositions[index];
}

//! Get the DistortionDisplayFilter::_mfPositions field.
inline
MFVec2f &DistortionDisplayFilterBase::getPositions(void)
{
    return _mfPositions;
}

//! Get the DistortionDisplayFilter::_mfPositions field.
inline
const MFVec2f &DistortionDisplayFilterBase::getPositions(void) const
{
    return _mfPositions;
}

OSG_END_NAMESPACE

#define OSGDISTORTIONDISPLAYFILTERBASE_INLINE_CVSID "@(#)$Id: $"

