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
 **     class ImageComposer!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE

//! access the type of the class
inline OSG::FieldContainerType& ImageComposerBase::getClassType(void) {
  return _type;
}

//! access the numerical type of the class
inline OSG::UInt32 ImageComposerBase::getClassTypeId(void) {
  return _type.getId();
}

/*------------------------------ get -----------------------------------*/

//! Get the ImageComposer::_sfEnabled field.
inline SFBool* ImageComposerBase::getSFEnabled(void) {
  return &_sfEnabled;
}

//! Get the ImageComposer::_sfStatistics field.
inline SFBool* ImageComposerBase::getSFStatistics(void) {
  return &_sfStatistics;
}

//! Get the value of the ImageComposer::_sfEnabled field.
inline bool& ImageComposerBase::getEnabled(void) {
  return _sfEnabled.getValue();
}

//! Get the value of the ImageComposer::_sfEnabled field.
inline const bool& ImageComposerBase::getEnabled(void) const {
  return _sfEnabled.getValue();
}

//! Set the value of the ImageComposer::_sfEnabled field.
inline void ImageComposerBase::setEnabled(const bool& value) {
  _sfEnabled.setValue(value);
}

//! Get the value of the ImageComposer::_sfStatistics field.
inline bool& ImageComposerBase::getStatistics(void) {
  return _sfStatistics.getValue();
}

//! Get the value of the ImageComposer::_sfStatistics field.
inline const bool& ImageComposerBase::getStatistics(void) const {
  return _sfStatistics.getValue();
}

//! Set the value of the ImageComposer::_sfStatistics field.
inline void ImageComposerBase::setStatistics(const bool& value) {
  _sfStatistics.setValue(value);
}

OSG_END_NAMESPACE

#define OSGIMAGECOMPOSERBASE_INLINE_CVSID                                                          \
  "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"
