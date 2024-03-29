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
 **     class BinarySwapComposer!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE

//! access the type of the class
inline OSG::FieldContainerType& BinarySwapComposerBase::getClassType(void) {
  return _type;
}

//! access the numerical type of the class
inline OSG::UInt32 BinarySwapComposerBase::getClassTypeId(void) {
  return _type.getId();
}

//! create a new instance of the class
inline BinarySwapComposerPtr BinarySwapComposerBase::create(void) {
  BinarySwapComposerPtr fc;

  if (getClassType().getPrototype() != OSG::NullFC) {
    fc = BinarySwapComposerPtr::dcast(getClassType().getPrototype()->shallowCopy());
  }

  return fc;
}

//! create an empty new instance of the class, do not copy the prototype
inline BinarySwapComposerPtr BinarySwapComposerBase::createEmpty(void) {
  BinarySwapComposerPtr returnValue;

  newPtr(returnValue);

  return returnValue;
}

/*------------------------------ get -----------------------------------*/

//! Get the BinarySwapComposer::_sfShort field.
inline SFBool* BinarySwapComposerBase::getSFShort(void) {
  return &_sfShort;
}

//! Get the BinarySwapComposer::_sfAlpha field.
inline SFBool* BinarySwapComposerBase::getSFAlpha(void) {
  return &_sfAlpha;
}

//! Get the BinarySwapComposer::_sfTileSize field.
inline SFUInt32* BinarySwapComposerBase::getSFTileSize(void) {
  return &_sfTileSize;
}

//! Get the value of the BinarySwapComposer::_sfShort field.
inline bool& BinarySwapComposerBase::getShort(void) {
  return _sfShort.getValue();
}

//! Get the value of the BinarySwapComposer::_sfShort field.
inline const bool& BinarySwapComposerBase::getShort(void) const {
  return _sfShort.getValue();
}

//! Set the value of the BinarySwapComposer::_sfShort field.
inline void BinarySwapComposerBase::setShort(const bool& value) {
  _sfShort.setValue(value);
}

//! Get the value of the BinarySwapComposer::_sfAlpha field.
inline bool& BinarySwapComposerBase::getAlpha(void) {
  return _sfAlpha.getValue();
}

//! Get the value of the BinarySwapComposer::_sfAlpha field.
inline const bool& BinarySwapComposerBase::getAlpha(void) const {
  return _sfAlpha.getValue();
}

//! Set the value of the BinarySwapComposer::_sfAlpha field.
inline void BinarySwapComposerBase::setAlpha(const bool& value) {
  _sfAlpha.setValue(value);
}

//! Get the value of the BinarySwapComposer::_sfTileSize field.
inline UInt32& BinarySwapComposerBase::getTileSize(void) {
  return _sfTileSize.getValue();
}

//! Get the value of the BinarySwapComposer::_sfTileSize field.
inline const UInt32& BinarySwapComposerBase::getTileSize(void) const {
  return _sfTileSize.getValue();
}

//! Set the value of the BinarySwapComposer::_sfTileSize field.
inline void BinarySwapComposerBase::setTileSize(const UInt32& value) {
  _sfTileSize.setValue(value);
}

OSG_END_NAMESPACE

#define OSGBINARYSWAPCOMPOSERBASE_INLINE_CVSID                                                     \
  "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"
