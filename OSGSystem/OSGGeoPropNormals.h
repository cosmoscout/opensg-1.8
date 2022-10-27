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


#ifndef _OSGGEOPROPNORMALS_H_
#define _OSGGEOPROPNORMALS_H_
#ifdef __sgi
#pragma once
#endif

#include <OSGGeoPropertyBase.h>

OSG_BEGIN_NAMESPACE

/*! \brief The descriptor trait for osg::GeoNormals3f.
    \ingroup GrpSystemDrawablesGeometryProperties
    \hideinhierarchy
*/
struct GeoNormals3fPropertyDesc : public GeoNormalsPropertyDesc
{
    static FieldDescription *_desc[];

    /*---------------------------------------------------------------------*/
    /*! \name                          Get                                 */
    /*! \{                                                                 */

    static const Char8 *getTypeName  (void) { return "GeoNormals3f";         }
    static const Char8 *getClassName (void) { return "GeoNormals3fProperty"; }
    static const Char8 *getFieldName (void) { return "normals";              }
    static const Char8 *getGroupName (void) { return "GeoNormals";           }

    static InitContainerF     getInitMethod(void) { return NULL;            }

    static UInt32             getFormat    (void) { return GL_FLOAT;        }
    static UInt32             getFormatSize(void) { return sizeof(GLfloat); }
    static UInt32             getDimension (void) { return 3;               }
    static UInt32             getStride    (void) { return 0;               }

    static FieldDescription **getDesc      (void) { return _desc;           }

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Typedefs                                  */
    /*! \{                                                                 */

    typedef GeoNormals                 Inherited;
    typedef GeoNormals::PtrType        InheritedPtr;

    typedef GeoNormalsPropertyDesc     InheritedDesc;

    typedef MFVec3f                    StoredFieldType;
    typedef InheritedDesc::GenericType GenericType;

#ifndef OSG_SUPPORT_NO_GEO_INTERFACE
    typedef GeoPropertyInterface<GeoNormalsPropertyDesc> Interface;
#endif

    /*! \}                                                                 */
};

typedef GeoProperty<GeoNormals3fPropertyDesc> GeoNormals3f;

/*! \brief The descriptor trait for osg::GeoNormals3s.
    \ingroup GrpSystemDrawablesGeometryProperties
    \hideinhierarchy
*/
struct GeoNormals3sPropertyDesc : public GeoNormalsPropertyDesc
{
    static FieldDescription *_desc[];

    /*---------------------------------------------------------------------*/
    /*! \name                          Get                                 */
    /*! \{                                                                 */

    static const Char8 *getTypeName  (void) { return "GeoNormals3s";         }
    static const Char8 *getClassName (void) { return "GeoNormals3sProperty"; }
    static const Char8 *getFieldName (void) { return "normals";              }
    static const Char8 *getGroupName (void) { return "GeoNormals";           }

    static InitContainerF     getInitMethod(void) { return NULL;            }

    static UInt32             getFormat    (void) { return GL_SHORT;        }
    static UInt32             getFormatSize(void) { return sizeof(GLshort); }
    static UInt32             getDimension (void) { return 3;               }
    static UInt32             getStride    (void) { return 0;               }

    static FieldDescription **getDesc      (void) { return _desc;           }

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Typedefs                                  */
    /*! \{                                                                 */

    typedef GeoNormals                 Inherited;
    typedef GeoNormals::PtrType        InheritedPtr;

    typedef GeoNormalsPropertyDesc     InheritedDesc;

    typedef MFVec3s                    StoredFieldType;
    typedef InheritedDesc::GenericType GenericType;

#ifndef OSG_SUPPORT_NO_GEO_INTERFACE
    typedef GeoPropertyInterface<GeoNormalsPropertyDesc> Interface;
#endif

    /*! \}                                                                 */
};

typedef GeoProperty<GeoNormals3sPropertyDesc> GeoNormals3s;

#ifndef OSG_NO_INT8_PNT

/*! \brief The descriptor trait for osg::GeoNormals3b.
    \ingroup GrpSystemDrawablesGeometryProperties
    \hideinhierarchy
*/
struct GeoNormals3bPropertyDesc : public GeoNormalsPropertyDesc
{
    static FieldDescription *_desc[];

    /*---------------------------------------------------------------------*/
    /*! \name                          Get                                 */
    /*! \{                                                                 */

    static const Char8 *getTypeName  (void) { return "GeoNormals3b";         }
    static const Char8 *getClassName (void) { return "GeoNormals3bProperty"; }
    static const Char8 *getFieldName (void) { return "normals";              }
    static const Char8 *getGroupName (void) { return "GeoNormals";           }

    static InitContainerF     getInitMethod(void) { return NULL;            }

    static UInt32             getFormat    (void) { return GL_BYTE;         }
    static UInt32             getFormatSize(void) { return sizeof(GLbyte);  }
    static UInt32             getDimension (void) { return 3;               }
    static UInt32             getStride    (void) { return 0;               }

    static FieldDescription **getDesc      (void) { return _desc;           }

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Typedefs                                  */
    /*! \{                                                                 */

    typedef GeoNormals                 Inherited;
    typedef GeoNormals::PtrType        InheritedPtr;

    typedef GeoNormalsPropertyDesc     InheritedDesc;

    typedef MFVec3b                    StoredFieldType;
    typedef InheritedDesc::GenericType GenericType;

#ifndef OSG_SUPPORT_NO_GEO_INTERFACE
    typedef GeoPropertyInterface<GeoNormalsPropertyDesc> Interface;
#endif

    /*! \}                                                                 */
};

typedef GeoProperty<GeoNormals3bPropertyDesc> GeoNormals3b;

#endif // OSG_NO_INT8_PNT

OSG_END_NAMESPACE

#include <OSGGeoPropNormals.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_COMPILEGEOPROPNORMALINST)

OSG_FC_DLLEXPORT_DECL(GeoProperty,
    GeoNormals3fPropertyDesc,
    OSG_SYSTEMLIB_DLLTMPLMAPPING)

OSG_FC_DLLEXPORT_DECL(GeoProperty,
    GeoNormals3sPropertyDesc,
    OSG_SYSTEMLIB_DLLTMPLMAPPING)

#ifndef OSG_NO_INT8_PNT
OSG_FC_DLLEXPORT_DECL(GeoProperty,
    GeoNormals3bPropertyDesc,
    OSG_SYSTEMLIB_DLLTMPLMAPPING)
#endif // OSG_NO_INT8_PNT
#endif

OSG_END_NAMESPACE

#endif /* _OSGGEOPROPNORMALS_H_ */
