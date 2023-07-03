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
 **     class PolygonForeground
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#ifndef _OSGPOLYGONFOREGROUNDBASE_H_
#define _OSGPOLYGONFOREGROUNDBASE_H_
#ifdef __sgi
#pragma once
#endif

#include <OSGConfig.h>
#include <OSGSystemDef.h>

#include <OSGBaseTypes.h>
#include <OSGRefPtr.h>
#include <OSGCoredNodePtr.h>

#include <OSGForeground.h> // Parent

#include <OSGMaterialFields.h> // Material type
#include <OSGVec3fFields.h>    // TexCoords type
#include <OSGPnt2fFields.h>    // Positions type
#include <OSGBoolFields.h>     // NormalizedX type
#include <OSGBoolFields.h>     // NormalizedY type
#include <OSGUInt16Fields.h>   // AspectHeight type
#include <OSGUInt16Fields.h>   // AspectWidth type
#include <OSGReal32Fields.h>   // Scale type
#include <OSGBoolFields.h>     // Tile type

#include <OSGPolygonForegroundFields.h>

OSG_BEGIN_NAMESPACE

class PolygonForeground;
class BinaryDataHandler;

//! \brief PolygonForeground Base Class.

class OSG_SYSTEMLIB_DLLMAPPING PolygonForegroundBase : public Foreground {
 private:
  typedef Foreground Inherited;

  /*==========================  PUBLIC  =================================*/
 public:
  typedef PolygonForegroundPtr Ptr;

  enum {
    MaterialFieldId     = Inherited::NextFieldId,
    TexCoordsFieldId    = MaterialFieldId + 1,
    PositionsFieldId    = TexCoordsFieldId + 1,
    NormalizedXFieldId  = PositionsFieldId + 1,
    NormalizedYFieldId  = NormalizedXFieldId + 1,
    AspectHeightFieldId = NormalizedYFieldId + 1,
    AspectWidthFieldId  = AspectHeightFieldId + 1,
    ScaleFieldId        = AspectWidthFieldId + 1,
    TileFieldId         = ScaleFieldId + 1,
    NextFieldId         = TileFieldId + 1
  };

  static const OSG::BitVector MaterialFieldMask;
  static const OSG::BitVector TexCoordsFieldMask;
  static const OSG::BitVector PositionsFieldMask;
  static const OSG::BitVector NormalizedXFieldMask;
  static const OSG::BitVector NormalizedYFieldMask;
  static const OSG::BitVector AspectHeightFieldMask;
  static const OSG::BitVector AspectWidthFieldMask;
  static const OSG::BitVector ScaleFieldMask;
  static const OSG::BitVector TileFieldMask;

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

  SFMaterialPtr* getSFMaterial(void);
  MFVec3f*       getMFTexCoords(void);
  MFPnt2f*       getMFPositions(void);
  SFBool*        getSFNormalizedX(void);
  SFBool*        getSFNormalizedY(void);
  SFUInt16*      getSFAspectHeight(void);
  SFUInt16*      getSFAspectWidth(void);
  SFReal32*      getSFScale(void);
  SFBool*        getSFTile(void);

  MaterialPtr&       getMaterial(void);
  const MaterialPtr& getMaterial(void) const;
  bool&              getNormalizedX(void);
  const bool&        getNormalizedX(void) const;
  bool&              getNormalizedY(void);
  const bool&        getNormalizedY(void) const;
  UInt16&            getAspectHeight(void);
  const UInt16&      getAspectHeight(void) const;
  UInt16&            getAspectWidth(void);
  const UInt16&      getAspectWidth(void) const;
  Real32&            getScale(void);
  const Real32&      getScale(void) const;
  bool&              getTile(void);
  const bool&        getTile(void) const;
  Vec3f&             getTexCoords(const UInt32 index);
  MFVec3f&           getTexCoords(void);
  const MFVec3f&     getTexCoords(void) const;
  Pnt2f&             getPositions(const UInt32 index);
  MFPnt2f&           getPositions(void);
  const MFPnt2f&     getPositions(void) const;

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                    Field Set                                 */
  /*! \{                                                                 */

  void setMaterial(const MaterialPtr& value);
  void setNormalizedX(const bool& value);
  void setNormalizedY(const bool& value);
  void setAspectHeight(const UInt16& value);
  void setAspectWidth(const UInt16& value);
  void setScale(const Real32& value);
  void setTile(const bool& value);

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

  static PolygonForegroundPtr create(void);
  static PolygonForegroundPtr createEmpty(void);

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

  SFMaterialPtr _sfMaterial;
  MFVec3f       _mfTexCoords;
  MFPnt2f       _mfPositions;
  SFBool        _sfNormalizedX;
  SFBool        _sfNormalizedY;
  SFUInt16      _sfAspectHeight;
  SFUInt16      _sfAspectWidth;
  SFReal32      _sfScale;
  SFBool        _sfTile;

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                   Constructors                               */
  /*! \{                                                                 */

  PolygonForegroundBase(void);
  PolygonForegroundBase(const PolygonForegroundBase& source);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                   Destructors                                */
  /*! \{                                                                 */

  virtual ~PolygonForegroundBase(void);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                       Sync                                   */
  /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
  void executeSyncImpl(PolygonForegroundBase* pOther, const BitVector& whichField);

  virtual void executeSync(FieldContainer& other, const BitVector& whichField);
#else
  void executeSyncImpl(
      PolygonForegroundBase* pOther, const BitVector& whichField, const SyncInfo& sInfo);

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
  void operator=(const PolygonForegroundBase& source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------

typedef PolygonForegroundBase* PolygonForegroundBaseP;

typedef osgIF<PolygonForegroundBase::isNodeCore, CoredNodePtr<PolygonForeground>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::_IRet
    PolygonForegroundNodePtr;

typedef RefPtr<PolygonForegroundPtr> PolygonForegroundRefPtr;

OSG_END_NAMESPACE

#define OSGPOLYGONFOREGROUNDBASE_HEADER_CVSID                                                      \
  "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGPOLYGONFOREGROUNDBASE_H_ */
