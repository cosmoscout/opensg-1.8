/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
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

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class ColorMaskChunk
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#ifndef _OSGCOLORMASKCHUNKBASE_H_
#define _OSGCOLORMASKCHUNKBASE_H_
#ifdef __sgi
#pragma once
#endif

#include <OSGConfig.h>
#include <OSGSystemDef.h>

#include <OSGBaseTypes.h>
#include <OSGRefPtr.h>
#include <OSGCoredNodePtr.h>

#include <OSGStateChunk.h> // Parent

#include <OSGBoolFields.h> // MaskR type
#include <OSGBoolFields.h> // MaskG type
#include <OSGBoolFields.h> // MaskB type
#include <OSGBoolFields.h> // MaskA type

#include <OSGColorMaskChunkFields.h>

OSG_BEGIN_NAMESPACE

class ColorMaskChunk;
class BinaryDataHandler;

//! \brief ColorMaskChunk Base Class.

class OSG_SYSTEMLIB_DLLMAPPING ColorMaskChunkBase : public StateChunk {
 private:
  typedef StateChunk Inherited;

  /*==========================  PUBLIC  =================================*/
 public:
  typedef ColorMaskChunkPtr Ptr;

  enum {
    MaskRFieldId = Inherited::NextFieldId,
    MaskGFieldId = MaskRFieldId + 1,
    MaskBFieldId = MaskGFieldId + 1,
    MaskAFieldId = MaskBFieldId + 1,
    NextFieldId  = MaskAFieldId + 1
  };

  static const OSG::BitVector MaskRFieldMask;
  static const OSG::BitVector MaskGFieldMask;
  static const OSG::BitVector MaskBFieldMask;
  static const OSG::BitVector MaskAFieldMask;

  static const OSG::BitVector MTInfluenceMask;

  /*---------------------------------------------------------------------*/
  /*! \name                    Class Get                                 */
  /*! \{                                                                 */

  static FieldContainerType& getClassType(void);
  static UInt32              getClassTypeId(void);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                FieldContainer Get                            */
  /*! \{                                                                 */

  virtual FieldContainerType&       getType(void);
  virtual const FieldContainerType& getType(void) const;

  virtual UInt32 getContainerSize(void) const;

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                    Field Get                                 */
  /*! \{                                                                 */

  SFBool* getSFMaskR(void);
  SFBool* getSFMaskG(void);
  SFBool* getSFMaskB(void);
  SFBool* getSFMaskA(void);

  bool&       getMaskR(void);
  const bool& getMaskR(void) const;
  bool&       getMaskG(void);
  const bool& getMaskG(void) const;
  bool&       getMaskB(void);
  const bool& getMaskB(void) const;
  bool&       getMaskA(void);
  const bool& getMaskA(void) const;

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                    Field Set                                 */
  /*! \{                                                                 */

  void setMaskR(const bool& value);
  void setMaskG(const bool& value);
  void setMaskB(const bool& value);
  void setMaskA(const bool& value);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                       Sync                                   */
  /*! \{                                                                 */

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                   Binary Access                              */
  /*! \{                                                                 */

  virtual UInt32 getBinSize(const BitVector& whichField);
  virtual void   copyToBin(BinaryDataHandler& pMem, const BitVector& whichField);
  virtual void   copyFromBin(BinaryDataHandler& pMem, const BitVector& whichField);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                   Construction                               */
  /*! \{                                                                 */

  static ColorMaskChunkPtr create(void);
  static ColorMaskChunkPtr createEmpty(void);

  /*! \}                                                                 */

  /*---------------------------------------------------------------------*/
  /*! \name                       Copy                                   */
  /*! \{                                                                 */

  virtual FieldContainerPtr shallowCopy(void) const;

  /*! \}                                                                 */
  /*=========================  PROTECTED  ===============================*/
 protected:
  /*---------------------------------------------------------------------*/
  /*! \name                      Fields                                  */
  /*! \{                                                                 */

  SFBool _sfMaskR;
  SFBool _sfMaskG;
  SFBool _sfMaskB;
  SFBool _sfMaskA;

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                   Constructors                               */
  /*! \{                                                                 */

  ColorMaskChunkBase(void);
  ColorMaskChunkBase(const ColorMaskChunkBase& source);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                   Destructors                                */
  /*! \{                                                                 */

  virtual ~ColorMaskChunkBase(void);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                       Sync                                   */
  /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
  void executeSyncImpl(ColorMaskChunkBase* pOther, const BitVector& whichField);

  virtual void executeSync(FieldContainer& other, const BitVector& whichField);
#else
  void executeSyncImpl(
      ColorMaskChunkBase* pOther, const BitVector& whichField, const SyncInfo& sInfo);

  virtual void executeSync(
      FieldContainer& other, const BitVector& whichField, const SyncInfo& sInfo);

  virtual void execBeginEdit(const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize);

  void execBeginEditImpl(const BitVector& whichField, UInt32 uiAspect, UInt32 uiContainerSize);

  virtual void onDestroyAspect(UInt32 uiId, UInt32 uiAspect);
#endif

  /*! \}                                                                 */
  /*==========================  PRIVATE  ================================*/
 private:
  friend class FieldContainer;

  static FieldDescription*  _desc[];
  static FieldContainerType _type;

  // prohibit default functions (move to 'public' if you need one)
  void operator=(const ColorMaskChunkBase& source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------

typedef ColorMaskChunkBase* ColorMaskChunkBaseP;

typedef osgIF<ColorMaskChunkBase::isNodeCore, CoredNodePtr<ColorMaskChunk>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::_IRet ColorMaskChunkNodePtr;

typedef RefPtr<ColorMaskChunkPtr> ColorMaskChunkRefPtr;

OSG_END_NAMESPACE

#define OSGCOLORMASKCHUNKBASE_HEADER_CVSID                                                         \
  "@(#)$Id: OSGColorMaskChunkBase.h,v 1.4 2006/02/20 17:04:46 dirk Exp $"

#endif /* _OSGCOLORMASKCHUNKBASE_H_ */
