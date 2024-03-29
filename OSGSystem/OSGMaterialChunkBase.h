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
 **     class MaterialChunk
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#ifndef _OSGMATERIALCHUNKBASE_H_
#define _OSGMATERIALCHUNKBASE_H_
#ifdef __sgi
#pragma once
#endif

#include <OSGConfig.h>
#include <OSGSystemDef.h>

#include <OSGBaseTypes.h>
#include <OSGRefPtr.h>
#include <OSGCoredNodePtr.h>

#include <OSGStateChunk.h> // Parent

#include <OSGColor4fFields.h> // Diffuse type
#include <OSGColor4fFields.h> // Ambient type
#include <OSGColor4fFields.h> // Specular type
#include <OSGColor4fFields.h> // Emission type
#include <OSGReal32Fields.h>  // Shininess type
#include <OSGBoolFields.h>    // Lit type
#include <OSGGLenumFields.h>  // ColorMaterial type
#include <OSGBoolFields.h>    // BackMaterial type
#include <OSGColor4fFields.h> // BackDiffuse type
#include <OSGColor4fFields.h> // BackAmbient type
#include <OSGColor4fFields.h> // BackSpecular type
#include <OSGColor4fFields.h> // BackEmission type
#include <OSGReal32Fields.h>  // BackShininess type
#include <OSGGLenumFields.h>  // BackColorMaterial type

#include <OSGMaterialChunkFields.h>

OSG_BEGIN_NAMESPACE

class MaterialChunk;
class BinaryDataHandler;

//! \brief MaterialChunk Base Class.

class OSG_SYSTEMLIB_DLLMAPPING MaterialChunkBase : public StateChunk {
 private:
  typedef StateChunk Inherited;

  /*==========================  PUBLIC  =================================*/
 public:
  typedef MaterialChunkPtr Ptr;

  enum {
    DiffuseFieldId           = Inherited::NextFieldId,
    AmbientFieldId           = DiffuseFieldId + 1,
    SpecularFieldId          = AmbientFieldId + 1,
    EmissionFieldId          = SpecularFieldId + 1,
    ShininessFieldId         = EmissionFieldId + 1,
    LitFieldId               = ShininessFieldId + 1,
    ColorMaterialFieldId     = LitFieldId + 1,
    BackMaterialFieldId      = ColorMaterialFieldId + 1,
    BackDiffuseFieldId       = BackMaterialFieldId + 1,
    BackAmbientFieldId       = BackDiffuseFieldId + 1,
    BackSpecularFieldId      = BackAmbientFieldId + 1,
    BackEmissionFieldId      = BackSpecularFieldId + 1,
    BackShininessFieldId     = BackEmissionFieldId + 1,
    BackColorMaterialFieldId = BackShininessFieldId + 1,
    NextFieldId              = BackColorMaterialFieldId + 1
  };

  static const OSG::BitVector DiffuseFieldMask;
  static const OSG::BitVector AmbientFieldMask;
  static const OSG::BitVector SpecularFieldMask;
  static const OSG::BitVector EmissionFieldMask;
  static const OSG::BitVector ShininessFieldMask;
  static const OSG::BitVector LitFieldMask;
  static const OSG::BitVector ColorMaterialFieldMask;
  static const OSG::BitVector BackMaterialFieldMask;
  static const OSG::BitVector BackDiffuseFieldMask;
  static const OSG::BitVector BackAmbientFieldMask;
  static const OSG::BitVector BackSpecularFieldMask;
  static const OSG::BitVector BackEmissionFieldMask;
  static const OSG::BitVector BackShininessFieldMask;
  static const OSG::BitVector BackColorMaterialFieldMask;

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

  SFColor4f* getSFDiffuse(void);
  SFColor4f* getSFAmbient(void);
  SFColor4f* getSFSpecular(void);
  SFColor4f* getSFEmission(void);
  SFReal32*  getSFShininess(void);
  SFBool*    getSFLit(void);
  SFGLenum*  getSFColorMaterial(void);
  SFBool*    getSFBackMaterial(void);
  SFColor4f* getSFBackDiffuse(void);
  SFColor4f* getSFBackAmbient(void);
  SFColor4f* getSFBackSpecular(void);
  SFColor4f* getSFBackEmission(void);
  SFReal32*  getSFBackShininess(void);
  SFGLenum*  getSFBackColorMaterial(void);

  Color4f&       getDiffuse(void);
  const Color4f& getDiffuse(void) const;
  Color4f&       getAmbient(void);
  const Color4f& getAmbient(void) const;
  Color4f&       getSpecular(void);
  const Color4f& getSpecular(void) const;
  Color4f&       getEmission(void);
  const Color4f& getEmission(void) const;
  Real32&        getShininess(void);
  const Real32&  getShininess(void) const;
  bool&          getLit(void);
  const bool&    getLit(void) const;
  GLenum&        getColorMaterial(void);
  const GLenum&  getColorMaterial(void) const;
  bool&          getBackMaterial(void);
  const bool&    getBackMaterial(void) const;
  Color4f&       getBackDiffuse(void);
  const Color4f& getBackDiffuse(void) const;
  Color4f&       getBackAmbient(void);
  const Color4f& getBackAmbient(void) const;
  Color4f&       getBackSpecular(void);
  const Color4f& getBackSpecular(void) const;
  Color4f&       getBackEmission(void);
  const Color4f& getBackEmission(void) const;
  Real32&        getBackShininess(void);
  const Real32&  getBackShininess(void) const;
  GLenum&        getBackColorMaterial(void);
  const GLenum&  getBackColorMaterial(void) const;

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                    Field Set                                 */
  /*! \{                                                                 */

  void setDiffuse(const Color4f& value);
  void setAmbient(const Color4f& value);
  void setSpecular(const Color4f& value);
  void setEmission(const Color4f& value);
  void setShininess(const Real32& value);
  void setLit(const bool& value);
  void setColorMaterial(const GLenum& value);
  void setBackMaterial(const bool& value);
  void setBackDiffuse(const Color4f& value);
  void setBackAmbient(const Color4f& value);
  void setBackSpecular(const Color4f& value);
  void setBackEmission(const Color4f& value);
  void setBackShininess(const Real32& value);
  void setBackColorMaterial(const GLenum& value);

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

  static MaterialChunkPtr create(void);
  static MaterialChunkPtr createEmpty(void);

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

  SFColor4f _sfDiffuse;
  SFColor4f _sfAmbient;
  SFColor4f _sfSpecular;
  SFColor4f _sfEmission;
  SFReal32  _sfShininess;
  SFBool    _sfLit;
  SFGLenum  _sfColorMaterial;
  SFBool    _sfBackMaterial;
  SFColor4f _sfBackDiffuse;
  SFColor4f _sfBackAmbient;
  SFColor4f _sfBackSpecular;
  SFColor4f _sfBackEmission;
  SFReal32  _sfBackShininess;
  SFGLenum  _sfBackColorMaterial;

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                   Constructors                               */
  /*! \{                                                                 */

  MaterialChunkBase(void);
  MaterialChunkBase(const MaterialChunkBase& source);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                   Destructors                                */
  /*! \{                                                                 */

  virtual ~MaterialChunkBase(void);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                       Sync                                   */
  /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
  void executeSyncImpl(MaterialChunkBase* pOther, const BitVector& whichField);

  virtual void executeSync(FieldContainer& other, const BitVector& whichField);
#else
  void executeSyncImpl(
      MaterialChunkBase* pOther, const BitVector& whichField, const SyncInfo& sInfo);

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
  void operator=(const MaterialChunkBase& source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------

typedef MaterialChunkBase* MaterialChunkBaseP;

typedef osgIF<MaterialChunkBase::isNodeCore, CoredNodePtr<MaterialChunk>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::_IRet MaterialChunkNodePtr;

typedef RefPtr<MaterialChunkPtr> MaterialChunkRefPtr;

OSG_END_NAMESPACE

#define OSGMATERIALCHUNKBASE_HEADER_CVSID                                                          \
  "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGMATERIALCHUNKBASE_H_ */
