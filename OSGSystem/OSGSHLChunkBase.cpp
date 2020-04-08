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
 **     class SHLChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESHLCHUNKINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGSHLChunkBase.h"
#include "OSGSHLChunk.h"

#include <OSGGL.h>                        // ProgramParameterNames default header

OSG_BEGIN_NAMESPACE

const OSG::BitVector  SHLChunkBase::CgFrontEndFieldMask = 
    (TypeTraits<BitVector>::One << SHLChunkBase::CgFrontEndFieldId);

const OSG::BitVector  SHLChunkBase::PointSizeFieldMask = 
    (TypeTraits<BitVector>::One << SHLChunkBase::PointSizeFieldId);

const OSG::BitVector  SHLChunkBase::ProgramParameterNamesFieldMask = 
    (TypeTraits<BitVector>::One << SHLChunkBase::ProgramParameterNamesFieldId);

const OSG::BitVector  SHLChunkBase::ProgramParameterValuesFieldMask = 
    (TypeTraits<BitVector>::One << SHLChunkBase::ProgramParameterValuesFieldId);

const OSG::BitVector  SHLChunkBase::GLIdFieldMask = 
    (TypeTraits<BitVector>::One << SHLChunkBase::GLIdFieldId);

const OSG::BitVector  SHLChunkBase::IgnoreGLForAspectFieldMask = 
    (TypeTraits<BitVector>::One << SHLChunkBase::IgnoreGLForAspectFieldId);

const OSG::BitVector SHLChunkBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var bool            SHLChunkBase::_sfCgFrontEnd
    
*/
/*! \var bool            SHLChunkBase::_sfPointSize
    Flag to set whether the shader can change the point size.
*/
/*! \var GLenum          SHLChunkBase::_mfProgramParameterNames
    
*/
/*! \var UInt32          SHLChunkBase::_mfProgramParameterValues
    
*/
/*! \var UInt32          SHLChunkBase::_sfGLId
    
*/
/*! \var Int32           SHLChunkBase::_sfIgnoreGLForAspect
    
*/

//! SHLChunk description

FieldDescription *SHLChunkBase::_desc[] = 
{
    new FieldDescription(SFBool::getClassType(), 
                     "cgFrontEnd", 
                     CgFrontEndFieldId, CgFrontEndFieldMask,
                     false,
                     (FieldAccessMethod) &SHLChunkBase::getSFCgFrontEnd),
    new FieldDescription(SFBool::getClassType(), 
                     "pointSize", 
                     PointSizeFieldId, PointSizeFieldMask,
                     false,
                     (FieldAccessMethod) &SHLChunkBase::getSFPointSize),
    new FieldDescription(MFGLenum::getClassType(), 
                     "programParameterNames", 
                     ProgramParameterNamesFieldId, ProgramParameterNamesFieldMask,
                     false,
                     (FieldAccessMethod) &SHLChunkBase::getMFProgramParameterNames),
    new FieldDescription(MFUInt32::getClassType(), 
                     "programParameterValues", 
                     ProgramParameterValuesFieldId, ProgramParameterValuesFieldMask,
                     false,
                     (FieldAccessMethod) &SHLChunkBase::getMFProgramParameterValues),
    new FieldDescription(SFUInt32::getClassType(), 
                     "GLId", 
                     GLIdFieldId, GLIdFieldMask,
                     true,
                     (FieldAccessMethod) &SHLChunkBase::getSFGLId),
    new FieldDescription(SFInt32::getClassType(), 
                     "IgnoreGLForAspect", 
                     IgnoreGLForAspectFieldId, IgnoreGLForAspectFieldMask,
                     true,
                     (FieldAccessMethod) &SHLChunkBase::getSFIgnoreGLForAspect)
};


FieldContainerType SHLChunkBase::_type(
    "SHLChunk",
    "ShaderChunk",
    NULL,
    (PrototypeCreateF) &SHLChunkBase::createEmpty,
    SHLChunk::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(SHLChunkBase, SHLChunkPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &SHLChunkBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &SHLChunkBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr SHLChunkBase::shallowCopy(void) const 
{ 
    SHLChunkPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const SHLChunk *>(this)); 

    return returnValue; 
}

UInt32 SHLChunkBase::getContainerSize(void) const 
{ 
    return sizeof(SHLChunk); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void SHLChunkBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((SHLChunkBase *) &other, whichField);
}
#else
void SHLChunkBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((SHLChunkBase *) &other, whichField, sInfo);
}
void SHLChunkBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void SHLChunkBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

    _mfProgramParameterNames.terminateShare(uiAspect, this->getContainerSize());
    _mfProgramParameterValues.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

SHLChunkBase::SHLChunkBase(void) :
    _sfCgFrontEnd             (bool(false)), 
    _sfPointSize              (bool(false)), 
    _mfProgramParameterNames  (), 
    _mfProgramParameterValues (), 
    _sfGLId                   (), 
    _sfIgnoreGLForAspect      (Int32(-1)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

SHLChunkBase::SHLChunkBase(const SHLChunkBase &source) :
    _sfCgFrontEnd             (source._sfCgFrontEnd             ), 
    _sfPointSize              (source._sfPointSize              ), 
    _mfProgramParameterNames  (source._mfProgramParameterNames  ), 
    _mfProgramParameterValues (source._mfProgramParameterValues ), 
    _sfGLId                   (source._sfGLId                   ), 
    _sfIgnoreGLForAspect      (source._sfIgnoreGLForAspect      ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

SHLChunkBase::~SHLChunkBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 SHLChunkBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (CgFrontEndFieldMask & whichField))
    {
        returnValue += _sfCgFrontEnd.getBinSize();
    }

    if(FieldBits::NoField != (PointSizeFieldMask & whichField))
    {
        returnValue += _sfPointSize.getBinSize();
    }

    if(FieldBits::NoField != (ProgramParameterNamesFieldMask & whichField))
    {
        returnValue += _mfProgramParameterNames.getBinSize();
    }

    if(FieldBits::NoField != (ProgramParameterValuesFieldMask & whichField))
    {
        returnValue += _mfProgramParameterValues.getBinSize();
    }

    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        returnValue += _sfGLId.getBinSize();
    }

    if(FieldBits::NoField != (IgnoreGLForAspectFieldMask & whichField))
    {
        returnValue += _sfIgnoreGLForAspect.getBinSize();
    }


    return returnValue;
}

void SHLChunkBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (CgFrontEndFieldMask & whichField))
    {
        _sfCgFrontEnd.copyToBin(pMem);
    }

    if(FieldBits::NoField != (PointSizeFieldMask & whichField))
    {
        _sfPointSize.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ProgramParameterNamesFieldMask & whichField))
    {
        _mfProgramParameterNames.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ProgramParameterValuesFieldMask & whichField))
    {
        _mfProgramParameterValues.copyToBin(pMem);
    }

    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        _sfGLId.copyToBin(pMem);
    }

    if(FieldBits::NoField != (IgnoreGLForAspectFieldMask & whichField))
    {
        _sfIgnoreGLForAspect.copyToBin(pMem);
    }


}

void SHLChunkBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (CgFrontEndFieldMask & whichField))
    {
        _sfCgFrontEnd.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (PointSizeFieldMask & whichField))
    {
        _sfPointSize.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ProgramParameterNamesFieldMask & whichField))
    {
        _mfProgramParameterNames.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ProgramParameterValuesFieldMask & whichField))
    {
        _mfProgramParameterValues.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        _sfGLId.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (IgnoreGLForAspectFieldMask & whichField))
    {
        _sfIgnoreGLForAspect.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void SHLChunkBase::executeSyncImpl(      SHLChunkBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (CgFrontEndFieldMask & whichField))
        _sfCgFrontEnd.syncWith(pOther->_sfCgFrontEnd);

    if(FieldBits::NoField != (PointSizeFieldMask & whichField))
        _sfPointSize.syncWith(pOther->_sfPointSize);

    if(FieldBits::NoField != (ProgramParameterNamesFieldMask & whichField))
        _mfProgramParameterNames.syncWith(pOther->_mfProgramParameterNames);

    if(FieldBits::NoField != (ProgramParameterValuesFieldMask & whichField))
        _mfProgramParameterValues.syncWith(pOther->_mfProgramParameterValues);

    if(FieldBits::NoField != (GLIdFieldMask & whichField))
        _sfGLId.syncWith(pOther->_sfGLId);

    if(FieldBits::NoField != (IgnoreGLForAspectFieldMask & whichField))
        _sfIgnoreGLForAspect.syncWith(pOther->_sfIgnoreGLForAspect);


}
#else
void SHLChunkBase::executeSyncImpl(      SHLChunkBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (CgFrontEndFieldMask & whichField))
        _sfCgFrontEnd.syncWith(pOther->_sfCgFrontEnd);

    if(FieldBits::NoField != (PointSizeFieldMask & whichField))
        _sfPointSize.syncWith(pOther->_sfPointSize);

    if(FieldBits::NoField != (GLIdFieldMask & whichField))
        _sfGLId.syncWith(pOther->_sfGLId);

    if(FieldBits::NoField != (IgnoreGLForAspectFieldMask & whichField))
        _sfIgnoreGLForAspect.syncWith(pOther->_sfIgnoreGLForAspect);


    if(FieldBits::NoField != (ProgramParameterNamesFieldMask & whichField))
        _mfProgramParameterNames.syncWith(pOther->_mfProgramParameterNames, sInfo);

    if(FieldBits::NoField != (ProgramParameterValuesFieldMask & whichField))
        _mfProgramParameterValues.syncWith(pOther->_mfProgramParameterValues, sInfo);


}

void SHLChunkBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (ProgramParameterNamesFieldMask & whichField))
        _mfProgramParameterNames.beginEdit(uiAspect, uiContainerSize);

    if(FieldBits::NoField != (ProgramParameterValuesFieldMask & whichField))
        _mfProgramParameterValues.beginEdit(uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OSGSFieldTypeDef.inl>
#include <OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<SHLChunkPtr>::_type("SHLChunkPtr", "ShaderChunkPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(SHLChunkPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(SHLChunkPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);

OSG_END_NAMESPACE

