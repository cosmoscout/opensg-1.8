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
 **     class TextureChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE

//! access the type of the class
inline OSG::FieldContainerType& TextureChunkBase::getClassType(void) {
  return _type;
}

//! access the numerical type of the class
inline OSG::UInt32 TextureChunkBase::getClassTypeId(void) {
  return _type.getId();
}

//! create a new instance of the class
inline TextureChunkPtr TextureChunkBase::create(void) {
  TextureChunkPtr fc;

  if (getClassType().getPrototype() != OSG::NullFC) {
    fc = TextureChunkPtr::dcast(getClassType().getPrototype()->shallowCopy());
  }

  return fc;
}

//! create an empty new instance of the class, do not copy the prototype
inline TextureChunkPtr TextureChunkBase::createEmpty(void) {
  TextureChunkPtr returnValue;

  newPtr(returnValue);

  return returnValue;
}

/*------------------------------ get -----------------------------------*/

//! Get the TextureChunk::_sfImage field.
inline SFImagePtr* TextureChunkBase::getSFImage(void) {
  return &_sfImage;
}

//! Get the TextureChunk::_sfInternalFormat field.
inline SFGLenum* TextureChunkBase::getSFInternalFormat(void) {
  return &_sfInternalFormat;
}

//! Get the TextureChunk::_sfExternalFormat field.
inline SFGLenum* TextureChunkBase::getSFExternalFormat(void) {
  return &_sfExternalFormat;
}

//! Get the TextureChunk::_sfScale field.
inline SFBool* TextureChunkBase::getSFScale(void) {
  return &_sfScale;
}

//! Get the TextureChunk::_sfFrame field.
inline SFUInt32* TextureChunkBase::getSFFrame(void) {
  return &_sfFrame;
}

//! Get the TextureChunk::_sfMinFilter field.
inline SFGLenum* TextureChunkBase::getSFMinFilter(void) {
  return &_sfMinFilter;
}

//! Get the TextureChunk::_sfMagFilter field.
inline SFGLenum* TextureChunkBase::getSFMagFilter(void) {
  return &_sfMagFilter;
}

//! Get the TextureChunk::_sfWrapS field.
inline SFGLenum* TextureChunkBase::getSFWrapS(void) {
  return &_sfWrapS;
}

//! Get the TextureChunk::_sfWrapT field.
inline SFGLenum* TextureChunkBase::getSFWrapT(void) {
  return &_sfWrapT;
}

//! Get the TextureChunk::_sfWrapR field.
inline SFGLenum* TextureChunkBase::getSFWrapR(void) {
  return &_sfWrapR;
}

//! Get the TextureChunk::_sfEnvMode field.
inline SFGLenum* TextureChunkBase::getSFEnvMode(void) {
  return &_sfEnvMode;
}

//! Get the TextureChunk::_sfEnvColor field.
inline SFColor4f* TextureChunkBase::getSFEnvColor(void) {
  return &_sfEnvColor;
}

//! Get the TextureChunk::_sfEnvCombineRGB field.
inline SFGLenum* TextureChunkBase::getSFEnvCombineRGB(void) {
  return &_sfEnvCombineRGB;
}

//! Get the TextureChunk::_sfEnvCombineAlpha field.
inline SFGLenum* TextureChunkBase::getSFEnvCombineAlpha(void) {
  return &_sfEnvCombineAlpha;
}

//! Get the TextureChunk::_sfEnvScaleRGB field.
inline SFReal32* TextureChunkBase::getSFEnvScaleRGB(void) {
  return &_sfEnvScaleRGB;
}

//! Get the TextureChunk::_sfEnvScaleAlpha field.
inline SFReal32* TextureChunkBase::getSFEnvScaleAlpha(void) {
  return &_sfEnvScaleAlpha;
}

//! Get the TextureChunk::_sfEnvSource0RGB field.
inline SFGLenum* TextureChunkBase::getSFEnvSource0RGB(void) {
  return &_sfEnvSource0RGB;
}

//! Get the TextureChunk::_sfEnvSource1RGB field.
inline SFGLenum* TextureChunkBase::getSFEnvSource1RGB(void) {
  return &_sfEnvSource1RGB;
}

//! Get the TextureChunk::_sfEnvSource2RGB field.
inline SFGLenum* TextureChunkBase::getSFEnvSource2RGB(void) {
  return &_sfEnvSource2RGB;
}

//! Get the TextureChunk::_sfEnvSource0Alpha field.
inline SFGLenum* TextureChunkBase::getSFEnvSource0Alpha(void) {
  return &_sfEnvSource0Alpha;
}

//! Get the TextureChunk::_sfEnvSource1Alpha field.
inline SFGLenum* TextureChunkBase::getSFEnvSource1Alpha(void) {
  return &_sfEnvSource1Alpha;
}

//! Get the TextureChunk::_sfEnvSource2Alpha field.
inline SFGLenum* TextureChunkBase::getSFEnvSource2Alpha(void) {
  return &_sfEnvSource2Alpha;
}

//! Get the TextureChunk::_sfEnvOperand0RGB field.
inline SFGLenum* TextureChunkBase::getSFEnvOperand0RGB(void) {
  return &_sfEnvOperand0RGB;
}

//! Get the TextureChunk::_sfEnvOperand1RGB field.
inline SFGLenum* TextureChunkBase::getSFEnvOperand1RGB(void) {
  return &_sfEnvOperand1RGB;
}

//! Get the TextureChunk::_sfEnvOperand2RGB field.
inline SFGLenum* TextureChunkBase::getSFEnvOperand2RGB(void) {
  return &_sfEnvOperand2RGB;
}

//! Get the TextureChunk::_sfEnvOperand0Alpha field.
inline SFGLenum* TextureChunkBase::getSFEnvOperand0Alpha(void) {
  return &_sfEnvOperand0Alpha;
}

//! Get the TextureChunk::_sfEnvOperand1Alpha field.
inline SFGLenum* TextureChunkBase::getSFEnvOperand1Alpha(void) {
  return &_sfEnvOperand1Alpha;
}

//! Get the TextureChunk::_sfEnvOperand2Alpha field.
inline SFGLenum* TextureChunkBase::getSFEnvOperand2Alpha(void) {
  return &_sfEnvOperand2Alpha;
}

//! Get the TextureChunk::_sfGLId field.
inline SFGLenum* TextureChunkBase::getSFGLId(void) {
  return &_sfGLId;
}

//! Get the TextureChunk::_sfIgnoreGLForAspect field.
inline SFInt32* TextureChunkBase::getSFIgnoreGLForAspect(void) {
  return &_sfIgnoreGLForAspect;
}

//! Get the TextureChunk::_sfPointSprite field.
inline SFBool* TextureChunkBase::getSFPointSprite(void) {
  return &_sfPointSprite;
}

//! Get the TextureChunk::_sfPriority field.
inline SFReal32* TextureChunkBase::getSFPriority(void) {
  return &_sfPriority;
}

//! Get the TextureChunk::_sfShaderOperation field.
inline SFGLenum* TextureChunkBase::getSFShaderOperation(void) {
  return &_sfShaderOperation;
}

//! Get the TextureChunk::_sfShaderInput field.
inline SFGLenum* TextureChunkBase::getSFShaderInput(void) {
  return &_sfShaderInput;
}

//! Get the TextureChunk::_mfShaderOffsetMatrix field.
inline MFReal32* TextureChunkBase::getMFShaderOffsetMatrix(void) {
  return &_mfShaderOffsetMatrix;
}

//! Get the TextureChunk::_sfShaderOffsetScale field.
inline SFReal32* TextureChunkBase::getSFShaderOffsetScale(void) {
  return &_sfShaderOffsetScale;
}

//! Get the TextureChunk::_sfShaderOffsetBias field.
inline SFReal32* TextureChunkBase::getSFShaderOffsetBias(void) {
  return &_sfShaderOffsetBias;
}

//! Get the TextureChunk::_sfShaderRGBADotProduct field.
inline SFGLenum* TextureChunkBase::getSFShaderRGBADotProduct(void) {
  return &_sfShaderRGBADotProduct;
}

//! Get the TextureChunk::_sfShaderCullModes field.
inline SFUInt8* TextureChunkBase::getSFShaderCullModes(void) {
  return &_sfShaderCullModes;
}

//! Get the TextureChunk::_sfShaderConstEye field.
inline SFVec3f* TextureChunkBase::getSFShaderConstEye(void) {
  return &_sfShaderConstEye;
}

//! Get the TextureChunk::_sfLodBias field.
inline SFReal32* TextureChunkBase::getSFLodBias(void) {
  return &_sfLodBias;
}

//! Get the TextureChunk::_sfTarget field.
inline SFGLenum* TextureChunkBase::getSFTarget(void) {
  return &_sfTarget;
}

//! Get the TextureChunk::_sfDirtyLeft field.
inline SFInt32* TextureChunkBase::getSFDirtyLeft(void) {
  return &_sfDirtyLeft;
}

//! Get the TextureChunk::_sfDirtyMinX field.
inline SFInt32* TextureChunkBase::getSFDirtyMinX(void) {
  return &_sfDirtyMinX;
}

//! Get the TextureChunk::_sfDirtyMaxX field.
inline SFInt32* TextureChunkBase::getSFDirtyMaxX(void) {
  return &_sfDirtyMaxX;
}

//! Get the TextureChunk::_sfDirtyMinY field.
inline SFInt32* TextureChunkBase::getSFDirtyMinY(void) {
  return &_sfDirtyMinY;
}

//! Get the TextureChunk::_sfDirtyMaxY field.
inline SFInt32* TextureChunkBase::getSFDirtyMaxY(void) {
  return &_sfDirtyMaxY;
}

//! Get the TextureChunk::_sfDirtyMinZ field.
inline SFInt32* TextureChunkBase::getSFDirtyMinZ(void) {
  return &_sfDirtyMinZ;
}

//! Get the TextureChunk::_sfDirtyMaxZ field.
inline SFInt32* TextureChunkBase::getSFDirtyMaxZ(void) {
  return &_sfDirtyMaxZ;
}

//! Get the TextureChunk::_sfAnisotropy field.
inline SFReal32* TextureChunkBase::getSFAnisotropy(void) {
  return &_sfAnisotropy;
}

//! Get the TextureChunk::_sfBorderColor field.
inline SFColor4f* TextureChunkBase::getSFBorderColor(void) {
  return &_sfBorderColor;
}

//! Get the TextureChunk::_sfBorderWidth field.
inline SFUInt32* TextureChunkBase::getSFBorderWidth(void) {
  return &_sfBorderWidth;
}

//! Get the TextureChunk::_sfNPOTMatrixScale field.
inline SFUInt32* TextureChunkBase::getSFNPOTMatrixScale(void) {
  return &_sfNPOTMatrixScale;
}

//! Get the value of the TextureChunk::_sfImage field.
inline ImagePtr& TextureChunkBase::getImage(void) {
  return _sfImage.getValue();
}

//! Get the value of the TextureChunk::_sfImage field.
inline const ImagePtr& TextureChunkBase::getImage(void) const {
  return _sfImage.getValue();
}

//! Set the value of the TextureChunk::_sfImage field.
inline void TextureChunkBase::setImage(const ImagePtr& value) {
  _sfImage.setValue(value);
}

//! Get the value of the TextureChunk::_sfInternalFormat field.
inline GLenum& TextureChunkBase::getInternalFormat(void) {
  return _sfInternalFormat.getValue();
}

//! Get the value of the TextureChunk::_sfInternalFormat field.
inline const GLenum& TextureChunkBase::getInternalFormat(void) const {
  return _sfInternalFormat.getValue();
}

//! Set the value of the TextureChunk::_sfInternalFormat field.
inline void TextureChunkBase::setInternalFormat(const GLenum& value) {
  _sfInternalFormat.setValue(value);
}

//! Get the value of the TextureChunk::_sfExternalFormat field.
inline GLenum& TextureChunkBase::getExternalFormat(void) {
  return _sfExternalFormat.getValue();
}

//! Get the value of the TextureChunk::_sfExternalFormat field.
inline const GLenum& TextureChunkBase::getExternalFormat(void) const {
  return _sfExternalFormat.getValue();
}

//! Set the value of the TextureChunk::_sfExternalFormat field.
inline void TextureChunkBase::setExternalFormat(const GLenum& value) {
  _sfExternalFormat.setValue(value);
}

//! Get the value of the TextureChunk::_sfScale field.
inline bool& TextureChunkBase::getScale(void) {
  return _sfScale.getValue();
}

//! Get the value of the TextureChunk::_sfScale field.
inline const bool& TextureChunkBase::getScale(void) const {
  return _sfScale.getValue();
}

//! Set the value of the TextureChunk::_sfScale field.
inline void TextureChunkBase::setScale(const bool& value) {
  _sfScale.setValue(value);
}

//! Get the value of the TextureChunk::_sfFrame field.
inline UInt32& TextureChunkBase::getFrame(void) {
  return _sfFrame.getValue();
}

//! Get the value of the TextureChunk::_sfFrame field.
inline const UInt32& TextureChunkBase::getFrame(void) const {
  return _sfFrame.getValue();
}

//! Set the value of the TextureChunk::_sfFrame field.
inline void TextureChunkBase::setFrame(const UInt32& value) {
  _sfFrame.setValue(value);
}

//! Get the value of the TextureChunk::_sfMinFilter field.
inline GLenum& TextureChunkBase::getMinFilter(void) {
  return _sfMinFilter.getValue();
}

//! Get the value of the TextureChunk::_sfMinFilter field.
inline const GLenum& TextureChunkBase::getMinFilter(void) const {
  return _sfMinFilter.getValue();
}

//! Set the value of the TextureChunk::_sfMinFilter field.
inline void TextureChunkBase::setMinFilter(const GLenum& value) {
  _sfMinFilter.setValue(value);
}

//! Get the value of the TextureChunk::_sfMagFilter field.
inline GLenum& TextureChunkBase::getMagFilter(void) {
  return _sfMagFilter.getValue();
}

//! Get the value of the TextureChunk::_sfMagFilter field.
inline const GLenum& TextureChunkBase::getMagFilter(void) const {
  return _sfMagFilter.getValue();
}

//! Set the value of the TextureChunk::_sfMagFilter field.
inline void TextureChunkBase::setMagFilter(const GLenum& value) {
  _sfMagFilter.setValue(value);
}

//! Get the value of the TextureChunk::_sfWrapS field.
inline GLenum& TextureChunkBase::getWrapS(void) {
  return _sfWrapS.getValue();
}

//! Get the value of the TextureChunk::_sfWrapS field.
inline const GLenum& TextureChunkBase::getWrapS(void) const {
  return _sfWrapS.getValue();
}

//! Set the value of the TextureChunk::_sfWrapS field.
inline void TextureChunkBase::setWrapS(const GLenum& value) {
  _sfWrapS.setValue(value);
}

//! Get the value of the TextureChunk::_sfWrapT field.
inline GLenum& TextureChunkBase::getWrapT(void) {
  return _sfWrapT.getValue();
}

//! Get the value of the TextureChunk::_sfWrapT field.
inline const GLenum& TextureChunkBase::getWrapT(void) const {
  return _sfWrapT.getValue();
}

//! Set the value of the TextureChunk::_sfWrapT field.
inline void TextureChunkBase::setWrapT(const GLenum& value) {
  _sfWrapT.setValue(value);
}

//! Get the value of the TextureChunk::_sfWrapR field.
inline GLenum& TextureChunkBase::getWrapR(void) {
  return _sfWrapR.getValue();
}

//! Get the value of the TextureChunk::_sfWrapR field.
inline const GLenum& TextureChunkBase::getWrapR(void) const {
  return _sfWrapR.getValue();
}

//! Set the value of the TextureChunk::_sfWrapR field.
inline void TextureChunkBase::setWrapR(const GLenum& value) {
  _sfWrapR.setValue(value);
}

//! Get the value of the TextureChunk::_sfEnvMode field.
inline GLenum& TextureChunkBase::getEnvMode(void) {
  return _sfEnvMode.getValue();
}

//! Get the value of the TextureChunk::_sfEnvMode field.
inline const GLenum& TextureChunkBase::getEnvMode(void) const {
  return _sfEnvMode.getValue();
}

//! Set the value of the TextureChunk::_sfEnvMode field.
inline void TextureChunkBase::setEnvMode(const GLenum& value) {
  _sfEnvMode.setValue(value);
}

//! Get the value of the TextureChunk::_sfEnvColor field.
inline Color4f& TextureChunkBase::getEnvColor(void) {
  return _sfEnvColor.getValue();
}

//! Get the value of the TextureChunk::_sfEnvColor field.
inline const Color4f& TextureChunkBase::getEnvColor(void) const {
  return _sfEnvColor.getValue();
}

//! Set the value of the TextureChunk::_sfEnvColor field.
inline void TextureChunkBase::setEnvColor(const Color4f& value) {
  _sfEnvColor.setValue(value);
}

//! Get the value of the TextureChunk::_sfEnvCombineRGB field.
inline GLenum& TextureChunkBase::getEnvCombineRGB(void) {
  return _sfEnvCombineRGB.getValue();
}

//! Get the value of the TextureChunk::_sfEnvCombineRGB field.
inline const GLenum& TextureChunkBase::getEnvCombineRGB(void) const {
  return _sfEnvCombineRGB.getValue();
}

//! Set the value of the TextureChunk::_sfEnvCombineRGB field.
inline void TextureChunkBase::setEnvCombineRGB(const GLenum& value) {
  _sfEnvCombineRGB.setValue(value);
}

//! Get the value of the TextureChunk::_sfEnvCombineAlpha field.
inline GLenum& TextureChunkBase::getEnvCombineAlpha(void) {
  return _sfEnvCombineAlpha.getValue();
}

//! Get the value of the TextureChunk::_sfEnvCombineAlpha field.
inline const GLenum& TextureChunkBase::getEnvCombineAlpha(void) const {
  return _sfEnvCombineAlpha.getValue();
}

//! Set the value of the TextureChunk::_sfEnvCombineAlpha field.
inline void TextureChunkBase::setEnvCombineAlpha(const GLenum& value) {
  _sfEnvCombineAlpha.setValue(value);
}

//! Get the value of the TextureChunk::_sfEnvScaleRGB field.
inline Real32& TextureChunkBase::getEnvScaleRGB(void) {
  return _sfEnvScaleRGB.getValue();
}

//! Get the value of the TextureChunk::_sfEnvScaleRGB field.
inline const Real32& TextureChunkBase::getEnvScaleRGB(void) const {
  return _sfEnvScaleRGB.getValue();
}

//! Set the value of the TextureChunk::_sfEnvScaleRGB field.
inline void TextureChunkBase::setEnvScaleRGB(const Real32& value) {
  _sfEnvScaleRGB.setValue(value);
}

//! Get the value of the TextureChunk::_sfEnvScaleAlpha field.
inline Real32& TextureChunkBase::getEnvScaleAlpha(void) {
  return _sfEnvScaleAlpha.getValue();
}

//! Get the value of the TextureChunk::_sfEnvScaleAlpha field.
inline const Real32& TextureChunkBase::getEnvScaleAlpha(void) const {
  return _sfEnvScaleAlpha.getValue();
}

//! Set the value of the TextureChunk::_sfEnvScaleAlpha field.
inline void TextureChunkBase::setEnvScaleAlpha(const Real32& value) {
  _sfEnvScaleAlpha.setValue(value);
}

//! Get the value of the TextureChunk::_sfEnvSource0RGB field.
inline GLenum& TextureChunkBase::getEnvSource0RGB(void) {
  return _sfEnvSource0RGB.getValue();
}

//! Get the value of the TextureChunk::_sfEnvSource0RGB field.
inline const GLenum& TextureChunkBase::getEnvSource0RGB(void) const {
  return _sfEnvSource0RGB.getValue();
}

//! Set the value of the TextureChunk::_sfEnvSource0RGB field.
inline void TextureChunkBase::setEnvSource0RGB(const GLenum& value) {
  _sfEnvSource0RGB.setValue(value);
}

//! Get the value of the TextureChunk::_sfEnvSource1RGB field.
inline GLenum& TextureChunkBase::getEnvSource1RGB(void) {
  return _sfEnvSource1RGB.getValue();
}

//! Get the value of the TextureChunk::_sfEnvSource1RGB field.
inline const GLenum& TextureChunkBase::getEnvSource1RGB(void) const {
  return _sfEnvSource1RGB.getValue();
}

//! Set the value of the TextureChunk::_sfEnvSource1RGB field.
inline void TextureChunkBase::setEnvSource1RGB(const GLenum& value) {
  _sfEnvSource1RGB.setValue(value);
}

//! Get the value of the TextureChunk::_sfEnvSource2RGB field.
inline GLenum& TextureChunkBase::getEnvSource2RGB(void) {
  return _sfEnvSource2RGB.getValue();
}

//! Get the value of the TextureChunk::_sfEnvSource2RGB field.
inline const GLenum& TextureChunkBase::getEnvSource2RGB(void) const {
  return _sfEnvSource2RGB.getValue();
}

//! Set the value of the TextureChunk::_sfEnvSource2RGB field.
inline void TextureChunkBase::setEnvSource2RGB(const GLenum& value) {
  _sfEnvSource2RGB.setValue(value);
}

//! Get the value of the TextureChunk::_sfEnvSource0Alpha field.
inline GLenum& TextureChunkBase::getEnvSource0Alpha(void) {
  return _sfEnvSource0Alpha.getValue();
}

//! Get the value of the TextureChunk::_sfEnvSource0Alpha field.
inline const GLenum& TextureChunkBase::getEnvSource0Alpha(void) const {
  return _sfEnvSource0Alpha.getValue();
}

//! Set the value of the TextureChunk::_sfEnvSource0Alpha field.
inline void TextureChunkBase::setEnvSource0Alpha(const GLenum& value) {
  _sfEnvSource0Alpha.setValue(value);
}

//! Get the value of the TextureChunk::_sfEnvSource1Alpha field.
inline GLenum& TextureChunkBase::getEnvSource1Alpha(void) {
  return _sfEnvSource1Alpha.getValue();
}

//! Get the value of the TextureChunk::_sfEnvSource1Alpha field.
inline const GLenum& TextureChunkBase::getEnvSource1Alpha(void) const {
  return _sfEnvSource1Alpha.getValue();
}

//! Set the value of the TextureChunk::_sfEnvSource1Alpha field.
inline void TextureChunkBase::setEnvSource1Alpha(const GLenum& value) {
  _sfEnvSource1Alpha.setValue(value);
}

//! Get the value of the TextureChunk::_sfEnvSource2Alpha field.
inline GLenum& TextureChunkBase::getEnvSource2Alpha(void) {
  return _sfEnvSource2Alpha.getValue();
}

//! Get the value of the TextureChunk::_sfEnvSource2Alpha field.
inline const GLenum& TextureChunkBase::getEnvSource2Alpha(void) const {
  return _sfEnvSource2Alpha.getValue();
}

//! Set the value of the TextureChunk::_sfEnvSource2Alpha field.
inline void TextureChunkBase::setEnvSource2Alpha(const GLenum& value) {
  _sfEnvSource2Alpha.setValue(value);
}

//! Get the value of the TextureChunk::_sfEnvOperand0RGB field.
inline GLenum& TextureChunkBase::getEnvOperand0RGB(void) {
  return _sfEnvOperand0RGB.getValue();
}

//! Get the value of the TextureChunk::_sfEnvOperand0RGB field.
inline const GLenum& TextureChunkBase::getEnvOperand0RGB(void) const {
  return _sfEnvOperand0RGB.getValue();
}

//! Set the value of the TextureChunk::_sfEnvOperand0RGB field.
inline void TextureChunkBase::setEnvOperand0RGB(const GLenum& value) {
  _sfEnvOperand0RGB.setValue(value);
}

//! Get the value of the TextureChunk::_sfEnvOperand1RGB field.
inline GLenum& TextureChunkBase::getEnvOperand1RGB(void) {
  return _sfEnvOperand1RGB.getValue();
}

//! Get the value of the TextureChunk::_sfEnvOperand1RGB field.
inline const GLenum& TextureChunkBase::getEnvOperand1RGB(void) const {
  return _sfEnvOperand1RGB.getValue();
}

//! Set the value of the TextureChunk::_sfEnvOperand1RGB field.
inline void TextureChunkBase::setEnvOperand1RGB(const GLenum& value) {
  _sfEnvOperand1RGB.setValue(value);
}

//! Get the value of the TextureChunk::_sfEnvOperand2RGB field.
inline GLenum& TextureChunkBase::getEnvOperand2RGB(void) {
  return _sfEnvOperand2RGB.getValue();
}

//! Get the value of the TextureChunk::_sfEnvOperand2RGB field.
inline const GLenum& TextureChunkBase::getEnvOperand2RGB(void) const {
  return _sfEnvOperand2RGB.getValue();
}

//! Set the value of the TextureChunk::_sfEnvOperand2RGB field.
inline void TextureChunkBase::setEnvOperand2RGB(const GLenum& value) {
  _sfEnvOperand2RGB.setValue(value);
}

//! Get the value of the TextureChunk::_sfEnvOperand0Alpha field.
inline GLenum& TextureChunkBase::getEnvOperand0Alpha(void) {
  return _sfEnvOperand0Alpha.getValue();
}

//! Get the value of the TextureChunk::_sfEnvOperand0Alpha field.
inline const GLenum& TextureChunkBase::getEnvOperand0Alpha(void) const {
  return _sfEnvOperand0Alpha.getValue();
}

//! Set the value of the TextureChunk::_sfEnvOperand0Alpha field.
inline void TextureChunkBase::setEnvOperand0Alpha(const GLenum& value) {
  _sfEnvOperand0Alpha.setValue(value);
}

//! Get the value of the TextureChunk::_sfEnvOperand1Alpha field.
inline GLenum& TextureChunkBase::getEnvOperand1Alpha(void) {
  return _sfEnvOperand1Alpha.getValue();
}

//! Get the value of the TextureChunk::_sfEnvOperand1Alpha field.
inline const GLenum& TextureChunkBase::getEnvOperand1Alpha(void) const {
  return _sfEnvOperand1Alpha.getValue();
}

//! Set the value of the TextureChunk::_sfEnvOperand1Alpha field.
inline void TextureChunkBase::setEnvOperand1Alpha(const GLenum& value) {
  _sfEnvOperand1Alpha.setValue(value);
}

//! Get the value of the TextureChunk::_sfEnvOperand2Alpha field.
inline GLenum& TextureChunkBase::getEnvOperand2Alpha(void) {
  return _sfEnvOperand2Alpha.getValue();
}

//! Get the value of the TextureChunk::_sfEnvOperand2Alpha field.
inline const GLenum& TextureChunkBase::getEnvOperand2Alpha(void) const {
  return _sfEnvOperand2Alpha.getValue();
}

//! Set the value of the TextureChunk::_sfEnvOperand2Alpha field.
inline void TextureChunkBase::setEnvOperand2Alpha(const GLenum& value) {
  _sfEnvOperand2Alpha.setValue(value);
}

//! Get the value of the TextureChunk::_sfGLId field.
inline GLenum& TextureChunkBase::getGLId(void) {
  return _sfGLId.getValue();
}

//! Get the value of the TextureChunk::_sfGLId field.
inline const GLenum& TextureChunkBase::getGLId(void) const {
  return _sfGLId.getValue();
}

//! Set the value of the TextureChunk::_sfGLId field.
inline void TextureChunkBase::setGLId(const GLenum& value) {
  _sfGLId.setValue(value);
}

//! Get the value of the TextureChunk::_sfIgnoreGLForAspect field.
inline Int32& TextureChunkBase::getIgnoreGLForAspect(void) {
  return _sfIgnoreGLForAspect.getValue();
}

//! Get the value of the TextureChunk::_sfIgnoreGLForAspect field.
inline const Int32& TextureChunkBase::getIgnoreGLForAspect(void) const {
  return _sfIgnoreGLForAspect.getValue();
}

//! Set the value of the TextureChunk::_sfIgnoreGLForAspect field.
inline void TextureChunkBase::setIgnoreGLForAspect(const Int32& value) {
  _sfIgnoreGLForAspect.setValue(value);
}

//! Get the value of the TextureChunk::_sfPointSprite field.
inline bool& TextureChunkBase::getPointSprite(void) {
  return _sfPointSprite.getValue();
}

//! Get the value of the TextureChunk::_sfPointSprite field.
inline const bool& TextureChunkBase::getPointSprite(void) const {
  return _sfPointSprite.getValue();
}

//! Set the value of the TextureChunk::_sfPointSprite field.
inline void TextureChunkBase::setPointSprite(const bool& value) {
  _sfPointSprite.setValue(value);
}

//! Get the value of the TextureChunk::_sfPriority field.
inline Real32& TextureChunkBase::getPriority(void) {
  return _sfPriority.getValue();
}

//! Get the value of the TextureChunk::_sfPriority field.
inline const Real32& TextureChunkBase::getPriority(void) const {
  return _sfPriority.getValue();
}

//! Set the value of the TextureChunk::_sfPriority field.
inline void TextureChunkBase::setPriority(const Real32& value) {
  _sfPriority.setValue(value);
}

//! Get the value of the TextureChunk::_sfShaderOperation field.
inline GLenum& TextureChunkBase::getShaderOperation(void) {
  return _sfShaderOperation.getValue();
}

//! Get the value of the TextureChunk::_sfShaderOperation field.
inline const GLenum& TextureChunkBase::getShaderOperation(void) const {
  return _sfShaderOperation.getValue();
}

//! Set the value of the TextureChunk::_sfShaderOperation field.
inline void TextureChunkBase::setShaderOperation(const GLenum& value) {
  _sfShaderOperation.setValue(value);
}

//! Get the value of the TextureChunk::_sfShaderInput field.
inline GLenum& TextureChunkBase::getShaderInput(void) {
  return _sfShaderInput.getValue();
}

//! Get the value of the TextureChunk::_sfShaderInput field.
inline const GLenum& TextureChunkBase::getShaderInput(void) const {
  return _sfShaderInput.getValue();
}

//! Set the value of the TextureChunk::_sfShaderInput field.
inline void TextureChunkBase::setShaderInput(const GLenum& value) {
  _sfShaderInput.setValue(value);
}

//! Get the value of the TextureChunk::_sfShaderOffsetScale field.
inline Real32& TextureChunkBase::getShaderOffsetScale(void) {
  return _sfShaderOffsetScale.getValue();
}

//! Get the value of the TextureChunk::_sfShaderOffsetScale field.
inline const Real32& TextureChunkBase::getShaderOffsetScale(void) const {
  return _sfShaderOffsetScale.getValue();
}

//! Set the value of the TextureChunk::_sfShaderOffsetScale field.
inline void TextureChunkBase::setShaderOffsetScale(const Real32& value) {
  _sfShaderOffsetScale.setValue(value);
}

//! Get the value of the TextureChunk::_sfShaderOffsetBias field.
inline Real32& TextureChunkBase::getShaderOffsetBias(void) {
  return _sfShaderOffsetBias.getValue();
}

//! Get the value of the TextureChunk::_sfShaderOffsetBias field.
inline const Real32& TextureChunkBase::getShaderOffsetBias(void) const {
  return _sfShaderOffsetBias.getValue();
}

//! Set the value of the TextureChunk::_sfShaderOffsetBias field.
inline void TextureChunkBase::setShaderOffsetBias(const Real32& value) {
  _sfShaderOffsetBias.setValue(value);
}

//! Get the value of the TextureChunk::_sfShaderRGBADotProduct field.
inline GLenum& TextureChunkBase::getShaderRGBADotProduct(void) {
  return _sfShaderRGBADotProduct.getValue();
}

//! Get the value of the TextureChunk::_sfShaderRGBADotProduct field.
inline const GLenum& TextureChunkBase::getShaderRGBADotProduct(void) const {
  return _sfShaderRGBADotProduct.getValue();
}

//! Set the value of the TextureChunk::_sfShaderRGBADotProduct field.
inline void TextureChunkBase::setShaderRGBADotProduct(const GLenum& value) {
  _sfShaderRGBADotProduct.setValue(value);
}

//! Get the value of the TextureChunk::_sfShaderCullModes field.
inline UInt8& TextureChunkBase::getShaderCullModes(void) {
  return _sfShaderCullModes.getValue();
}

//! Get the value of the TextureChunk::_sfShaderCullModes field.
inline const UInt8& TextureChunkBase::getShaderCullModes(void) const {
  return _sfShaderCullModes.getValue();
}

//! Set the value of the TextureChunk::_sfShaderCullModes field.
inline void TextureChunkBase::setShaderCullModes(const UInt8& value) {
  _sfShaderCullModes.setValue(value);
}

//! Get the value of the TextureChunk::_sfShaderConstEye field.
inline Vec3f& TextureChunkBase::getShaderConstEye(void) {
  return _sfShaderConstEye.getValue();
}

//! Get the value of the TextureChunk::_sfShaderConstEye field.
inline const Vec3f& TextureChunkBase::getShaderConstEye(void) const {
  return _sfShaderConstEye.getValue();
}

//! Set the value of the TextureChunk::_sfShaderConstEye field.
inline void TextureChunkBase::setShaderConstEye(const Vec3f& value) {
  _sfShaderConstEye.setValue(value);
}

//! Get the value of the TextureChunk::_sfLodBias field.
inline Real32& TextureChunkBase::getLodBias(void) {
  return _sfLodBias.getValue();
}

//! Get the value of the TextureChunk::_sfLodBias field.
inline const Real32& TextureChunkBase::getLodBias(void) const {
  return _sfLodBias.getValue();
}

//! Set the value of the TextureChunk::_sfLodBias field.
inline void TextureChunkBase::setLodBias(const Real32& value) {
  _sfLodBias.setValue(value);
}

//! Get the value of the TextureChunk::_sfTarget field.
inline GLenum& TextureChunkBase::getTarget(void) {
  return _sfTarget.getValue();
}

//! Get the value of the TextureChunk::_sfTarget field.
inline const GLenum& TextureChunkBase::getTarget(void) const {
  return _sfTarget.getValue();
}

//! Set the value of the TextureChunk::_sfTarget field.
inline void TextureChunkBase::setTarget(const GLenum& value) {
  _sfTarget.setValue(value);
}

//! Get the value of the TextureChunk::_sfDirtyLeft field.
inline Int32& TextureChunkBase::getDirtyLeft(void) {
  return _sfDirtyLeft.getValue();
}

//! Get the value of the TextureChunk::_sfDirtyLeft field.
inline const Int32& TextureChunkBase::getDirtyLeft(void) const {
  return _sfDirtyLeft.getValue();
}

//! Set the value of the TextureChunk::_sfDirtyLeft field.
inline void TextureChunkBase::setDirtyLeft(const Int32& value) {
  _sfDirtyLeft.setValue(value);
}

//! Get the value of the TextureChunk::_sfDirtyMinX field.
inline Int32& TextureChunkBase::getDirtyMinX(void) {
  return _sfDirtyMinX.getValue();
}

//! Get the value of the TextureChunk::_sfDirtyMinX field.
inline const Int32& TextureChunkBase::getDirtyMinX(void) const {
  return _sfDirtyMinX.getValue();
}

//! Set the value of the TextureChunk::_sfDirtyMinX field.
inline void TextureChunkBase::setDirtyMinX(const Int32& value) {
  _sfDirtyMinX.setValue(value);
}

//! Get the value of the TextureChunk::_sfDirtyMaxX field.
inline Int32& TextureChunkBase::getDirtyMaxX(void) {
  return _sfDirtyMaxX.getValue();
}

//! Get the value of the TextureChunk::_sfDirtyMaxX field.
inline const Int32& TextureChunkBase::getDirtyMaxX(void) const {
  return _sfDirtyMaxX.getValue();
}

//! Set the value of the TextureChunk::_sfDirtyMaxX field.
inline void TextureChunkBase::setDirtyMaxX(const Int32& value) {
  _sfDirtyMaxX.setValue(value);
}

//! Get the value of the TextureChunk::_sfDirtyMinY field.
inline Int32& TextureChunkBase::getDirtyMinY(void) {
  return _sfDirtyMinY.getValue();
}

//! Get the value of the TextureChunk::_sfDirtyMinY field.
inline const Int32& TextureChunkBase::getDirtyMinY(void) const {
  return _sfDirtyMinY.getValue();
}

//! Set the value of the TextureChunk::_sfDirtyMinY field.
inline void TextureChunkBase::setDirtyMinY(const Int32& value) {
  _sfDirtyMinY.setValue(value);
}

//! Get the value of the TextureChunk::_sfDirtyMaxY field.
inline Int32& TextureChunkBase::getDirtyMaxY(void) {
  return _sfDirtyMaxY.getValue();
}

//! Get the value of the TextureChunk::_sfDirtyMaxY field.
inline const Int32& TextureChunkBase::getDirtyMaxY(void) const {
  return _sfDirtyMaxY.getValue();
}

//! Set the value of the TextureChunk::_sfDirtyMaxY field.
inline void TextureChunkBase::setDirtyMaxY(const Int32& value) {
  _sfDirtyMaxY.setValue(value);
}

//! Get the value of the TextureChunk::_sfDirtyMinZ field.
inline Int32& TextureChunkBase::getDirtyMinZ(void) {
  return _sfDirtyMinZ.getValue();
}

//! Get the value of the TextureChunk::_sfDirtyMinZ field.
inline const Int32& TextureChunkBase::getDirtyMinZ(void) const {
  return _sfDirtyMinZ.getValue();
}

//! Set the value of the TextureChunk::_sfDirtyMinZ field.
inline void TextureChunkBase::setDirtyMinZ(const Int32& value) {
  _sfDirtyMinZ.setValue(value);
}

//! Get the value of the TextureChunk::_sfDirtyMaxZ field.
inline Int32& TextureChunkBase::getDirtyMaxZ(void) {
  return _sfDirtyMaxZ.getValue();
}

//! Get the value of the TextureChunk::_sfDirtyMaxZ field.
inline const Int32& TextureChunkBase::getDirtyMaxZ(void) const {
  return _sfDirtyMaxZ.getValue();
}

//! Set the value of the TextureChunk::_sfDirtyMaxZ field.
inline void TextureChunkBase::setDirtyMaxZ(const Int32& value) {
  _sfDirtyMaxZ.setValue(value);
}

//! Get the value of the TextureChunk::_sfAnisotropy field.
inline Real32& TextureChunkBase::getAnisotropy(void) {
  return _sfAnisotropy.getValue();
}

//! Get the value of the TextureChunk::_sfAnisotropy field.
inline const Real32& TextureChunkBase::getAnisotropy(void) const {
  return _sfAnisotropy.getValue();
}

//! Set the value of the TextureChunk::_sfAnisotropy field.
inline void TextureChunkBase::setAnisotropy(const Real32& value) {
  _sfAnisotropy.setValue(value);
}

//! Get the value of the TextureChunk::_sfBorderColor field.
inline Color4f& TextureChunkBase::getBorderColor(void) {
  return _sfBorderColor.getValue();
}

//! Get the value of the TextureChunk::_sfBorderColor field.
inline const Color4f& TextureChunkBase::getBorderColor(void) const {
  return _sfBorderColor.getValue();
}

//! Set the value of the TextureChunk::_sfBorderColor field.
inline void TextureChunkBase::setBorderColor(const Color4f& value) {
  _sfBorderColor.setValue(value);
}

//! Get the value of the TextureChunk::_sfBorderWidth field.
inline UInt32& TextureChunkBase::getBorderWidth(void) {
  return _sfBorderWidth.getValue();
}

//! Get the value of the TextureChunk::_sfBorderWidth field.
inline const UInt32& TextureChunkBase::getBorderWidth(void) const {
  return _sfBorderWidth.getValue();
}

//! Set the value of the TextureChunk::_sfBorderWidth field.
inline void TextureChunkBase::setBorderWidth(const UInt32& value) {
  _sfBorderWidth.setValue(value);
}

//! Get the value of the TextureChunk::_sfNPOTMatrixScale field.
inline UInt32& TextureChunkBase::getNPOTMatrixScale(void) {
  return _sfNPOTMatrixScale.getValue();
}

//! Get the value of the TextureChunk::_sfNPOTMatrixScale field.
inline const UInt32& TextureChunkBase::getNPOTMatrixScale(void) const {
  return _sfNPOTMatrixScale.getValue();
}

//! Set the value of the TextureChunk::_sfNPOTMatrixScale field.
inline void TextureChunkBase::setNPOTMatrixScale(const UInt32& value) {
  _sfNPOTMatrixScale.setValue(value);
}

//! Get the value of the \a index element the TextureChunk::_mfShaderOffsetMatrix field.
inline Real32& TextureChunkBase::getShaderOffsetMatrix(const UInt32 index) {
  return _mfShaderOffsetMatrix[index];
}

//! Get the TextureChunk::_mfShaderOffsetMatrix field.
inline MFReal32& TextureChunkBase::getShaderOffsetMatrix(void) {
  return _mfShaderOffsetMatrix;
}

//! Get the TextureChunk::_mfShaderOffsetMatrix field.
inline const MFReal32& TextureChunkBase::getShaderOffsetMatrix(void) const {
  return _mfShaderOffsetMatrix;
}

OSG_END_NAMESPACE

#define OSGTEXTURECHUNKBASE_INLINE_CVSID                                                           \
  "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"
