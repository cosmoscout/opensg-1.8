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

#ifndef OSGMNGIMAGEFILETYPE_CLASS_DECLARATION
#define OSGMNGIMAGEFILETYPE_CLASS_DECLARATION
#ifdef __sgi
#pragma once
#endif

#include <OSGSystemDef.h>
#include <OSGBaseTypes.h>
#include <OSGImageFileType.h>
#include <iosfwd>

OSG_BEGIN_NAMESPACE

/*! \brief MNG File Handler. See \ref PageSystemImage for a detailed description.
 */

class OSG_SYSTEMLIB_DLLMAPPING MNGImageFileType : public ImageFileType {

  /*==========================  PUBLIC  =================================*/
 public:
  /*---------------------------------------------------------------------*/
  /*! \name                   Destructor                                 */
  /*! \{                                                                 */

  virtual ~MNGImageFileType(void);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                  Get Method                                  */
  /*! \{                                                                 */

  static MNGImageFileType& the(void);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                   Read/Write                                 */
  /*! \{                                                                 */

  virtual std::string determineMimetypeFromStream(std::istream& is);

  /*! \}                                                                 */

  /*=========================  PROTECTED  ===============================*/
 protected:
  /*---------------------------------------------------------------------*/
  /*! \name               Default Constructor                            */
  /*! \{                                                                 */

  MNGImageFileType(const Char8* mimeType, const Char8* suffixArray[], UInt16 suffixByteCount);

  /*! \}                                                                 */

  /*==========================  PRIVATE  ================================*/
 private:
  /*---------------------------------------------------------------------*/
  /*! \name                Copy Constructor                              */
  /*! \{                                                                 */

  MNGImageFileType(const MNGImageFileType& obj);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                Copy Operator                                 */
  /*! \{                                                                 */

  const MNGImageFileType& operator=(const MNGImageFileType& obj);

  /*! \}                                                                 */

  static MNGImageFileType _the;
};

typedef MNGImageFileType* MNGImageFileTypeP;

OSG_END_NAMESPACE

#endif // OSGMNGIMAGEFILETYPE_CLASS_DECLARATION
