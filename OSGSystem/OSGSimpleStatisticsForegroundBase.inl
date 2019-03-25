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
 **     class SimpleStatisticsForeground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &SimpleStatisticsForegroundBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 SimpleStatisticsForegroundBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
SimpleStatisticsForegroundPtr SimpleStatisticsForegroundBase::create(void) 
{
    SimpleStatisticsForegroundPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = SimpleStatisticsForegroundPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
SimpleStatisticsForegroundPtr SimpleStatisticsForegroundBase::createEmpty(void) 
{ 
    SimpleStatisticsForegroundPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the SimpleStatisticsForeground::_mfFormats field.
inline
MFString *SimpleStatisticsForegroundBase::getMFFormats(void)
{
    return &_mfFormats;
}

//! Get the SimpleStatisticsForeground::_sfSize field.
inline
SFReal32 *SimpleStatisticsForegroundBase::getSFSize(void)
{
    return &_sfSize;
}

//! Get the SimpleStatisticsForeground::_sfColor field.
inline
SFColor4f *SimpleStatisticsForegroundBase::getSFColor(void)
{
    return &_sfColor;
}

//! Get the SimpleStatisticsForeground::_sfShadowColor field.
inline
SFColor4f *SimpleStatisticsForegroundBase::getSFShadowColor(void)
{
    return &_sfShadowColor;
}

//! Get the SimpleStatisticsForeground::_sfBgColor field.
inline
SFColor4f *SimpleStatisticsForegroundBase::getSFBgColor(void)
{
    return &_sfBgColor;
}

//! Get the SimpleStatisticsForeground::_sfFamily field.
inline
SFString *SimpleStatisticsForegroundBase::getSFFamily(void)
{
    return &_sfFamily;
}

//! Get the SimpleStatisticsForeground::_sfShadowOffset field.
inline
SFVec2f *SimpleStatisticsForegroundBase::getSFShadowOffset(void)
{
    return &_sfShadowOffset;
}

//! Get the SimpleStatisticsForeground::_sfHorizontalAlign field.
inline
SFUInt8 *SimpleStatisticsForegroundBase::getSFHorizontalAlign(void)
{
    return &_sfHorizontalAlign;
}

//! Get the SimpleStatisticsForeground::_sfVerticalAlign field.
inline
SFUInt8 *SimpleStatisticsForegroundBase::getSFVerticalAlign(void)
{
    return &_sfVerticalAlign;
}

//! Get the SimpleStatisticsForeground::_sfBorderColor field.
inline
SFColor4f *SimpleStatisticsForegroundBase::getSFBorderColor(void)
{
    return &_sfBorderColor;
}

//! Get the SimpleStatisticsForeground::_sfBorderOffset field.
inline
SFVec2f *SimpleStatisticsForegroundBase::getSFBorderOffset(void)
{
    return &_sfBorderOffset;
}

//! Get the SimpleStatisticsForeground::_sfTextMargin field.
inline
SFVec2f *SimpleStatisticsForegroundBase::getSFTextMargin(void)
{
    return &_sfTextMargin;
}


//! Get the value of the SimpleStatisticsForeground::_sfSize field.
inline
Real32 &SimpleStatisticsForegroundBase::getSize(void)
{
    return _sfSize.getValue();
}

//! Get the value of the SimpleStatisticsForeground::_sfSize field.
inline
const Real32 &SimpleStatisticsForegroundBase::getSize(void) const
{
    return _sfSize.getValue();
}

//! Set the value of the SimpleStatisticsForeground::_sfSize field.
inline
void SimpleStatisticsForegroundBase::setSize(const Real32 &value)
{
    _sfSize.setValue(value);
}

//! Get the value of the SimpleStatisticsForeground::_sfColor field.
inline
Color4f &SimpleStatisticsForegroundBase::getColor(void)
{
    return _sfColor.getValue();
}

//! Get the value of the SimpleStatisticsForeground::_sfColor field.
inline
const Color4f &SimpleStatisticsForegroundBase::getColor(void) const
{
    return _sfColor.getValue();
}

//! Set the value of the SimpleStatisticsForeground::_sfColor field.
inline
void SimpleStatisticsForegroundBase::setColor(const Color4f &value)
{
    _sfColor.setValue(value);
}

//! Get the value of the SimpleStatisticsForeground::_sfShadowColor field.
inline
Color4f &SimpleStatisticsForegroundBase::getShadowColor(void)
{
    return _sfShadowColor.getValue();
}

//! Get the value of the SimpleStatisticsForeground::_sfShadowColor field.
inline
const Color4f &SimpleStatisticsForegroundBase::getShadowColor(void) const
{
    return _sfShadowColor.getValue();
}

//! Set the value of the SimpleStatisticsForeground::_sfShadowColor field.
inline
void SimpleStatisticsForegroundBase::setShadowColor(const Color4f &value)
{
    _sfShadowColor.setValue(value);
}

//! Get the value of the SimpleStatisticsForeground::_sfBgColor field.
inline
Color4f &SimpleStatisticsForegroundBase::getBgColor(void)
{
    return _sfBgColor.getValue();
}

//! Get the value of the SimpleStatisticsForeground::_sfBgColor field.
inline
const Color4f &SimpleStatisticsForegroundBase::getBgColor(void) const
{
    return _sfBgColor.getValue();
}

//! Set the value of the SimpleStatisticsForeground::_sfBgColor field.
inline
void SimpleStatisticsForegroundBase::setBgColor(const Color4f &value)
{
    _sfBgColor.setValue(value);
}

//! Get the value of the SimpleStatisticsForeground::_sfFamily field.
inline
std::string &SimpleStatisticsForegroundBase::getFamily(void)
{
    return _sfFamily.getValue();
}

//! Get the value of the SimpleStatisticsForeground::_sfFamily field.
inline
const std::string &SimpleStatisticsForegroundBase::getFamily(void) const
{
    return _sfFamily.getValue();
}

//! Set the value of the SimpleStatisticsForeground::_sfFamily field.
inline
void SimpleStatisticsForegroundBase::setFamily(const std::string &value)
{
    _sfFamily.setValue(value);
}

//! Get the value of the SimpleStatisticsForeground::_sfShadowOffset field.
inline
Vec2f &SimpleStatisticsForegroundBase::getShadowOffset(void)
{
    return _sfShadowOffset.getValue();
}

//! Get the value of the SimpleStatisticsForeground::_sfShadowOffset field.
inline
const Vec2f &SimpleStatisticsForegroundBase::getShadowOffset(void) const
{
    return _sfShadowOffset.getValue();
}

//! Set the value of the SimpleStatisticsForeground::_sfShadowOffset field.
inline
void SimpleStatisticsForegroundBase::setShadowOffset(const Vec2f &value)
{
    _sfShadowOffset.setValue(value);
}

//! Get the value of the SimpleStatisticsForeground::_sfHorizontalAlign field.
inline
UInt8 &SimpleStatisticsForegroundBase::getHorizontalAlign(void)
{
    return _sfHorizontalAlign.getValue();
}

//! Get the value of the SimpleStatisticsForeground::_sfHorizontalAlign field.
inline
const UInt8 &SimpleStatisticsForegroundBase::getHorizontalAlign(void) const
{
    return _sfHorizontalAlign.getValue();
}

//! Set the value of the SimpleStatisticsForeground::_sfHorizontalAlign field.
inline
void SimpleStatisticsForegroundBase::setHorizontalAlign(const UInt8 &value)
{
    _sfHorizontalAlign.setValue(value);
}

//! Get the value of the SimpleStatisticsForeground::_sfVerticalAlign field.
inline
UInt8 &SimpleStatisticsForegroundBase::getVerticalAlign(void)
{
    return _sfVerticalAlign.getValue();
}

//! Get the value of the SimpleStatisticsForeground::_sfVerticalAlign field.
inline
const UInt8 &SimpleStatisticsForegroundBase::getVerticalAlign(void) const
{
    return _sfVerticalAlign.getValue();
}

//! Set the value of the SimpleStatisticsForeground::_sfVerticalAlign field.
inline
void SimpleStatisticsForegroundBase::setVerticalAlign(const UInt8 &value)
{
    _sfVerticalAlign.setValue(value);
}

//! Get the value of the SimpleStatisticsForeground::_sfBorderColor field.
inline
Color4f &SimpleStatisticsForegroundBase::getBorderColor(void)
{
    return _sfBorderColor.getValue();
}

//! Get the value of the SimpleStatisticsForeground::_sfBorderColor field.
inline
const Color4f &SimpleStatisticsForegroundBase::getBorderColor(void) const
{
    return _sfBorderColor.getValue();
}

//! Set the value of the SimpleStatisticsForeground::_sfBorderColor field.
inline
void SimpleStatisticsForegroundBase::setBorderColor(const Color4f &value)
{
    _sfBorderColor.setValue(value);
}

//! Get the value of the SimpleStatisticsForeground::_sfBorderOffset field.
inline
Vec2f &SimpleStatisticsForegroundBase::getBorderOffset(void)
{
    return _sfBorderOffset.getValue();
}

//! Get the value of the SimpleStatisticsForeground::_sfBorderOffset field.
inline
const Vec2f &SimpleStatisticsForegroundBase::getBorderOffset(void) const
{
    return _sfBorderOffset.getValue();
}

//! Set the value of the SimpleStatisticsForeground::_sfBorderOffset field.
inline
void SimpleStatisticsForegroundBase::setBorderOffset(const Vec2f &value)
{
    _sfBorderOffset.setValue(value);
}

//! Get the value of the SimpleStatisticsForeground::_sfTextMargin field.
inline
Vec2f &SimpleStatisticsForegroundBase::getTextMargin(void)
{
    return _sfTextMargin.getValue();
}

//! Get the value of the SimpleStatisticsForeground::_sfTextMargin field.
inline
const Vec2f &SimpleStatisticsForegroundBase::getTextMargin(void) const
{
    return _sfTextMargin.getValue();
}

//! Set the value of the SimpleStatisticsForeground::_sfTextMargin field.
inline
void SimpleStatisticsForegroundBase::setTextMargin(const Vec2f &value)
{
    _sfTextMargin.setValue(value);
}


//! Get the value of the \a index element the SimpleStatisticsForeground::_mfFormats field.
inline
std::string &SimpleStatisticsForegroundBase::getFormats(const UInt32 index)
{
    return _mfFormats[index];
}

//! Get the SimpleStatisticsForeground::_mfFormats field.
inline
MFString &SimpleStatisticsForegroundBase::getFormats(void)
{
    return _mfFormats;
}

//! Get the SimpleStatisticsForeground::_mfFormats field.
inline
const MFString &SimpleStatisticsForegroundBase::getFormats(void) const
{
    return _mfFormats;
}

OSG_END_NAMESPACE

#define OSGSIMPLESTATISTICSFOREGROUNDBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

