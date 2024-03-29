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
 **     class MatrixCamera!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE

//! access the type of the class
inline OSG::FieldContainerType& MatrixCameraBase::getClassType(void) {
  return _type;
}

//! access the numerical type of the class
inline OSG::UInt32 MatrixCameraBase::getClassTypeId(void) {
  return _type.getId();
}

//! create a new instance of the class
inline MatrixCameraPtr MatrixCameraBase::create(void) {
  MatrixCameraPtr fc;

  if (getClassType().getPrototype() != OSG::NullFC) {
    fc = MatrixCameraPtr::dcast(getClassType().getPrototype()->shallowCopy());
  }

  return fc;
}

//! create an empty new instance of the class, do not copy the prototype
inline MatrixCameraPtr MatrixCameraBase::createEmpty(void) {
  MatrixCameraPtr returnValue;

  newPtr(returnValue);

  return returnValue;
}

/*------------------------------ get -----------------------------------*/

//! Get the MatrixCamera::_sfProjectionMatrix field.
inline SFMatrix* MatrixCameraBase::getSFProjectionMatrix(void) {
  return &_sfProjectionMatrix;
}

//! Get the MatrixCamera::_sfModelviewMatrix field.
inline SFMatrix* MatrixCameraBase::getSFModelviewMatrix(void) {
  return &_sfModelviewMatrix;
}

//! Get the value of the MatrixCamera::_sfProjectionMatrix field.
inline Matrix& MatrixCameraBase::getProjectionMatrix(void) {
  return _sfProjectionMatrix.getValue();
}

//! Get the value of the MatrixCamera::_sfProjectionMatrix field.
inline const Matrix& MatrixCameraBase::getProjectionMatrix(void) const {
  return _sfProjectionMatrix.getValue();
}

//! Set the value of the MatrixCamera::_sfProjectionMatrix field.
inline void MatrixCameraBase::setProjectionMatrix(const Matrix& value) {
  _sfProjectionMatrix.setValue(value);
}

//! Get the value of the MatrixCamera::_sfModelviewMatrix field.
inline Matrix& MatrixCameraBase::getModelviewMatrix(void) {
  return _sfModelviewMatrix.getValue();
}

//! Get the value of the MatrixCamera::_sfModelviewMatrix field.
inline const Matrix& MatrixCameraBase::getModelviewMatrix(void) const {
  return _sfModelviewMatrix.getValue();
}

//! Set the value of the MatrixCamera::_sfModelviewMatrix field.
inline void MatrixCameraBase::setModelviewMatrix(const Matrix& value) {
  _sfModelviewMatrix.setValue(value);
}

OSG_END_NAMESPACE

#define OSGMATRIXCAMERABASE_INLINE_CVSID                                                           \
  "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"
