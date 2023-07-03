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
 **     class Particles
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#ifndef _OSGPARTICLESBASE_H_
#define _OSGPARTICLESBASE_H_
#ifdef __sgi
#pragma once
#endif

#include <OSGConfig.h>
#include <OSGSystemDef.h>

#include <OSGBaseTypes.h>
#include <OSGRefPtr.h>
#include <OSGCoredNodePtr.h>

#include <OSGMaterialDrawable.h> // Parent

#include <OSGUInt32Fields.h>       // Mode type
#include <OSGGeoPositionsFields.h> // Positions type
#include <OSGVec3fFields.h>        // Sizes type
#include <OSGGeoPositionsFields.h> // SecPositions type
#include <OSGGeoColorsFields.h>    // Colors type
#include <OSGGeoNormalsFields.h>   // Normals type
#include <OSGInt32Fields.h>        // Indices type
#include <OSGReal32Fields.h>       // TextureZs type
#include <OSGUInt32Fields.h>       // DrawOrder type
#include <OSGBoolFields.h>         // Dynamic type
#include <OSGUInt32Fields.h>       // Pump type
#include <OSGParticleBSP.h>        // Bsp type
#include <OSGInt32Fields.h>        // NumParticles type

#include <OSGParticlesFields.h>

OSG_BEGIN_NAMESPACE

class Particles;
class BinaryDataHandler;

//! \brief Particles Base Class.

class OSG_SYSTEMLIB_DLLMAPPING ParticlesBase : public MaterialDrawable {
 private:
  typedef MaterialDrawable Inherited;

  /*==========================  PUBLIC  =================================*/
 public:
  typedef ParticlesPtr Ptr;

  enum {
    ModeFieldId         = Inherited::NextFieldId,
    PositionsFieldId    = ModeFieldId + 1,
    SizesFieldId        = PositionsFieldId + 1,
    SecPositionsFieldId = SizesFieldId + 1,
    ColorsFieldId       = SecPositionsFieldId + 1,
    NormalsFieldId      = ColorsFieldId + 1,
    IndicesFieldId      = NormalsFieldId + 1,
    TextureZsFieldId    = IndicesFieldId + 1,
    DrawOrderFieldId    = TextureZsFieldId + 1,
    DynamicFieldId      = DrawOrderFieldId + 1,
    PumpFieldId         = DynamicFieldId + 1,
    BspFieldId          = PumpFieldId + 1,
    NumParticlesFieldId = BspFieldId + 1,
    NextFieldId         = NumParticlesFieldId + 1
  };

  static const OSG::BitVector ModeFieldMask;
  static const OSG::BitVector PositionsFieldMask;
  static const OSG::BitVector SizesFieldMask;
  static const OSG::BitVector SecPositionsFieldMask;
  static const OSG::BitVector ColorsFieldMask;
  static const OSG::BitVector NormalsFieldMask;
  static const OSG::BitVector IndicesFieldMask;
  static const OSG::BitVector TextureZsFieldMask;
  static const OSG::BitVector DrawOrderFieldMask;
  static const OSG::BitVector DynamicFieldMask;
  static const OSG::BitVector PumpFieldMask;
  static const OSG::BitVector BspFieldMask;
  static const OSG::BitVector NumParticlesFieldMask;

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

  SFUInt32*          getSFMode(void);
  SFGeoPositionsPtr* getSFPositions(void);
  MFVec3f*           getMFSizes(void);
  SFGeoPositionsPtr* getSFSecPositions(void);
  SFGeoColorsPtr*    getSFColors(void);
  SFGeoNormalsPtr*   getSFNormals(void);
  MFInt32*           getMFIndices(void);
  MFReal32*          getMFTextureZs(void);
  SFUInt32*          getSFDrawOrder(void);
  SFBool*            getSFDynamic(void);
  SFParticleBSPTree* getSFBsp(void);
  SFInt32*           getSFNumParticles(void);

  UInt32&                getMode(void);
  const UInt32&          getMode(void) const;
  GeoPositionsPtr&       getPositions(void);
  const GeoPositionsPtr& getPositions(void) const;
  GeoPositionsPtr&       getSecPositions(void);
  const GeoPositionsPtr& getSecPositions(void) const;
  GeoColorsPtr&          getColors(void);
  const GeoColorsPtr&    getColors(void) const;
  GeoNormalsPtr&         getNormals(void);
  const GeoNormalsPtr&   getNormals(void) const;
  UInt32&                getDrawOrder(void);
  const UInt32&          getDrawOrder(void) const;
  bool&                  getDynamic(void);
  const bool&            getDynamic(void) const;
  ParticleBSPTree&       getBsp(void);
  const ParticleBSPTree& getBsp(void) const;
  Int32&                 getNumParticles(void);
  const Int32&           getNumParticles(void) const;
  Vec3f&                 getSizes(const UInt32 index);
  MFVec3f&               getSizes(void);
  const MFVec3f&         getSizes(void) const;
  Int32&                 getIndices(const UInt32 index);
  MFInt32&               getIndices(void);
  const MFInt32&         getIndices(void) const;
  Real32&                getTextureZs(const UInt32 index);
  MFReal32&              getTextureZs(void);
  const MFReal32&        getTextureZs(void) const;

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                    Field Set                                 */
  /*! \{                                                                 */

  void setMode(const UInt32& value);
  void setPositions(const GeoPositionsPtr& value);
  void setSecPositions(const GeoPositionsPtr& value);
  void setColors(const GeoColorsPtr& value);
  void setNormals(const GeoNormalsPtr& value);
  void setDrawOrder(const UInt32& value);
  void setDynamic(const bool& value);
  void setBsp(const ParticleBSPTree& value);
  void setNumParticles(const Int32& value);

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

  static ParticlesPtr create(void);
  static ParticlesPtr createEmpty(void);

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

  SFUInt32          _sfMode;
  SFGeoPositionsPtr _sfPositions;
  MFVec3f           _mfSizes;
  SFGeoPositionsPtr _sfSecPositions;
  SFGeoColorsPtr    _sfColors;
  SFGeoNormalsPtr   _sfNormals;
  MFInt32           _mfIndices;
  MFReal32          _mfTextureZs;
  SFUInt32          _sfDrawOrder;
  SFBool            _sfDynamic;
  SFParticleBSPTree _sfBsp;
  SFInt32           _sfNumParticles;

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                   Constructors                               */
  /*! \{                                                                 */

  ParticlesBase(void);
  ParticlesBase(const ParticlesBase& source);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                   Destructors                                */
  /*! \{                                                                 */

  virtual ~ParticlesBase(void);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                       Sync                                   */
  /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
  void executeSyncImpl(ParticlesBase* pOther, const BitVector& whichField);

  virtual void executeSync(FieldContainer& other, const BitVector& whichField);
#else
  void executeSyncImpl(ParticlesBase* pOther, const BitVector& whichField, const SyncInfo& sInfo);

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

  /*---------------------------------------------------------------------*/
  /*! \name                      Fields                                  */
  /*! \{                                                                 */

  SFUInt32 _sfPump;

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                    Field Get                                 */
  /*! \{                                                                 */

  SFUInt32* getSFPump(void);

  UInt32&       getPump(void);
  const UInt32& getPump(void) const;

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                    Field Set                                 */
  /*! \{                                                                 */

  void setPump(const UInt32& value);

  /*! \}                                                                 */

  // prohibit default functions (move to 'public' if you need one)
  void operator=(const ParticlesBase& source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------

typedef ParticlesBase* ParticlesBaseP;

typedef osgIF<ParticlesBase::isNodeCore, CoredNodePtr<Particles>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::_IRet ParticlesNodePtr;

typedef RefPtr<ParticlesPtr> ParticlesRefPtr;

OSG_END_NAMESPACE

#define OSGPARTICLESBASE_HEADER_CVSID                                                              \
  "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGPARTICLESBASE_H_ */
