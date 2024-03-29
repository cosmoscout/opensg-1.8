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
 **     class CubeTextureChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE

//! access the type of the class
inline OSG::FieldContainerType& CubeTextureChunkBase::getClassType(void) {
  return _type;
}

//! access the numerical type of the class
inline OSG::UInt32 CubeTextureChunkBase::getClassTypeId(void) {
  return _type.getId();
}

//! create a new instance of the class
inline CubeTextureChunkPtr CubeTextureChunkBase::create(void) {
  CubeTextureChunkPtr fc;

  if (getClassType().getPrototype() != OSG::NullFC) {
    fc = CubeTextureChunkPtr::dcast(getClassType().getPrototype()->shallowCopy());
  }

  return fc;
}

//! create an empty new instance of the class, do not copy the prototype
inline CubeTextureChunkPtr CubeTextureChunkBase::createEmpty(void) {
  CubeTextureChunkPtr returnValue;

  newPtr(returnValue);

  return returnValue;
}

/*------------------------------ get -----------------------------------*/

//! Get the CubeTextureChunk::_sfPosZImage field.
inline SFImagePtr* CubeTextureChunkBase::getSFPosZImage(void) {
  return &_sfPosZImage;
}

//! Get the CubeTextureChunk::_sfPosXImage field.
inline SFImagePtr* CubeTextureChunkBase::getSFPosXImage(void) {
  return &_sfPosXImage;
}

//! Get the CubeTextureChunk::_sfNegXImage field.
inline SFImagePtr* CubeTextureChunkBase::getSFNegXImage(void) {
  return &_sfNegXImage;
}

//! Get the CubeTextureChunk::_sfPosYImage field.
inline SFImagePtr* CubeTextureChunkBase::getSFPosYImage(void) {
  return &_sfPosYImage;
}

//! Get the CubeTextureChunk::_sfNegYImage field.
inline SFImagePtr* CubeTextureChunkBase::getSFNegYImage(void) {
  return &_sfNegYImage;
}

//! Get the CubeTextureChunk::_sfIsReflectionMap field.
inline SFBool* CubeTextureChunkBase::getSFIsReflectionMap(void) {
  return &_sfIsReflectionMap;
}

//! Get the value of the CubeTextureChunk::_sfPosZImage field.
inline ImagePtr& CubeTextureChunkBase::getPosZImage(void) {
  return _sfPosZImage.getValue();
}

//! Get the value of the CubeTextureChunk::_sfPosZImage field.
inline const ImagePtr& CubeTextureChunkBase::getPosZImage(void) const {
  return _sfPosZImage.getValue();
}

//! Set the value of the CubeTextureChunk::_sfPosZImage field.
inline void CubeTextureChunkBase::setPosZImage(const ImagePtr& value) {
  _sfPosZImage.setValue(value);
}

//! Get the value of the CubeTextureChunk::_sfPosXImage field.
inline ImagePtr& CubeTextureChunkBase::getPosXImage(void) {
  return _sfPosXImage.getValue();
}

//! Get the value of the CubeTextureChunk::_sfPosXImage field.
inline const ImagePtr& CubeTextureChunkBase::getPosXImage(void) const {
  return _sfPosXImage.getValue();
}

//! Set the value of the CubeTextureChunk::_sfPosXImage field.
inline void CubeTextureChunkBase::setPosXImage(const ImagePtr& value) {
  _sfPosXImage.setValue(value);
}

//! Get the value of the CubeTextureChunk::_sfNegXImage field.
inline ImagePtr& CubeTextureChunkBase::getNegXImage(void) {
  return _sfNegXImage.getValue();
}

//! Get the value of the CubeTextureChunk::_sfNegXImage field.
inline const ImagePtr& CubeTextureChunkBase::getNegXImage(void) const {
  return _sfNegXImage.getValue();
}

//! Set the value of the CubeTextureChunk::_sfNegXImage field.
inline void CubeTextureChunkBase::setNegXImage(const ImagePtr& value) {
  _sfNegXImage.setValue(value);
}

//! Get the value of the CubeTextureChunk::_sfPosYImage field.
inline ImagePtr& CubeTextureChunkBase::getPosYImage(void) {
  return _sfPosYImage.getValue();
}

//! Get the value of the CubeTextureChunk::_sfPosYImage field.
inline const ImagePtr& CubeTextureChunkBase::getPosYImage(void) const {
  return _sfPosYImage.getValue();
}

//! Set the value of the CubeTextureChunk::_sfPosYImage field.
inline void CubeTextureChunkBase::setPosYImage(const ImagePtr& value) {
  _sfPosYImage.setValue(value);
}

//! Get the value of the CubeTextureChunk::_sfNegYImage field.
inline ImagePtr& CubeTextureChunkBase::getNegYImage(void) {
  return _sfNegYImage.getValue();
}

//! Get the value of the CubeTextureChunk::_sfNegYImage field.
inline const ImagePtr& CubeTextureChunkBase::getNegYImage(void) const {
  return _sfNegYImage.getValue();
}

//! Set the value of the CubeTextureChunk::_sfNegYImage field.
inline void CubeTextureChunkBase::setNegYImage(const ImagePtr& value) {
  _sfNegYImage.setValue(value);
}

//! Get the value of the CubeTextureChunk::_sfIsReflectionMap field.
inline bool& CubeTextureChunkBase::getIsReflectionMap(void) {
  return _sfIsReflectionMap.getValue();
}

//! Get the value of the CubeTextureChunk::_sfIsReflectionMap field.
inline const bool& CubeTextureChunkBase::getIsReflectionMap(void) const {
  return _sfIsReflectionMap.getValue();
}

//! Set the value of the CubeTextureChunk::_sfIsReflectionMap field.
inline void CubeTextureChunkBase::setIsReflectionMap(const bool& value) {
  _sfIsReflectionMap.setValue(value);
}

OSG_END_NAMESPACE

#define OSGCUBETEXTURECHUNKBASE_INLINE_CVSID                                                       \
  "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"
