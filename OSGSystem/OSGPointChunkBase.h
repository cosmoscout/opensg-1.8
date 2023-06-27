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
 **     class PointChunk
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#ifndef _OSGPOINTCHUNKBASE_H_
#define _OSGPOINTCHUNKBASE_H_
#ifdef __sgi
#pragma once
#endif

#include <OSGConfig.h>
#include <OSGSystemDef.h>

#include <OSGBaseTypes.h>
#include <OSGRefPtr.h>
#include <OSGCoredNodePtr.h>

#include <OSGStateChunk.h> // Parent

#include <OSGReal32Fields.h> // Size type
#include <OSGBoolFields.h>   // Smooth type
#include <OSGReal32Fields.h> // MinSize type
#include <OSGReal32Fields.h> // MaxSize type
#include <OSGReal32Fields.h> // ConstantAttenuation type
#include <OSGReal32Fields.h> // LinearAttenuation type
#include <OSGReal32Fields.h> // QuadraticAttenuation type
#include <OSGReal32Fields.h> // FadeThreshold type
#include <OSGBoolFields.h>   // Sprite type
#include <OSGGLenumFields.h> // RMode type

#include <OSGPointChunkFields.h>

OSG_BEGIN_NAMESPACE

class PointChunk;
class BinaryDataHandler;

//! \brief PointChunk Base Class.

class OSG_SYSTEMLIB_DLLMAPPING PointChunkBase : public StateChunk {
 private:
  typedef StateChunk Inherited;

  /*==========================  PUBLIC  =================================*/
 public:
  typedef PointChunkPtr Ptr;

  enum {
    SizeFieldId                 = Inherited::NextFieldId,
    SmoothFieldId               = SizeFieldId + 1,
    MinSizeFieldId              = SmoothFieldId + 1,
    MaxSizeFieldId              = MinSizeFieldId + 1,
    ConstantAttenuationFieldId  = MaxSizeFieldId + 1,
    LinearAttenuationFieldId    = ConstantAttenuationFieldId + 1,
    QuadraticAttenuationFieldId = LinearAttenuationFieldId + 1,
    FadeThresholdFieldId        = QuadraticAttenuationFieldId + 1,
    SpriteFieldId               = FadeThresholdFieldId + 1,
    RModeFieldId                = SpriteFieldId + 1,
    NextFieldId                 = RModeFieldId + 1
  };

  static const OSG::BitVector SizeFieldMask;
  static const OSG::BitVector SmoothFieldMask;
  static const OSG::BitVector MinSizeFieldMask;
  static const OSG::BitVector MaxSizeFieldMask;
  static const OSG::BitVector ConstantAttenuationFieldMask;
  static const OSG::BitVector LinearAttenuationFieldMask;
  static const OSG::BitVector QuadraticAttenuationFieldMask;
  static const OSG::BitVector FadeThresholdFieldMask;
  static const OSG::BitVector SpriteFieldMask;
  static const OSG::BitVector RModeFieldMask;

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

  SFReal32* getSFSize(void);
  SFBool*   getSFSmooth(void);
  SFReal32* getSFMinSize(void);
  SFReal32* getSFMaxSize(void);
  SFReal32* getSFConstantAttenuation(void);
  SFReal32* getSFLinearAttenuation(void);
  SFReal32* getSFQuadraticAttenuation(void);
  SFReal32* getSFFadeThreshold(void);
  SFBool*   getSFSprite(void);
  SFGLenum* getSFRMode(void);

  Real32&       getSize(void);
  const Real32& getSize(void) const;
  bool&         getSmooth(void);
  const bool&   getSmooth(void) const;
  Real32&       getMinSize(void);
  const Real32& getMinSize(void) const;
  Real32&       getMaxSize(void);
  const Real32& getMaxSize(void) const;
  Real32&       getConstantAttenuation(void);
  const Real32& getConstantAttenuation(void) const;
  Real32&       getLinearAttenuation(void);
  const Real32& getLinearAttenuation(void) const;
  Real32&       getQuadraticAttenuation(void);
  const Real32& getQuadraticAttenuation(void) const;
  Real32&       getFadeThreshold(void);
  const Real32& getFadeThreshold(void) const;
  bool&         getSprite(void);
  const bool&   getSprite(void) const;
  GLenum&       getRMode(void);
  const GLenum& getRMode(void) const;

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                    Field Set                                 */
  /*! \{                                                                 */

  void setSize(const Real32& value);
  void setSmooth(const bool& value);
  void setMinSize(const Real32& value);
  void setMaxSize(const Real32& value);
  void setConstantAttenuation(const Real32& value);
  void setLinearAttenuation(const Real32& value);
  void setQuadraticAttenuation(const Real32& value);
  void setFadeThreshold(const Real32& value);
  void setSprite(const bool& value);
  void setRMode(const GLenum& value);

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

  static PointChunkPtr create(void);
  static PointChunkPtr createEmpty(void);

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

  SFReal32 _sfSize;
  SFBool   _sfSmooth;
  SFReal32 _sfMinSize;
  SFReal32 _sfMaxSize;
  SFReal32 _sfConstantAttenuation;
  SFReal32 _sfLinearAttenuation;
  SFReal32 _sfQuadraticAttenuation;
  SFReal32 _sfFadeThreshold;
  SFBool   _sfSprite;
  SFGLenum _sfRMode;

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                   Constructors                               */
  /*! \{                                                                 */

  PointChunkBase(void);
  PointChunkBase(const PointChunkBase& source);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                   Destructors                                */
  /*! \{                                                                 */

  virtual ~PointChunkBase(void);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                       Sync                                   */
  /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
  void executeSyncImpl(PointChunkBase* pOther, const BitVector& whichField);

  virtual void executeSync(FieldContainer& other, const BitVector& whichField);
#else
  void executeSyncImpl(PointChunkBase* pOther, const BitVector& whichField, const SyncInfo& sInfo);

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
  void operator=(const PointChunkBase& source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------

typedef PointChunkBase* PointChunkBaseP;

typedef osgIF<PointChunkBase::isNodeCore, CoredNodePtr<PointChunk>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::_IRet PointChunkNodePtr;

typedef RefPtr<PointChunkPtr> PointChunkRefPtr;

OSG_END_NAMESPACE

#define OSGPOINTCHUNKBASE_HEADER_CVSID                                                             \
  "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGPOINTCHUNKBASE_H_ */
