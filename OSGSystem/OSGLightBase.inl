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
 **     class Light!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE

//! access the type of the class
inline OSG::FieldContainerType& LightBase::getClassType(void) {
  return _type;
}

//! access the numerical type of the class
inline OSG::UInt32 LightBase::getClassTypeId(void) {
  return _type.getId();
}

/*------------------------------ get -----------------------------------*/

//! Get the Light::_sfAmbient field.
inline SFColor4f* LightBase::getSFAmbient(void) {
  return &_sfAmbient;
}

//! Get the Light::_sfDiffuse field.
inline SFColor4f* LightBase::getSFDiffuse(void) {
  return &_sfDiffuse;
}

//! Get the Light::_sfSpecular field.
inline SFColor4f* LightBase::getSFSpecular(void) {
  return &_sfSpecular;
}

//! Get the Light::_sfBeacon field.
inline SFNodePtr* LightBase::getSFBeacon(void) {
  return &_sfBeacon;
}

//! Get the Light::_sfOn field.
inline SFBool* LightBase::getSFOn(void) {
  return &_sfOn;
}

//! Get the Light::_sfConstantAttenuation field.
inline SFReal32* LightBase::getSFConstantAttenuation(void) {
  return &_sfConstantAttenuation;
}

//! Get the Light::_sfLinearAttenuation field.
inline SFReal32* LightBase::getSFLinearAttenuation(void) {
  return &_sfLinearAttenuation;
}

//! Get the Light::_sfQuadraticAttenuation field.
inline SFReal32* LightBase::getSFQuadraticAttenuation(void) {
  return &_sfQuadraticAttenuation;
}

//! Get the Light::_sfShadowIntensity field.
inline SFReal32* LightBase::getSFShadowIntensity(void) {
  return &_sfShadowIntensity;
}

//! Get the Light::_sfShadowMode field.
inline SFUInt32* LightBase::getSFShadowMode(void) {
  return &_sfShadowMode;
}

//! Get the value of the Light::_sfAmbient field.
inline Color4f& LightBase::getAmbient(void) {
  return _sfAmbient.getValue();
}

//! Get the value of the Light::_sfAmbient field.
inline const Color4f& LightBase::getAmbient(void) const {
  return _sfAmbient.getValue();
}

//! Set the value of the Light::_sfAmbient field.
inline void LightBase::setAmbient(const Color4f& value) {
  _sfAmbient.setValue(value);
}

//! Get the value of the Light::_sfDiffuse field.
inline Color4f& LightBase::getDiffuse(void) {
  return _sfDiffuse.getValue();
}

//! Get the value of the Light::_sfDiffuse field.
inline const Color4f& LightBase::getDiffuse(void) const {
  return _sfDiffuse.getValue();
}

//! Set the value of the Light::_sfDiffuse field.
inline void LightBase::setDiffuse(const Color4f& value) {
  _sfDiffuse.setValue(value);
}

//! Get the value of the Light::_sfSpecular field.
inline Color4f& LightBase::getSpecular(void) {
  return _sfSpecular.getValue();
}

//! Get the value of the Light::_sfSpecular field.
inline const Color4f& LightBase::getSpecular(void) const {
  return _sfSpecular.getValue();
}

//! Set the value of the Light::_sfSpecular field.
inline void LightBase::setSpecular(const Color4f& value) {
  _sfSpecular.setValue(value);
}

//! Get the value of the Light::_sfBeacon field.
inline NodePtr& LightBase::getBeacon(void) {
  return _sfBeacon.getValue();
}

//! Get the value of the Light::_sfBeacon field.
inline const NodePtr& LightBase::getBeacon(void) const {
  return _sfBeacon.getValue();
}

//! Set the value of the Light::_sfBeacon field.
inline void LightBase::setBeacon(const NodePtr& value) {
  _sfBeacon.setValue(value);
}

//! Get the value of the Light::_sfOn field.
inline bool& LightBase::getOn(void) {
  return _sfOn.getValue();
}

//! Get the value of the Light::_sfOn field.
inline const bool& LightBase::getOn(void) const {
  return _sfOn.getValue();
}

//! Set the value of the Light::_sfOn field.
inline void LightBase::setOn(const bool& value) {
  _sfOn.setValue(value);
}

//! Get the value of the Light::_sfConstantAttenuation field.
inline Real32& LightBase::getConstantAttenuation(void) {
  return _sfConstantAttenuation.getValue();
}

//! Get the value of the Light::_sfConstantAttenuation field.
inline const Real32& LightBase::getConstantAttenuation(void) const {
  return _sfConstantAttenuation.getValue();
}

//! Set the value of the Light::_sfConstantAttenuation field.
inline void LightBase::setConstantAttenuation(const Real32& value) {
  _sfConstantAttenuation.setValue(value);
}

//! Get the value of the Light::_sfLinearAttenuation field.
inline Real32& LightBase::getLinearAttenuation(void) {
  return _sfLinearAttenuation.getValue();
}

//! Get the value of the Light::_sfLinearAttenuation field.
inline const Real32& LightBase::getLinearAttenuation(void) const {
  return _sfLinearAttenuation.getValue();
}

//! Set the value of the Light::_sfLinearAttenuation field.
inline void LightBase::setLinearAttenuation(const Real32& value) {
  _sfLinearAttenuation.setValue(value);
}

//! Get the value of the Light::_sfQuadraticAttenuation field.
inline Real32& LightBase::getQuadraticAttenuation(void) {
  return _sfQuadraticAttenuation.getValue();
}

//! Get the value of the Light::_sfQuadraticAttenuation field.
inline const Real32& LightBase::getQuadraticAttenuation(void) const {
  return _sfQuadraticAttenuation.getValue();
}

//! Set the value of the Light::_sfQuadraticAttenuation field.
inline void LightBase::setQuadraticAttenuation(const Real32& value) {
  _sfQuadraticAttenuation.setValue(value);
}

//! Get the value of the Light::_sfShadowIntensity field.
inline Real32& LightBase::getShadowIntensity(void) {
  return _sfShadowIntensity.getValue();
}

//! Get the value of the Light::_sfShadowIntensity field.
inline const Real32& LightBase::getShadowIntensity(void) const {
  return _sfShadowIntensity.getValue();
}

//! Set the value of the Light::_sfShadowIntensity field.
inline void LightBase::setShadowIntensity(const Real32& value) {
  _sfShadowIntensity.setValue(value);
}

//! Get the value of the Light::_sfShadowMode field.
inline UInt32& LightBase::getShadowMode(void) {
  return _sfShadowMode.getValue();
}

//! Get the value of the Light::_sfShadowMode field.
inline const UInt32& LightBase::getShadowMode(void) const {
  return _sfShadowMode.getValue();
}

//! Set the value of the Light::_sfShadowMode field.
inline void LightBase::setShadowMode(const UInt32& value) {
  _sfShadowMode.setValue(value);
}

OSG_END_NAMESPACE

#define OSGLIGHTBASE_INLINE_CVSID                                                                  \
  "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"
