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
 **     class ShearedStereoCameraDecorator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ShearedStereoCameraDecoratorBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 ShearedStereoCameraDecoratorBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
ShearedStereoCameraDecoratorPtr ShearedStereoCameraDecoratorBase::create(void) 
{
    ShearedStereoCameraDecoratorPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = ShearedStereoCameraDecoratorPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
ShearedStereoCameraDecoratorPtr ShearedStereoCameraDecoratorBase::createEmpty(void) 
{ 
    ShearedStereoCameraDecoratorPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the ShearedStereoCameraDecorator::_sfZeroParallaxDistance field.
inline
SFReal32 *ShearedStereoCameraDecoratorBase::getSFZeroParallaxDistance(void)
{
    return &_sfZeroParallaxDistance;
}

//! Get the ShearedStereoCameraDecorator::_sfOverlap field.
inline
SFReal32 *ShearedStereoCameraDecoratorBase::getSFOverlap(void)
{
    return &_sfOverlap;
}


//! Get the value of the ShearedStereoCameraDecorator::_sfZeroParallaxDistance field.
inline
Real32 &ShearedStereoCameraDecoratorBase::getZeroParallaxDistance(void)
{
    return _sfZeroParallaxDistance.getValue();
}

//! Get the value of the ShearedStereoCameraDecorator::_sfZeroParallaxDistance field.
inline
const Real32 &ShearedStereoCameraDecoratorBase::getZeroParallaxDistance(void) const
{
    return _sfZeroParallaxDistance.getValue();
}

//! Set the value of the ShearedStereoCameraDecorator::_sfZeroParallaxDistance field.
inline
void ShearedStereoCameraDecoratorBase::setZeroParallaxDistance(const Real32 &value)
{
    _sfZeroParallaxDistance.setValue(value);
}

//! Get the value of the ShearedStereoCameraDecorator::_sfOverlap field.
inline
Real32 &ShearedStereoCameraDecoratorBase::getOverlap(void)
{
    return _sfOverlap.getValue();
}

//! Get the value of the ShearedStereoCameraDecorator::_sfOverlap field.
inline
const Real32 &ShearedStereoCameraDecoratorBase::getOverlap(void) const
{
    return _sfOverlap.getValue();
}

//! Set the value of the ShearedStereoCameraDecorator::_sfOverlap field.
inline
void ShearedStereoCameraDecoratorBase::setOverlap(const Real32 &value)
{
    _sfOverlap.setValue(value);
}


OSG_END_NAMESPACE

#define OSGSHEAREDSTEREOCAMERADECORATORBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

