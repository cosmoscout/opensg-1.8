/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *             Copyright (C) 2000-2002 by the OpenSG Forum                   *
 *                                                                           *
 *                            www.opensg.org                                 *
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

#ifndef OSGEXRIMAGEFILETYPE
#define OSGEXRIMAGEFILETYPE
#ifdef __sig
#pragma once
#endif

#include <OSGBaseTypes.h>
#include <OSGImageFileType.h>

#include <OSGSystemDef.h>

OSG_BEGIN_NAMESPACE

/*! \brief EXR File Handler. Used to read/write ILM OpenEXR files.
See \ref PageSystemImage for a detailed description.
*/

class OSG_SYSTEMLIB_DLLMAPPING EXRImageFileType : public ImageFileType {
  /*==========================  PUBLIC  =================================*/
 public:
  /*---------------------------------------------------------------------*/
  /*! \name                   Destructor                                 */
  /*! \{                                                                 */

  virtual ~EXRImageFileType(void);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                  Get Methods                                 */
  /*! \{                                                                 */

  static EXRImageFileType& the(void);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                   Read/Write                                 */
  /*! \{                                                                 */

  virtual bool read(ImagePtr& image, std::istream& is, const std::string& mimeType);

  virtual bool write(const ImagePtr& image, std::ostream& os, const std::string& mimeType);

  /*! \}                                                                 */

  /*=========================  PROTECTED  ===============================*/
 protected:
  /*---------------------------------------------------------------------*/
  /*! \name               Default Constructor                            */
  /*! \{                                                                 */

  EXRImageFileType(
      const Char8* mimeType, const Char8* suffixArray[], UInt16 suffixByteCount, UInt32 flags);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                     Buffer                                   */
  /*! \{                                                                 */

  virtual UInt64 restoreData(ImagePtr& image, const UChar8* buffer, Int32 memSize = -1);

  virtual UInt64 storeData(const ImagePtr& image, UChar8* buffer, Int32 memSize = -1);
  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                     File I/O                                 */
  /*! \{                                                                 */

  bool isOpenExrFile(std::istream& is);

  /*! \}                                                                 */

  /*==========================  PRIVATE  ================================*/
 private:
  EXRImageFileType(const EXRImageFileType& obj);

  typedef ImageFileType Inherited;

  static EXRImageFileType _the;
};

typedef EXRImageFileType* EXRImageFileTypeP;

OSG_END_NAMESPACE

#endif // OSGEXRIMAGEFILETYPE
