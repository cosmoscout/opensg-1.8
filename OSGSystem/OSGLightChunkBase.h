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
 **     class LightChunk
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#ifndef _OSGLIGHTCHUNKBASE_H_
#define _OSGLIGHTCHUNKBASE_H_
#ifdef __sgi
#pragma once
#endif

#include <OSGConfig.h>
#include <OSGSystemDef.h>

#include <OSGBaseTypes.h>
#include <OSGRefPtr.h>
#include <OSGCoredNodePtr.h>

#include <OSGStateChunk.h> // Parent

#include <OSGColor4fFields.h> // Diffuse type
#include <OSGColor4fFields.h> // Ambient type
#include <OSGColor4fFields.h> // Specular type
#include <OSGVec4fFields.h>   // Position type
#include <OSGVec3fFields.h>   // Direction type
#include <OSGReal32Fields.h>  // Exponent type
#include <OSGReal32Fields.h>  // Cutoff type
#include <OSGReal32Fields.h>  // ConstantAttenuation type
#include <OSGReal32Fields.h>  // LinearAttenuation type
#include <OSGReal32Fields.h>  // QuadraticAttenuation type

#include <OSGLightChunkFields.h>

OSG_BEGIN_NAMESPACE

class LightChunk;
class BinaryDataHandler;

//! \brief LightChunk Base Class.

class OSG_SYSTEMLIB_DLLMAPPING LightChunkBase : public StateChunk {
 private:
  typedef StateChunk Inherited;

  /*==========================  PUBLIC  =================================*/
 public:
  typedef LightChunkPtr Ptr;

  enum {
    DiffuseFieldId              = Inherited::NextFieldId,
    AmbientFieldId              = DiffuseFieldId + 1,
    SpecularFieldId             = AmbientFieldId + 1,
    PositionFieldId             = SpecularFieldId + 1,
    DirectionFieldId            = PositionFieldId + 1,
    ExponentFieldId             = DirectionFieldId + 1,
    CutoffFieldId               = ExponentFieldId + 1,
    ConstantAttenuationFieldId  = CutoffFieldId + 1,
    LinearAttenuationFieldId    = ConstantAttenuationFieldId + 1,
    QuadraticAttenuationFieldId = LinearAttenuationFieldId + 1,
    NextFieldId                 = QuadraticAttenuationFieldId + 1
  };

  static const OSG::BitVector DiffuseFieldMask;
  static const OSG::BitVector AmbientFieldMask;
  static const OSG::BitVector SpecularFieldMask;
  static const OSG::BitVector PositionFieldMask;
  static const OSG::BitVector DirectionFieldMask;
  static const OSG::BitVector ExponentFieldMask;
  static const OSG::BitVector CutoffFieldMask;
  static const OSG::BitVector ConstantAttenuationFieldMask;
  static const OSG::BitVector LinearAttenuationFieldMask;
  static const OSG::BitVector QuadraticAttenuationFieldMask;

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

  SFColor4f* getSFDiffuse(void);
  SFColor4f* getSFAmbient(void);
  SFColor4f* getSFSpecular(void);
  SFVec4f*   getSFPosition(void);
  SFVec3f*   getSFDirection(void);
  SFReal32*  getSFExponent(void);
  SFReal32*  getSFCutoff(void);
  SFReal32*  getSFConstantAttenuation(void);
  SFReal32*  getSFLinearAttenuation(void);
  SFReal32*  getSFQuadraticAttenuation(void);

  Color4f&       getDiffuse(void);
  const Color4f& getDiffuse(void) const;
  Color4f&       getAmbient(void);
  const Color4f& getAmbient(void) const;
  Color4f&       getSpecular(void);
  const Color4f& getSpecular(void) const;
  Vec4f&         getPosition(void);
  const Vec4f&   getPosition(void) const;
  Vec3f&         getDirection(void);
  const Vec3f&   getDirection(void) const;
  Real32&        getExponent(void);
  const Real32&  getExponent(void) const;
  Real32&        getCutoff(void);
  const Real32&  getCutoff(void) const;
  Real32&        getConstantAttenuation(void);
  const Real32&  getConstantAttenuation(void) const;
  Real32&        getLinearAttenuation(void);
  const Real32&  getLinearAttenuation(void) const;
  Real32&        getQuadraticAttenuation(void);
  const Real32&  getQuadraticAttenuation(void) const;

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                    Field Set                                 */
  /*! \{                                                                 */

  void setDiffuse(const Color4f& value);
  void setAmbient(const Color4f& value);
  void setSpecular(const Color4f& value);
  void setPosition(const Vec4f& value);
  void setDirection(const Vec3f& value);
  void setExponent(const Real32& value);
  void setCutoff(const Real32& value);
  void setConstantAttenuation(const Real32& value);
  void setLinearAttenuation(const Real32& value);
  void setQuadraticAttenuation(const Real32& value);

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

  static LightChunkPtr create(void);
  static LightChunkPtr createEmpty(void);

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

  SFColor4f _sfDiffuse;
  SFColor4f _sfAmbient;
  SFColor4f _sfSpecular;
  SFVec4f   _sfPosition;
  SFVec3f   _sfDirection;
  SFReal32  _sfExponent;
  SFReal32  _sfCutoff;
  SFReal32  _sfConstantAttenuation;
  SFReal32  _sfLinearAttenuation;
  SFReal32  _sfQuadraticAttenuation;

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                   Constructors                               */
  /*! \{                                                                 */

  LightChunkBase(void);
  LightChunkBase(const LightChunkBase& source);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                   Destructors                                */
  /*! \{                                                                 */

  virtual ~LightChunkBase(void);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                       Sync                                   */
  /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
  void executeSyncImpl(LightChunkBase* pOther, const BitVector& whichField);

  virtual void executeSync(FieldContainer& other, const BitVector& whichField);
#else
  void executeSyncImpl(LightChunkBase* pOther, const BitVector& whichField, const SyncInfo& sInfo);

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
  void operator=(const LightChunkBase& source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------

typedef LightChunkBase* LightChunkBaseP;

typedef osgIF<LightChunkBase::isNodeCore, CoredNodePtr<LightChunk>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::_IRet LightChunkNodePtr;

typedef RefPtr<LightChunkPtr> LightChunkRefPtr;

OSG_END_NAMESPACE

#define OSGLIGHTCHUNKBASE_HEADER_CVSID                                                             \
  "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGLIGHTCHUNKBASE_H_ */
