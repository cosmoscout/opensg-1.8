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
 **     class SimpleTexturedMaterial!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE

//! access the type of the class
inline OSG::FieldContainerType& SimpleTexturedMaterialBase::getClassType(void) {
  return _type;
}

//! access the numerical type of the class
inline OSG::UInt32 SimpleTexturedMaterialBase::getClassTypeId(void) {
  return _type.getId();
}

//! create a new instance of the class
inline SimpleTexturedMaterialPtr SimpleTexturedMaterialBase::create(void) {
  SimpleTexturedMaterialPtr fc;

  if (getClassType().getPrototype() != OSG::NullFC) {
    fc = SimpleTexturedMaterialPtr::dcast(getClassType().getPrototype()->shallowCopy());
  }

  return fc;
}

//! create an empty new instance of the class, do not copy the prototype
inline SimpleTexturedMaterialPtr SimpleTexturedMaterialBase::createEmpty(void) {
  SimpleTexturedMaterialPtr returnValue;

  newPtr(returnValue);

  return returnValue;
}

/*------------------------------ get -----------------------------------*/

//! Get the SimpleTexturedMaterial::_sfImage field.
inline SFImagePtr* SimpleTexturedMaterialBase::getSFImage(void) {
  return &_sfImage;
}

//! Get the SimpleTexturedMaterial::_sfMinFilter field.
inline SFGLenum* SimpleTexturedMaterialBase::getSFMinFilter(void) {
  return &_sfMinFilter;
}

//! Get the SimpleTexturedMaterial::_sfMagFilter field.
inline SFGLenum* SimpleTexturedMaterialBase::getSFMagFilter(void) {
  return &_sfMagFilter;
}

//! Get the SimpleTexturedMaterial::_sfEnvMode field.
inline SFGLenum* SimpleTexturedMaterialBase::getSFEnvMode(void) {
  return &_sfEnvMode;
}

//! Get the SimpleTexturedMaterial::_sfEnvMap field.
inline SFBool* SimpleTexturedMaterialBase::getSFEnvMap(void) {
  return &_sfEnvMap;
}

//! Get the value of the SimpleTexturedMaterial::_sfImage field.
inline ImagePtr& SimpleTexturedMaterialBase::getImage(void) {
  return _sfImage.getValue();
}

//! Get the value of the SimpleTexturedMaterial::_sfImage field.
inline const ImagePtr& SimpleTexturedMaterialBase::getImage(void) const {
  return _sfImage.getValue();
}

//! Set the value of the SimpleTexturedMaterial::_sfImage field.
inline void SimpleTexturedMaterialBase::setImage(const ImagePtr& value) {
  _sfImage.setValue(value);
}

//! Get the value of the SimpleTexturedMaterial::_sfMinFilter field.
inline GLenum& SimpleTexturedMaterialBase::getMinFilter(void) {
  return _sfMinFilter.getValue();
}

//! Get the value of the SimpleTexturedMaterial::_sfMinFilter field.
inline const GLenum& SimpleTexturedMaterialBase::getMinFilter(void) const {
  return _sfMinFilter.getValue();
}

//! Set the value of the SimpleTexturedMaterial::_sfMinFilter field.
inline void SimpleTexturedMaterialBase::setMinFilter(const GLenum& value) {
  _sfMinFilter.setValue(value);
}

//! Get the value of the SimpleTexturedMaterial::_sfMagFilter field.
inline GLenum& SimpleTexturedMaterialBase::getMagFilter(void) {
  return _sfMagFilter.getValue();
}

//! Get the value of the SimpleTexturedMaterial::_sfMagFilter field.
inline const GLenum& SimpleTexturedMaterialBase::getMagFilter(void) const {
  return _sfMagFilter.getValue();
}

//! Set the value of the SimpleTexturedMaterial::_sfMagFilter field.
inline void SimpleTexturedMaterialBase::setMagFilter(const GLenum& value) {
  _sfMagFilter.setValue(value);
}

//! Get the value of the SimpleTexturedMaterial::_sfEnvMode field.
inline GLenum& SimpleTexturedMaterialBase::getEnvMode(void) {
  return _sfEnvMode.getValue();
}

//! Get the value of the SimpleTexturedMaterial::_sfEnvMode field.
inline const GLenum& SimpleTexturedMaterialBase::getEnvMode(void) const {
  return _sfEnvMode.getValue();
}

//! Set the value of the SimpleTexturedMaterial::_sfEnvMode field.
inline void SimpleTexturedMaterialBase::setEnvMode(const GLenum& value) {
  _sfEnvMode.setValue(value);
}

//! Get the value of the SimpleTexturedMaterial::_sfEnvMap field.
inline bool& SimpleTexturedMaterialBase::getEnvMap(void) {
  return _sfEnvMap.getValue();
}

//! Get the value of the SimpleTexturedMaterial::_sfEnvMap field.
inline const bool& SimpleTexturedMaterialBase::getEnvMap(void) const {
  return _sfEnvMap.getValue();
}

//! Set the value of the SimpleTexturedMaterial::_sfEnvMap field.
inline void SimpleTexturedMaterialBase::setEnvMap(const bool& value) {
  _sfEnvMap.setValue(value);
}

OSG_END_NAMESPACE

#define OSGSIMPLETEXTUREDMATERIALBASE_INLINE_CVSID                                                 \
  "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"
