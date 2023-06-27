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
 **     class ImageBackground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE

//! access the type of the class
inline OSG::FieldContainerType& ImageBackgroundBase::getClassType(void) {
  return _type;
}

//! access the numerical type of the class
inline OSG::UInt32 ImageBackgroundBase::getClassTypeId(void) {
  return _type.getId();
}

//! create a new instance of the class
inline ImageBackgroundPtr ImageBackgroundBase::create(void) {
  ImageBackgroundPtr fc;

  if (getClassType().getPrototype() != OSG::NullFC) {
    fc = ImageBackgroundPtr::dcast(getClassType().getPrototype()->shallowCopy());
  }

  return fc;
}

//! create an empty new instance of the class, do not copy the prototype
inline ImageBackgroundPtr ImageBackgroundBase::createEmpty(void) {
  ImageBackgroundPtr returnValue;

  newPtr(returnValue);

  return returnValue;
}

/*------------------------------ get -----------------------------------*/

//! Get the ImageBackground::_sfColor field.
inline SFColor3f* ImageBackgroundBase::getSFColor(void) {
  return &_sfColor;
}

//! Get the ImageBackground::_sfImage field.
inline SFImagePtr* ImageBackgroundBase::getSFImage(void) {
  return &_sfImage;
}

//! Get the ImageBackground::_sfScale field.
inline SFBool* ImageBackgroundBase::getSFScale(void) {
  return &_sfScale;
}

//! Get the value of the ImageBackground::_sfColor field.
inline Color3f& ImageBackgroundBase::getColor(void) {
  return _sfColor.getValue();
}

//! Get the value of the ImageBackground::_sfColor field.
inline const Color3f& ImageBackgroundBase::getColor(void) const {
  return _sfColor.getValue();
}

//! Set the value of the ImageBackground::_sfColor field.
inline void ImageBackgroundBase::setColor(const Color3f& value) {
  _sfColor.setValue(value);
}

//! Get the value of the ImageBackground::_sfImage field.
inline ImagePtr& ImageBackgroundBase::getImage(void) {
  return _sfImage.getValue();
}

//! Get the value of the ImageBackground::_sfImage field.
inline const ImagePtr& ImageBackgroundBase::getImage(void) const {
  return _sfImage.getValue();
}

//! Set the value of the ImageBackground::_sfImage field.
inline void ImageBackgroundBase::setImage(const ImagePtr& value) {
  _sfImage.setValue(value);
}

//! Get the value of the ImageBackground::_sfScale field.
inline bool& ImageBackgroundBase::getScale(void) {
  return _sfScale.getValue();
}

//! Get the value of the ImageBackground::_sfScale field.
inline const bool& ImageBackgroundBase::getScale(void) const {
  return _sfScale.getValue();
}

//! Set the value of the ImageBackground::_sfScale field.
inline void ImageBackgroundBase::setScale(const bool& value) {
  _sfScale.setValue(value);
}

OSG_END_NAMESPACE

#define OSGIMAGEBACKGROUNDBASE_INLINE_CVSID                                                        \
  "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"
