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
 **     class SimpleStatisticsForeground
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#ifndef _OSGSIMPLESTATISTICSFOREGROUNDBASE_H_
#define _OSGSIMPLESTATISTICSFOREGROUNDBASE_H_
#ifdef __sgi
#pragma once
#endif

#include <OSGConfig.h>
#include <OSGSystemDef.h>

#include <OSGBaseTypes.h>
#include <OSGRefPtr.h>
#include <OSGCoredNodePtr.h>

#include <OSGStatisticsForeground.h> // Parent

#include <OSGStringFields.h>  // Formats type
#include <OSGReal32Fields.h>  // Size type
#include <OSGColor4fFields.h> // Color type
#include <OSGColor4fFields.h> // ShadowColor type
#include <OSGColor4fFields.h> // BgColor type
#include <OSGStringFields.h>  // Family type
#include <OSGVec2fFields.h>   // ShadowOffset type
#include <OSGUInt8Fields.h>   // HorizontalAlign type
#include <OSGUInt8Fields.h>   // VerticalAlign type
#include <OSGColor4fFields.h> // BorderColor type
#include <OSGVec2fFields.h>   // BorderOffset type
#include <OSGVec2fFields.h>   // TextMargin type

#include <OSGSimpleStatisticsForegroundFields.h>

OSG_BEGIN_NAMESPACE

class SimpleStatisticsForeground;
class BinaryDataHandler;

//! \brief SimpleStatisticsForeground Base Class.

class OSG_SYSTEMLIB_DLLMAPPING SimpleStatisticsForegroundBase : public StatisticsForeground {
 private:
  typedef StatisticsForeground Inherited;

  /*==========================  PUBLIC  =================================*/
 public:
  typedef SimpleStatisticsForegroundPtr Ptr;

  enum {
    FormatsFieldId         = Inherited::NextFieldId,
    SizeFieldId            = FormatsFieldId + 1,
    ColorFieldId           = SizeFieldId + 1,
    ShadowColorFieldId     = ColorFieldId + 1,
    BgColorFieldId         = ShadowColorFieldId + 1,
    FamilyFieldId          = BgColorFieldId + 1,
    ShadowOffsetFieldId    = FamilyFieldId + 1,
    HorizontalAlignFieldId = ShadowOffsetFieldId + 1,
    VerticalAlignFieldId   = HorizontalAlignFieldId + 1,
    BorderColorFieldId     = VerticalAlignFieldId + 1,
    BorderOffsetFieldId    = BorderColorFieldId + 1,
    TextMarginFieldId      = BorderOffsetFieldId + 1,
    NextFieldId            = TextMarginFieldId + 1
  };

  static const OSG::BitVector FormatsFieldMask;
  static const OSG::BitVector SizeFieldMask;
  static const OSG::BitVector ColorFieldMask;
  static const OSG::BitVector ShadowColorFieldMask;
  static const OSG::BitVector BgColorFieldMask;
  static const OSG::BitVector FamilyFieldMask;
  static const OSG::BitVector ShadowOffsetFieldMask;
  static const OSG::BitVector HorizontalAlignFieldMask;
  static const OSG::BitVector VerticalAlignFieldMask;
  static const OSG::BitVector BorderColorFieldMask;
  static const OSG::BitVector BorderOffsetFieldMask;
  static const OSG::BitVector TextMarginFieldMask;

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

  MFString*  getMFFormats(void);
  SFReal32*  getSFSize(void);
  SFColor4f* getSFColor(void);
  SFColor4f* getSFShadowColor(void);
  SFColor4f* getSFBgColor(void);
  SFString*  getSFFamily(void);
  SFVec2f*   getSFShadowOffset(void);
  SFUInt8*   getSFHorizontalAlign(void);
  SFUInt8*   getSFVerticalAlign(void);
  SFColor4f* getSFBorderColor(void);
  SFVec2f*   getSFBorderOffset(void);
  SFVec2f*   getSFTextMargin(void);

  Real32&            getSize(void);
  const Real32&      getSize(void) const;
  Color4f&           getColor(void);
  const Color4f&     getColor(void) const;
  Color4f&           getShadowColor(void);
  const Color4f&     getShadowColor(void) const;
  Color4f&           getBgColor(void);
  const Color4f&     getBgColor(void) const;
  std::string&       getFamily(void);
  const std::string& getFamily(void) const;
  Vec2f&             getShadowOffset(void);
  const Vec2f&       getShadowOffset(void) const;
  UInt8&             getHorizontalAlign(void);
  const UInt8&       getHorizontalAlign(void) const;
  UInt8&             getVerticalAlign(void);
  const UInt8&       getVerticalAlign(void) const;
  Color4f&           getBorderColor(void);
  const Color4f&     getBorderColor(void) const;
  Vec2f&             getBorderOffset(void);
  const Vec2f&       getBorderOffset(void) const;
  Vec2f&             getTextMargin(void);
  const Vec2f&       getTextMargin(void) const;
  std::string&       getFormats(const UInt32 index);
  MFString&          getFormats(void);
  const MFString&    getFormats(void) const;

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                    Field Set                                 */
  /*! \{                                                                 */

  void setSize(const Real32& value);
  void setColor(const Color4f& value);
  void setShadowColor(const Color4f& value);
  void setBgColor(const Color4f& value);
  void setFamily(const std::string& value);
  void setShadowOffset(const Vec2f& value);
  void setHorizontalAlign(const UInt8& value);
  void setVerticalAlign(const UInt8& value);
  void setBorderColor(const Color4f& value);
  void setBorderOffset(const Vec2f& value);
  void setTextMargin(const Vec2f& value);

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

  static SimpleStatisticsForegroundPtr create(void);
  static SimpleStatisticsForegroundPtr createEmpty(void);

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

  MFString  _mfFormats;
  SFReal32  _sfSize;
  SFColor4f _sfColor;
  SFColor4f _sfShadowColor;
  SFColor4f _sfBgColor;
  SFString  _sfFamily;
  SFVec2f   _sfShadowOffset;
  SFUInt8   _sfHorizontalAlign;
  SFUInt8   _sfVerticalAlign;
  SFColor4f _sfBorderColor;
  SFVec2f   _sfBorderOffset;
  SFVec2f   _sfTextMargin;

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                   Constructors                               */
  /*! \{                                                                 */

  SimpleStatisticsForegroundBase(void);
  SimpleStatisticsForegroundBase(const SimpleStatisticsForegroundBase& source);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                   Destructors                                */
  /*! \{                                                                 */

  virtual ~SimpleStatisticsForegroundBase(void);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                       Sync                                   */
  /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
  void executeSyncImpl(SimpleStatisticsForegroundBase* pOther, const BitVector& whichField);

  virtual void executeSync(FieldContainer& other, const BitVector& whichField);
#else
  void executeSyncImpl(
      SimpleStatisticsForegroundBase* pOther, const BitVector& whichField, const SyncInfo& sInfo);

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
  void operator=(const SimpleStatisticsForegroundBase& source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------

typedef SimpleStatisticsForegroundBase* SimpleStatisticsForegroundBaseP;

typedef osgIF<SimpleStatisticsForegroundBase::isNodeCore, CoredNodePtr<SimpleStatisticsForeground>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::_IRet
    SimpleStatisticsForegroundNodePtr;

typedef RefPtr<SimpleStatisticsForegroundPtr> SimpleStatisticsForegroundRefPtr;

OSG_END_NAMESPACE

#define OSGSIMPLESTATISTICSFOREGROUNDBASE_HEADER_CVSID                                             \
  "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGSIMPLESTATISTICSFOREGROUNDBASE_H_ */
