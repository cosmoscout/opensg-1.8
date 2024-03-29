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
 **     class ColorBufferViewport
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#ifndef _OSGCOLORBUFFERVIEWPORTBASE_H_
#define _OSGCOLORBUFFERVIEWPORTBASE_H_
#ifdef __sgi
#pragma once
#endif

#include <OSGConfig.h>
#include <OSGSystemDef.h>

#include <OSGBaseTypes.h>
#include <OSGRefPtr.h>
#include <OSGCoredNodePtr.h>

#include <OSGViewport.h> // Parent

#include <OSGBoolFields.h> // Red type
#include <OSGBoolFields.h> // Blue type
#include <OSGBoolFields.h> // Green type
#include <OSGBoolFields.h> // Alpha type

#include <OSGColorBufferViewportFields.h>

OSG_BEGIN_NAMESPACE

class ColorBufferViewport;
class BinaryDataHandler;

//! \brief ColorBufferViewport Base Class.

class OSG_SYSTEMLIB_DLLMAPPING ColorBufferViewportBase : public Viewport {
 private:
  typedef Viewport Inherited;

  /*==========================  PUBLIC  =================================*/
 public:
  typedef ColorBufferViewportPtr Ptr;

  enum {
    RedFieldId   = Inherited::NextFieldId,
    BlueFieldId  = RedFieldId + 1,
    GreenFieldId = BlueFieldId + 1,
    AlphaFieldId = GreenFieldId + 1,
    NextFieldId  = AlphaFieldId + 1
  };

  static const OSG::BitVector RedFieldMask;
  static const OSG::BitVector BlueFieldMask;
  static const OSG::BitVector GreenFieldMask;
  static const OSG::BitVector AlphaFieldMask;

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

  SFBool* getSFRed(void);
  SFBool* getSFBlue(void);
  SFBool* getSFGreen(void);
  SFBool* getSFAlpha(void);

  bool&       getRed(void);
  const bool& getRed(void) const;
  bool&       getBlue(void);
  const bool& getBlue(void) const;
  bool&       getGreen(void);
  const bool& getGreen(void) const;
  bool&       getAlpha(void);
  const bool& getAlpha(void) const;

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                    Field Set                                 */
  /*! \{                                                                 */

  void setRed(const bool& value);
  void setBlue(const bool& value);
  void setGreen(const bool& value);
  void setAlpha(const bool& value);

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

  static ColorBufferViewportPtr create(void);
  static ColorBufferViewportPtr createEmpty(void);

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

  SFBool _sfRed;
  SFBool _sfBlue;
  SFBool _sfGreen;
  SFBool _sfAlpha;

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                   Constructors                               */
  /*! \{                                                                 */

  ColorBufferViewportBase(void);
  ColorBufferViewportBase(const ColorBufferViewportBase& source);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                   Destructors                                */
  /*! \{                                                                 */

  virtual ~ColorBufferViewportBase(void);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                       Sync                                   */
  /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
  void executeSyncImpl(ColorBufferViewportBase* pOther, const BitVector& whichField);

  virtual void executeSync(FieldContainer& other, const BitVector& whichField);
#else
  void executeSyncImpl(
      ColorBufferViewportBase* pOther, const BitVector& whichField, const SyncInfo& sInfo);

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
  void operator=(const ColorBufferViewportBase& source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------

typedef ColorBufferViewportBase* ColorBufferViewportBaseP;

typedef osgIF<ColorBufferViewportBase::isNodeCore, CoredNodePtr<ColorBufferViewport>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::_IRet
    ColorBufferViewportNodePtr;

typedef RefPtr<ColorBufferViewportPtr> ColorBufferViewportRefPtr;

OSG_END_NAMESPACE

#define OSGCOLORBUFFERVIEWPORTBASE_HEADER_CVSID                                                    \
  "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGCOLORBUFFERVIEWPORTBASE_H_ */
