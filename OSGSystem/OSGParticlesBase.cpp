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
 **     class Particles!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEPARTICLESINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGParticlesBase.h"
#include "OSGParticles.h"


OSG_USING_NAMESPACE

const OSG::BitVector  ParticlesBase::ModeFieldMask = 
    (TypeTraits<BitVector>::One << ParticlesBase::ModeFieldId);

const OSG::BitVector  ParticlesBase::PositionsFieldMask = 
    (TypeTraits<BitVector>::One << ParticlesBase::PositionsFieldId);

const OSG::BitVector  ParticlesBase::SizesFieldMask = 
    (TypeTraits<BitVector>::One << ParticlesBase::SizesFieldId);

const OSG::BitVector  ParticlesBase::SecPositionsFieldMask = 
    (TypeTraits<BitVector>::One << ParticlesBase::SecPositionsFieldId);

const OSG::BitVector  ParticlesBase::ColorsFieldMask = 
    (TypeTraits<BitVector>::One << ParticlesBase::ColorsFieldId);

const OSG::BitVector  ParticlesBase::NormalsFieldMask = 
    (TypeTraits<BitVector>::One << ParticlesBase::NormalsFieldId);

const OSG::BitVector  ParticlesBase::IndicesFieldMask = 
    (TypeTraits<BitVector>::One << ParticlesBase::IndicesFieldId);

const OSG::BitVector  ParticlesBase::TextureZsFieldMask = 
    (TypeTraits<BitVector>::One << ParticlesBase::TextureZsFieldId);

const OSG::BitVector  ParticlesBase::DrawOrderFieldMask = 
    (TypeTraits<BitVector>::One << ParticlesBase::DrawOrderFieldId);

const OSG::BitVector  ParticlesBase::DynamicFieldMask = 
    (TypeTraits<BitVector>::One << ParticlesBase::DynamicFieldId);

const OSG::BitVector  ParticlesBase::PumpFieldMask = 
    (TypeTraits<BitVector>::One << ParticlesBase::PumpFieldId);

const OSG::BitVector  ParticlesBase::BspFieldMask = 
    (TypeTraits<BitVector>::One << ParticlesBase::BspFieldId);

const OSG::BitVector  ParticlesBase::NumParticlesFieldMask = 
    (TypeTraits<BitVector>::One << ParticlesBase::NumParticlesFieldId);

const OSG::BitVector ParticlesBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var UInt32          ParticlesBase::_sfMode
    The particle mode, see osg::Particles::modeE for options.
*/
/*! \var GeoPositionsPtr ParticlesBase::_sfPositions
    The positions of the particles. This is the primary defining         information for a particle.
*/
/*! \var Vec3f           ParticlesBase::_mfSizes
    The particle sizes. If not set (1,1,1) will be used, if only one entry         is set, it will be used for all particles. If the number of sizes if         equal to the number of positions every particle will get its own size.         Most modes only use the X coordinate of the vector. Particles with          size[0] == 0 are ignored.
*/
/*! \var GeoPositionsPtr ParticlesBase::_sfSecPositions
    The secondary position of the particle. This information is only used         by a few rendering modes, e.g. the streak mode. Usually it represents         the particle's last position.
*/
/*! \var GeoColorsPtr    ParticlesBase::_sfColors
    The particle colors (optional).
*/
/*! \var GeoNormalsPtr   ParticlesBase::_sfNormals
    Most particles will be automatically aligned to the view         direction. If normals are set they will be used to define the         direction the particles are facing.
*/
/*! \var Int32           ParticlesBase::_mfIndices
    Indices for the particles. Useful to select subsets of all particles for          rendering.
*/
/*! \var Real32          ParticlesBase::_mfTextureZs
    The texture z coordinate of the particles. Useful in conjunction with 3D          textures to use different texture images on different particles.
*/
/*! \var UInt32          ParticlesBase::_sfDrawOrder
    Define an optional sorting on the particles, see osg::Particles::DrawOrderE         for variants. Default is unordered.
*/
/*! \var bool            ParticlesBase::_sfDynamic
    Hint to tell the system whether particles are expected to change position or         not. Is used to speed up sorting.
*/
/*! \var UInt32          ParticlesBase::_sfPump
    
*/
/*! \var ParticleBSPTree ParticlesBase::_sfBsp
    
*/
/*! \var Int32           ParticlesBase::_sfNumParticles
    Optional number of particles to use. If set to -1, all the particles in          pos, or indices if set, will be used.
*/

//! Particles description

FieldDescription *ParticlesBase::_desc[] = 
{
    new FieldDescription(SFUInt32::getClassType(), 
                     "mode", 
                     ModeFieldId, ModeFieldMask,
                     false,
                     (FieldAccessMethod) &ParticlesBase::getSFMode),
    new FieldDescription(SFGeoPositionsPtr::getClassType(), 
                     "positions", 
                     PositionsFieldId, PositionsFieldMask,
                     false,
                     (FieldAccessMethod) &ParticlesBase::getSFPositions),
    new FieldDescription(MFVec3f::getClassType(), 
                     "sizes", 
                     SizesFieldId, SizesFieldMask,
                     false,
                     (FieldAccessMethod) &ParticlesBase::getMFSizes),
    new FieldDescription(SFGeoPositionsPtr::getClassType(), 
                     "secPositions", 
                     SecPositionsFieldId, SecPositionsFieldMask,
                     false,
                     (FieldAccessMethod) &ParticlesBase::getSFSecPositions),
    new FieldDescription(SFGeoColorsPtr::getClassType(), 
                     "colors", 
                     ColorsFieldId, ColorsFieldMask,
                     false,
                     (FieldAccessMethod) &ParticlesBase::getSFColors),
    new FieldDescription(SFGeoNormalsPtr::getClassType(), 
                     "normals", 
                     NormalsFieldId, NormalsFieldMask,
                     false,
                     (FieldAccessMethod) &ParticlesBase::getSFNormals),
    new FieldDescription(MFInt32::getClassType(), 
                     "indices", 
                     IndicesFieldId, IndicesFieldMask,
                     false,
                     (FieldAccessMethod) &ParticlesBase::getMFIndices),
    new FieldDescription(MFReal32::getClassType(), 
                     "textureZs", 
                     TextureZsFieldId, TextureZsFieldMask,
                     false,
                     (FieldAccessMethod) &ParticlesBase::getMFTextureZs),
    new FieldDescription(SFUInt32::getClassType(), 
                     "drawOrder", 
                     DrawOrderFieldId, DrawOrderFieldMask,
                     false,
                     (FieldAccessMethod) &ParticlesBase::getSFDrawOrder),
    new FieldDescription(SFBool::getClassType(), 
                     "dynamic", 
                     DynamicFieldId, DynamicFieldMask,
                     false,
                     (FieldAccessMethod) &ParticlesBase::getSFDynamic),
    new FieldDescription(SFUInt32::getClassType(), 
                     "pump", 
                     PumpFieldId, PumpFieldMask,
                     true,
                     (FieldAccessMethod) &ParticlesBase::getSFPump),
    new FieldDescription(SFParticleBSPTree::getClassType(), 
                     "bsp", 
                     BspFieldId, BspFieldMask,
                     false,
                     (FieldAccessMethod) &ParticlesBase::getSFBsp),
    new FieldDescription(SFInt32::getClassType(), 
                     "numParticles", 
                     NumParticlesFieldId, NumParticlesFieldMask,
                     false,
                     (FieldAccessMethod) &ParticlesBase::getSFNumParticles)
};


FieldContainerType ParticlesBase::_type(
    "Particles",
    "MaterialDrawable",
    NULL,
    (PrototypeCreateF) &ParticlesBase::createEmpty,
    Particles::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(ParticlesBase, ParticlesPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &ParticlesBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &ParticlesBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr ParticlesBase::shallowCopy(void) const 
{ 
    ParticlesPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const Particles *>(this)); 

    return returnValue; 
}

UInt32 ParticlesBase::getContainerSize(void) const 
{ 
    return sizeof(Particles); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void ParticlesBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((ParticlesBase *) &other, whichField);
}
#else
void ParticlesBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((ParticlesBase *) &other, whichField, sInfo);
}
void ParticlesBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void ParticlesBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

    _mfSizes.terminateShare(uiAspect, this->getContainerSize());
    _mfIndices.terminateShare(uiAspect, this->getContainerSize());
    _mfTextureZs.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

ParticlesBase::ParticlesBase(void) :
    _sfMode                   (UInt32(2)), 
    _sfPositions              (), 
    _mfSizes                  (), 
    _sfSecPositions           (), 
    _sfColors                 (), 
    _sfNormals                (), 
    _mfIndices                (), 
    _mfTextureZs              (), 
    _sfDrawOrder              (UInt32(0)), 
    _sfDynamic                (bool(true)), 
    _sfPump                   (), 
    _sfBsp                    (), 
    _sfNumParticles           (Int32(-1)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

ParticlesBase::ParticlesBase(const ParticlesBase &source) :
    _sfMode                   (source._sfMode                   ), 
    _sfPositions              (source._sfPositions              ), 
    _mfSizes                  (source._mfSizes                  ), 
    _sfSecPositions           (source._sfSecPositions           ), 
    _sfColors                 (source._sfColors                 ), 
    _sfNormals                (source._sfNormals                ), 
    _mfIndices                (source._mfIndices                ), 
    _mfTextureZs              (source._mfTextureZs              ), 
    _sfDrawOrder              (source._sfDrawOrder              ), 
    _sfDynamic                (source._sfDynamic                ), 
    _sfPump                   (source._sfPump                   ), 
    _sfBsp                    (source._sfBsp                    ), 
    _sfNumParticles           (source._sfNumParticles           ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

ParticlesBase::~ParticlesBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 ParticlesBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ModeFieldMask & whichField))
    {
        returnValue += _sfMode.getBinSize();
    }

    if(FieldBits::NoField != (PositionsFieldMask & whichField))
    {
        returnValue += _sfPositions.getBinSize();
    }

    if(FieldBits::NoField != (SizesFieldMask & whichField))
    {
        returnValue += _mfSizes.getBinSize();
    }

    if(FieldBits::NoField != (SecPositionsFieldMask & whichField))
    {
        returnValue += _sfSecPositions.getBinSize();
    }

    if(FieldBits::NoField != (ColorsFieldMask & whichField))
    {
        returnValue += _sfColors.getBinSize();
    }

    if(FieldBits::NoField != (NormalsFieldMask & whichField))
    {
        returnValue += _sfNormals.getBinSize();
    }

    if(FieldBits::NoField != (IndicesFieldMask & whichField))
    {
        returnValue += _mfIndices.getBinSize();
    }

    if(FieldBits::NoField != (TextureZsFieldMask & whichField))
    {
        returnValue += _mfTextureZs.getBinSize();
    }

    if(FieldBits::NoField != (DrawOrderFieldMask & whichField))
    {
        returnValue += _sfDrawOrder.getBinSize();
    }

    if(FieldBits::NoField != (DynamicFieldMask & whichField))
    {
        returnValue += _sfDynamic.getBinSize();
    }

    if(FieldBits::NoField != (PumpFieldMask & whichField))
    {
        returnValue += _sfPump.getBinSize();
    }

    if(FieldBits::NoField != (BspFieldMask & whichField))
    {
        returnValue += _sfBsp.getBinSize();
    }

    if(FieldBits::NoField != (NumParticlesFieldMask & whichField))
    {
        returnValue += _sfNumParticles.getBinSize();
    }


    return returnValue;
}

void ParticlesBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ModeFieldMask & whichField))
    {
        _sfMode.copyToBin(pMem);
    }

    if(FieldBits::NoField != (PositionsFieldMask & whichField))
    {
        _sfPositions.copyToBin(pMem);
    }

    if(FieldBits::NoField != (SizesFieldMask & whichField))
    {
        _mfSizes.copyToBin(pMem);
    }

    if(FieldBits::NoField != (SecPositionsFieldMask & whichField))
    {
        _sfSecPositions.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ColorsFieldMask & whichField))
    {
        _sfColors.copyToBin(pMem);
    }

    if(FieldBits::NoField != (NormalsFieldMask & whichField))
    {
        _sfNormals.copyToBin(pMem);
    }

    if(FieldBits::NoField != (IndicesFieldMask & whichField))
    {
        _mfIndices.copyToBin(pMem);
    }

    if(FieldBits::NoField != (TextureZsFieldMask & whichField))
    {
        _mfTextureZs.copyToBin(pMem);
    }

    if(FieldBits::NoField != (DrawOrderFieldMask & whichField))
    {
        _sfDrawOrder.copyToBin(pMem);
    }

    if(FieldBits::NoField != (DynamicFieldMask & whichField))
    {
        _sfDynamic.copyToBin(pMem);
    }

    if(FieldBits::NoField != (PumpFieldMask & whichField))
    {
        _sfPump.copyToBin(pMem);
    }

    if(FieldBits::NoField != (BspFieldMask & whichField))
    {
        _sfBsp.copyToBin(pMem);
    }

    if(FieldBits::NoField != (NumParticlesFieldMask & whichField))
    {
        _sfNumParticles.copyToBin(pMem);
    }


}

void ParticlesBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ModeFieldMask & whichField))
    {
        _sfMode.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (PositionsFieldMask & whichField))
    {
        _sfPositions.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (SizesFieldMask & whichField))
    {
        _mfSizes.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (SecPositionsFieldMask & whichField))
    {
        _sfSecPositions.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ColorsFieldMask & whichField))
    {
        _sfColors.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (NormalsFieldMask & whichField))
    {
        _sfNormals.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (IndicesFieldMask & whichField))
    {
        _mfIndices.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (TextureZsFieldMask & whichField))
    {
        _mfTextureZs.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (DrawOrderFieldMask & whichField))
    {
        _sfDrawOrder.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (DynamicFieldMask & whichField))
    {
        _sfDynamic.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (PumpFieldMask & whichField))
    {
        _sfPump.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (BspFieldMask & whichField))
    {
        _sfBsp.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (NumParticlesFieldMask & whichField))
    {
        _sfNumParticles.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void ParticlesBase::executeSyncImpl(      ParticlesBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (ModeFieldMask & whichField))
        _sfMode.syncWith(pOther->_sfMode);

    if(FieldBits::NoField != (PositionsFieldMask & whichField))
        _sfPositions.syncWith(pOther->_sfPositions);

    if(FieldBits::NoField != (SizesFieldMask & whichField))
        _mfSizes.syncWith(pOther->_mfSizes);

    if(FieldBits::NoField != (SecPositionsFieldMask & whichField))
        _sfSecPositions.syncWith(pOther->_sfSecPositions);

    if(FieldBits::NoField != (ColorsFieldMask & whichField))
        _sfColors.syncWith(pOther->_sfColors);

    if(FieldBits::NoField != (NormalsFieldMask & whichField))
        _sfNormals.syncWith(pOther->_sfNormals);

    if(FieldBits::NoField != (IndicesFieldMask & whichField))
        _mfIndices.syncWith(pOther->_mfIndices);

    if(FieldBits::NoField != (TextureZsFieldMask & whichField))
        _mfTextureZs.syncWith(pOther->_mfTextureZs);

    if(FieldBits::NoField != (DrawOrderFieldMask & whichField))
        _sfDrawOrder.syncWith(pOther->_sfDrawOrder);

    if(FieldBits::NoField != (DynamicFieldMask & whichField))
        _sfDynamic.syncWith(pOther->_sfDynamic);

    if(FieldBits::NoField != (PumpFieldMask & whichField))
        _sfPump.syncWith(pOther->_sfPump);

    if(FieldBits::NoField != (BspFieldMask & whichField))
        _sfBsp.syncWith(pOther->_sfBsp);

    if(FieldBits::NoField != (NumParticlesFieldMask & whichField))
        _sfNumParticles.syncWith(pOther->_sfNumParticles);


}
#else
void ParticlesBase::executeSyncImpl(      ParticlesBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (ModeFieldMask & whichField))
        _sfMode.syncWith(pOther->_sfMode);

    if(FieldBits::NoField != (PositionsFieldMask & whichField))
        _sfPositions.syncWith(pOther->_sfPositions);

    if(FieldBits::NoField != (SecPositionsFieldMask & whichField))
        _sfSecPositions.syncWith(pOther->_sfSecPositions);

    if(FieldBits::NoField != (ColorsFieldMask & whichField))
        _sfColors.syncWith(pOther->_sfColors);

    if(FieldBits::NoField != (NormalsFieldMask & whichField))
        _sfNormals.syncWith(pOther->_sfNormals);

    if(FieldBits::NoField != (DrawOrderFieldMask & whichField))
        _sfDrawOrder.syncWith(pOther->_sfDrawOrder);

    if(FieldBits::NoField != (DynamicFieldMask & whichField))
        _sfDynamic.syncWith(pOther->_sfDynamic);

    if(FieldBits::NoField != (PumpFieldMask & whichField))
        _sfPump.syncWith(pOther->_sfPump);

    if(FieldBits::NoField != (BspFieldMask & whichField))
        _sfBsp.syncWith(pOther->_sfBsp);

    if(FieldBits::NoField != (NumParticlesFieldMask & whichField))
        _sfNumParticles.syncWith(pOther->_sfNumParticles);


    if(FieldBits::NoField != (SizesFieldMask & whichField))
        _mfSizes.syncWith(pOther->_mfSizes, sInfo);

    if(FieldBits::NoField != (IndicesFieldMask & whichField))
        _mfIndices.syncWith(pOther->_mfIndices, sInfo);

    if(FieldBits::NoField != (TextureZsFieldMask & whichField))
        _mfTextureZs.syncWith(pOther->_mfTextureZs, sInfo);


}

void ParticlesBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (SizesFieldMask & whichField))
        _mfSizes.beginEdit(uiAspect, uiContainerSize);

    if(FieldBits::NoField != (IndicesFieldMask & whichField))
        _mfIndices.beginEdit(uiAspect, uiContainerSize);

    if(FieldBits::NoField != (TextureZsFieldMask & whichField))
        _mfTextureZs.beginEdit(uiAspect, uiContainerSize);

}
#endif



#include <OSGSFieldTypeDef.inl>
#include <OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<ParticlesPtr>::_type("ParticlesPtr", "MaterialDrawablePtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(ParticlesPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(ParticlesPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);

OSG_END_NAMESPACE


/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static Char8 cvsid_cpp       [] = "@(#)$Id: FCBaseTemplate_cpp.h,v 1.45 2005/07/20 00:10:14 vossg Exp $";
    static Char8 cvsid_hpp       [] = OSGPARTICLESBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGPARTICLESBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGPARTICLESFIELDS_HEADER_CVSID;
}
