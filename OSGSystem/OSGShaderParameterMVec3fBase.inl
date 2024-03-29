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
 **     class ShaderParameterMVec3f!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE

//! access the type of the class
inline OSG::FieldContainerType& ShaderParameterMVec3fBase::getClassType(void) {
  return _type;
}

//! access the numerical type of the class
inline OSG::UInt32 ShaderParameterMVec3fBase::getClassTypeId(void) {
  return _type.getId();
}

//! create a new instance of the class
inline ShaderParameterMVec3fPtr ShaderParameterMVec3fBase::create(void) {
  ShaderParameterMVec3fPtr fc;

  if (getClassType().getPrototype() != OSG::NullFC) {
    fc = ShaderParameterMVec3fPtr::dcast(getClassType().getPrototype()->shallowCopy());
  }

  return fc;
}

//! create an empty new instance of the class, do not copy the prototype
inline ShaderParameterMVec3fPtr ShaderParameterMVec3fBase::createEmpty(void) {
  ShaderParameterMVec3fPtr returnValue;

  newPtr(returnValue);

  return returnValue;
}

/*------------------------------ get -----------------------------------*/

//! Get the ShaderParameterMVec3f::_mfValue field.
inline MFVec3f* ShaderParameterMVec3fBase::getMFValue(void) {
  return &_mfValue;
}

//! Get the value of the \a index element the ShaderParameterMVec3f::_mfValue field.
inline Vec3f& ShaderParameterMVec3fBase::getValue(const UInt32 index) {
  return _mfValue[index];
}

//! Get the ShaderParameterMVec3f::_mfValue field.
inline MFVec3f& ShaderParameterMVec3fBase::getValue(void) {
  return _mfValue;
}

//! Get the ShaderParameterMVec3f::_mfValue field.
inline const MFVec3f& ShaderParameterMVec3fBase::getValue(void) const {
  return _mfValue;
}

OSG_END_NAMESPACE

#define OSGSHADERPARAMETERMVEC3FBASE_INLINE_CVSID                                                  \
  "@(#)$Id: OSGShaderParameterMVec3fBase.inl,v 1.1 2007/03/09 18:11:49 a-m-z Exp $"
