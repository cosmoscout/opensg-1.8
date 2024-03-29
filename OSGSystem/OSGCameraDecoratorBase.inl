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
 **     class CameraDecorator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE

//! access the type of the class
inline OSG::FieldContainerType& CameraDecoratorBase::getClassType(void) {
  return _type;
}

//! access the numerical type of the class
inline OSG::UInt32 CameraDecoratorBase::getClassTypeId(void) {
  return _type.getId();
}

/*------------------------- decorator get ------------------------------*/

inline SFCameraPtr* CameraDecoratorBase::getSFDecoratee(void) {
  return &_sfDecoratee;
}

inline CameraPtr& CameraDecoratorBase::getDecoratee(void) {
  return _sfDecoratee.getValue();
}

inline const CameraPtr& CameraDecoratorBase::getDecoratee(void) const {
  return _sfDecoratee.getValue();
}

inline void CameraDecoratorBase::setDecoratee(const CameraPtr& value) {
  _sfDecoratee.setValue(value);
}

inline SFNodePtr* CameraDecoratorBase::getSFBeacon(void) {
  return getDecoratee()->getSFBeacon();
}

inline SFReal32* CameraDecoratorBase::getSFNear(void) {
  return getDecoratee()->getSFNear();
}

inline SFReal32* CameraDecoratorBase::getSFFar(void) {
  return getDecoratee()->getSFFar();
}

inline NodePtr& CameraDecoratorBase::getBeacon(void) {
  return getDecoratee()->getBeacon();
}

inline const NodePtr& CameraDecoratorBase::getBeacon(void) const {
  return getDecoratee()->getBeacon();
}

inline void CameraDecoratorBase::setBeacon(const NodePtr& value) {
  beginEditCP(getDecoratee(), BeaconFieldMask);
  getDecoratee()->setBeacon(value);
  endEditCP(getDecoratee(), BeaconFieldMask);
}

inline Real32& CameraDecoratorBase::getNear(void) {
  return getDecoratee()->getNear();
}

inline const Real32& CameraDecoratorBase::getNear(void) const {
  return getDecoratee()->getNear();
}

inline void CameraDecoratorBase::setNear(const Real32& value) {
  beginEditCP(getDecoratee(), NearFieldMask);
  getDecoratee()->setNear(value);
  endEditCP(getDecoratee(), NearFieldMask);
}

inline Real32& CameraDecoratorBase::getFar(void) {
  return getDecoratee()->getFar();
}

inline const Real32& CameraDecoratorBase::getFar(void) const {
  return getDecoratee()->getFar();
}

inline void CameraDecoratorBase::setFar(const Real32& value) {
  beginEditCP(getDecoratee(), FarFieldMask);
  getDecoratee()->setFar(value);
  endEditCP(getDecoratee(), FarFieldMask);
}

OSG_END_NAMESPACE

#define OSGCAMERADECORATORBASE_INLINE_CVSID                                                        \
  "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"
