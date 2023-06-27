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
 **     class SHLParameterChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE

//! access the type of the class
inline OSG::FieldContainerType& SHLParameterChunkBase::getClassType(void) {
  return _type;
}

//! access the numerical type of the class
inline OSG::UInt32 SHLParameterChunkBase::getClassTypeId(void) {
  return _type.getId();
}

//! create a new instance of the class
inline SHLParameterChunkPtr SHLParameterChunkBase::create(void) {
  SHLParameterChunkPtr fc;

  if (getClassType().getPrototype() != OSG::NullFC) {
    fc = SHLParameterChunkPtr::dcast(getClassType().getPrototype()->shallowCopy());
  }

  return fc;
}

//! create an empty new instance of the class, do not copy the prototype
inline SHLParameterChunkPtr SHLParameterChunkBase::createEmpty(void) {
  SHLParameterChunkPtr returnValue;

  newPtr(returnValue);

  return returnValue;
}

/*------------------------------ get -----------------------------------*/

//! Get the SHLParameterChunk::_sfSHLChunk field.
inline SFSHLChunkPtr* SHLParameterChunkBase::getSFSHLChunk(void) {
  return &_sfSHLChunk;
}

//! Get the value of the SHLParameterChunk::_sfSHLChunk field.
inline SHLChunkPtr& SHLParameterChunkBase::getSHLChunk(void) {
  return _sfSHLChunk.getValue();
}

//! Get the value of the SHLParameterChunk::_sfSHLChunk field.
inline const SHLChunkPtr& SHLParameterChunkBase::getSHLChunk(void) const {
  return _sfSHLChunk.getValue();
}

//! Set the value of the SHLParameterChunk::_sfSHLChunk field.
inline void SHLParameterChunkBase::setSHLChunk(const SHLChunkPtr& value) {
  _sfSHLChunk.setValue(value);
}

OSG_END_NAMESPACE

#define OSGSHLPARAMETERCHUNKBASE_INLINE_CVSID                                                      \
  "@(#)$Id: OSGSHLParameterChunkBase.inl,v 1.6 2006/02/20 17:04:38 dirk Exp $"
