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
 **     class Image!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ImageBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 ImageBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
ImagePtr ImageBase::create(void) 
{
    ImagePtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = ImagePtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
ImagePtr ImageBase::createEmpty(void) 
{ 
    ImagePtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the Image::_mfParents field.
inline
MFFieldContainerPtr *ImageBase::getMFParents(void)
{
    return &_mfParents;
}

//! Get the Image::_sfDimension field.
inline
SFInt32 *ImageBase::getSFDimension(void)
{
    return &_sfDimension;
}

//! Get the Image::_sfWidth field.
inline
SFInt32 *ImageBase::getSFWidth(void)
{
    return &_sfWidth;
}

//! Get the Image::_sfHeight field.
inline
SFInt32 *ImageBase::getSFHeight(void)
{
    return &_sfHeight;
}

//! Get the Image::_sfDepth field.
inline
SFInt32 *ImageBase::getSFDepth(void)
{
    return &_sfDepth;
}

//! Get the Image::_sfBpp field.
inline
SFInt32 *ImageBase::getSFBpp(void)
{
    return &_sfBpp;
}

//! Get the Image::_sfMipMapCount field.
inline
SFInt32 *ImageBase::getSFMipMapCount(void)
{
    return &_sfMipMapCount;
}

//! Get the Image::_sfFrameCount field.
inline
SFInt32 *ImageBase::getSFFrameCount(void)
{
    return &_sfFrameCount;
}

//! Get the Image::_sfFrameDelay field.
inline
SFTime *ImageBase::getSFFrameDelay(void)
{
    return &_sfFrameDelay;
}

//! Get the Image::_sfPixelFormat field.
inline
SFUInt32 *ImageBase::getSFPixelFormat(void)
{
    return &_sfPixelFormat;
}

//! Get the Image::_mfPixel field.
inline
MFUInt8 *ImageBase::getMFPixel(void)
{
    return &_mfPixel;
}

//! Get the Image::_sfFrameSize field.
inline
SFInt32 *ImageBase::getSFFrameSize(void)
{
    return &_sfFrameSize;
}

//! Get the Image::_sfName field.
inline
SFString *ImageBase::getSFName(void)
{
    return &_sfName;
}

//! Get the Image::_sfDataType field.
inline
SFInt32 *ImageBase::getSFDataType(void)
{
    return &_sfDataType;
}

//! Get the Image::_sfComponentSize field.
inline
SFInt32 *ImageBase::getSFComponentSize(void)
{
    return &_sfComponentSize;
}

//! Get the Image::_sfSideCount field.
inline
SFInt32 *ImageBase::getSFSideCount(void)
{
    return &_sfSideCount;
}

//! Get the Image::_sfSideSize field.
inline
SFInt32 *ImageBase::getSFSideSize(void)
{
    return &_sfSideSize;
}

//! Get the Image::_sfForceCompressedData field.
inline
SFBool *ImageBase::getSFForceCompressedData(void)
{
    return &_sfForceCompressedData;
}

//! Get the Image::_sfForceAlphaChannel field.
inline
SFBool *ImageBase::getSFForceAlphaChannel(void)
{
    return &_sfForceAlphaChannel;
}

//! Get the Image::_sfForceColorChannel field.
inline
SFBool *ImageBase::getSFForceColorChannel(void)
{
    return &_sfForceColorChannel;
}

//! Get the Image::_sfForceAlphaBinary field.
inline
SFBool *ImageBase::getSFForceAlphaBinary(void)
{
    return &_sfForceAlphaBinary;
}

//! Get the Image::_sfResX field.
inline
SFReal32 *ImageBase::getSFResX(void)
{
    return &_sfResX;
}

//! Get the Image::_sfResY field.
inline
SFReal32 *ImageBase::getSFResY(void)
{
    return &_sfResY;
}

//! Get the Image::_sfResUnit field.
inline
SFUInt16 *ImageBase::getSFResUnit(void)
{
    return &_sfResUnit;
}


//! Get the value of the Image::_sfDimension field.
inline
Int32 &ImageBase::getDimension(void)
{
    return _sfDimension.getValue();
}

//! Get the value of the Image::_sfDimension field.
inline
const Int32 &ImageBase::getDimension(void) const
{
    return _sfDimension.getValue();
}

//! Set the value of the Image::_sfDimension field.
inline
void ImageBase::setDimension(const Int32 &value)
{
    _sfDimension.setValue(value);
}

//! Get the value of the Image::_sfWidth field.
inline
Int32 &ImageBase::getWidth(void)
{
    return _sfWidth.getValue();
}

//! Get the value of the Image::_sfWidth field.
inline
const Int32 &ImageBase::getWidth(void) const
{
    return _sfWidth.getValue();
}

//! Set the value of the Image::_sfWidth field.
inline
void ImageBase::setWidth(const Int32 &value)
{
    _sfWidth.setValue(value);
}

//! Get the value of the Image::_sfHeight field.
inline
Int32 &ImageBase::getHeight(void)
{
    return _sfHeight.getValue();
}

//! Get the value of the Image::_sfHeight field.
inline
const Int32 &ImageBase::getHeight(void) const
{
    return _sfHeight.getValue();
}

//! Set the value of the Image::_sfHeight field.
inline
void ImageBase::setHeight(const Int32 &value)
{
    _sfHeight.setValue(value);
}

//! Get the value of the Image::_sfDepth field.
inline
Int32 &ImageBase::getDepth(void)
{
    return _sfDepth.getValue();
}

//! Get the value of the Image::_sfDepth field.
inline
const Int32 &ImageBase::getDepth(void) const
{
    return _sfDepth.getValue();
}

//! Set the value of the Image::_sfDepth field.
inline
void ImageBase::setDepth(const Int32 &value)
{
    _sfDepth.setValue(value);
}

//! Get the value of the Image::_sfBpp field.
inline
Int32 &ImageBase::getBpp(void)
{
    return _sfBpp.getValue();
}

//! Get the value of the Image::_sfBpp field.
inline
const Int32 &ImageBase::getBpp(void) const
{
    return _sfBpp.getValue();
}

//! Set the value of the Image::_sfBpp field.
inline
void ImageBase::setBpp(const Int32 &value)
{
    _sfBpp.setValue(value);
}

//! Get the value of the Image::_sfMipMapCount field.
inline
Int32 &ImageBase::getMipMapCount(void)
{
    return _sfMipMapCount.getValue();
}

//! Get the value of the Image::_sfMipMapCount field.
inline
const Int32 &ImageBase::getMipMapCount(void) const
{
    return _sfMipMapCount.getValue();
}

//! Set the value of the Image::_sfMipMapCount field.
inline
void ImageBase::setMipMapCount(const Int32 &value)
{
    _sfMipMapCount.setValue(value);
}

//! Get the value of the Image::_sfFrameCount field.
inline
Int32 &ImageBase::getFrameCount(void)
{
    return _sfFrameCount.getValue();
}

//! Get the value of the Image::_sfFrameCount field.
inline
const Int32 &ImageBase::getFrameCount(void) const
{
    return _sfFrameCount.getValue();
}

//! Set the value of the Image::_sfFrameCount field.
inline
void ImageBase::setFrameCount(const Int32 &value)
{
    _sfFrameCount.setValue(value);
}

//! Get the value of the Image::_sfFrameDelay field.
inline
Time &ImageBase::getFrameDelay(void)
{
    return _sfFrameDelay.getValue();
}

//! Get the value of the Image::_sfFrameDelay field.
inline
const Time &ImageBase::getFrameDelay(void) const
{
    return _sfFrameDelay.getValue();
}

//! Set the value of the Image::_sfFrameDelay field.
inline
void ImageBase::setFrameDelay(const Time &value)
{
    _sfFrameDelay.setValue(value);
}

//! Get the value of the Image::_sfPixelFormat field.
inline
UInt32 &ImageBase::getPixelFormat(void)
{
    return _sfPixelFormat.getValue();
}

//! Get the value of the Image::_sfPixelFormat field.
inline
const UInt32 &ImageBase::getPixelFormat(void) const
{
    return _sfPixelFormat.getValue();
}

//! Set the value of the Image::_sfPixelFormat field.
inline
void ImageBase::setPixelFormat(const UInt32 &value)
{
    _sfPixelFormat.setValue(value);
}

//! Get the value of the Image::_sfFrameSize field.
inline
Int32 &ImageBase::getFrameSize(void)
{
    return _sfFrameSize.getValue();
}

//! Get the value of the Image::_sfFrameSize field.
inline
const Int32 &ImageBase::getFrameSize(void) const
{
    return _sfFrameSize.getValue();
}

//! Set the value of the Image::_sfFrameSize field.
inline
void ImageBase::setFrameSize(const Int32 &value)
{
    _sfFrameSize.setValue(value);
}

//! Get the value of the Image::_sfName field.
inline
std::string &ImageBase::getName(void)
{
    return _sfName.getValue();
}

//! Get the value of the Image::_sfName field.
inline
const std::string &ImageBase::getName(void) const
{
    return _sfName.getValue();
}

//! Set the value of the Image::_sfName field.
inline
void ImageBase::setName(const std::string &value)
{
    _sfName.setValue(value);
}

//! Get the value of the Image::_sfDataType field.
inline
Int32 &ImageBase::getDataType(void)
{
    return _sfDataType.getValue();
}

//! Get the value of the Image::_sfDataType field.
inline
const Int32 &ImageBase::getDataType(void) const
{
    return _sfDataType.getValue();
}

//! Set the value of the Image::_sfDataType field.
inline
void ImageBase::setDataType(const Int32 &value)
{
    _sfDataType.setValue(value);
}

//! Get the value of the Image::_sfComponentSize field.
inline
Int32 &ImageBase::getComponentSize(void)
{
    return _sfComponentSize.getValue();
}

//! Get the value of the Image::_sfComponentSize field.
inline
const Int32 &ImageBase::getComponentSize(void) const
{
    return _sfComponentSize.getValue();
}

//! Set the value of the Image::_sfComponentSize field.
inline
void ImageBase::setComponentSize(const Int32 &value)
{
    _sfComponentSize.setValue(value);
}

//! Get the value of the Image::_sfSideCount field.
inline
Int32 &ImageBase::getSideCount(void)
{
    return _sfSideCount.getValue();
}

//! Get the value of the Image::_sfSideCount field.
inline
const Int32 &ImageBase::getSideCount(void) const
{
    return _sfSideCount.getValue();
}

//! Set the value of the Image::_sfSideCount field.
inline
void ImageBase::setSideCount(const Int32 &value)
{
    _sfSideCount.setValue(value);
}

//! Get the value of the Image::_sfSideSize field.
inline
Int32 &ImageBase::getSideSize(void)
{
    return _sfSideSize.getValue();
}

//! Get the value of the Image::_sfSideSize field.
inline
const Int32 &ImageBase::getSideSize(void) const
{
    return _sfSideSize.getValue();
}

//! Set the value of the Image::_sfSideSize field.
inline
void ImageBase::setSideSize(const Int32 &value)
{
    _sfSideSize.setValue(value);
}

//! Get the value of the Image::_sfForceCompressedData field.
inline
bool &ImageBase::getForceCompressedData(void)
{
    return _sfForceCompressedData.getValue();
}

//! Get the value of the Image::_sfForceCompressedData field.
inline
const bool &ImageBase::getForceCompressedData(void) const
{
    return _sfForceCompressedData.getValue();
}

//! Set the value of the Image::_sfForceCompressedData field.
inline
void ImageBase::setForceCompressedData(const bool &value)
{
    _sfForceCompressedData.setValue(value);
}

//! Get the value of the Image::_sfForceAlphaChannel field.
inline
bool &ImageBase::getForceAlphaChannel(void)
{
    return _sfForceAlphaChannel.getValue();
}

//! Get the value of the Image::_sfForceAlphaChannel field.
inline
const bool &ImageBase::getForceAlphaChannel(void) const
{
    return _sfForceAlphaChannel.getValue();
}

//! Set the value of the Image::_sfForceAlphaChannel field.
inline
void ImageBase::setForceAlphaChannel(const bool &value)
{
    _sfForceAlphaChannel.setValue(value);
}

//! Get the value of the Image::_sfForceColorChannel field.
inline
bool &ImageBase::getForceColorChannel(void)
{
    return _sfForceColorChannel.getValue();
}

//! Get the value of the Image::_sfForceColorChannel field.
inline
const bool &ImageBase::getForceColorChannel(void) const
{
    return _sfForceColorChannel.getValue();
}

//! Set the value of the Image::_sfForceColorChannel field.
inline
void ImageBase::setForceColorChannel(const bool &value)
{
    _sfForceColorChannel.setValue(value);
}

//! Get the value of the Image::_sfForceAlphaBinary field.
inline
bool &ImageBase::getForceAlphaBinary(void)
{
    return _sfForceAlphaBinary.getValue();
}

//! Get the value of the Image::_sfForceAlphaBinary field.
inline
const bool &ImageBase::getForceAlphaBinary(void) const
{
    return _sfForceAlphaBinary.getValue();
}

//! Set the value of the Image::_sfForceAlphaBinary field.
inline
void ImageBase::setForceAlphaBinary(const bool &value)
{
    _sfForceAlphaBinary.setValue(value);
}

//! Get the value of the Image::_sfResX field.
inline
Real32 &ImageBase::getResX(void)
{
    return _sfResX.getValue();
}

//! Get the value of the Image::_sfResX field.
inline
const Real32 &ImageBase::getResX(void) const
{
    return _sfResX.getValue();
}

//! Set the value of the Image::_sfResX field.
inline
void ImageBase::setResX(const Real32 &value)
{
    _sfResX.setValue(value);
}

//! Get the value of the Image::_sfResY field.
inline
Real32 &ImageBase::getResY(void)
{
    return _sfResY.getValue();
}

//! Get the value of the Image::_sfResY field.
inline
const Real32 &ImageBase::getResY(void) const
{
    return _sfResY.getValue();
}

//! Set the value of the Image::_sfResY field.
inline
void ImageBase::setResY(const Real32 &value)
{
    _sfResY.setValue(value);
}

//! Get the value of the Image::_sfResUnit field.
inline
UInt16 &ImageBase::getResUnit(void)
{
    return _sfResUnit.getValue();
}

//! Get the value of the Image::_sfResUnit field.
inline
const UInt16 &ImageBase::getResUnit(void) const
{
    return _sfResUnit.getValue();
}

//! Set the value of the Image::_sfResUnit field.
inline
void ImageBase::setResUnit(const UInt16 &value)
{
    _sfResUnit.setValue(value);
}


//! Get the value of the \a index element the Image::_mfParents field.
inline
FieldContainerPtr &ImageBase::getParents(const UInt32 index)
{
    return _mfParents[index];
}

//! Get the Image::_mfParents field.
inline
MFFieldContainerPtr &ImageBase::getParents(void)
{
    return _mfParents;
}

//! Get the Image::_mfParents field.
inline
const MFFieldContainerPtr &ImageBase::getParents(void) const
{
    return _mfParents;
}

//! Get the value of the \a index element the Image::_mfPixel field.
inline
UInt8 &ImageBase::getPixel(const UInt32 index)
{
    return _mfPixel[index];
}

//! Get the Image::_mfPixel field.
inline
MFUInt8 &ImageBase::getPixel(void)
{
    return _mfPixel;
}

//! Get the Image::_mfPixel field.
inline
const MFUInt8 &ImageBase::getPixel(void) const
{
    return _mfPixel;
}

OSG_END_NAMESPACE

#define OSGIMAGEBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"
