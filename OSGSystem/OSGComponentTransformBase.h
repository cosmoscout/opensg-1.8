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
 **     class ComponentTransform
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#ifndef _OSGCOMPONENTTRANSFORMBASE_H_
#define _OSGCOMPONENTTRANSFORMBASE_H_
#ifdef __sgi
#pragma once
#endif

#include <OSGConfig.h>
#include <OSGSystemDef.h>

#include <OSGBaseTypes.h>
#include <OSGRefPtr.h>
#include <OSGCoredNodePtr.h>

#include <OSGTransform.h> // Parent

#include <OSGVec3fFields.h>      // Center type
#include <OSGQuaternionFields.h> // Rotation type
#include <OSGVec3fFields.h>      // Scale type
#include <OSGQuaternionFields.h> // ScaleOrientation type
#include <OSGVec3fFields.h>      // Translation type

#include <OSGComponentTransformFields.h>

OSG_BEGIN_NAMESPACE

class ComponentTransform;
class BinaryDataHandler;

//! \brief ComponentTransform Base Class.

class OSG_SYSTEMLIB_DLLMAPPING ComponentTransformBase : public Transform {
 private:
  typedef Transform Inherited;

  /*==========================  PUBLIC  =================================*/
 public:
  typedef ComponentTransformPtr Ptr;

  enum {
    CenterFieldId           = Inherited::NextFieldId,
    RotationFieldId         = CenterFieldId + 1,
    ScaleFieldId            = RotationFieldId + 1,
    ScaleOrientationFieldId = ScaleFieldId + 1,
    TranslationFieldId      = ScaleOrientationFieldId + 1,
    NextFieldId             = TranslationFieldId + 1
  };

  static const OSG::BitVector CenterFieldMask;
  static const OSG::BitVector RotationFieldMask;
  static const OSG::BitVector ScaleFieldMask;
  static const OSG::BitVector ScaleOrientationFieldMask;
  static const OSG::BitVector TranslationFieldMask;

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

  SFVec3f*      getSFCenter(void);
  SFQuaternion* getSFRotation(void);
  SFVec3f*      getSFScale(void);
  SFQuaternion* getSFScaleOrientation(void);
  SFVec3f*      getSFTranslation(void);

  Vec3f&            getCenter(void);
  const Vec3f&      getCenter(void) const;
  Quaternion&       getRotation(void);
  const Quaternion& getRotation(void) const;
  Vec3f&            getScale(void);
  const Vec3f&      getScale(void) const;
  Quaternion&       getScaleOrientation(void);
  const Quaternion& getScaleOrientation(void) const;
  Vec3f&            getTranslation(void);
  const Vec3f&      getTranslation(void) const;

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                    Field Set                                 */
  /*! \{                                                                 */

  void setCenter(const Vec3f& value);
  void setRotation(const Quaternion& value);
  void setScale(const Vec3f& value);
  void setScaleOrientation(const Quaternion& value);
  void setTranslation(const Vec3f& value);

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

  static ComponentTransformPtr create(void);
  static ComponentTransformPtr createEmpty(void);

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

  SFVec3f      _sfCenter;
  SFQuaternion _sfRotation;
  SFVec3f      _sfScale;
  SFQuaternion _sfScaleOrientation;
  SFVec3f      _sfTranslation;

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                   Constructors                               */
  /*! \{                                                                 */

  ComponentTransformBase(void);
  ComponentTransformBase(const ComponentTransformBase& source);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                   Destructors                                */
  /*! \{                                                                 */

  virtual ~ComponentTransformBase(void);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                       Sync                                   */
  /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
  void executeSyncImpl(ComponentTransformBase* pOther, const BitVector& whichField);

  virtual void executeSync(FieldContainer& other, const BitVector& whichField);
#else
  void executeSyncImpl(
      ComponentTransformBase* pOther, const BitVector& whichField, const SyncInfo& sInfo);

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
  void operator=(const ComponentTransformBase& source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------

typedef ComponentTransformBase* ComponentTransformBaseP;

typedef osgIF<ComponentTransformBase::isNodeCore, CoredNodePtr<ComponentTransform>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::_IRet
    ComponentTransformNodePtr;

typedef RefPtr<ComponentTransformPtr> ComponentTransformRefPtr;

OSG_END_NAMESPACE

#define OSGCOMPONENTTRANSFORMBASE_HEADER_CVSID                                                     \
  "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGCOMPONENTTRANSFORMBASE_H_ */
