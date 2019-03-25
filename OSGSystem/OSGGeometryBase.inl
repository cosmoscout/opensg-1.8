/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
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
 **     class Geometry!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &GeometryBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 GeometryBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
GeometryPtr GeometryBase::create(void) 
{
    GeometryPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = GeometryPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
GeometryPtr GeometryBase::createEmpty(void) 
{ 
    GeometryPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the Geometry::_sfTypes field.
inline
SFGeoPTypesPtr *GeometryBase::getSFTypes(void)
{
    return &_sfTypes;
}

//! Get the Geometry::_sfLengths field.
inline
SFGeoPLengthsPtr *GeometryBase::getSFLengths(void)
{
    return &_sfLengths;
}

//! Get the Geometry::_sfPositions field.
inline
SFGeoPositionsPtr *GeometryBase::getSFPositions(void)
{
    return &_sfPositions;
}

//! Get the Geometry::_sfNormals field.
inline
SFGeoNormalsPtr *GeometryBase::getSFNormals(void)
{
    return &_sfNormals;
}

//! Get the Geometry::_sfColors field.
inline
SFGeoColorsPtr *GeometryBase::getSFColors(void)
{
    return &_sfColors;
}

//! Get the Geometry::_sfSecondaryColors field.
inline
SFGeoColorsPtr *GeometryBase::getSFSecondaryColors(void)
{
    return &_sfSecondaryColors;
}

//! Get the Geometry::_sfTexCoords field.
inline
SFGeoTexCoordsPtr *GeometryBase::getSFTexCoords(void)
{
    return &_sfTexCoords;
}

//! Get the Geometry::_sfTexCoords1 field.
inline
SFGeoTexCoordsPtr *GeometryBase::getSFTexCoords1(void)
{
    return &_sfTexCoords1;
}

//! Get the Geometry::_sfTexCoords2 field.
inline
SFGeoTexCoordsPtr *GeometryBase::getSFTexCoords2(void)
{
    return &_sfTexCoords2;
}

//! Get the Geometry::_sfTexCoords3 field.
inline
SFGeoTexCoordsPtr *GeometryBase::getSFTexCoords3(void)
{
    return &_sfTexCoords3;
}

//! Get the Geometry::_sfTexCoords4 field.
inline
SFGeoTexCoordsPtr *GeometryBase::getSFTexCoords4(void)
{
    return &_sfTexCoords4;
}

//! Get the Geometry::_sfTexCoords5 field.
inline
SFGeoTexCoordsPtr *GeometryBase::getSFTexCoords5(void)
{
    return &_sfTexCoords5;
}

//! Get the Geometry::_sfTexCoords6 field.
inline
SFGeoTexCoordsPtr *GeometryBase::getSFTexCoords6(void)
{
    return &_sfTexCoords6;
}

//! Get the Geometry::_sfTexCoords7 field.
inline
SFGeoTexCoordsPtr *GeometryBase::getSFTexCoords7(void)
{
    return &_sfTexCoords7;
}

//! Get the Geometry::_sfIndices field.
inline
SFGeoIndicesPtr *GeometryBase::getSFIndices(void)
{
    return &_sfIndices;
}

//! Get the Geometry::_mfIndexMapping field.
inline
MFUInt16 *GeometryBase::getMFIndexMapping(void)
{
    return &_mfIndexMapping;
}

//! Get the Geometry::_sfDlistCache field.
inline
SFBool *GeometryBase::getSFDlistCache(void)
{
    return &_sfDlistCache;
}

//! Get the Geometry::_sfGLId field.
inline
SFInt32 *GeometryBase::getSFGLId(void)
{
    return &_sfGLId;
}

//! Get the Geometry::_sfIgnoreGLForAspect field.
inline
SFInt32 *GeometryBase::getSFIgnoreGLForAspect(void)
{
    return &_sfIgnoreGLForAspect;
}

//! Get the Geometry::_sfMinindex field.
inline
SFUInt32 *GeometryBase::getSFMinindex(void)
{
    return &_sfMinindex;
}

//! Get the Geometry::_sfMaxindex field.
inline
SFUInt32 *GeometryBase::getSFMaxindex(void)
{
    return &_sfMaxindex;
}

//! Get the Geometry::_mfLowindices field.
inline
MFUInt32 *GeometryBase::getMFLowindices(void)
{
    return &_mfLowindices;
}

//! Get the Geometry::_mfHighindices field.
inline
MFUInt32 *GeometryBase::getMFHighindices(void)
{
    return &_mfHighindices;
}

//! Get the Geometry::_sfVbo field.
inline
SFBool *GeometryBase::getSFVbo(void)
{
    return &_sfVbo;
}


//! Get the value of the Geometry::_sfTypes field.
inline
GeoPTypesPtr &GeometryBase::getTypes(void)
{
    return _sfTypes.getValue();
}

//! Get the value of the Geometry::_sfTypes field.
inline
const GeoPTypesPtr &GeometryBase::getTypes(void) const
{
    return _sfTypes.getValue();
}

//! Set the value of the Geometry::_sfTypes field.
inline
void GeometryBase::setTypes(const GeoPTypesPtr &value)
{
    _sfTypes.setValue(value);
}

//! Get the value of the Geometry::_sfLengths field.
inline
GeoPLengthsPtr &GeometryBase::getLengths(void)
{
    return _sfLengths.getValue();
}

//! Get the value of the Geometry::_sfLengths field.
inline
const GeoPLengthsPtr &GeometryBase::getLengths(void) const
{
    return _sfLengths.getValue();
}

//! Set the value of the Geometry::_sfLengths field.
inline
void GeometryBase::setLengths(const GeoPLengthsPtr &value)
{
    _sfLengths.setValue(value);
}

//! Get the value of the Geometry::_sfPositions field.
inline
GeoPositionsPtr &GeometryBase::getPositions(void)
{
    return _sfPositions.getValue();
}

//! Get the value of the Geometry::_sfPositions field.
inline
const GeoPositionsPtr &GeometryBase::getPositions(void) const
{
    return _sfPositions.getValue();
}

//! Set the value of the Geometry::_sfPositions field.
inline
void GeometryBase::setPositions(const GeoPositionsPtr &value)
{
    _sfPositions.setValue(value);
}

//! Get the value of the Geometry::_sfNormals field.
inline
GeoNormalsPtr &GeometryBase::getNormals(void)
{
    return _sfNormals.getValue();
}

//! Get the value of the Geometry::_sfNormals field.
inline
const GeoNormalsPtr &GeometryBase::getNormals(void) const
{
    return _sfNormals.getValue();
}

//! Set the value of the Geometry::_sfNormals field.
inline
void GeometryBase::setNormals(const GeoNormalsPtr &value)
{
    _sfNormals.setValue(value);
}

//! Get the value of the Geometry::_sfColors field.
inline
GeoColorsPtr &GeometryBase::getColors(void)
{
    return _sfColors.getValue();
}

//! Get the value of the Geometry::_sfColors field.
inline
const GeoColorsPtr &GeometryBase::getColors(void) const
{
    return _sfColors.getValue();
}

//! Set the value of the Geometry::_sfColors field.
inline
void GeometryBase::setColors(const GeoColorsPtr &value)
{
    _sfColors.setValue(value);
}

//! Get the value of the Geometry::_sfSecondaryColors field.
inline
GeoColorsPtr &GeometryBase::getSecondaryColors(void)
{
    return _sfSecondaryColors.getValue();
}

//! Get the value of the Geometry::_sfSecondaryColors field.
inline
const GeoColorsPtr &GeometryBase::getSecondaryColors(void) const
{
    return _sfSecondaryColors.getValue();
}

//! Set the value of the Geometry::_sfSecondaryColors field.
inline
void GeometryBase::setSecondaryColors(const GeoColorsPtr &value)
{
    _sfSecondaryColors.setValue(value);
}

//! Get the value of the Geometry::_sfTexCoords field.
inline
GeoTexCoordsPtr &GeometryBase::getTexCoords(void)
{
    return _sfTexCoords.getValue();
}

//! Get the value of the Geometry::_sfTexCoords field.
inline
const GeoTexCoordsPtr &GeometryBase::getTexCoords(void) const
{
    return _sfTexCoords.getValue();
}

//! Set the value of the Geometry::_sfTexCoords field.
inline
void GeometryBase::setTexCoords(const GeoTexCoordsPtr &value)
{
    _sfTexCoords.setValue(value);
}

//! Get the value of the Geometry::_sfTexCoords1 field.
inline
GeoTexCoordsPtr &GeometryBase::getTexCoords1(void)
{
    return _sfTexCoords1.getValue();
}

//! Get the value of the Geometry::_sfTexCoords1 field.
inline
const GeoTexCoordsPtr &GeometryBase::getTexCoords1(void) const
{
    return _sfTexCoords1.getValue();
}

//! Set the value of the Geometry::_sfTexCoords1 field.
inline
void GeometryBase::setTexCoords1(const GeoTexCoordsPtr &value)
{
    _sfTexCoords1.setValue(value);
}

//! Get the value of the Geometry::_sfTexCoords2 field.
inline
GeoTexCoordsPtr &GeometryBase::getTexCoords2(void)
{
    return _sfTexCoords2.getValue();
}

//! Get the value of the Geometry::_sfTexCoords2 field.
inline
const GeoTexCoordsPtr &GeometryBase::getTexCoords2(void) const
{
    return _sfTexCoords2.getValue();
}

//! Set the value of the Geometry::_sfTexCoords2 field.
inline
void GeometryBase::setTexCoords2(const GeoTexCoordsPtr &value)
{
    _sfTexCoords2.setValue(value);
}

//! Get the value of the Geometry::_sfTexCoords3 field.
inline
GeoTexCoordsPtr &GeometryBase::getTexCoords3(void)
{
    return _sfTexCoords3.getValue();
}

//! Get the value of the Geometry::_sfTexCoords3 field.
inline
const GeoTexCoordsPtr &GeometryBase::getTexCoords3(void) const
{
    return _sfTexCoords3.getValue();
}

//! Set the value of the Geometry::_sfTexCoords3 field.
inline
void GeometryBase::setTexCoords3(const GeoTexCoordsPtr &value)
{
    _sfTexCoords3.setValue(value);
}

//! Get the value of the Geometry::_sfTexCoords4 field.
inline
GeoTexCoordsPtr &GeometryBase::getTexCoords4(void)
{
    return _sfTexCoords4.getValue();
}

//! Get the value of the Geometry::_sfTexCoords4 field.
inline
const GeoTexCoordsPtr &GeometryBase::getTexCoords4(void) const
{
    return _sfTexCoords4.getValue();
}

//! Set the value of the Geometry::_sfTexCoords4 field.
inline
void GeometryBase::setTexCoords4(const GeoTexCoordsPtr &value)
{
    _sfTexCoords4.setValue(value);
}

//! Get the value of the Geometry::_sfTexCoords5 field.
inline
GeoTexCoordsPtr &GeometryBase::getTexCoords5(void)
{
    return _sfTexCoords5.getValue();
}

//! Get the value of the Geometry::_sfTexCoords5 field.
inline
const GeoTexCoordsPtr &GeometryBase::getTexCoords5(void) const
{
    return _sfTexCoords5.getValue();
}

//! Set the value of the Geometry::_sfTexCoords5 field.
inline
void GeometryBase::setTexCoords5(const GeoTexCoordsPtr &value)
{
    _sfTexCoords5.setValue(value);
}

//! Get the value of the Geometry::_sfTexCoords6 field.
inline
GeoTexCoordsPtr &GeometryBase::getTexCoords6(void)
{
    return _sfTexCoords6.getValue();
}

//! Get the value of the Geometry::_sfTexCoords6 field.
inline
const GeoTexCoordsPtr &GeometryBase::getTexCoords6(void) const
{
    return _sfTexCoords6.getValue();
}

//! Set the value of the Geometry::_sfTexCoords6 field.
inline
void GeometryBase::setTexCoords6(const GeoTexCoordsPtr &value)
{
    _sfTexCoords6.setValue(value);
}

//! Get the value of the Geometry::_sfTexCoords7 field.
inline
GeoTexCoordsPtr &GeometryBase::getTexCoords7(void)
{
    return _sfTexCoords7.getValue();
}

//! Get the value of the Geometry::_sfTexCoords7 field.
inline
const GeoTexCoordsPtr &GeometryBase::getTexCoords7(void) const
{
    return _sfTexCoords7.getValue();
}

//! Set the value of the Geometry::_sfTexCoords7 field.
inline
void GeometryBase::setTexCoords7(const GeoTexCoordsPtr &value)
{
    _sfTexCoords7.setValue(value);
}

//! Get the value of the Geometry::_sfIndices field.
inline
GeoIndicesPtr &GeometryBase::getIndices(void)
{
    return _sfIndices.getValue();
}

//! Get the value of the Geometry::_sfIndices field.
inline
const GeoIndicesPtr &GeometryBase::getIndices(void) const
{
    return _sfIndices.getValue();
}

//! Set the value of the Geometry::_sfIndices field.
inline
void GeometryBase::setIndices(const GeoIndicesPtr &value)
{
    _sfIndices.setValue(value);
}

//! Get the value of the Geometry::_sfDlistCache field.
inline
bool &GeometryBase::getDlistCache(void)
{
    return _sfDlistCache.getValue();
}

//! Get the value of the Geometry::_sfDlistCache field.
inline
const bool &GeometryBase::getDlistCache(void) const
{
    return _sfDlistCache.getValue();
}

//! Set the value of the Geometry::_sfDlistCache field.
inline
void GeometryBase::setDlistCache(const bool &value)
{
    _sfDlistCache.setValue(value);
}

//! Get the value of the Geometry::_sfGLId field.
inline
Int32 &GeometryBase::getGLId(void)
{
    return _sfGLId.getValue();
}

//! Get the value of the Geometry::_sfGLId field.
inline
const Int32 &GeometryBase::getGLId(void) const
{
    return _sfGLId.getValue();
}

//! Set the value of the Geometry::_sfGLId field.
inline
void GeometryBase::setGLId(const Int32 &value)
{
    _sfGLId.setValue(value);
}

//! Get the value of the Geometry::_sfIgnoreGLForAspect field.
inline
Int32 &GeometryBase::getIgnoreGLForAspect(void)
{
    return _sfIgnoreGLForAspect.getValue();
}

//! Get the value of the Geometry::_sfIgnoreGLForAspect field.
inline
const Int32 &GeometryBase::getIgnoreGLForAspect(void) const
{
    return _sfIgnoreGLForAspect.getValue();
}

//! Set the value of the Geometry::_sfIgnoreGLForAspect field.
inline
void GeometryBase::setIgnoreGLForAspect(const Int32 &value)
{
    _sfIgnoreGLForAspect.setValue(value);
}

//! Get the value of the Geometry::_sfMinindex field.
inline
UInt32 &GeometryBase::getMinindex(void)
{
    return _sfMinindex.getValue();
}

//! Get the value of the Geometry::_sfMinindex field.
inline
const UInt32 &GeometryBase::getMinindex(void) const
{
    return _sfMinindex.getValue();
}

//! Set the value of the Geometry::_sfMinindex field.
inline
void GeometryBase::setMinindex(const UInt32 &value)
{
    _sfMinindex.setValue(value);
}

//! Get the value of the Geometry::_sfMaxindex field.
inline
UInt32 &GeometryBase::getMaxindex(void)
{
    return _sfMaxindex.getValue();
}

//! Get the value of the Geometry::_sfMaxindex field.
inline
const UInt32 &GeometryBase::getMaxindex(void) const
{
    return _sfMaxindex.getValue();
}

//! Set the value of the Geometry::_sfMaxindex field.
inline
void GeometryBase::setMaxindex(const UInt32 &value)
{
    _sfMaxindex.setValue(value);
}

//! Get the value of the Geometry::_sfVbo field.
inline
bool &GeometryBase::getVbo(void)
{
    return _sfVbo.getValue();
}

//! Get the value of the Geometry::_sfVbo field.
inline
const bool &GeometryBase::getVbo(void) const
{
    return _sfVbo.getValue();
}

//! Set the value of the Geometry::_sfVbo field.
inline
void GeometryBase::setVbo(const bool &value)
{
    _sfVbo.setValue(value);
}


//! Get the value of the \a index element the Geometry::_mfIndexMapping field.
inline
UInt16 &GeometryBase::getIndexMapping(const UInt32 index)
{
    return _mfIndexMapping[index];
}

//! Get the Geometry::_mfIndexMapping field.
inline
MFUInt16 &GeometryBase::getIndexMapping(void)
{
    return _mfIndexMapping;
}

//! Get the Geometry::_mfIndexMapping field.
inline
const MFUInt16 &GeometryBase::getIndexMapping(void) const
{
    return _mfIndexMapping;
}

//! Get the value of the \a index element the Geometry::_mfLowindices field.
inline
UInt32 &GeometryBase::getLowindices(const UInt32 index)
{
    return _mfLowindices[index];
}

//! Get the Geometry::_mfLowindices field.
inline
MFUInt32 &GeometryBase::getLowindices(void)
{
    return _mfLowindices;
}

//! Get the Geometry::_mfLowindices field.
inline
const MFUInt32 &GeometryBase::getLowindices(void) const
{
    return _mfLowindices;
}

//! Get the value of the \a index element the Geometry::_mfHighindices field.
inline
UInt32 &GeometryBase::getHighindices(const UInt32 index)
{
    return _mfHighindices[index];
}

//! Get the Geometry::_mfHighindices field.
inline
MFUInt32 &GeometryBase::getHighindices(void)
{
    return _mfHighindices;
}

//! Get the Geometry::_mfHighindices field.
inline
const MFUInt32 &GeometryBase::getHighindices(void) const
{
    return _mfHighindices;
}

OSG_END_NAMESPACE

#define OSGGEOMETRYBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"
