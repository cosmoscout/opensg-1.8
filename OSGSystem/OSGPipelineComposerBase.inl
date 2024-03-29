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
 **     class PipelineComposer!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE

//! access the type of the class
inline OSG::FieldContainerType& PipelineComposerBase::getClassType(void) {
  return _type;
}

//! access the numerical type of the class
inline OSG::UInt32 PipelineComposerBase::getClassTypeId(void) {
  return _type.getId();
}

//! create a new instance of the class
inline PipelineComposerPtr PipelineComposerBase::create(void) {
  PipelineComposerPtr fc;

  if (getClassType().getPrototype() != OSG::NullFC) {
    fc = PipelineComposerPtr::dcast(getClassType().getPrototype()->shallowCopy());
  }

  return fc;
}

//! create an empty new instance of the class, do not copy the prototype
inline PipelineComposerPtr PipelineComposerBase::createEmpty(void) {
  PipelineComposerPtr returnValue;

  newPtr(returnValue);

  return returnValue;
}

/*------------------------------ get -----------------------------------*/

//! Get the PipelineComposer::_sfShort field.
inline SFBool* PipelineComposerBase::getSFShort(void) {
  return &_sfShort;
}

//! Get the PipelineComposer::_sfAlpha field.
inline SFBool* PipelineComposerBase::getSFAlpha(void) {
  return &_sfAlpha;
}

//! Get the PipelineComposer::_sfTileSize field.
inline SFUInt32* PipelineComposerBase::getSFTileSize(void) {
  return &_sfTileSize;
}

//! Get the PipelineComposer::_sfPipelined field.
inline SFBool* PipelineComposerBase::getSFPipelined(void) {
  return &_sfPipelined;
}

//! Get the value of the PipelineComposer::_sfShort field.
inline bool& PipelineComposerBase::getShort(void) {
  return _sfShort.getValue();
}

//! Get the value of the PipelineComposer::_sfShort field.
inline const bool& PipelineComposerBase::getShort(void) const {
  return _sfShort.getValue();
}

//! Set the value of the PipelineComposer::_sfShort field.
inline void PipelineComposerBase::setShort(const bool& value) {
  _sfShort.setValue(value);
}

//! Get the value of the PipelineComposer::_sfAlpha field.
inline bool& PipelineComposerBase::getAlpha(void) {
  return _sfAlpha.getValue();
}

//! Get the value of the PipelineComposer::_sfAlpha field.
inline const bool& PipelineComposerBase::getAlpha(void) const {
  return _sfAlpha.getValue();
}

//! Set the value of the PipelineComposer::_sfAlpha field.
inline void PipelineComposerBase::setAlpha(const bool& value) {
  _sfAlpha.setValue(value);
}

//! Get the value of the PipelineComposer::_sfTileSize field.
inline UInt32& PipelineComposerBase::getTileSize(void) {
  return _sfTileSize.getValue();
}

//! Get the value of the PipelineComposer::_sfTileSize field.
inline const UInt32& PipelineComposerBase::getTileSize(void) const {
  return _sfTileSize.getValue();
}

//! Set the value of the PipelineComposer::_sfTileSize field.
inline void PipelineComposerBase::setTileSize(const UInt32& value) {
  _sfTileSize.setValue(value);
}

//! Get the value of the PipelineComposer::_sfPipelined field.
inline bool& PipelineComposerBase::getPipelined(void) {
  return _sfPipelined.getValue();
}

//! Get the value of the PipelineComposer::_sfPipelined field.
inline const bool& PipelineComposerBase::getPipelined(void) const {
  return _sfPipelined.getValue();
}

//! Set the value of the PipelineComposer::_sfPipelined field.
inline void PipelineComposerBase::setPipelined(const bool& value) {
  _sfPipelined.setValue(value);
}

OSG_END_NAMESPACE

#define OSGPIPELINECOMPOSERBASE_INLINE_CVSID "@(#)$Id: $"
