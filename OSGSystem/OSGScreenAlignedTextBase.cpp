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
 **     class ScreenAlignedText!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESCREENALIGNEDTEXTINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGScreenAlignedTextBase.h"
#include "OSGScreenAlignedText.h"


OSG_USING_NAMESPACE

const OSG::BitVector  ScreenAlignedTextBase::ColorFieldMask = 
    (TypeTraits<BitVector>::One << ScreenAlignedTextBase::ColorFieldId);

const OSG::BitVector  ScreenAlignedTextBase::RenderImageFieldMask = 
    (TypeTraits<BitVector>::One << ScreenAlignedTextBase::RenderImageFieldId);

const OSG::BitVector ScreenAlignedTextBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Color4f         ScreenAlignedTextBase::_sfColor
    
*/
/*! \var ImagePtr        ScreenAlignedTextBase::_sfRenderImage
    Bitmap image used only for rendering
*/

//! ScreenAlignedText description

FieldDescription *ScreenAlignedTextBase::_desc[] = 
{
    new FieldDescription(SFColor4f::getClassType(), 
                     "Color", 
                     ColorFieldId, ColorFieldMask,
                     false,
                     (FieldAccessMethod) &ScreenAlignedTextBase::getSFColor),
    new FieldDescription(SFImagePtr::getClassType(), 
                     "RenderImage", 
                     RenderImageFieldId, RenderImageFieldMask,
                     true,
                     (FieldAccessMethod) &ScreenAlignedTextBase::getSFRenderImage)
};


FieldContainerType ScreenAlignedTextBase::_type(
    "ScreenAlignedText",
    "AbstractText",
    NULL,
    (PrototypeCreateF) &ScreenAlignedTextBase::createEmpty,
    ScreenAlignedText::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(ScreenAlignedTextBase, ScreenAlignedTextPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &ScreenAlignedTextBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &ScreenAlignedTextBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr ScreenAlignedTextBase::shallowCopy(void) const 
{ 
    ScreenAlignedTextPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const ScreenAlignedText *>(this)); 

    return returnValue; 
}

UInt32 ScreenAlignedTextBase::getContainerSize(void) const 
{ 
    return sizeof(ScreenAlignedText); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void ScreenAlignedTextBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((ScreenAlignedTextBase *) &other, whichField);
}
#else
void ScreenAlignedTextBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((ScreenAlignedTextBase *) &other, whichField, sInfo);
}
void ScreenAlignedTextBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void ScreenAlignedTextBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

ScreenAlignedTextBase::ScreenAlignedTextBase(void) :
    _sfColor                  (), 
    _sfRenderImage            (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

ScreenAlignedTextBase::ScreenAlignedTextBase(const ScreenAlignedTextBase &source) :
    _sfColor                  (source._sfColor                  ), 
    _sfRenderImage            (source._sfRenderImage            ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

ScreenAlignedTextBase::~ScreenAlignedTextBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 ScreenAlignedTextBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        returnValue += _sfColor.getBinSize();
    }

    if(FieldBits::NoField != (RenderImageFieldMask & whichField))
    {
        returnValue += _sfRenderImage.getBinSize();
    }


    return returnValue;
}

void ScreenAlignedTextBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        _sfColor.copyToBin(pMem);
    }

    if(FieldBits::NoField != (RenderImageFieldMask & whichField))
    {
        _sfRenderImage.copyToBin(pMem);
    }


}

void ScreenAlignedTextBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        _sfColor.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (RenderImageFieldMask & whichField))
    {
        _sfRenderImage.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void ScreenAlignedTextBase::executeSyncImpl(      ScreenAlignedTextBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
        _sfColor.syncWith(pOther->_sfColor);

    if(FieldBits::NoField != (RenderImageFieldMask & whichField))
        _sfRenderImage.syncWith(pOther->_sfRenderImage);


}
#else
void ScreenAlignedTextBase::executeSyncImpl(      ScreenAlignedTextBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
        _sfColor.syncWith(pOther->_sfColor);

    if(FieldBits::NoField != (RenderImageFieldMask & whichField))
        _sfRenderImage.syncWith(pOther->_sfRenderImage);



}

void ScreenAlignedTextBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<ScreenAlignedTextPtr>::_type("ScreenAlignedTextPtr", "AbstractTextPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(ScreenAlignedTextPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(ScreenAlignedTextPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);

OSG_END_NAMESPACE
