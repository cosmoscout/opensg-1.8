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
 **     class ProgramChunk
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#ifndef _OSGPROGRAMCHUNKBASE_H_
#define _OSGPROGRAMCHUNKBASE_H_
#ifdef __sgi
#pragma once
#endif

#include <OSGConfig.h>
#include <OSGSystemDef.h>

#include <OSGBaseTypes.h>
#include <OSGRefPtr.h>
#include <OSGCoredNodePtr.h>

#include <OSGStateChunk.h> // Parent

#include <OSGStringFields.h> // Program type
#include <OSGVec4fFields.h>  // ParamValues type
#include <OSGStringFields.h> // ParamNames type
#include <OSGUInt32Fields.h> // GLId type

#include <OSGProgramChunkFields.h>

OSG_BEGIN_NAMESPACE

class ProgramChunk;
class BinaryDataHandler;

//! \brief ProgramChunk Base Class.

class OSG_SYSTEMLIB_DLLMAPPING ProgramChunkBase : public StateChunk {
 private:
  typedef StateChunk Inherited;

  /*==========================  PUBLIC  =================================*/
 public:
  typedef ProgramChunkPtr Ptr;

  enum {
    ProgramFieldId     = Inherited::NextFieldId,
    ParamValuesFieldId = ProgramFieldId + 1,
    ParamNamesFieldId  = ParamValuesFieldId + 1,
    GLIdFieldId        = ParamNamesFieldId + 1,
    NextFieldId        = GLIdFieldId + 1
  };

  static const OSG::BitVector ProgramFieldMask;
  static const OSG::BitVector ParamValuesFieldMask;
  static const OSG::BitVector ParamNamesFieldMask;
  static const OSG::BitVector GLIdFieldMask;

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

  SFString* getSFProgram(void);
  MFVec4f*  getMFParamValues(void);
  MFString* getMFParamNames(void);

  std::string&       getProgram(void);
  const std::string& getProgram(void) const;
  Vec4f&             getParamValues(const UInt32 index);
  MFVec4f&           getParamValues(void);
  const MFVec4f&     getParamValues(void) const;
  std::string&       getParamNames(const UInt32 index);
  MFString&          getParamNames(void);
  const MFString&    getParamNames(void) const;

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                    Field Set                                 */
  /*! \{                                                                 */

  void setProgram(const std::string& value);

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

  SFString _sfProgram;
  MFVec4f  _mfParamValues;
  MFString _mfParamNames;
  SFUInt32 _sfGLId;

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                   Constructors                               */
  /*! \{                                                                 */

  ProgramChunkBase(void);
  ProgramChunkBase(const ProgramChunkBase& source);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                   Destructors                                */
  /*! \{                                                                 */

  virtual ~ProgramChunkBase(void);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                    Field Get                                 */
  /*! \{                                                                 */

  SFUInt32* getSFGLId(void);

  UInt32&       getGLId(void);
  const UInt32& getGLId(void) const;

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                    Field Set                                 */
  /*! \{                                                                 */

  void setGLId(const UInt32& value);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                       Sync                                   */
  /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
  void executeSyncImpl(ProgramChunkBase* pOther, const BitVector& whichField);

  virtual void executeSync(FieldContainer& other, const BitVector& whichField);
#else
  void executeSyncImpl(
      ProgramChunkBase* pOther, const BitVector& whichField, const SyncInfo& sInfo);

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
  void operator=(const ProgramChunkBase& source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------

typedef ProgramChunkBase* ProgramChunkBaseP;

typedef osgIF<ProgramChunkBase::isNodeCore, CoredNodePtr<ProgramChunk>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::_IRet ProgramChunkNodePtr;

typedef RefPtr<ProgramChunkPtr> ProgramChunkRefPtr;

OSG_END_NAMESPACE

#define OSGPROGRAMCHUNKBASE_HEADER_CVSID                                                           \
  "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGPROGRAMCHUNKBASE_H_ */
