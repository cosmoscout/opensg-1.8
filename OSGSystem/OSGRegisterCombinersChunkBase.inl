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
 **     class RegisterCombinersChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &RegisterCombinersChunkBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 RegisterCombinersChunkBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
RegisterCombinersChunkPtr RegisterCombinersChunkBase::create(void) 
{
    RegisterCombinersChunkPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = RegisterCombinersChunkPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
RegisterCombinersChunkPtr RegisterCombinersChunkBase::createEmpty(void) 
{ 
    RegisterCombinersChunkPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the RegisterCombinersChunk::_sfColor0 field.
inline
SFColor4f *RegisterCombinersChunkBase::getSFColor0(void)
{
    return &_sfColor0;
}

//! Get the RegisterCombinersChunk::_sfColor1 field.
inline
SFColor4f *RegisterCombinersChunkBase::getSFColor1(void)
{
    return &_sfColor1;
}

//! Get the RegisterCombinersChunk::_sfColorSumClamp field.
inline
SFBool *RegisterCombinersChunkBase::getSFColorSumClamp(void)
{
    return &_sfColorSumClamp;
}

//! Get the RegisterCombinersChunk::_mfVariableArgb field.
inline
MFGLenum *RegisterCombinersChunkBase::getMFVariableArgb(void)
{
    return &_mfVariableArgb;
}

//! Get the RegisterCombinersChunk::_mfVariableBrgb field.
inline
MFGLenum *RegisterCombinersChunkBase::getMFVariableBrgb(void)
{
    return &_mfVariableBrgb;
}

//! Get the RegisterCombinersChunk::_mfVariableCrgb field.
inline
MFGLenum *RegisterCombinersChunkBase::getMFVariableCrgb(void)
{
    return &_mfVariableCrgb;
}

//! Get the RegisterCombinersChunk::_mfVariableDrgb field.
inline
MFGLenum *RegisterCombinersChunkBase::getMFVariableDrgb(void)
{
    return &_mfVariableDrgb;
}

//! Get the RegisterCombinersChunk::_mfVariableAalpha field.
inline
MFGLenum *RegisterCombinersChunkBase::getMFVariableAalpha(void)
{
    return &_mfVariableAalpha;
}

//! Get the RegisterCombinersChunk::_mfVariableBalpha field.
inline
MFGLenum *RegisterCombinersChunkBase::getMFVariableBalpha(void)
{
    return &_mfVariableBalpha;
}

//! Get the RegisterCombinersChunk::_mfVariableCalpha field.
inline
MFGLenum *RegisterCombinersChunkBase::getMFVariableCalpha(void)
{
    return &_mfVariableCalpha;
}

//! Get the RegisterCombinersChunk::_mfVariableDalpha field.
inline
MFGLenum *RegisterCombinersChunkBase::getMFVariableDalpha(void)
{
    return &_mfVariableDalpha;
}

//! Get the RegisterCombinersChunk::_mfOutputABrgb field.
inline
MFGLenum *RegisterCombinersChunkBase::getMFOutputABrgb(void)
{
    return &_mfOutputABrgb;
}

//! Get the RegisterCombinersChunk::_mfOutputCDrgb field.
inline
MFGLenum *RegisterCombinersChunkBase::getMFOutputCDrgb(void)
{
    return &_mfOutputCDrgb;
}

//! Get the RegisterCombinersChunk::_mfOutputSumrgb field.
inline
MFGLenum *RegisterCombinersChunkBase::getMFOutputSumrgb(void)
{
    return &_mfOutputSumrgb;
}

//! Get the RegisterCombinersChunk::_mfScalergb field.
inline
MFGLenum *RegisterCombinersChunkBase::getMFScalergb(void)
{
    return &_mfScalergb;
}

//! Get the RegisterCombinersChunk::_mfBiasrgb field.
inline
MFGLenum *RegisterCombinersChunkBase::getMFBiasrgb(void)
{
    return &_mfBiasrgb;
}

//! Get the RegisterCombinersChunk::_mfOutputABalpha field.
inline
MFGLenum *RegisterCombinersChunkBase::getMFOutputABalpha(void)
{
    return &_mfOutputABalpha;
}

//! Get the RegisterCombinersChunk::_mfOutputCDalpha field.
inline
MFGLenum *RegisterCombinersChunkBase::getMFOutputCDalpha(void)
{
    return &_mfOutputCDalpha;
}

//! Get the RegisterCombinersChunk::_mfOutputSumalpha field.
inline
MFGLenum *RegisterCombinersChunkBase::getMFOutputSumalpha(void)
{
    return &_mfOutputSumalpha;
}

//! Get the RegisterCombinersChunk::_mfDotABrgb field.
inline
MFUInt8 *RegisterCombinersChunkBase::getMFDotABrgb(void)
{
    return &_mfDotABrgb;
}

//! Get the RegisterCombinersChunk::_mfDotCDrgb field.
inline
MFUInt8 *RegisterCombinersChunkBase::getMFDotCDrgb(void)
{
    return &_mfDotCDrgb;
}

//! Get the RegisterCombinersChunk::_mfMuxSumrgb field.
inline
MFUInt8 *RegisterCombinersChunkBase::getMFMuxSumrgb(void)
{
    return &_mfMuxSumrgb;
}

//! Get the RegisterCombinersChunk::_mfScalealpha field.
inline
MFGLenum *RegisterCombinersChunkBase::getMFScalealpha(void)
{
    return &_mfScalealpha;
}

//! Get the RegisterCombinersChunk::_mfBiasalpha field.
inline
MFGLenum *RegisterCombinersChunkBase::getMFBiasalpha(void)
{
    return &_mfBiasalpha;
}

//! Get the RegisterCombinersChunk::_mfMuxSumalpha field.
inline
MFUInt8 *RegisterCombinersChunkBase::getMFMuxSumalpha(void)
{
    return &_mfMuxSumalpha;
}

//! Get the RegisterCombinersChunk::_mfVariableE field.
inline
MFGLenum *RegisterCombinersChunkBase::getMFVariableE(void)
{
    return &_mfVariableE;
}

//! Get the RegisterCombinersChunk::_mfVariableF field.
inline
MFGLenum *RegisterCombinersChunkBase::getMFVariableF(void)
{
    return &_mfVariableF;
}

//! Get the RegisterCombinersChunk::_mfVariableG field.
inline
MFGLenum *RegisterCombinersChunkBase::getMFVariableG(void)
{
    return &_mfVariableG;
}

//! Get the RegisterCombinersChunk::_mfCombinerColor0 field.
inline
MFColor4f *RegisterCombinersChunkBase::getMFCombinerColor0(void)
{
    return &_mfCombinerColor0;
}

//! Get the RegisterCombinersChunk::_mfCombinerColor1 field.
inline
MFColor4f *RegisterCombinersChunkBase::getMFCombinerColor1(void)
{
    return &_mfCombinerColor1;
}

//! Get the RegisterCombinersChunk::_sfPerStageConstants field.
inline
SFUInt8 *RegisterCombinersChunkBase::getSFPerStageConstants(void)
{
    return &_sfPerStageConstants;
}


//! Get the value of the RegisterCombinersChunk::_sfColor0 field.
inline
Color4f &RegisterCombinersChunkBase::getColor0(void)
{
    return _sfColor0.getValue();
}

//! Get the value of the RegisterCombinersChunk::_sfColor0 field.
inline
const Color4f &RegisterCombinersChunkBase::getColor0(void) const
{
    return _sfColor0.getValue();
}

//! Set the value of the RegisterCombinersChunk::_sfColor0 field.
inline
void RegisterCombinersChunkBase::setColor0(const Color4f &value)
{
    _sfColor0.setValue(value);
}

//! Get the value of the RegisterCombinersChunk::_sfColor1 field.
inline
Color4f &RegisterCombinersChunkBase::getColor1(void)
{
    return _sfColor1.getValue();
}

//! Get the value of the RegisterCombinersChunk::_sfColor1 field.
inline
const Color4f &RegisterCombinersChunkBase::getColor1(void) const
{
    return _sfColor1.getValue();
}

//! Set the value of the RegisterCombinersChunk::_sfColor1 field.
inline
void RegisterCombinersChunkBase::setColor1(const Color4f &value)
{
    _sfColor1.setValue(value);
}

//! Get the value of the RegisterCombinersChunk::_sfColorSumClamp field.
inline
bool &RegisterCombinersChunkBase::getColorSumClamp(void)
{
    return _sfColorSumClamp.getValue();
}

//! Get the value of the RegisterCombinersChunk::_sfColorSumClamp field.
inline
const bool &RegisterCombinersChunkBase::getColorSumClamp(void) const
{
    return _sfColorSumClamp.getValue();
}

//! Set the value of the RegisterCombinersChunk::_sfColorSumClamp field.
inline
void RegisterCombinersChunkBase::setColorSumClamp(const bool &value)
{
    _sfColorSumClamp.setValue(value);
}

//! Get the value of the RegisterCombinersChunk::_sfPerStageConstants field.
inline
UInt8 &RegisterCombinersChunkBase::getPerStageConstants(void)
{
    return _sfPerStageConstants.getValue();
}

//! Get the value of the RegisterCombinersChunk::_sfPerStageConstants field.
inline
const UInt8 &RegisterCombinersChunkBase::getPerStageConstants(void) const
{
    return _sfPerStageConstants.getValue();
}

//! Set the value of the RegisterCombinersChunk::_sfPerStageConstants field.
inline
void RegisterCombinersChunkBase::setPerStageConstants(const UInt8 &value)
{
    _sfPerStageConstants.setValue(value);
}


//! Get the value of the \a index element the RegisterCombinersChunk::_mfVariableArgb field.
inline
GLenum &RegisterCombinersChunkBase::getVariableArgb(const UInt32 index)
{
    return _mfVariableArgb[index];
}

//! Get the RegisterCombinersChunk::_mfVariableArgb field.
inline
MFGLenum &RegisterCombinersChunkBase::getVariableArgb(void)
{
    return _mfVariableArgb;
}

//! Get the RegisterCombinersChunk::_mfVariableArgb field.
inline
const MFGLenum &RegisterCombinersChunkBase::getVariableArgb(void) const
{
    return _mfVariableArgb;
}

//! Get the value of the \a index element the RegisterCombinersChunk::_mfVariableBrgb field.
inline
GLenum &RegisterCombinersChunkBase::getVariableBrgb(const UInt32 index)
{
    return _mfVariableBrgb[index];
}

//! Get the RegisterCombinersChunk::_mfVariableBrgb field.
inline
MFGLenum &RegisterCombinersChunkBase::getVariableBrgb(void)
{
    return _mfVariableBrgb;
}

//! Get the RegisterCombinersChunk::_mfVariableBrgb field.
inline
const MFGLenum &RegisterCombinersChunkBase::getVariableBrgb(void) const
{
    return _mfVariableBrgb;
}

//! Get the value of the \a index element the RegisterCombinersChunk::_mfVariableCrgb field.
inline
GLenum &RegisterCombinersChunkBase::getVariableCrgb(const UInt32 index)
{
    return _mfVariableCrgb[index];
}

//! Get the RegisterCombinersChunk::_mfVariableCrgb field.
inline
MFGLenum &RegisterCombinersChunkBase::getVariableCrgb(void)
{
    return _mfVariableCrgb;
}

//! Get the RegisterCombinersChunk::_mfVariableCrgb field.
inline
const MFGLenum &RegisterCombinersChunkBase::getVariableCrgb(void) const
{
    return _mfVariableCrgb;
}

//! Get the value of the \a index element the RegisterCombinersChunk::_mfVariableDrgb field.
inline
GLenum &RegisterCombinersChunkBase::getVariableDrgb(const UInt32 index)
{
    return _mfVariableDrgb[index];
}

//! Get the RegisterCombinersChunk::_mfVariableDrgb field.
inline
MFGLenum &RegisterCombinersChunkBase::getVariableDrgb(void)
{
    return _mfVariableDrgb;
}

//! Get the RegisterCombinersChunk::_mfVariableDrgb field.
inline
const MFGLenum &RegisterCombinersChunkBase::getVariableDrgb(void) const
{
    return _mfVariableDrgb;
}

//! Get the value of the \a index element the RegisterCombinersChunk::_mfVariableAalpha field.
inline
GLenum &RegisterCombinersChunkBase::getVariableAalpha(const UInt32 index)
{
    return _mfVariableAalpha[index];
}

//! Get the RegisterCombinersChunk::_mfVariableAalpha field.
inline
MFGLenum &RegisterCombinersChunkBase::getVariableAalpha(void)
{
    return _mfVariableAalpha;
}

//! Get the RegisterCombinersChunk::_mfVariableAalpha field.
inline
const MFGLenum &RegisterCombinersChunkBase::getVariableAalpha(void) const
{
    return _mfVariableAalpha;
}

//! Get the value of the \a index element the RegisterCombinersChunk::_mfVariableBalpha field.
inline
GLenum &RegisterCombinersChunkBase::getVariableBalpha(const UInt32 index)
{
    return _mfVariableBalpha[index];
}

//! Get the RegisterCombinersChunk::_mfVariableBalpha field.
inline
MFGLenum &RegisterCombinersChunkBase::getVariableBalpha(void)
{
    return _mfVariableBalpha;
}

//! Get the RegisterCombinersChunk::_mfVariableBalpha field.
inline
const MFGLenum &RegisterCombinersChunkBase::getVariableBalpha(void) const
{
    return _mfVariableBalpha;
}

//! Get the value of the \a index element the RegisterCombinersChunk::_mfVariableCalpha field.
inline
GLenum &RegisterCombinersChunkBase::getVariableCalpha(const UInt32 index)
{
    return _mfVariableCalpha[index];
}

//! Get the RegisterCombinersChunk::_mfVariableCalpha field.
inline
MFGLenum &RegisterCombinersChunkBase::getVariableCalpha(void)
{
    return _mfVariableCalpha;
}

//! Get the RegisterCombinersChunk::_mfVariableCalpha field.
inline
const MFGLenum &RegisterCombinersChunkBase::getVariableCalpha(void) const
{
    return _mfVariableCalpha;
}

//! Get the value of the \a index element the RegisterCombinersChunk::_mfVariableDalpha field.
inline
GLenum &RegisterCombinersChunkBase::getVariableDalpha(const UInt32 index)
{
    return _mfVariableDalpha[index];
}

//! Get the RegisterCombinersChunk::_mfVariableDalpha field.
inline
MFGLenum &RegisterCombinersChunkBase::getVariableDalpha(void)
{
    return _mfVariableDalpha;
}

//! Get the RegisterCombinersChunk::_mfVariableDalpha field.
inline
const MFGLenum &RegisterCombinersChunkBase::getVariableDalpha(void) const
{
    return _mfVariableDalpha;
}

//! Get the value of the \a index element the RegisterCombinersChunk::_mfOutputABrgb field.
inline
GLenum &RegisterCombinersChunkBase::getOutputABrgb(const UInt32 index)
{
    return _mfOutputABrgb[index];
}

//! Get the RegisterCombinersChunk::_mfOutputABrgb field.
inline
MFGLenum &RegisterCombinersChunkBase::getOutputABrgb(void)
{
    return _mfOutputABrgb;
}

//! Get the RegisterCombinersChunk::_mfOutputABrgb field.
inline
const MFGLenum &RegisterCombinersChunkBase::getOutputABrgb(void) const
{
    return _mfOutputABrgb;
}

//! Get the value of the \a index element the RegisterCombinersChunk::_mfOutputCDrgb field.
inline
GLenum &RegisterCombinersChunkBase::getOutputCDrgb(const UInt32 index)
{
    return _mfOutputCDrgb[index];
}

//! Get the RegisterCombinersChunk::_mfOutputCDrgb field.
inline
MFGLenum &RegisterCombinersChunkBase::getOutputCDrgb(void)
{
    return _mfOutputCDrgb;
}

//! Get the RegisterCombinersChunk::_mfOutputCDrgb field.
inline
const MFGLenum &RegisterCombinersChunkBase::getOutputCDrgb(void) const
{
    return _mfOutputCDrgb;
}

//! Get the value of the \a index element the RegisterCombinersChunk::_mfOutputSumrgb field.
inline
GLenum &RegisterCombinersChunkBase::getOutputSumrgb(const UInt32 index)
{
    return _mfOutputSumrgb[index];
}

//! Get the RegisterCombinersChunk::_mfOutputSumrgb field.
inline
MFGLenum &RegisterCombinersChunkBase::getOutputSumrgb(void)
{
    return _mfOutputSumrgb;
}

//! Get the RegisterCombinersChunk::_mfOutputSumrgb field.
inline
const MFGLenum &RegisterCombinersChunkBase::getOutputSumrgb(void) const
{
    return _mfOutputSumrgb;
}

//! Get the value of the \a index element the RegisterCombinersChunk::_mfScalergb field.
inline
GLenum &RegisterCombinersChunkBase::getScalergb(const UInt32 index)
{
    return _mfScalergb[index];
}

//! Get the RegisterCombinersChunk::_mfScalergb field.
inline
MFGLenum &RegisterCombinersChunkBase::getScalergb(void)
{
    return _mfScalergb;
}

//! Get the RegisterCombinersChunk::_mfScalergb field.
inline
const MFGLenum &RegisterCombinersChunkBase::getScalergb(void) const
{
    return _mfScalergb;
}

//! Get the value of the \a index element the RegisterCombinersChunk::_mfBiasrgb field.
inline
GLenum &RegisterCombinersChunkBase::getBiasrgb(const UInt32 index)
{
    return _mfBiasrgb[index];
}

//! Get the RegisterCombinersChunk::_mfBiasrgb field.
inline
MFGLenum &RegisterCombinersChunkBase::getBiasrgb(void)
{
    return _mfBiasrgb;
}

//! Get the RegisterCombinersChunk::_mfBiasrgb field.
inline
const MFGLenum &RegisterCombinersChunkBase::getBiasrgb(void) const
{
    return _mfBiasrgb;
}

//! Get the value of the \a index element the RegisterCombinersChunk::_mfOutputABalpha field.
inline
GLenum &RegisterCombinersChunkBase::getOutputABalpha(const UInt32 index)
{
    return _mfOutputABalpha[index];
}

//! Get the RegisterCombinersChunk::_mfOutputABalpha field.
inline
MFGLenum &RegisterCombinersChunkBase::getOutputABalpha(void)
{
    return _mfOutputABalpha;
}

//! Get the RegisterCombinersChunk::_mfOutputABalpha field.
inline
const MFGLenum &RegisterCombinersChunkBase::getOutputABalpha(void) const
{
    return _mfOutputABalpha;
}

//! Get the value of the \a index element the RegisterCombinersChunk::_mfOutputCDalpha field.
inline
GLenum &RegisterCombinersChunkBase::getOutputCDalpha(const UInt32 index)
{
    return _mfOutputCDalpha[index];
}

//! Get the RegisterCombinersChunk::_mfOutputCDalpha field.
inline
MFGLenum &RegisterCombinersChunkBase::getOutputCDalpha(void)
{
    return _mfOutputCDalpha;
}

//! Get the RegisterCombinersChunk::_mfOutputCDalpha field.
inline
const MFGLenum &RegisterCombinersChunkBase::getOutputCDalpha(void) const
{
    return _mfOutputCDalpha;
}

//! Get the value of the \a index element the RegisterCombinersChunk::_mfOutputSumalpha field.
inline
GLenum &RegisterCombinersChunkBase::getOutputSumalpha(const UInt32 index)
{
    return _mfOutputSumalpha[index];
}

//! Get the RegisterCombinersChunk::_mfOutputSumalpha field.
inline
MFGLenum &RegisterCombinersChunkBase::getOutputSumalpha(void)
{
    return _mfOutputSumalpha;
}

//! Get the RegisterCombinersChunk::_mfOutputSumalpha field.
inline
const MFGLenum &RegisterCombinersChunkBase::getOutputSumalpha(void) const
{
    return _mfOutputSumalpha;
}

//! Get the value of the \a index element the RegisterCombinersChunk::_mfDotABrgb field.
inline
UInt8 &RegisterCombinersChunkBase::getDotABrgb(const UInt32 index)
{
    return _mfDotABrgb[index];
}

//! Get the RegisterCombinersChunk::_mfDotABrgb field.
inline
MFUInt8 &RegisterCombinersChunkBase::getDotABrgb(void)
{
    return _mfDotABrgb;
}

//! Get the RegisterCombinersChunk::_mfDotABrgb field.
inline
const MFUInt8 &RegisterCombinersChunkBase::getDotABrgb(void) const
{
    return _mfDotABrgb;
}

//! Get the value of the \a index element the RegisterCombinersChunk::_mfDotCDrgb field.
inline
UInt8 &RegisterCombinersChunkBase::getDotCDrgb(const UInt32 index)
{
    return _mfDotCDrgb[index];
}

//! Get the RegisterCombinersChunk::_mfDotCDrgb field.
inline
MFUInt8 &RegisterCombinersChunkBase::getDotCDrgb(void)
{
    return _mfDotCDrgb;
}

//! Get the RegisterCombinersChunk::_mfDotCDrgb field.
inline
const MFUInt8 &RegisterCombinersChunkBase::getDotCDrgb(void) const
{
    return _mfDotCDrgb;
}

//! Get the value of the \a index element the RegisterCombinersChunk::_mfMuxSumrgb field.
inline
UInt8 &RegisterCombinersChunkBase::getMuxSumrgb(const UInt32 index)
{
    return _mfMuxSumrgb[index];
}

//! Get the RegisterCombinersChunk::_mfMuxSumrgb field.
inline
MFUInt8 &RegisterCombinersChunkBase::getMuxSumrgb(void)
{
    return _mfMuxSumrgb;
}

//! Get the RegisterCombinersChunk::_mfMuxSumrgb field.
inline
const MFUInt8 &RegisterCombinersChunkBase::getMuxSumrgb(void) const
{
    return _mfMuxSumrgb;
}

//! Get the value of the \a index element the RegisterCombinersChunk::_mfScalealpha field.
inline
GLenum &RegisterCombinersChunkBase::getScalealpha(const UInt32 index)
{
    return _mfScalealpha[index];
}

//! Get the RegisterCombinersChunk::_mfScalealpha field.
inline
MFGLenum &RegisterCombinersChunkBase::getScalealpha(void)
{
    return _mfScalealpha;
}

//! Get the RegisterCombinersChunk::_mfScalealpha field.
inline
const MFGLenum &RegisterCombinersChunkBase::getScalealpha(void) const
{
    return _mfScalealpha;
}

//! Get the value of the \a index element the RegisterCombinersChunk::_mfBiasalpha field.
inline
GLenum &RegisterCombinersChunkBase::getBiasalpha(const UInt32 index)
{
    return _mfBiasalpha[index];
}

//! Get the RegisterCombinersChunk::_mfBiasalpha field.
inline
MFGLenum &RegisterCombinersChunkBase::getBiasalpha(void)
{
    return _mfBiasalpha;
}

//! Get the RegisterCombinersChunk::_mfBiasalpha field.
inline
const MFGLenum &RegisterCombinersChunkBase::getBiasalpha(void) const
{
    return _mfBiasalpha;
}

//! Get the value of the \a index element the RegisterCombinersChunk::_mfMuxSumalpha field.
inline
UInt8 &RegisterCombinersChunkBase::getMuxSumalpha(const UInt32 index)
{
    return _mfMuxSumalpha[index];
}

//! Get the RegisterCombinersChunk::_mfMuxSumalpha field.
inline
MFUInt8 &RegisterCombinersChunkBase::getMuxSumalpha(void)
{
    return _mfMuxSumalpha;
}

//! Get the RegisterCombinersChunk::_mfMuxSumalpha field.
inline
const MFUInt8 &RegisterCombinersChunkBase::getMuxSumalpha(void) const
{
    return _mfMuxSumalpha;
}

//! Get the value of the \a index element the RegisterCombinersChunk::_mfVariableE field.
inline
GLenum &RegisterCombinersChunkBase::getVariableE(const UInt32 index)
{
    return _mfVariableE[index];
}

//! Get the RegisterCombinersChunk::_mfVariableE field.
inline
MFGLenum &RegisterCombinersChunkBase::getVariableE(void)
{
    return _mfVariableE;
}

//! Get the RegisterCombinersChunk::_mfVariableE field.
inline
const MFGLenum &RegisterCombinersChunkBase::getVariableE(void) const
{
    return _mfVariableE;
}

//! Get the value of the \a index element the RegisterCombinersChunk::_mfVariableF field.
inline
GLenum &RegisterCombinersChunkBase::getVariableF(const UInt32 index)
{
    return _mfVariableF[index];
}

//! Get the RegisterCombinersChunk::_mfVariableF field.
inline
MFGLenum &RegisterCombinersChunkBase::getVariableF(void)
{
    return _mfVariableF;
}

//! Get the RegisterCombinersChunk::_mfVariableF field.
inline
const MFGLenum &RegisterCombinersChunkBase::getVariableF(void) const
{
    return _mfVariableF;
}

//! Get the value of the \a index element the RegisterCombinersChunk::_mfVariableG field.
inline
GLenum &RegisterCombinersChunkBase::getVariableG(const UInt32 index)
{
    return _mfVariableG[index];
}

//! Get the RegisterCombinersChunk::_mfVariableG field.
inline
MFGLenum &RegisterCombinersChunkBase::getVariableG(void)
{
    return _mfVariableG;
}

//! Get the RegisterCombinersChunk::_mfVariableG field.
inline
const MFGLenum &RegisterCombinersChunkBase::getVariableG(void) const
{
    return _mfVariableG;
}

//! Get the value of the \a index element the RegisterCombinersChunk::_mfCombinerColor0 field.
inline
Color4f &RegisterCombinersChunkBase::getCombinerColor0(const UInt32 index)
{
    return _mfCombinerColor0[index];
}

//! Get the RegisterCombinersChunk::_mfCombinerColor0 field.
inline
MFColor4f &RegisterCombinersChunkBase::getCombinerColor0(void)
{
    return _mfCombinerColor0;
}

//! Get the RegisterCombinersChunk::_mfCombinerColor0 field.
inline
const MFColor4f &RegisterCombinersChunkBase::getCombinerColor0(void) const
{
    return _mfCombinerColor0;
}

//! Get the value of the \a index element the RegisterCombinersChunk::_mfCombinerColor1 field.
inline
Color4f &RegisterCombinersChunkBase::getCombinerColor1(const UInt32 index)
{
    return _mfCombinerColor1[index];
}

//! Get the RegisterCombinersChunk::_mfCombinerColor1 field.
inline
MFColor4f &RegisterCombinersChunkBase::getCombinerColor1(void)
{
    return _mfCombinerColor1;
}

//! Get the RegisterCombinersChunk::_mfCombinerColor1 field.
inline
const MFColor4f &RegisterCombinersChunkBase::getCombinerColor1(void) const
{
    return _mfCombinerColor1;
}

OSG_END_NAMESPACE

#define OSGREGISTERCOMBINERSCHUNKBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

