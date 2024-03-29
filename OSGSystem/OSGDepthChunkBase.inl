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
 **     class DepthChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE

//! access the type of the class
inline OSG::FieldContainerType& DepthChunkBase::getClassType(void) {
  return _type;
}

//! access the numerical type of the class
inline OSG::UInt32 DepthChunkBase::getClassTypeId(void) {
  return _type.getId();
}

//! create a new instance of the class
inline DepthChunkPtr DepthChunkBase::create(void) {
  DepthChunkPtr fc;

  if (getClassType().getPrototype() != OSG::NullFC) {
    fc = DepthChunkPtr::dcast(getClassType().getPrototype()->shallowCopy());
  }

  return fc;
}

//! create an empty new instance of the class, do not copy the prototype
inline DepthChunkPtr DepthChunkBase::createEmpty(void) {
  DepthChunkPtr returnValue;

  newPtr(returnValue);

  return returnValue;
}

/*------------------------------ get -----------------------------------*/

//! Get the DepthChunk::_sfEnable field.
inline SFBool* DepthChunkBase::getSFEnable(void) {
  return &_sfEnable;
}

//! Get the DepthChunk::_sfFunc field.
inline SFGLenum* DepthChunkBase::getSFFunc(void) {
  return &_sfFunc;
}

//! Get the DepthChunk::_sfNear field.
inline SFReal32* DepthChunkBase::getSFNear(void) {
  return &_sfNear;
}

//! Get the DepthChunk::_sfFar field.
inline SFReal32* DepthChunkBase::getSFFar(void) {
  return &_sfFar;
}

//! Get the DepthChunk::_sfReadOnly field.
inline SFBool* DepthChunkBase::getSFReadOnly(void) {
  return &_sfReadOnly;
}

//! Get the value of the DepthChunk::_sfEnable field.
inline bool& DepthChunkBase::getEnable(void) {
  return _sfEnable.getValue();
}

//! Get the value of the DepthChunk::_sfEnable field.
inline const bool& DepthChunkBase::getEnable(void) const {
  return _sfEnable.getValue();
}

//! Set the value of the DepthChunk::_sfEnable field.
inline void DepthChunkBase::setEnable(const bool& value) {
  _sfEnable.setValue(value);
}

//! Get the value of the DepthChunk::_sfFunc field.
inline GLenum& DepthChunkBase::getFunc(void) {
  return _sfFunc.getValue();
}

//! Get the value of the DepthChunk::_sfFunc field.
inline const GLenum& DepthChunkBase::getFunc(void) const {
  return _sfFunc.getValue();
}

//! Set the value of the DepthChunk::_sfFunc field.
inline void DepthChunkBase::setFunc(const GLenum& value) {
  _sfFunc.setValue(value);
}

//! Get the value of the DepthChunk::_sfNear field.
inline Real32& DepthChunkBase::getNear(void) {
  return _sfNear.getValue();
}

//! Get the value of the DepthChunk::_sfNear field.
inline const Real32& DepthChunkBase::getNear(void) const {
  return _sfNear.getValue();
}

//! Set the value of the DepthChunk::_sfNear field.
inline void DepthChunkBase::setNear(const Real32& value) {
  _sfNear.setValue(value);
}

//! Get the value of the DepthChunk::_sfFar field.
inline Real32& DepthChunkBase::getFar(void) {
  return _sfFar.getValue();
}

//! Get the value of the DepthChunk::_sfFar field.
inline const Real32& DepthChunkBase::getFar(void) const {
  return _sfFar.getValue();
}

//! Set the value of the DepthChunk::_sfFar field.
inline void DepthChunkBase::setFar(const Real32& value) {
  _sfFar.setValue(value);
}

//! Get the value of the DepthChunk::_sfReadOnly field.
inline bool& DepthChunkBase::getReadOnly(void) {
  return _sfReadOnly.getValue();
}

//! Get the value of the DepthChunk::_sfReadOnly field.
inline const bool& DepthChunkBase::getReadOnly(void) const {
  return _sfReadOnly.getValue();
}

//! Set the value of the DepthChunk::_sfReadOnly field.
inline void DepthChunkBase::setReadOnly(const bool& value) {
  _sfReadOnly.setValue(value);
}

OSG_END_NAMESPACE

#define OSGDEPTHCHUNKBASE_INLINE_CVSID                                                             \
  "@(#)$Id: OSGDepthChunkBase.inl,v 1.6 2006/02/20 17:04:46 dirk Exp $"
