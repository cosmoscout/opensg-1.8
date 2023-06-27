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
 **     class ProjectionCameraDecorator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE

//! access the type of the class
inline OSG::FieldContainerType& ProjectionCameraDecoratorBase::getClassType(void) {
  return _type;
}

//! access the numerical type of the class
inline OSG::UInt32 ProjectionCameraDecoratorBase::getClassTypeId(void) {
  return _type.getId();
}

//! create a new instance of the class
inline ProjectionCameraDecoratorPtr ProjectionCameraDecoratorBase::create(void) {
  ProjectionCameraDecoratorPtr fc;

  if (getClassType().getPrototype() != OSG::NullFC) {
    fc = ProjectionCameraDecoratorPtr::dcast(getClassType().getPrototype()->shallowCopy());
  }

  return fc;
}

//! create an empty new instance of the class, do not copy the prototype
inline ProjectionCameraDecoratorPtr ProjectionCameraDecoratorBase::createEmpty(void) {
  ProjectionCameraDecoratorPtr returnValue;

  newPtr(returnValue);

  return returnValue;
}

/*------------------------------ get -----------------------------------*/

//! Get the ProjectionCameraDecorator::_sfUser field.
inline SFNodePtr* ProjectionCameraDecoratorBase::getSFUser(void) {
  return &_sfUser;
}

//! Get the ProjectionCameraDecorator::_mfSurface field.
inline MFPnt3f* ProjectionCameraDecoratorBase::getMFSurface(void) {
  return &_mfSurface;
}

//! Get the ProjectionCameraDecorator::_sfLeft field.
inline SFPlane* ProjectionCameraDecoratorBase::getSFLeft(void) {
  return &_sfLeft;
}

//! Get the ProjectionCameraDecorator::_sfBottom field.
inline SFPlane* ProjectionCameraDecoratorBase::getSFBottom(void) {
  return &_sfBottom;
}

//! Get the ProjectionCameraDecorator::_sfNormal field.
inline SFPlane* ProjectionCameraDecoratorBase::getSFNormal(void) {
  return &_sfNormal;
}

//! Get the ProjectionCameraDecorator::_sfWidth field.
inline SFReal32* ProjectionCameraDecoratorBase::getSFWidth(void) {
  return &_sfWidth;
}

//! Get the ProjectionCameraDecorator::_sfHeight field.
inline SFReal32* ProjectionCameraDecoratorBase::getSFHeight(void) {
  return &_sfHeight;
}

//! Get the value of the ProjectionCameraDecorator::_sfUser field.
inline NodePtr& ProjectionCameraDecoratorBase::getUser(void) {
  return _sfUser.getValue();
}

//! Get the value of the ProjectionCameraDecorator::_sfUser field.
inline const NodePtr& ProjectionCameraDecoratorBase::getUser(void) const {
  return _sfUser.getValue();
}

//! Set the value of the ProjectionCameraDecorator::_sfUser field.
inline void ProjectionCameraDecoratorBase::setUser(const NodePtr& value) {
  _sfUser.setValue(value);
}

//! Get the value of the ProjectionCameraDecorator::_sfLeft field.
inline Plane& ProjectionCameraDecoratorBase::getLeft(void) {
  return _sfLeft.getValue();
}

//! Get the value of the ProjectionCameraDecorator::_sfLeft field.
inline const Plane& ProjectionCameraDecoratorBase::getLeft(void) const {
  return _sfLeft.getValue();
}

//! Set the value of the ProjectionCameraDecorator::_sfLeft field.
inline void ProjectionCameraDecoratorBase::setLeft(const Plane& value) {
  _sfLeft.setValue(value);
}

//! Get the value of the ProjectionCameraDecorator::_sfBottom field.
inline Plane& ProjectionCameraDecoratorBase::getBottom(void) {
  return _sfBottom.getValue();
}

//! Get the value of the ProjectionCameraDecorator::_sfBottom field.
inline const Plane& ProjectionCameraDecoratorBase::getBottom(void) const {
  return _sfBottom.getValue();
}

//! Set the value of the ProjectionCameraDecorator::_sfBottom field.
inline void ProjectionCameraDecoratorBase::setBottom(const Plane& value) {
  _sfBottom.setValue(value);
}

//! Get the value of the ProjectionCameraDecorator::_sfNormal field.
inline Plane& ProjectionCameraDecoratorBase::getNormal(void) {
  return _sfNormal.getValue();
}

//! Get the value of the ProjectionCameraDecorator::_sfNormal field.
inline const Plane& ProjectionCameraDecoratorBase::getNormal(void) const {
  return _sfNormal.getValue();
}

//! Set the value of the ProjectionCameraDecorator::_sfNormal field.
inline void ProjectionCameraDecoratorBase::setNormal(const Plane& value) {
  _sfNormal.setValue(value);
}

//! Get the value of the ProjectionCameraDecorator::_sfWidth field.
inline Real32& ProjectionCameraDecoratorBase::getWidth(void) {
  return _sfWidth.getValue();
}

//! Get the value of the ProjectionCameraDecorator::_sfWidth field.
inline const Real32& ProjectionCameraDecoratorBase::getWidth(void) const {
  return _sfWidth.getValue();
}

//! Set the value of the ProjectionCameraDecorator::_sfWidth field.
inline void ProjectionCameraDecoratorBase::setWidth(const Real32& value) {
  _sfWidth.setValue(value);
}

//! Get the value of the ProjectionCameraDecorator::_sfHeight field.
inline Real32& ProjectionCameraDecoratorBase::getHeight(void) {
  return _sfHeight.getValue();
}

//! Get the value of the ProjectionCameraDecorator::_sfHeight field.
inline const Real32& ProjectionCameraDecoratorBase::getHeight(void) const {
  return _sfHeight.getValue();
}

//! Set the value of the ProjectionCameraDecorator::_sfHeight field.
inline void ProjectionCameraDecoratorBase::setHeight(const Real32& value) {
  _sfHeight.setValue(value);
}

//! Get the value of the \a index element the ProjectionCameraDecorator::_mfSurface field.
inline Pnt3f& ProjectionCameraDecoratorBase::getSurface(const UInt32 index) {
  return _mfSurface[index];
}

//! Get the ProjectionCameraDecorator::_mfSurface field.
inline MFPnt3f& ProjectionCameraDecoratorBase::getSurface(void) {
  return _mfSurface;
}

//! Get the ProjectionCameraDecorator::_mfSurface field.
inline const MFPnt3f& ProjectionCameraDecoratorBase::getSurface(void) const {
  return _mfSurface;
}

OSG_END_NAMESPACE

#define OSGPROJECTIONCAMERADECORATORBASE_INLINE_CVSID                                              \
  "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"
