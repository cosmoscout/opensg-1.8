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
 **     class LightModelChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILELIGHTMODELCHUNKINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGLightModelChunkBase.h"
#include "OSGLightModelChunk.h"

#include <OSGGLEXT.h>                     // ColorControl default header

OSG_USING_NAMESPACE

const OSG::BitVector  LightModelChunkBase::AmbientFieldMask = 
    (TypeTraits<BitVector>::One << LightModelChunkBase::AmbientFieldId);

const OSG::BitVector  LightModelChunkBase::ColorControlFieldMask = 
    (TypeTraits<BitVector>::One << LightModelChunkBase::ColorControlFieldId);

const OSG::BitVector  LightModelChunkBase::LocalViewerFieldMask = 
    (TypeTraits<BitVector>::One << LightModelChunkBase::LocalViewerFieldId);

const OSG::BitVector LightModelChunkBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Color4f         LightModelChunkBase::_sfAmbient
    GL_LIGHT_MODEL_AMBIENT is set to this color.
*/
/*! \var GLenum          LightModelChunkBase::_sfColorControl
    GL_LIGHT_MODEL_COLOR_CONTROL is set to this value.  Legal values are directly taken from the glLightModel() manpage.
*/
/*! \var bool            LightModelChunkBase::_sfLocalViewer
    GL_LIGHT_MODEL_LOCAL_VIEWER is activated by this bool.
*/

//! LightModelChunk description

FieldDescription *LightModelChunkBase::_desc[] = 
{
    new FieldDescription(SFColor4f::getClassType(), 
                     "ambient", 
                     AmbientFieldId, AmbientFieldMask,
                     false,
                     (FieldAccessMethod) &LightModelChunkBase::getSFAmbient),
    new FieldDescription(SFGLenum::getClassType(), 
                     "colorControl", 
                     ColorControlFieldId, ColorControlFieldMask,
                     false,
                     (FieldAccessMethod) &LightModelChunkBase::getSFColorControl),
    new FieldDescription(SFBool::getClassType(), 
                     "localViewer", 
                     LocalViewerFieldId, LocalViewerFieldMask,
                     false,
                     (FieldAccessMethod) &LightModelChunkBase::getSFLocalViewer)
};


FieldContainerType LightModelChunkBase::_type(
    "LightModelChunk",
    "StateChunk",
    NULL,
    (PrototypeCreateF) &LightModelChunkBase::createEmpty,
    LightModelChunk::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(LightModelChunkBase, LightModelChunkPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &LightModelChunkBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &LightModelChunkBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr LightModelChunkBase::shallowCopy(void) const 
{ 
    LightModelChunkPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const LightModelChunk *>(this)); 

    return returnValue; 
}

UInt32 LightModelChunkBase::getContainerSize(void) const 
{ 
    return sizeof(LightModelChunk); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void LightModelChunkBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((LightModelChunkBase *) &other, whichField);
}
#else
void LightModelChunkBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((LightModelChunkBase *) &other, whichField, sInfo);
}
void LightModelChunkBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void LightModelChunkBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

LightModelChunkBase::LightModelChunkBase(void) :
    _sfAmbient                (Color4f(0.2f, 0.2f, 0.2f, 1.0f)), 
    _sfColorControl           (GLenum(GL_SINGLE_COLOR)), 
    _sfLocalViewer            (bool(false)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

LightModelChunkBase::LightModelChunkBase(const LightModelChunkBase &source) :
    _sfAmbient                (source._sfAmbient                ), 
    _sfColorControl           (source._sfColorControl           ), 
    _sfLocalViewer            (source._sfLocalViewer            ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

LightModelChunkBase::~LightModelChunkBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 LightModelChunkBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (AmbientFieldMask & whichField))
    {
        returnValue += _sfAmbient.getBinSize();
    }

    if(FieldBits::NoField != (ColorControlFieldMask & whichField))
    {
        returnValue += _sfColorControl.getBinSize();
    }

    if(FieldBits::NoField != (LocalViewerFieldMask & whichField))
    {
        returnValue += _sfLocalViewer.getBinSize();
    }


    return returnValue;
}

void LightModelChunkBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (AmbientFieldMask & whichField))
    {
        _sfAmbient.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ColorControlFieldMask & whichField))
    {
        _sfColorControl.copyToBin(pMem);
    }

    if(FieldBits::NoField != (LocalViewerFieldMask & whichField))
    {
        _sfLocalViewer.copyToBin(pMem);
    }


}

void LightModelChunkBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (AmbientFieldMask & whichField))
    {
        _sfAmbient.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ColorControlFieldMask & whichField))
    {
        _sfColorControl.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (LocalViewerFieldMask & whichField))
    {
        _sfLocalViewer.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void LightModelChunkBase::executeSyncImpl(      LightModelChunkBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (AmbientFieldMask & whichField))
        _sfAmbient.syncWith(pOther->_sfAmbient);

    if(FieldBits::NoField != (ColorControlFieldMask & whichField))
        _sfColorControl.syncWith(pOther->_sfColorControl);

    if(FieldBits::NoField != (LocalViewerFieldMask & whichField))
        _sfLocalViewer.syncWith(pOther->_sfLocalViewer);


}
#else
void LightModelChunkBase::executeSyncImpl(      LightModelChunkBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (AmbientFieldMask & whichField))
        _sfAmbient.syncWith(pOther->_sfAmbient);

    if(FieldBits::NoField != (ColorControlFieldMask & whichField))
        _sfColorControl.syncWith(pOther->_sfColorControl);

    if(FieldBits::NoField != (LocalViewerFieldMask & whichField))
        _sfLocalViewer.syncWith(pOther->_sfLocalViewer);



}

void LightModelChunkBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

}
#endif



#include <OSGSFieldTypeDef.inl>
#include <OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<LightModelChunkPtr>::_type("LightModelChunkPtr", "StateChunkPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(LightModelChunkPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(LightModelChunkPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);

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
    static Char8 cvsid_cpp       [] = "@(#)$Id: OSGLightModelChunkBase.cpp,v 1.3 2006/02/20 17:04:46 dirk Exp $";
    static Char8 cvsid_hpp       [] = OSGLIGHTMODELCHUNKBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGLIGHTMODELCHUNKBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGLIGHTMODELCHUNKFIELDS_HEADER_CVSID;
}

