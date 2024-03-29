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
 **     class DistortionDisplayFilter
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#ifndef _OSGDISTORTIONDISPLAYFILTERBASE_H_
#define _OSGDISTORTIONDISPLAYFILTERBASE_H_
#ifdef __sgi
#pragma once
#endif

#include <OSGConfig.h>
#include <OSGSystemDef.h>

#include <OSGBaseTypes.h>
#include <OSGRefPtr.h>
#include <OSGCoredNodePtr.h>

#include <OSGDisplayFilter.h> // Parent

#include <OSGUInt32Fields.h> // Rows type
#include <OSGUInt32Fields.h> // Columns type
#include <OSGVec2fFields.h>  // Positions type

#include <OSGDistortionDisplayFilterFields.h>

OSG_BEGIN_NAMESPACE

class DistortionDisplayFilter;
class BinaryDataHandler;

//! \brief DistortionDisplayFilter Base Class.

class OSG_SYSTEMLIB_DLLMAPPING DistortionDisplayFilterBase : public DisplayFilter {
 private:
  typedef DisplayFilter Inherited;

  /*==========================  PUBLIC  =================================*/
 public:
  typedef DistortionDisplayFilterPtr Ptr;

  enum {
    RowsFieldId      = Inherited::NextFieldId,
    ColumnsFieldId   = RowsFieldId + 1,
    PositionsFieldId = ColumnsFieldId + 1,
    NextFieldId      = PositionsFieldId + 1
  };

  static const OSG::BitVector RowsFieldMask;
  static const OSG::BitVector ColumnsFieldMask;
  static const OSG::BitVector PositionsFieldMask;

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

  SFUInt32* getSFRows(void);
  SFUInt32* getSFColumns(void);
  MFVec2f*  getMFPositions(void);

  UInt32&        getRows(void);
  const UInt32&  getRows(void) const;
  UInt32&        getColumns(void);
  const UInt32&  getColumns(void) const;
  Vec2f&         getPositions(const UInt32 index);
  MFVec2f&       getPositions(void);
  const MFVec2f& getPositions(void) const;

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                    Field Set                                 */
  /*! \{                                                                 */

  void setRows(const UInt32& value);
  void setColumns(const UInt32& value);

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

  static DistortionDisplayFilterPtr create(void);
  static DistortionDisplayFilterPtr createEmpty(void);

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

  SFUInt32 _sfRows;
  SFUInt32 _sfColumns;
  MFVec2f  _mfPositions;

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                   Constructors                               */
  /*! \{                                                                 */

  DistortionDisplayFilterBase(void);
  DistortionDisplayFilterBase(const DistortionDisplayFilterBase& source);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                   Destructors                                */
  /*! \{                                                                 */

  virtual ~DistortionDisplayFilterBase(void);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                       Sync                                   */
  /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
  void executeSyncImpl(DistortionDisplayFilterBase* pOther, const BitVector& whichField);

  virtual void executeSync(FieldContainer& other, const BitVector& whichField);
#else
  void executeSyncImpl(
      DistortionDisplayFilterBase* pOther, const BitVector& whichField, const SyncInfo& sInfo);

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
  void operator=(const DistortionDisplayFilterBase& source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------

typedef DistortionDisplayFilterBase* DistortionDisplayFilterBaseP;

typedef osgIF<DistortionDisplayFilterBase::isNodeCore, CoredNodePtr<DistortionDisplayFilter>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::_IRet
    DistortionDisplayFilterNodePtr;

typedef RefPtr<DistortionDisplayFilterPtr> DistortionDisplayFilterRefPtr;

OSG_END_NAMESPACE

#define OSGDISTORTIONDISPLAYFILTERBASE_HEADER_CVSID                                                \
  "@(#)$Id: FCBaseTemplate_h.h,v 1.38 2005/07/08 06:37:35 vossg Exp $"

#endif /* _OSGDISTORTIONDISPLAYFILTERBASE_H_ */
