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
 **     class DepthClearBackground
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#ifndef _OSGDEPTHCLEARBACKGROUNDBASE_H_
#define _OSGDEPTHCLEARBACKGROUNDBASE_H_
#ifdef __sgi
#pragma once
#endif

#include <OSGConfig.h>
#include <OSGSystemDef.h>

#include <OSGBaseTypes.h>
#include <OSGRefPtr.h>
#include <OSGCoredNodePtr.h>

#include <OSGBackground.h> // Parent

#include <OSGBoolFields.h>   // ClearDepth type
#include <OSGReal32Fields.h> // Depth type
#include <OSGInt32Fields.h>  // ClearStencilBit type

#include <OSGDepthClearBackgroundFields.h>

OSG_BEGIN_NAMESPACE

class DepthClearBackground;
class BinaryDataHandler;

//! \brief DepthClearBackground Base Class.

class OSG_SYSTEMLIB_DLLMAPPING DepthClearBackgroundBase : public Background {
 private:
  typedef Background Inherited;

  /*==========================  PUBLIC  =================================*/
 public:
  typedef DepthClearBackgroundPtr Ptr;

  enum {
    ClearDepthFieldId      = Inherited::NextFieldId,
    DepthFieldId           = ClearDepthFieldId + 1,
    ClearStencilBitFieldId = DepthFieldId + 1,
    NextFieldId            = ClearStencilBitFieldId + 1
  };

  static const OSG::BitVector ClearDepthFieldMask;
  static const OSG::BitVector DepthFieldMask;
  static const OSG::BitVector ClearStencilBitFieldMask;

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

  SFBool*   getSFClearDepth(void);
  SFReal32* getSFDepth(void);
  SFInt32*  getSFClearStencilBit(void);

  bool&         getClearDepth(void);
  const bool&   getClearDepth(void) const;
  Real32&       getDepth(void);
  const Real32& getDepth(void) const;
  Int32&        getClearStencilBit(void);
  const Int32&  getClearStencilBit(void) const;

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                    Field Set                                 */
  /*! \{                                                                 */

  void setClearDepth(const bool& value);
  void setDepth(const Real32& value);
  void setClearStencilBit(const Int32& value);

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

  static DepthClearBackgroundPtr create(void);
  static DepthClearBackgroundPtr createEmpty(void);

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

  SFBool   _sfClearDepth;
  SFReal32 _sfDepth;
  SFInt32  _sfClearStencilBit;

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                   Constructors                               */
  /*! \{                                                                 */

  DepthClearBackgroundBase(void);
  DepthClearBackgroundBase(const DepthClearBackgroundBase& source);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                   Destructors                                */
  /*! \{                                                                 */

  virtual ~DepthClearBackgroundBase(void);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                       Sync                                   */
  /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
  void executeSyncImpl(DepthClearBackgroundBase* pOther, const BitVector& whichField);

  virtual void executeSync(FieldContainer& other, const BitVector& whichField);
#else
  void executeSyncImpl(
      DepthClearBackgroundBase* pOther, const BitVector& whichField, const SyncInfo& sInfo);

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
  void operator=(const DepthClearBackgroundBase& source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------

typedef DepthClearBackgroundBase* DepthClearBackgroundBaseP;

typedef osgIF<DepthClearBackgroundBase::isNodeCore, CoredNodePtr<DepthClearBackground>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::_IRet
    DepthClearBackgroundNodePtr;

typedef RefPtr<DepthClearBackgroundPtr> DepthClearBackgroundRefPtr;

OSG_END_NAMESPACE

#define OSGDEPTHCLEARBACKGROUNDBASE_HEADER_CVSID                                                   \
  "@(#)$Id: OSGDepthClearBackgroundBase.h,v 1.9 2007/05/10 15:57:23 yjung Exp $"

#endif /* _OSGDEPTHCLEARBACKGROUNDBASE_H_ */
