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
 **     class PhongMaterial!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE

//! access the type of the class
inline OSG::FieldContainerType& PhongMaterialBase::getClassType(void) {
  return _type;
}

//! access the numerical type of the class
inline OSG::UInt32 PhongMaterialBase::getClassTypeId(void) {
  return _type.getId();
}

//! create a new instance of the class
inline PhongMaterialPtr PhongMaterialBase::create(void) {
  PhongMaterialPtr fc;

  if (getClassType().getPrototype() != OSG::NullFC) {
    fc = PhongMaterialPtr::dcast(getClassType().getPrototype()->shallowCopy());
  }

  return fc;
}

//! create an empty new instance of the class, do not copy the prototype
inline PhongMaterialPtr PhongMaterialBase::createEmpty(void) {
  PhongMaterialPtr returnValue;

  newPtr(returnValue);

  return returnValue;
}

/*------------------------------ get -----------------------------------*/

//! Get the PhongMaterial::_sfAmbient field.
inline SFColor3f* PhongMaterialBase::getSFAmbient(void) {
  return &_sfAmbient;
}

//! Get the PhongMaterial::_sfDiffuse field.
inline SFColor3f* PhongMaterialBase::getSFDiffuse(void) {
  return &_sfDiffuse;
}

//! Get the PhongMaterial::_sfSpecular field.
inline SFColor3f* PhongMaterialBase::getSFSpecular(void) {
  return &_sfSpecular;
}

//! Get the PhongMaterial::_sfShininess field.
inline SFReal32* PhongMaterialBase::getSFShininess(void) {
  return &_sfShininess;
}

//! Get the PhongMaterial::_sfEmission field.
inline SFColor3f* PhongMaterialBase::getSFEmission(void) {
  return &_sfEmission;
}

//! Get the PhongMaterial::_sfTransparency field.
inline SFReal32* PhongMaterialBase::getSFTransparency(void) {
  return &_sfTransparency;
}

//! Get the PhongMaterial::_sfLit field.
inline SFBool* PhongMaterialBase::getSFLit(void) {
  return &_sfLit;
}

//! Get the PhongMaterial::_sfColorMaterial field.
inline SFGLenum* PhongMaterialBase::getSFColorMaterial(void) {
  return &_sfColorMaterial;
}

//! Get the value of the PhongMaterial::_sfAmbient field.
inline Color3f& PhongMaterialBase::getAmbient(void) {
  return _sfAmbient.getValue();
}

//! Get the value of the PhongMaterial::_sfAmbient field.
inline const Color3f& PhongMaterialBase::getAmbient(void) const {
  return _sfAmbient.getValue();
}

//! Set the value of the PhongMaterial::_sfAmbient field.
inline void PhongMaterialBase::setAmbient(const Color3f& value) {
  _sfAmbient.setValue(value);
}

//! Get the value of the PhongMaterial::_sfDiffuse field.
inline Color3f& PhongMaterialBase::getDiffuse(void) {
  return _sfDiffuse.getValue();
}

//! Get the value of the PhongMaterial::_sfDiffuse field.
inline const Color3f& PhongMaterialBase::getDiffuse(void) const {
  return _sfDiffuse.getValue();
}

//! Set the value of the PhongMaterial::_sfDiffuse field.
inline void PhongMaterialBase::setDiffuse(const Color3f& value) {
  _sfDiffuse.setValue(value);
}

//! Get the value of the PhongMaterial::_sfSpecular field.
inline Color3f& PhongMaterialBase::getSpecular(void) {
  return _sfSpecular.getValue();
}

//! Get the value of the PhongMaterial::_sfSpecular field.
inline const Color3f& PhongMaterialBase::getSpecular(void) const {
  return _sfSpecular.getValue();
}

//! Set the value of the PhongMaterial::_sfSpecular field.
inline void PhongMaterialBase::setSpecular(const Color3f& value) {
  _sfSpecular.setValue(value);
}

//! Get the value of the PhongMaterial::_sfShininess field.
inline Real32& PhongMaterialBase::getShininess(void) {
  return _sfShininess.getValue();
}

//! Get the value of the PhongMaterial::_sfShininess field.
inline const Real32& PhongMaterialBase::getShininess(void) const {
  return _sfShininess.getValue();
}

//! Set the value of the PhongMaterial::_sfShininess field.
inline void PhongMaterialBase::setShininess(const Real32& value) {
  _sfShininess.setValue(value);
}

//! Get the value of the PhongMaterial::_sfEmission field.
inline Color3f& PhongMaterialBase::getEmission(void) {
  return _sfEmission.getValue();
}

//! Get the value of the PhongMaterial::_sfEmission field.
inline const Color3f& PhongMaterialBase::getEmission(void) const {
  return _sfEmission.getValue();
}

//! Set the value of the PhongMaterial::_sfEmission field.
inline void PhongMaterialBase::setEmission(const Color3f& value) {
  _sfEmission.setValue(value);
}

//! Get the value of the PhongMaterial::_sfTransparency field.
inline Real32& PhongMaterialBase::getTransparency(void) {
  return _sfTransparency.getValue();
}

//! Get the value of the PhongMaterial::_sfTransparency field.
inline const Real32& PhongMaterialBase::getTransparency(void) const {
  return _sfTransparency.getValue();
}

//! Set the value of the PhongMaterial::_sfTransparency field.
inline void PhongMaterialBase::setTransparency(const Real32& value) {
  _sfTransparency.setValue(value);
}

//! Get the value of the PhongMaterial::_sfLit field.
inline bool& PhongMaterialBase::getLit(void) {
  return _sfLit.getValue();
}

//! Get the value of the PhongMaterial::_sfLit field.
inline const bool& PhongMaterialBase::getLit(void) const {
  return _sfLit.getValue();
}

//! Set the value of the PhongMaterial::_sfLit field.
inline void PhongMaterialBase::setLit(const bool& value) {
  _sfLit.setValue(value);
}

//! Get the value of the PhongMaterial::_sfColorMaterial field.
inline GLenum& PhongMaterialBase::getColorMaterial(void) {
  return _sfColorMaterial.getValue();
}

//! Get the value of the PhongMaterial::_sfColorMaterial field.
inline const GLenum& PhongMaterialBase::getColorMaterial(void) const {
  return _sfColorMaterial.getValue();
}

//! Set the value of the PhongMaterial::_sfColorMaterial field.
inline void PhongMaterialBase::setColorMaterial(const GLenum& value) {
  _sfColorMaterial.setValue(value);
}

OSG_END_NAMESPACE

#define OSGPHONGMATERIALBASE_INLINE_CVSID                                                          \
  "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"
