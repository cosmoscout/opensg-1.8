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

#ifndef _OSGPOLYGONCHUNKFIELDS_H_
#define _OSGPOLYGONCHUNKFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include <OSGConfig.h>

#include <OSGFieldContainerPtr.h>
#include <OSGNodeCoreFieldDataType.h>
#include <OSGSystemDef.h>

#include <OSGStateChunkFields.h>

OSG_BEGIN_NAMESPACE

class PolygonChunk;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! PolygonChunkPtr

typedef FCPtr<StateChunkPtr, PolygonChunk> PolygonChunkPtr;

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpSystemFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldDataTraits<PolygonChunkPtr> : public FieldTraitsRecurseMapper<PolygonChunkPtr, true> {
  static DataType _type;

  enum { StringConvertable = 0x00 };
  enum { bHasParent = 0x01 };

  static DataType& getType(void) {
    return _type;
  }

  static const char* getSName(void) {
    return "SFPolygonChunkPtr";
  }
  static const char* getMName(void) {
    return "MFPolygonChunkPtr";
  }
};

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsRecurseMapper<PolygonChunkPtr, true>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpSystemFieldSingle */

typedef SField<PolygonChunkPtr> SFPolygonChunkPtr;
#endif

#ifndef OSG_COMPILEPOLYGONCHUNKINST
OSG_DLLEXPORT_DECL1(SField, PolygonChunkPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING)
#endif

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpSystemFieldMulti */

typedef MField<PolygonChunkPtr> MFPolygonChunkPtr;
#endif

#ifndef OSG_COMPILEPOLYGONCHUNKINST
OSG_DLLEXPORT_DECL1(MField, PolygonChunkPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING)
#endif

OSG_END_NAMESPACE

#define OSGPOLYGONCHUNKFIELDS_HEADER_CVSID                                                         \
  "@(#)$Id: FCFieldsTemplate_h.h,v 1.25 2005/04/04 14:51:48 dirk Exp $"

#endif /* _OSGPOLYGONCHUNKFIELDS_H_ */
