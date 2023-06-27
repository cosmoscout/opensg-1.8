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
 **     class Billboard
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#ifndef _OSGBILLBOARDBASE_H_
#define _OSGBILLBOARDBASE_H_
#ifdef __sgi
#pragma once
#endif

#include <OSGConfig.h>
#include <OSGSystemDef.h>

#include <OSGBaseTypes.h>
#include <OSGRefPtr.h>
#include <OSGCoredNodePtr.h>

#include <OSGGroup.h> // Parent

#include <OSGVec3fFields.h>  // AxisOfRotation type
#include <OSGBoolFields.h>   // FocusOnCamera type
#include <OSGBoolFields.h>   // AlignToScreen type
#include <OSGReal32Fields.h> // MinAngle type
#include <OSGReal32Fields.h> // MaxAngle type

#include <OSGBillboardFields.h>

OSG_BEGIN_NAMESPACE

class Billboard;
class BinaryDataHandler;

//! \brief Billboard Base Class.

class OSG_SYSTEMLIB_DLLMAPPING BillboardBase : public Group {
 private:
  typedef Group Inherited;

  /*==========================  PUBLIC  =================================*/
 public:
  typedef BillboardPtr Ptr;

  enum {
    AxisOfRotationFieldId = Inherited::NextFieldId,
    FocusOnCameraFieldId  = AxisOfRotationFieldId + 1,
    AlignToScreenFieldId  = FocusOnCameraFieldId + 1,
    MinAngleFieldId       = AlignToScreenFieldId + 1,
    MaxAngleFieldId       = MinAngleFieldId + 1,
    NextFieldId           = MaxAngleFieldId + 1
  };

  static const OSG::BitVector AxisOfRotationFieldMask;
  static const OSG::BitVector FocusOnCameraFieldMask;
  static const OSG::BitVector AlignToScreenFieldMask;
  static const OSG::BitVector MinAngleFieldMask;
  static const OSG::BitVector MaxAngleFieldMask;

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

  SFVec3f*  getSFAxisOfRotation(void);
  SFBool*   getSFFocusOnCamera(void);
  SFBool*   getSFAlignToScreen(void);
  SFReal32* getSFMinAngle(void);
  SFReal32* getSFMaxAngle(void);

  Vec3f&        getAxisOfRotation(void);
  const Vec3f&  getAxisOfRotation(void) const;
  bool&         getFocusOnCamera(void);
  const bool&   getFocusOnCamera(void) const;
  bool&         getAlignToScreen(void);
  const bool&   getAlignToScreen(void) const;
  Real32&       getMinAngle(void);
  const Real32& getMinAngle(void) const;
  Real32&       getMaxAngle(void);
  const Real32& getMaxAngle(void) const;

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                    Field Set                                 */
  /*! \{                                                                 */

  void setAxisOfRotation(const Vec3f& value);
  void setFocusOnCamera(const bool& value);
  void setAlignToScreen(const bool& value);
  void setMinAngle(const Real32& value);
  void setMaxAngle(const Real32& value);

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

  static BillboardPtr create(void);
  static BillboardPtr createEmpty(void);

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

  SFVec3f  _sfAxisOfRotation;
  SFBool   _sfFocusOnCamera;
  SFBool   _sfAlignToScreen;
  SFReal32 _sfMinAngle;
  SFReal32 _sfMaxAngle;

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                   Constructors                               */
  /*! \{                                                                 */

  BillboardBase(void);
  BillboardBase(const BillboardBase& source);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                   Destructors                                */
  /*! \{                                                                 */

  virtual ~BillboardBase(void);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                       Sync                                   */
  /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
  void executeSyncImpl(BillboardBase* pOther, const BitVector& whichField);

  virtual void executeSync(FieldContainer& other, const BitVector& whichField);
#else
  void executeSyncImpl(BillboardBase* pOther, const BitVector& whichField, const SyncInfo& sInfo);

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
  void operator=(const BillboardBase& source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------

typedef BillboardBase* BillboardBaseP;

typedef osgIF<BillboardBase::isNodeCore, CoredNodePtr<Billboard>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::_IRet BillboardNodePtr;

typedef RefPtr<BillboardPtr> BillboardRefPtr;

OSG_END_NAMESPACE

#define OSGBILLBOARDBASE_HEADER_CVSID                                                              \
  "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGBILLBOARDBASE_H_ */
