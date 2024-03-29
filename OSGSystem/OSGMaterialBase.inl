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
 **     class Material!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE

//! access the type of the class
inline OSG::FieldContainerType& MaterialBase::getClassType(void) {
  return _type;
}

//! access the numerical type of the class
inline OSG::UInt32 MaterialBase::getClassTypeId(void) {
  return _type.getId();
}

/*------------------------------ get -----------------------------------*/

//! Get the Material::_sfSortKey field.
inline SFInt32* MaterialBase::getSFSortKey(void) {
  return &_sfSortKey;
}

//! Get the Material::_sfTransparencyMode field.
inline SFInt32* MaterialBase::getSFTransparencyMode(void) {
  return &_sfTransparencyMode;
}

//! Get the value of the Material::_sfSortKey field.
inline Int32& MaterialBase::getSortKey(void) {
  return _sfSortKey.getValue();
}

//! Get the value of the Material::_sfSortKey field.
inline const Int32& MaterialBase::getSortKey(void) const {
  return _sfSortKey.getValue();
}

//! Set the value of the Material::_sfSortKey field.
inline void MaterialBase::setSortKey(const Int32& value) {
  _sfSortKey.setValue(value);
}

//! Get the value of the Material::_sfTransparencyMode field.
inline Int32& MaterialBase::getTransparencyMode(void) {
  return _sfTransparencyMode.getValue();
}

//! Get the value of the Material::_sfTransparencyMode field.
inline const Int32& MaterialBase::getTransparencyMode(void) const {
  return _sfTransparencyMode.getValue();
}

//! Set the value of the Material::_sfTransparencyMode field.
inline void MaterialBase::setTransparencyMode(const Int32& value) {
  _sfTransparencyMode.setValue(value);
}

OSG_END_NAMESPACE

#define OSGMATERIALBASE_INLINE_CVSID                                                               \
  "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"
