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
 **     class ShaderParameter!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE

//! access the type of the class
inline OSG::FieldContainerType& ShaderParameterBase::getClassType(void) {
  return _type;
}

//! access the numerical type of the class
inline OSG::UInt32 ShaderParameterBase::getClassTypeId(void) {
  return _type.getId();
}

/*------------------------------ get -----------------------------------*/

//! Get the ShaderParameter::_sfName field.
inline SFString* ShaderParameterBase::getSFName(void) {
  return &_sfName;
}

//! Get the value of the ShaderParameter::_sfName field.
inline std::string& ShaderParameterBase::getName(void) {
  return _sfName.getValue();
}

//! Get the value of the ShaderParameter::_sfName field.
inline const std::string& ShaderParameterBase::getName(void) const {
  return _sfName.getValue();
}

//! Set the value of the ShaderParameter::_sfName field.
inline void ShaderParameterBase::setName(const std::string& value) {
  _sfName.setValue(value);
}

OSG_END_NAMESPACE

#define OSGSHADERPARAMETERBASE_INLINE_CVSID                                                        \
  "@(#)$Id: OSGShaderParameterBase.inl,v 1.8 2006/02/20 17:04:38 dirk Exp $"
