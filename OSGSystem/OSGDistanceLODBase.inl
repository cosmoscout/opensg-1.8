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
 **     class DistanceLOD!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE

//! access the type of the class
inline OSG::FieldContainerType& DistanceLODBase::getClassType(void) {
  return _type;
}

//! access the numerical type of the class
inline OSG::UInt32 DistanceLODBase::getClassTypeId(void) {
  return _type.getId();
}

//! create a new instance of the class
inline DistanceLODPtr DistanceLODBase::create(void) {
  DistanceLODPtr fc;

  if (getClassType().getPrototype() != OSG::NullFC) {
    fc = DistanceLODPtr::dcast(getClassType().getPrototype()->shallowCopy());
  }

  return fc;
}

//! create an empty new instance of the class, do not copy the prototype
inline DistanceLODPtr DistanceLODBase::createEmpty(void) {
  DistanceLODPtr returnValue;

  newPtr(returnValue);

  return returnValue;
}

/*------------------------------ get -----------------------------------*/

//! Get the DistanceLOD::_sfCenter field.
inline SFPnt3f* DistanceLODBase::getSFCenter(void) {
  return &_sfCenter;
}

//! Get the DistanceLOD::_mfRange field.
inline MFReal32* DistanceLODBase::getMFRange(void) {
  return &_mfRange;
}

//! Get the value of the DistanceLOD::_sfCenter field.
inline Pnt3f& DistanceLODBase::getCenter(void) {
  return _sfCenter.getValue();
}

//! Get the value of the DistanceLOD::_sfCenter field.
inline const Pnt3f& DistanceLODBase::getCenter(void) const {
  return _sfCenter.getValue();
}

//! Set the value of the DistanceLOD::_sfCenter field.
inline void DistanceLODBase::setCenter(const Pnt3f& value) {
  _sfCenter.setValue(value);
}

//! Get the value of the \a index element the DistanceLOD::_mfRange field.
inline Real32& DistanceLODBase::getRange(const UInt32 index) {
  return _mfRange[index];
}

//! Get the DistanceLOD::_mfRange field.
inline MFReal32& DistanceLODBase::getRange(void) {
  return _mfRange;
}

//! Get the DistanceLOD::_mfRange field.
inline const MFReal32& DistanceLODBase::getRange(void) const {
  return _mfRange;
}

OSG_END_NAMESPACE

#define OSGDISTANCELODBASE_INLINE_CVSID                                                            \
  "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"
