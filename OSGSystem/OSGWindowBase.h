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
 **     class Window
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#ifndef _OSGWINDOWBASE_H_
#define _OSGWINDOWBASE_H_
#ifdef __sgi
#pragma once
#endif

#include <OSGConfig.h>
#include <OSGSystemDef.h>

#include <OSGBaseTypes.h>
#include <OSGRefPtr.h>
#include <OSGCoredNodePtr.h>

#include <OSGAttachmentContainer.h> // Parent

#include <OSGUInt16Fields.h>   // Width type
#include <OSGUInt16Fields.h>   // Height type
#include <OSGViewportFields.h> // Port type
#include <OSGBoolFields.h>     // ResizePending type
#include <OSGUInt32Fields.h>   // GlObjectEventCounter type
#include <OSGUInt32Fields.h>   // GlObjectLastRefresh type
#include <OSGUInt32Fields.h>   // GlObjectLastReinitialize type

#include <OSGWindowFields.h>

OSG_BEGIN_NAMESPACE

class Window;
class BinaryDataHandler;

//! \brief Window Base Class.

class OSG_SYSTEMLIB_DLLMAPPING WindowBase : public AttachmentContainer {
 private:
  typedef AttachmentContainer Inherited;

  /*==========================  PUBLIC  =================================*/
 public:
  typedef WindowPtr Ptr;

  enum {
    WidthFieldId                    = Inherited::NextFieldId,
    HeightFieldId                   = WidthFieldId + 1,
    PortFieldId                     = HeightFieldId + 1,
    ResizePendingFieldId            = PortFieldId + 1,
    GlObjectEventCounterFieldId     = ResizePendingFieldId + 1,
    GlObjectLastRefreshFieldId      = GlObjectEventCounterFieldId + 1,
    GlObjectLastReinitializeFieldId = GlObjectLastRefreshFieldId + 1,
    NextFieldId                     = GlObjectLastReinitializeFieldId + 1
  };

  static const OSG::BitVector WidthFieldMask;
  static const OSG::BitVector HeightFieldMask;
  static const OSG::BitVector PortFieldMask;
  static const OSG::BitVector ResizePendingFieldMask;
  static const OSG::BitVector GlObjectEventCounterFieldMask;
  static const OSG::BitVector GlObjectLastRefreshFieldMask;
  static const OSG::BitVector GlObjectLastReinitializeFieldMask;

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

  SFUInt16*      getSFWidth(void);
  SFUInt16*      getSFHeight(void);
  MFViewportPtr* getMFPort(void);
  SFBool*        getSFResizePending(void);

  UInt16&              getWidth(void);
  const UInt16&        getWidth(void) const;
  UInt16&              getHeight(void);
  const UInt16&        getHeight(void) const;
  bool&                getResizePending(void);
  const bool&          getResizePending(void) const;
  ViewportPtr&         getPort(const UInt32 index);
  MFViewportPtr&       getPort(void);
  const MFViewportPtr& getPort(void) const;

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                    Field Set                                 */
  /*! \{                                                                 */

  void setWidth(const UInt16& value);
  void setHeight(const UInt16& value);
  void setResizePending(const bool& value);

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
  /*=========================  PROTECTED  ===============================*/
 protected:
  /*---------------------------------------------------------------------*/
  /*! \name                      Fields                                  */
  /*! \{                                                                 */

  SFUInt16      _sfWidth;
  SFUInt16      _sfHeight;
  MFViewportPtr _mfPort;
  SFBool        _sfResizePending;
  SFUInt32      _sfGlObjectEventCounter;
  MFUInt32      _mfGlObjectLastRefresh;
  MFUInt32      _mfGlObjectLastReinitialize;

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                   Constructors                               */
  /*! \{                                                                 */

  WindowBase(void);
  WindowBase(const WindowBase& source);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                   Destructors                                */
  /*! \{                                                                 */

  virtual ~WindowBase(void);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                    Field Get                                 */
  /*! \{                                                                 */

  SFUInt32* getSFGlObjectEventCounter(void);
  MFUInt32* getMFGlObjectLastRefresh(void);
  MFUInt32* getMFGlObjectLastReinitialize(void);

  UInt32&         getGlObjectEventCounter(void);
  const UInt32&   getGlObjectEventCounter(void) const;
  UInt32&         getGlObjectLastRefresh(UInt32 index);
  MFUInt32&       getGlObjectLastRefresh(void);
  const MFUInt32& getGlObjectLastRefresh(void) const;
  UInt32&         getGlObjectLastReinitialize(UInt32 index);
  MFUInt32&       getGlObjectLastReinitialize(void);
  const MFUInt32& getGlObjectLastReinitialize(void) const;

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                    Field Set                                 */
  /*! \{                                                                 */

  void setGlObjectEventCounter(const UInt32& value);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                       Sync                                   */
  /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
  void executeSyncImpl(WindowBase* pOther, const BitVector& whichField);

  virtual void executeSync(FieldContainer& other, const BitVector& whichField);
#else
  void executeSyncImpl(WindowBase* pOther, const BitVector& whichField, const SyncInfo& sInfo);

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
  void operator=(const WindowBase& source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------

typedef WindowBase* WindowBaseP;

typedef osgIF<WindowBase::isNodeCore, CoredNodePtr<Window>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::_IRet WindowNodePtr;

typedef RefPtr<WindowPtr> WindowRefPtr;

OSG_END_NAMESPACE

#define OSGWINDOWBASE_HEADER_CVSID                                                                 \
  "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGWINDOWBASE_H_ */
