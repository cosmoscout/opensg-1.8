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
 **     class Slices!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &SlicesBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 SlicesBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
SlicesPtr SlicesBase::create(void) 
{
    SlicesPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = SlicesPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
SlicesPtr SlicesBase::createEmpty(void) 
{ 
    SlicesPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the Slices::_sfSize field.
inline
SFVec3f *SlicesBase::getSFSize(void)
{
    return &_sfSize;
}

//! Get the Slices::_sfSliceDistance field.
inline
SFReal32 *SlicesBase::getSFSliceDistance(void)
{
    return &_sfSliceDistance;
}


//! Get the value of the Slices::_sfSize field.
inline
Vec3f &SlicesBase::getSize(void)
{
    return _sfSize.getValue();
}

//! Get the value of the Slices::_sfSize field.
inline
const Vec3f &SlicesBase::getSize(void) const
{
    return _sfSize.getValue();
}

//! Set the value of the Slices::_sfSize field.
inline
void SlicesBase::setSize(const Vec3f &value)
{
    _sfSize.setValue(value);
}

//! Get the value of the Slices::_sfSliceDistance field.
inline
Real32 &SlicesBase::getSliceDistance(void)
{
    return _sfSliceDistance.getValue();
}

//! Get the value of the Slices::_sfSliceDistance field.
inline
const Real32 &SlicesBase::getSliceDistance(void) const
{
    return _sfSliceDistance.getValue();
}

//! Set the value of the Slices::_sfSliceDistance field.
inline
void SlicesBase::setSliceDistance(const Real32 &value)
{
    _sfSliceDistance.setValue(value);
}


OSG_END_NAMESPACE

#define OSGSLICESBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

