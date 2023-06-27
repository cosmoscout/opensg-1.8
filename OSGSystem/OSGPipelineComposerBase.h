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
 **     class PipelineComposer
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#ifndef _OSGPIPELINECOMPOSERBASE_H_
#define _OSGPIPELINECOMPOSERBASE_H_
#ifdef __sgi
#pragma once
#endif

#include <OSGConfig.h>
#include <OSGSystemDef.h>

#include <OSGBaseTypes.h>
#include <OSGRefPtr.h>
#include <OSGCoredNodePtr.h>

#include <OSGImageComposer.h> // Parent

#include <OSGBoolFields.h>   // Short type
#include <OSGBoolFields.h>   // Alpha type
#include <OSGUInt32Fields.h> // TileSize type
#include <OSGBoolFields.h>   // Pipelined type

#include <OSGPipelineComposerFields.h>

OSG_BEGIN_NAMESPACE

class PipelineComposer;
class BinaryDataHandler;

//! \brief PipelineComposer Base Class.

class OSG_SYSTEMLIB_DLLMAPPING PipelineComposerBase : public ImageComposer {
 private:
  typedef ImageComposer Inherited;

  /*==========================  PUBLIC  =================================*/
 public:
  typedef PipelineComposerPtr Ptr;

  enum {
    ShortFieldId     = Inherited::NextFieldId,
    AlphaFieldId     = ShortFieldId + 1,
    TileSizeFieldId  = AlphaFieldId + 1,
    PipelinedFieldId = TileSizeFieldId + 1,
    NextFieldId      = PipelinedFieldId + 1
  };

  static const OSG::BitVector ShortFieldMask;
  static const OSG::BitVector AlphaFieldMask;
  static const OSG::BitVector TileSizeFieldMask;
  static const OSG::BitVector PipelinedFieldMask;

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

  SFBool*   getSFShort(void);
  SFBool*   getSFAlpha(void);
  SFUInt32* getSFTileSize(void);
  SFBool*   getSFPipelined(void);

  bool&         getShort(void);
  const bool&   getShort(void) const;
  bool&         getAlpha(void);
  const bool&   getAlpha(void) const;
  UInt32&       getTileSize(void);
  const UInt32& getTileSize(void) const;
  bool&         getPipelined(void);
  const bool&   getPipelined(void) const;

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                    Field Set                                 */
  /*! \{                                                                 */

  void setShort(const bool& value);
  void setAlpha(const bool& value);
  void setTileSize(const UInt32& value);
  void setPipelined(const bool& value);

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

  static PipelineComposerPtr create(void);
  static PipelineComposerPtr createEmpty(void);

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

  SFBool   _sfShort;
  SFBool   _sfAlpha;
  SFUInt32 _sfTileSize;
  SFBool   _sfPipelined;

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                   Constructors                               */
  /*! \{                                                                 */

  PipelineComposerBase(void);
  PipelineComposerBase(const PipelineComposerBase& source);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                   Destructors                                */
  /*! \{                                                                 */

  virtual ~PipelineComposerBase(void);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                       Sync                                   */
  /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
  void executeSyncImpl(PipelineComposerBase* pOther, const BitVector& whichField);

  virtual void executeSync(FieldContainer& other, const BitVector& whichField);
#else
  void executeSyncImpl(
      PipelineComposerBase* pOther, const BitVector& whichField, const SyncInfo& sInfo);

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
  void operator=(const PipelineComposerBase& source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------

typedef PipelineComposerBase* PipelineComposerBaseP;

typedef osgIF<PipelineComposerBase::isNodeCore, CoredNodePtr<PipelineComposer>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::_IRet
    PipelineComposerNodePtr;

typedef RefPtr<PipelineComposerPtr> PipelineComposerRefPtr;

OSG_END_NAMESPACE

#define OSGPIPELINECOMPOSERBASE_HEADER_CVSID                                                       \
  "@(#)$Id: FCBaseTemplate_h.h,v 1.38 2005/07/08 06:37:35 vossg Exp $"

#endif /* _OSGPIPELINECOMPOSERBASE_H_ */
