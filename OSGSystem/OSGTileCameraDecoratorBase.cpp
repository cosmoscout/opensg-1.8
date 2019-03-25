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
 **     class TileCameraDecorator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILETILECAMERADECORATORINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGTileCameraDecoratorBase.h"
#include "OSGTileCameraDecorator.h"


OSG_USING_NAMESPACE

const OSG::BitVector  TileCameraDecoratorBase::LeftFieldMask = 
    (TypeTraits<BitVector>::One << TileCameraDecoratorBase::LeftFieldId);

const OSG::BitVector  TileCameraDecoratorBase::RightFieldMask = 
    (TypeTraits<BitVector>::One << TileCameraDecoratorBase::RightFieldId);

const OSG::BitVector  TileCameraDecoratorBase::BottomFieldMask = 
    (TypeTraits<BitVector>::One << TileCameraDecoratorBase::BottomFieldId);

const OSG::BitVector  TileCameraDecoratorBase::TopFieldMask = 
    (TypeTraits<BitVector>::One << TileCameraDecoratorBase::TopFieldId);

const OSG::BitVector  TileCameraDecoratorBase::FullWidthFieldMask = 
    (TypeTraits<BitVector>::One << TileCameraDecoratorBase::FullWidthFieldId);

const OSG::BitVector  TileCameraDecoratorBase::FullHeightFieldMask = 
    (TypeTraits<BitVector>::One << TileCameraDecoratorBase::FullHeightFieldId);

const OSG::BitVector TileCameraDecoratorBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Real32          TileCameraDecoratorBase::_sfLeft
    The left border of the selected tile.
*/
/*! \var Real32          TileCameraDecoratorBase::_sfRight
    The right border of the selected tile.
*/
/*! \var Real32          TileCameraDecoratorBase::_sfBottom
    The bottom border of the selected tile.
*/
/*! \var Real32          TileCameraDecoratorBase::_sfTop
    The top border of the selected tile.
*/
/*! \var UInt32          TileCameraDecoratorBase::_sfFullWidth
    The width of the full image this is a tile of.
*/
/*! \var UInt32          TileCameraDecoratorBase::_sfFullHeight
    The height of the full image this is a tile of.
*/

//! TileCameraDecorator description

FieldDescription *TileCameraDecoratorBase::_desc[] = 
{
    new FieldDescription(SFReal32::getClassType(), 
                     "left", 
                     LeftFieldId, LeftFieldMask,
                     false,
                     (FieldAccessMethod) &TileCameraDecoratorBase::getSFLeft),
    new FieldDescription(SFReal32::getClassType(), 
                     "right", 
                     RightFieldId, RightFieldMask,
                     false,
                     (FieldAccessMethod) &TileCameraDecoratorBase::getSFRight),
    new FieldDescription(SFReal32::getClassType(), 
                     "bottom", 
                     BottomFieldId, BottomFieldMask,
                     false,
                     (FieldAccessMethod) &TileCameraDecoratorBase::getSFBottom),
    new FieldDescription(SFReal32::getClassType(), 
                     "top", 
                     TopFieldId, TopFieldMask,
                     true,
                     (FieldAccessMethod) &TileCameraDecoratorBase::getSFTop),
    new FieldDescription(SFUInt32::getClassType(), 
                     "fullWidth", 
                     FullWidthFieldId, FullWidthFieldMask,
                     false,
                     (FieldAccessMethod) &TileCameraDecoratorBase::getSFFullWidth),
    new FieldDescription(SFUInt32::getClassType(), 
                     "fullHeight", 
                     FullHeightFieldId, FullHeightFieldMask,
                     true,
                     (FieldAccessMethod) &TileCameraDecoratorBase::getSFFullHeight)
};


FieldContainerType TileCameraDecoratorBase::_type(
    "TileCameraDecorator",
    "CameraDecorator",
    NULL,
    (PrototypeCreateF) &TileCameraDecoratorBase::createEmpty,
    TileCameraDecorator::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(TileCameraDecoratorBase, TileCameraDecoratorPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &TileCameraDecoratorBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &TileCameraDecoratorBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr TileCameraDecoratorBase::shallowCopy(void) const 
{ 
    TileCameraDecoratorPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const TileCameraDecorator *>(this)); 

    return returnValue; 
}

UInt32 TileCameraDecoratorBase::getContainerSize(void) const 
{ 
    return sizeof(TileCameraDecorator); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void TileCameraDecoratorBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((TileCameraDecoratorBase *) &other, whichField);
}
#else
void TileCameraDecoratorBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((TileCameraDecoratorBase *) &other, whichField, sInfo);
}
void TileCameraDecoratorBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void TileCameraDecoratorBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

TileCameraDecoratorBase::TileCameraDecoratorBase(void) :
    _sfLeft                   (Real32(0)), 
    _sfRight                  (Real32(1)), 
    _sfBottom                 (Real32(0)), 
    _sfTop                    (Real32(1)), 
    _sfFullWidth              (UInt32(0)), 
    _sfFullHeight             (UInt32(0)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

TileCameraDecoratorBase::TileCameraDecoratorBase(const TileCameraDecoratorBase &source) :
    _sfLeft                   (source._sfLeft                   ), 
    _sfRight                  (source._sfRight                  ), 
    _sfBottom                 (source._sfBottom                 ), 
    _sfTop                    (source._sfTop                    ), 
    _sfFullWidth              (source._sfFullWidth              ), 
    _sfFullHeight             (source._sfFullHeight             ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

TileCameraDecoratorBase::~TileCameraDecoratorBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 TileCameraDecoratorBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (LeftFieldMask & whichField))
    {
        returnValue += _sfLeft.getBinSize();
    }

    if(FieldBits::NoField != (RightFieldMask & whichField))
    {
        returnValue += _sfRight.getBinSize();
    }

    if(FieldBits::NoField != (BottomFieldMask & whichField))
    {
        returnValue += _sfBottom.getBinSize();
    }

    if(FieldBits::NoField != (TopFieldMask & whichField))
    {
        returnValue += _sfTop.getBinSize();
    }

    if(FieldBits::NoField != (FullWidthFieldMask & whichField))
    {
        returnValue += _sfFullWidth.getBinSize();
    }

    if(FieldBits::NoField != (FullHeightFieldMask & whichField))
    {
        returnValue += _sfFullHeight.getBinSize();
    }


    return returnValue;
}

void TileCameraDecoratorBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (LeftFieldMask & whichField))
    {
        _sfLeft.copyToBin(pMem);
    }

    if(FieldBits::NoField != (RightFieldMask & whichField))
    {
        _sfRight.copyToBin(pMem);
    }

    if(FieldBits::NoField != (BottomFieldMask & whichField))
    {
        _sfBottom.copyToBin(pMem);
    }

    if(FieldBits::NoField != (TopFieldMask & whichField))
    {
        _sfTop.copyToBin(pMem);
    }

    if(FieldBits::NoField != (FullWidthFieldMask & whichField))
    {
        _sfFullWidth.copyToBin(pMem);
    }

    if(FieldBits::NoField != (FullHeightFieldMask & whichField))
    {
        _sfFullHeight.copyToBin(pMem);
    }


}

void TileCameraDecoratorBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (LeftFieldMask & whichField))
    {
        _sfLeft.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (RightFieldMask & whichField))
    {
        _sfRight.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (BottomFieldMask & whichField))
    {
        _sfBottom.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (TopFieldMask & whichField))
    {
        _sfTop.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (FullWidthFieldMask & whichField))
    {
        _sfFullWidth.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (FullHeightFieldMask & whichField))
    {
        _sfFullHeight.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void TileCameraDecoratorBase::executeSyncImpl(      TileCameraDecoratorBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (LeftFieldMask & whichField))
        _sfLeft.syncWith(pOther->_sfLeft);

    if(FieldBits::NoField != (RightFieldMask & whichField))
        _sfRight.syncWith(pOther->_sfRight);

    if(FieldBits::NoField != (BottomFieldMask & whichField))
        _sfBottom.syncWith(pOther->_sfBottom);

    if(FieldBits::NoField != (TopFieldMask & whichField))
        _sfTop.syncWith(pOther->_sfTop);

    if(FieldBits::NoField != (FullWidthFieldMask & whichField))
        _sfFullWidth.syncWith(pOther->_sfFullWidth);

    if(FieldBits::NoField != (FullHeightFieldMask & whichField))
        _sfFullHeight.syncWith(pOther->_sfFullHeight);


}
#else
void TileCameraDecoratorBase::executeSyncImpl(      TileCameraDecoratorBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (LeftFieldMask & whichField))
        _sfLeft.syncWith(pOther->_sfLeft);

    if(FieldBits::NoField != (RightFieldMask & whichField))
        _sfRight.syncWith(pOther->_sfRight);

    if(FieldBits::NoField != (BottomFieldMask & whichField))
        _sfBottom.syncWith(pOther->_sfBottom);

    if(FieldBits::NoField != (TopFieldMask & whichField))
        _sfTop.syncWith(pOther->_sfTop);

    if(FieldBits::NoField != (FullWidthFieldMask & whichField))
        _sfFullWidth.syncWith(pOther->_sfFullWidth);

    if(FieldBits::NoField != (FullHeightFieldMask & whichField))
        _sfFullHeight.syncWith(pOther->_sfFullHeight);



}

void TileCameraDecoratorBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<TileCameraDecoratorPtr>::_type("TileCameraDecoratorPtr", "CameraDecoratorPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(TileCameraDecoratorPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(TileCameraDecoratorPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);

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
    static Char8 cvsid_hpp       [] = OSGTILECAMERADECORATORBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGTILECAMERADECORATORBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGTILECAMERADECORATORFIELDS_HEADER_CVSID;
}

