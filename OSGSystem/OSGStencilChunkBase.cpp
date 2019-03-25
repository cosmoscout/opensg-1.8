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
 **     class StencilChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESTENCILCHUNKINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGStencilChunkBase.h"
#include "OSGStencilChunk.h"

#include <OSGGL.h>                        // StencilFunc default header
#include <OSGGL.h>                        // StencilOpFail default header
#include <OSGGL.h>                        // StencilOpZFail default header
#include <OSGGL.h>                        // StencilOpZPass default header

OSG_BEGIN_NAMESPACE

const OSG::BitVector  StencilChunkBase::StencilFuncFieldMask = 
    (TypeTraits<BitVector>::One << StencilChunkBase::StencilFuncFieldId);

const OSG::BitVector  StencilChunkBase::StencilValueFieldMask = 
    (TypeTraits<BitVector>::One << StencilChunkBase::StencilValueFieldId);

const OSG::BitVector  StencilChunkBase::StencilMaskFieldMask = 
    (TypeTraits<BitVector>::One << StencilChunkBase::StencilMaskFieldId);

const OSG::BitVector  StencilChunkBase::StencilOpFailFieldMask = 
    (TypeTraits<BitVector>::One << StencilChunkBase::StencilOpFailFieldId);

const OSG::BitVector  StencilChunkBase::StencilOpZFailFieldMask = 
    (TypeTraits<BitVector>::One << StencilChunkBase::StencilOpZFailFieldId);

const OSG::BitVector  StencilChunkBase::StencilOpZPassFieldMask = 
    (TypeTraits<BitVector>::One << StencilChunkBase::StencilOpZPassFieldId);

const OSG::BitVector  StencilChunkBase::ClearBufferFieldMask = 
    (TypeTraits<BitVector>::One << StencilChunkBase::ClearBufferFieldId);

const OSG::BitVector  StencilChunkBase::BitMaskFieldMask = 
    (TypeTraits<BitVector>::One << StencilChunkBase::BitMaskFieldId);

const OSG::BitVector StencilChunkBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var GLenum          StencilChunkBase::_sfStencilFunc
    The stencilFunc defines how fragments which do not fulfill a certain condition are handled.          See glStencilFunc() for details. GL_NONE is used to disable stencil.
*/
/*! \var Int32           StencilChunkBase::_sfStencilValue
    The stencilFunc defines how fragments which do not fulfill a certain condition are handled.          See glStencilFunc() for details. GL_NONE is used to disable stencil.
*/
/*! \var UInt32          StencilChunkBase::_sfStencilMask
    The stencilFunc defines how fragments which do not fulfill a certain condition are handled.          See glStencilFunc() for details. GL_NONE is used to disable stencil.
*/
/*! \var GLenum          StencilChunkBase::_sfStencilOpFail
    The stencilFunc defines how fragments which do not fulfill a certain condition are handled.          See glStencilFunc() for details. GL_NONE is used to disable stencil.
*/
/*! \var GLenum          StencilChunkBase::_sfStencilOpZFail
    The stencilFunc defines how fragments which do not fulfill a certain condition are handled.          See glStencilFunc() for details. GL_NONE is used to disable stencil.
*/
/*! \var GLenum          StencilChunkBase::_sfStencilOpZPass
    The stencilFunc defines how fragments which do not fulfill a certain condition are handled.          See glStencilFunc() for details. GL_NONE is used to disable stencil.
*/
/*! \var Int32           StencilChunkBase::_sfClearBuffer
    Clear buffer on activate(1) or deactivate(2).
*/
/*! \var UInt32          StencilChunkBase::_sfBitMask
    Controls writing of individual bits in stencil planes, with 0 means write protected and 1 write enabled.
*/

//! StencilChunk description

FieldDescription *StencilChunkBase::_desc[] = 
{
    new FieldDescription(SFGLenum::getClassType(), 
                     "stencilFunc", 
                     StencilFuncFieldId, StencilFuncFieldMask,
                     false,
                     (FieldAccessMethod) &StencilChunkBase::getSFStencilFunc),
    new FieldDescription(SFInt32::getClassType(), 
                     "stencilValue", 
                     StencilValueFieldId, StencilValueFieldMask,
                     false,
                     (FieldAccessMethod) &StencilChunkBase::getSFStencilValue),
    new FieldDescription(SFUInt32::getClassType(), 
                     "stencilMask", 
                     StencilMaskFieldId, StencilMaskFieldMask,
                     false,
                     (FieldAccessMethod) &StencilChunkBase::getSFStencilMask),
    new FieldDescription(SFGLenum::getClassType(), 
                     "stencilOpFail", 
                     StencilOpFailFieldId, StencilOpFailFieldMask,
                     false,
                     (FieldAccessMethod) &StencilChunkBase::getSFStencilOpFail),
    new FieldDescription(SFGLenum::getClassType(), 
                     "stencilOpZFail", 
                     StencilOpZFailFieldId, StencilOpZFailFieldMask,
                     false,
                     (FieldAccessMethod) &StencilChunkBase::getSFStencilOpZFail),
    new FieldDescription(SFGLenum::getClassType(), 
                     "stencilOpZPass", 
                     StencilOpZPassFieldId, StencilOpZPassFieldMask,
                     false,
                     (FieldAccessMethod) &StencilChunkBase::getSFStencilOpZPass),
    new FieldDescription(SFInt32::getClassType(), 
                     "clearBuffer", 
                     ClearBufferFieldId, ClearBufferFieldMask,
                     false,
                     (FieldAccessMethod) &StencilChunkBase::getSFClearBuffer),
    new FieldDescription(SFUInt32::getClassType(), 
                     "bitMask", 
                     BitMaskFieldId, BitMaskFieldMask,
                     false,
                     (FieldAccessMethod) &StencilChunkBase::getSFBitMask)
};


FieldContainerType StencilChunkBase::_type(
    "StencilChunk",
    "StateChunk",
    NULL,
    (PrototypeCreateF) &StencilChunkBase::createEmpty,
    StencilChunk::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(StencilChunkBase, StencilChunkPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &StencilChunkBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &StencilChunkBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr StencilChunkBase::shallowCopy(void) const 
{ 
    StencilChunkPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const StencilChunk *>(this)); 

    return returnValue; 
}

UInt32 StencilChunkBase::getContainerSize(void) const 
{ 
    return sizeof(StencilChunk); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void StencilChunkBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((StencilChunkBase *) &other, whichField);
}
#else
void StencilChunkBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((StencilChunkBase *) &other, whichField, sInfo);
}
void StencilChunkBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void StencilChunkBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

StencilChunkBase::StencilChunkBase(void) :
    _sfStencilFunc            (GLenum(GL_NONE)), 
    _sfStencilValue           (Int32(0)), 
    _sfStencilMask            (UInt32(0x1)), 
    _sfStencilOpFail          (GLenum(GL_KEEP)), 
    _sfStencilOpZFail         (GLenum(GL_KEEP)), 
    _sfStencilOpZPass         (GLenum(GL_KEEP)), 
    _sfClearBuffer            (Int32(0)), 
    _sfBitMask                (UInt32(0xFFFFFFFF)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

StencilChunkBase::StencilChunkBase(const StencilChunkBase &source) :
    _sfStencilFunc            (source._sfStencilFunc            ), 
    _sfStencilValue           (source._sfStencilValue           ), 
    _sfStencilMask            (source._sfStencilMask            ), 
    _sfStencilOpFail          (source._sfStencilOpFail          ), 
    _sfStencilOpZFail         (source._sfStencilOpZFail         ), 
    _sfStencilOpZPass         (source._sfStencilOpZPass         ), 
    _sfClearBuffer            (source._sfClearBuffer            ), 
    _sfBitMask                (source._sfBitMask                ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

StencilChunkBase::~StencilChunkBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 StencilChunkBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (StencilFuncFieldMask & whichField))
    {
        returnValue += _sfStencilFunc.getBinSize();
    }

    if(FieldBits::NoField != (StencilValueFieldMask & whichField))
    {
        returnValue += _sfStencilValue.getBinSize();
    }

    if(FieldBits::NoField != (StencilMaskFieldMask & whichField))
    {
        returnValue += _sfStencilMask.getBinSize();
    }

    if(FieldBits::NoField != (StencilOpFailFieldMask & whichField))
    {
        returnValue += _sfStencilOpFail.getBinSize();
    }

    if(FieldBits::NoField != (StencilOpZFailFieldMask & whichField))
    {
        returnValue += _sfStencilOpZFail.getBinSize();
    }

    if(FieldBits::NoField != (StencilOpZPassFieldMask & whichField))
    {
        returnValue += _sfStencilOpZPass.getBinSize();
    }

    if(FieldBits::NoField != (ClearBufferFieldMask & whichField))
    {
        returnValue += _sfClearBuffer.getBinSize();
    }

    if(FieldBits::NoField != (BitMaskFieldMask & whichField))
    {
        returnValue += _sfBitMask.getBinSize();
    }


    return returnValue;
}

void StencilChunkBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (StencilFuncFieldMask & whichField))
    {
        _sfStencilFunc.copyToBin(pMem);
    }

    if(FieldBits::NoField != (StencilValueFieldMask & whichField))
    {
        _sfStencilValue.copyToBin(pMem);
    }

    if(FieldBits::NoField != (StencilMaskFieldMask & whichField))
    {
        _sfStencilMask.copyToBin(pMem);
    }

    if(FieldBits::NoField != (StencilOpFailFieldMask & whichField))
    {
        _sfStencilOpFail.copyToBin(pMem);
    }

    if(FieldBits::NoField != (StencilOpZFailFieldMask & whichField))
    {
        _sfStencilOpZFail.copyToBin(pMem);
    }

    if(FieldBits::NoField != (StencilOpZPassFieldMask & whichField))
    {
        _sfStencilOpZPass.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ClearBufferFieldMask & whichField))
    {
        _sfClearBuffer.copyToBin(pMem);
    }

    if(FieldBits::NoField != (BitMaskFieldMask & whichField))
    {
        _sfBitMask.copyToBin(pMem);
    }


}

void StencilChunkBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (StencilFuncFieldMask & whichField))
    {
        _sfStencilFunc.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (StencilValueFieldMask & whichField))
    {
        _sfStencilValue.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (StencilMaskFieldMask & whichField))
    {
        _sfStencilMask.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (StencilOpFailFieldMask & whichField))
    {
        _sfStencilOpFail.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (StencilOpZFailFieldMask & whichField))
    {
        _sfStencilOpZFail.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (StencilOpZPassFieldMask & whichField))
    {
        _sfStencilOpZPass.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ClearBufferFieldMask & whichField))
    {
        _sfClearBuffer.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (BitMaskFieldMask & whichField))
    {
        _sfBitMask.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void StencilChunkBase::executeSyncImpl(      StencilChunkBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (StencilFuncFieldMask & whichField))
        _sfStencilFunc.syncWith(pOther->_sfStencilFunc);

    if(FieldBits::NoField != (StencilValueFieldMask & whichField))
        _sfStencilValue.syncWith(pOther->_sfStencilValue);

    if(FieldBits::NoField != (StencilMaskFieldMask & whichField))
        _sfStencilMask.syncWith(pOther->_sfStencilMask);

    if(FieldBits::NoField != (StencilOpFailFieldMask & whichField))
        _sfStencilOpFail.syncWith(pOther->_sfStencilOpFail);

    if(FieldBits::NoField != (StencilOpZFailFieldMask & whichField))
        _sfStencilOpZFail.syncWith(pOther->_sfStencilOpZFail);

    if(FieldBits::NoField != (StencilOpZPassFieldMask & whichField))
        _sfStencilOpZPass.syncWith(pOther->_sfStencilOpZPass);

    if(FieldBits::NoField != (ClearBufferFieldMask & whichField))
        _sfClearBuffer.syncWith(pOther->_sfClearBuffer);

    if(FieldBits::NoField != (BitMaskFieldMask & whichField))
        _sfBitMask.syncWith(pOther->_sfBitMask);


}
#else
void StencilChunkBase::executeSyncImpl(      StencilChunkBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (StencilFuncFieldMask & whichField))
        _sfStencilFunc.syncWith(pOther->_sfStencilFunc);

    if(FieldBits::NoField != (StencilValueFieldMask & whichField))
        _sfStencilValue.syncWith(pOther->_sfStencilValue);

    if(FieldBits::NoField != (StencilMaskFieldMask & whichField))
        _sfStencilMask.syncWith(pOther->_sfStencilMask);

    if(FieldBits::NoField != (StencilOpFailFieldMask & whichField))
        _sfStencilOpFail.syncWith(pOther->_sfStencilOpFail);

    if(FieldBits::NoField != (StencilOpZFailFieldMask & whichField))
        _sfStencilOpZFail.syncWith(pOther->_sfStencilOpZFail);

    if(FieldBits::NoField != (StencilOpZPassFieldMask & whichField))
        _sfStencilOpZPass.syncWith(pOther->_sfStencilOpZPass);

    if(FieldBits::NoField != (ClearBufferFieldMask & whichField))
        _sfClearBuffer.syncWith(pOther->_sfClearBuffer);

    if(FieldBits::NoField != (BitMaskFieldMask & whichField))
        _sfBitMask.syncWith(pOther->_sfBitMask);



}

void StencilChunkBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

}
#endif



#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<StencilChunkPtr>::_type("StencilChunkPtr", "StateChunkPtr");
#endif



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
    static Char8 cvsid_cpp       [] = "@(#)$Id: OSGStencilChunkBase.cpp,v 1.7 2006/09/08 13:45:30 yjung Exp $";
    static Char8 cvsid_hpp       [] = OSGSTENCILCHUNKBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGSTENCILCHUNKBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGSTENCILCHUNKFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

