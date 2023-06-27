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
 **     class SimpleTexturedMaterial
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#ifndef _OSGSIMPLETEXTUREDMATERIALBASE_H_
#define _OSGSIMPLETEXTUREDMATERIALBASE_H_
#ifdef __sgi
#pragma once
#endif

#include <OSGConfig.h>
#include <OSGSystemDef.h>

#include <OSGBaseTypes.h>
#include <OSGRefPtr.h>
#include <OSGCoredNodePtr.h>

#include <OSGSimpleMaterial.h> // Parent

#include <OSGImageFields.h>  // Image type
#include <OSGGLenumFields.h> // MinFilter type
#include <OSGGLenumFields.h> // MagFilter type
#include <OSGGLenumFields.h> // EnvMode type
#include <OSGBoolFields.h>   // EnvMap type

#include <OSGSimpleTexturedMaterialFields.h>

OSG_BEGIN_NAMESPACE

class SimpleTexturedMaterial;
class BinaryDataHandler;

//! \brief SimpleTexturedMaterial Base Class.

class OSG_SYSTEMLIB_DLLMAPPING SimpleTexturedMaterialBase : public SimpleMaterial {
 private:
  typedef SimpleMaterial Inherited;

  /*==========================  PUBLIC  =================================*/
 public:
  typedef SimpleTexturedMaterialPtr Ptr;

  enum {
    ImageFieldId     = Inherited::NextFieldId,
    MinFilterFieldId = ImageFieldId + 1,
    MagFilterFieldId = MinFilterFieldId + 1,
    EnvModeFieldId   = MagFilterFieldId + 1,
    EnvMapFieldId    = EnvModeFieldId + 1,
    NextFieldId      = EnvMapFieldId + 1
  };

  static const OSG::BitVector ImageFieldMask;
  static const OSG::BitVector MinFilterFieldMask;
  static const OSG::BitVector MagFilterFieldMask;
  static const OSG::BitVector EnvModeFieldMask;
  static const OSG::BitVector EnvMapFieldMask;

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

  SFImagePtr* getSFImage(void);
  SFGLenum*   getSFMinFilter(void);
  SFGLenum*   getSFMagFilter(void);
  SFGLenum*   getSFEnvMode(void);
  SFBool*     getSFEnvMap(void);

  ImagePtr&       getImage(void);
  const ImagePtr& getImage(void) const;
  GLenum&         getMinFilter(void);
  const GLenum&   getMinFilter(void) const;
  GLenum&         getMagFilter(void);
  const GLenum&   getMagFilter(void) const;
  GLenum&         getEnvMode(void);
  const GLenum&   getEnvMode(void) const;
  bool&           getEnvMap(void);
  const bool&     getEnvMap(void) const;

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                    Field Set                                 */
  /*! \{                                                                 */

  void setImage(const ImagePtr& value);
  void setMinFilter(const GLenum& value);
  void setMagFilter(const GLenum& value);
  void setEnvMode(const GLenum& value);
  void setEnvMap(const bool& value);

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

  static SimpleTexturedMaterialPtr create(void);
  static SimpleTexturedMaterialPtr createEmpty(void);

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

  SFImagePtr _sfImage;
  SFGLenum   _sfMinFilter;
  SFGLenum   _sfMagFilter;
  SFGLenum   _sfEnvMode;
  SFBool     _sfEnvMap;

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                   Constructors                               */
  /*! \{                                                                 */

  SimpleTexturedMaterialBase(void);
  SimpleTexturedMaterialBase(const SimpleTexturedMaterialBase& source);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                   Destructors                                */
  /*! \{                                                                 */

  virtual ~SimpleTexturedMaterialBase(void);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                       Sync                                   */
  /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
  void executeSyncImpl(SimpleTexturedMaterialBase* pOther, const BitVector& whichField);

  virtual void executeSync(FieldContainer& other, const BitVector& whichField);
#else
  void executeSyncImpl(
      SimpleTexturedMaterialBase* pOther, const BitVector& whichField, const SyncInfo& sInfo);

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
  void operator=(const SimpleTexturedMaterialBase& source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------

typedef SimpleTexturedMaterialBase* SimpleTexturedMaterialBaseP;

typedef osgIF<SimpleTexturedMaterialBase::isNodeCore, CoredNodePtr<SimpleTexturedMaterial>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::_IRet
    SimpleTexturedMaterialNodePtr;

typedef RefPtr<SimpleTexturedMaterialPtr> SimpleTexturedMaterialRefPtr;

OSG_END_NAMESPACE

#define OSGSIMPLETEXTUREDMATERIALBASE_HEADER_CVSID                                                 \
  "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGSIMPLETEXTUREDMATERIALBASE_H_ */
