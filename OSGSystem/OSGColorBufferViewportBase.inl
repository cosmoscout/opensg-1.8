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
 **     class ColorBufferViewport!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE

//! access the type of the class
inline OSG::FieldContainerType& ColorBufferViewportBase::getClassType(void) {
  return _type;
}

//! access the numerical type of the class
inline OSG::UInt32 ColorBufferViewportBase::getClassTypeId(void) {
  return _type.getId();
}

//! create a new instance of the class
inline ColorBufferViewportPtr ColorBufferViewportBase::create(void) {
  ColorBufferViewportPtr fc;

  if (getClassType().getPrototype() != OSG::NullFC) {
    fc = ColorBufferViewportPtr::dcast(getClassType().getPrototype()->shallowCopy());
  }

  return fc;
}

//! create an empty new instance of the class, do not copy the prototype
inline ColorBufferViewportPtr ColorBufferViewportBase::createEmpty(void) {
  ColorBufferViewportPtr returnValue;

  newPtr(returnValue);

  return returnValue;
}

/*------------------------------ get -----------------------------------*/

//! Get the ColorBufferViewport::_sfRed field.
inline SFBool* ColorBufferViewportBase::getSFRed(void) {
  return &_sfRed;
}

//! Get the ColorBufferViewport::_sfBlue field.
inline SFBool* ColorBufferViewportBase::getSFBlue(void) {
  return &_sfBlue;
}

//! Get the ColorBufferViewport::_sfGreen field.
inline SFBool* ColorBufferViewportBase::getSFGreen(void) {
  return &_sfGreen;
}

//! Get the ColorBufferViewport::_sfAlpha field.
inline SFBool* ColorBufferViewportBase::getSFAlpha(void) {
  return &_sfAlpha;
}

//! Get the value of the ColorBufferViewport::_sfRed field.
inline bool& ColorBufferViewportBase::getRed(void) {
  return _sfRed.getValue();
}

//! Get the value of the ColorBufferViewport::_sfRed field.
inline const bool& ColorBufferViewportBase::getRed(void) const {
  return _sfRed.getValue();
}

//! Set the value of the ColorBufferViewport::_sfRed field.
inline void ColorBufferViewportBase::setRed(const bool& value) {
  _sfRed.setValue(value);
}

//! Get the value of the ColorBufferViewport::_sfBlue field.
inline bool& ColorBufferViewportBase::getBlue(void) {
  return _sfBlue.getValue();
}

//! Get the value of the ColorBufferViewport::_sfBlue field.
inline const bool& ColorBufferViewportBase::getBlue(void) const {
  return _sfBlue.getValue();
}

//! Set the value of the ColorBufferViewport::_sfBlue field.
inline void ColorBufferViewportBase::setBlue(const bool& value) {
  _sfBlue.setValue(value);
}

//! Get the value of the ColorBufferViewport::_sfGreen field.
inline bool& ColorBufferViewportBase::getGreen(void) {
  return _sfGreen.getValue();
}

//! Get the value of the ColorBufferViewport::_sfGreen field.
inline const bool& ColorBufferViewportBase::getGreen(void) const {
  return _sfGreen.getValue();
}

//! Set the value of the ColorBufferViewport::_sfGreen field.
inline void ColorBufferViewportBase::setGreen(const bool& value) {
  _sfGreen.setValue(value);
}

//! Get the value of the ColorBufferViewport::_sfAlpha field.
inline bool& ColorBufferViewportBase::getAlpha(void) {
  return _sfAlpha.getValue();
}

//! Get the value of the ColorBufferViewport::_sfAlpha field.
inline const bool& ColorBufferViewportBase::getAlpha(void) const {
  return _sfAlpha.getValue();
}

//! Set the value of the ColorBufferViewport::_sfAlpha field.
inline void ColorBufferViewportBase::setAlpha(const bool& value) {
  _sfAlpha.setValue(value);
}

OSG_END_NAMESPACE

#define OSGCOLORBUFFERVIEWPORTBASE_INLINE_CVSID                                                    \
  "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"
