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
 *****************************************************************************
\*****************************************************************************/

#ifndef _OSGTEXTURETRANSFORMCHUNKFIELDS_H_
#define _OSGTEXTURETRANSFORMCHUNKFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include <OSGConfig.h>

#include <OSGFieldContainerPtr.h>
#include <OSGNodeCoreFieldDataType.h>
#include <OSGSystemDef.h>

#include <OSGTransformChunkFields.h>

OSG_BEGIN_NAMESPACE

class TextureTransformChunk;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! TextureTransformChunkPtr

typedef FCPtr<TransformChunkPtr, TextureTransformChunk> TextureTransformChunkPtr;

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpSystemFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldDataTraits<TextureTransformChunkPtr>
    : public FieldTraitsRecurseMapper<TextureTransformChunkPtr, true> {
  static DataType _type;

  enum { StringConvertable = 0x00 };
  enum { bHasParent = 0x01 };

  static DataType& getType(void) {
    return _type;
  }

  static const char* getSName(void) {
    return "SFTextureTransformChunkPtr";
  }
  static const char* getMName(void) {
    return "MFTextureTransformChunkPtr";
  }
};

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsRecurseMapper<TextureTransformChunkPtr, true>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpSystemFieldSingle */

typedef SField<TextureTransformChunkPtr> SFTextureTransformChunkPtr;
#endif

#ifndef OSG_COMPILETEXTURETRANSFORMCHUNKINST
OSG_DLLEXPORT_DECL1(SField, TextureTransformChunkPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING)
#endif

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpSystemFieldMulti */

typedef MField<TextureTransformChunkPtr> MFTextureTransformChunkPtr;
#endif

#ifndef OSG_COMPILETEXTURETRANSFORMCHUNKINST
OSG_DLLEXPORT_DECL1(MField, TextureTransformChunkPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING)
#endif

OSG_END_NAMESPACE

#define OSGTEXTURETRANSFORMCHUNKFIELDS_HEADER_CVSID                                                \
  "@(#)$Id: FCFieldsTemplate_h.h,v 1.25 2005/04/04 14:51:48 dirk Exp $"

#endif /* _OSGTEXTURETRANSFORMCHUNKFIELDS_H_ */
