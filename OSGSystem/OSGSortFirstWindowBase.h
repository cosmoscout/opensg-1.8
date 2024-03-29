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
 **     class SortFirstWindow
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#ifndef _OSGSORTFIRSTWINDOWBASE_H_
#define _OSGSORTFIRSTWINDOWBASE_H_
#ifdef __sgi
#pragma once
#endif

#include <OSGConfig.h>
#include <OSGSystemDef.h>

#include <OSGBaseTypes.h>
#include <OSGRefPtr.h>
#include <OSGCoredNodePtr.h>

#include <OSGClusterWindow.h> // Parent

#include <OSGStringFields.h> // Compression type
#include <OSGUInt32Fields.h> // SubtileSize type
#include <OSGBoolFields.h>   // Compose type
#include <OSGUInt32Fields.h> // Region type
#include <OSGBoolFields.h>   // UseFaceDistribution type

#include <OSGSortFirstWindowFields.h>

OSG_BEGIN_NAMESPACE

class SortFirstWindow;
class BinaryDataHandler;

//! \brief SortFirstWindow Base Class.

class OSG_SYSTEMLIB_DLLMAPPING SortFirstWindowBase : public ClusterWindow {
 private:
  typedef ClusterWindow Inherited;

  /*==========================  PUBLIC  =================================*/
 public:
  typedef SortFirstWindowPtr Ptr;

  enum {
    CompressionFieldId         = Inherited::NextFieldId,
    SubtileSizeFieldId         = CompressionFieldId + 1,
    ComposeFieldId             = SubtileSizeFieldId + 1,
    RegionFieldId              = ComposeFieldId + 1,
    UseFaceDistributionFieldId = RegionFieldId + 1,
    NextFieldId                = UseFaceDistributionFieldId + 1
  };

  static const OSG::BitVector CompressionFieldMask;
  static const OSG::BitVector SubtileSizeFieldMask;
  static const OSG::BitVector ComposeFieldMask;
  static const OSG::BitVector RegionFieldMask;
  static const OSG::BitVector UseFaceDistributionFieldMask;

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

  SFString* getSFCompression(void);
  SFUInt32* getSFSubtileSize(void);
  SFBool*   getSFCompose(void);
  MFUInt32* getMFRegion(void);
  SFBool*   getSFUseFaceDistribution(void);

  std::string&       getCompression(void);
  const std::string& getCompression(void) const;
  UInt32&            getSubtileSize(void);
  const UInt32&      getSubtileSize(void) const;
  bool&              getCompose(void);
  const bool&        getCompose(void) const;
  bool&              getUseFaceDistribution(void);
  const bool&        getUseFaceDistribution(void) const;
  UInt32&            getRegion(const UInt32 index);
  MFUInt32&          getRegion(void);
  const MFUInt32&    getRegion(void) const;

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                    Field Set                                 */
  /*! \{                                                                 */

  void setCompression(const std::string& value);
  void setSubtileSize(const UInt32& value);
  void setCompose(const bool& value);
  void setUseFaceDistribution(const bool& value);

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

  static SortFirstWindowPtr create(void);
  static SortFirstWindowPtr createEmpty(void);

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

  SFString _sfCompression;
  SFUInt32 _sfSubtileSize;
  SFBool   _sfCompose;
  MFUInt32 _mfRegion;
  SFBool   _sfUseFaceDistribution;

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                   Constructors                               */
  /*! \{                                                                 */

  SortFirstWindowBase(void);
  SortFirstWindowBase(const SortFirstWindowBase& source);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                   Destructors                                */
  /*! \{                                                                 */

  virtual ~SortFirstWindowBase(void);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                       Sync                                   */
  /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
  void executeSyncImpl(SortFirstWindowBase* pOther, const BitVector& whichField);

  virtual void executeSync(FieldContainer& other, const BitVector& whichField);
#else
  void executeSyncImpl(
      SortFirstWindowBase* pOther, const BitVector& whichField, const SyncInfo& sInfo);

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
  void operator=(const SortFirstWindowBase& source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------

typedef SortFirstWindowBase* SortFirstWindowBaseP;

typedef osgIF<SortFirstWindowBase::isNodeCore, CoredNodePtr<SortFirstWindow>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::_IRet
    SortFirstWindowNodePtr;

typedef RefPtr<SortFirstWindowPtr> SortFirstWindowRefPtr;

OSG_END_NAMESPACE

#define OSGSORTFIRSTWINDOWBASE_HEADER_CVSID                                                        \
  "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGSORTFIRSTWINDOWBASE_H_ */
