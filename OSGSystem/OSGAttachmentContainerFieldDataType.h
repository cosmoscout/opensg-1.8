/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *             Copyright (C) 2000-2002 by the OpenSG Forum                   *
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

#ifndef _OSG_ATTACHMENTCONTAINERFIELDDATATYPE_H_
#define _OSG_ATTACHMENTCONTAINERFIELDDATATYPE_H_

#include <OSGFieldDataType.h>
#include <OSGAttachmentContainerPtr.h>
#include <OSGFieldContainerFieldDataType.h>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)

#ifdef OSG_DOC_FILES_IN_MODULE
/*! \file OSGAttachmentContainerFieldDataType.h
    \ingroup GrpSystemField
    \ingroup GrpSystemFieldTraits
 */
#endif

/*! \ingroup GrpSystemFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct OSG_SYSTEMLIB_DLLMAPPING FieldDataTraits<AttachmentContainerPtr> : 
    public FieldTraitsRecurseMapper<AttachmentContainerPtr, true>
{
    typedef FieldDataTraits<AttachmentContainerPtr> Self;

    static  DataType                                _type;

    enum                            
    {
        StringConvertable = Self::ToStringConvertable
    };

    enum                            
    { 
        bHasParent        = 0x01
    };

    static DataType &getType (void) { return _type;                          }

    static char     *getSName(void) { return "SFAttachmentContainerPtr";     }
    static char     *getMName(void) { return "MFAttachmentContainerPtr";     }
};

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class FieldTraitsRecurseMapper<AttachmentContainerPtr, true> */
/*! \hideinhierarchy                                              */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)

OSG_END_NAMESPACE

#define OSGATTACHMENTCONTAINERFIELDDATATYPE_HEADER_CVSID "@(#)$Id: $"

#endif /* _OSG_ATTACHMENTCONTAINERFIELDDATATYPE_H_ */







