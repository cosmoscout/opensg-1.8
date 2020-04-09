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
 **     class Viewport!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEVIEWPORTINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGViewportBase.h"
#include "OSGViewport.h"


OSG_USING_NAMESPACE

const OSG::BitVector  ViewportBase::LeftFieldMask = 
    (TypeTraits<BitVector>::One << ViewportBase::LeftFieldId);

const OSG::BitVector  ViewportBase::RightFieldMask = 
    (TypeTraits<BitVector>::One << ViewportBase::RightFieldId);

const OSG::BitVector  ViewportBase::BottomFieldMask = 
    (TypeTraits<BitVector>::One << ViewportBase::BottomFieldId);

const OSG::BitVector  ViewportBase::TopFieldMask = 
    (TypeTraits<BitVector>::One << ViewportBase::TopFieldId);

const OSG::BitVector  ViewportBase::ParentFieldMask = 
    (TypeTraits<BitVector>::One << ViewportBase::ParentFieldId);

const OSG::BitVector  ViewportBase::CameraFieldMask = 
    (TypeTraits<BitVector>::One << ViewportBase::CameraFieldId);

const OSG::BitVector  ViewportBase::RootFieldMask = 
    (TypeTraits<BitVector>::One << ViewportBase::RootFieldId);

const OSG::BitVector  ViewportBase::BackgroundFieldMask = 
    (TypeTraits<BitVector>::One << ViewportBase::BackgroundFieldId);

const OSG::BitVector  ViewportBase::ForegroundsFieldMask = 
    (TypeTraits<BitVector>::One << ViewportBase::ForegroundsFieldId);

const OSG::BitVector  ViewportBase::TravMaskFieldMask = 
    (TypeTraits<BitVector>::One << ViewportBase::TravMaskFieldId);

const OSG::BitVector  ViewportBase::DrawTimeFieldMask = 
    (TypeTraits<BitVector>::One << ViewportBase::DrawTimeFieldId);

const OSG::BitVector ViewportBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Real32          ViewportBase::_sfLeft
    The left edge of the viewport. Values between 0 and 1 are relative to the size of 	the Window, values &gt; 1 are absolute pixel coordinates, value == -1 means the  	left border. All other values are illegal.
*/
/*! \var Real32          ViewportBase::_sfRight
    The right edge of the viewport. Values between 0 and 1 are relative to the size of 	the Window, values &gt; 1 are absolute pixel coordinates, value == -1 means the  	right border. All other values are illegal.
*/
/*! \var Real32          ViewportBase::_sfBottom
    The bottom edge of the viewport. Values between 0 and 1 are relative to the size of 	the Window, values &gt; 1 are absolute pixel coordinates, value == -1 means the  	bottom border. All other values are illegal.
*/
/*! \var Real32          ViewportBase::_sfTop
    The top edge of the viewport. Values between 0 and 1 are relative to the size of 	the Window, values &gt; 1 are absolute pixel coordinates, value == -1 means the  	top border. All other values are illegal.
*/
/*! \var WindowPtr       ViewportBase::_sfParent
    The Window this viewport is contained in.
*/
/*! \var CameraPtr       ViewportBase::_sfCamera
    The Camera used to render the viewport.
*/
/*! \var NodePtr         ViewportBase::_sfRoot
    The root of the tree that is displayed in this viewport.
*/
/*! \var BackgroundPtr   ViewportBase::_sfBackground
    The background used to clear this viewport.
*/
/*! \var ForegroundPtr   ViewportBase::_mfForegrounds
    The foreground additions to the rendered image.
*/
/*! \var UInt32          ViewportBase::_sfTravMask
    The foreground additions to the rendered image.
*/
/*! \var Real32          ViewportBase::_sfDrawTime
    Drawtime of the last frame using this viewport.
*/

//! Viewport description

FieldDescription *ViewportBase::_desc[] = 
{
    new FieldDescription(SFReal32::getClassType(), 
                     "left", 
                     LeftFieldId, LeftFieldMask,
                     false,
                     (FieldAccessMethod) &ViewportBase::getSFLeft),
    new FieldDescription(SFReal32::getClassType(), 
                     "right", 
                     RightFieldId, RightFieldMask,
                     false,
                     (FieldAccessMethod) &ViewportBase::getSFRight),
    new FieldDescription(SFReal32::getClassType(), 
                     "bottom", 
                     BottomFieldId, BottomFieldMask,
                     false,
                     (FieldAccessMethod) &ViewportBase::getSFBottom),
    new FieldDescription(SFReal32::getClassType(), 
                     "top", 
                     TopFieldId, TopFieldMask,
                     false,
                     (FieldAccessMethod) &ViewportBase::getSFTop),
    new FieldDescription(SFWindowPtr::getClassType(), 
                     "parent", 
                     ParentFieldId, ParentFieldMask,
                     false,
                     (FieldAccessMethod) &ViewportBase::getSFParent),
    new FieldDescription(SFCameraPtr::getClassType(), 
                     "camera", 
                     CameraFieldId, CameraFieldMask,
                     false,
                     (FieldAccessMethod) &ViewportBase::getSFCamera),
    new FieldDescription(SFNodePtr::getClassType(), 
                     "root", 
                     RootFieldId, RootFieldMask,
                     false,
                     (FieldAccessMethod) &ViewportBase::getSFRoot),
    new FieldDescription(SFBackgroundPtr::getClassType(), 
                     "background", 
                     BackgroundFieldId, BackgroundFieldMask,
                     false,
                     (FieldAccessMethod) &ViewportBase::getSFBackground),
    new FieldDescription(MFForegroundPtr::getClassType(), 
                     "foregrounds", 
                     ForegroundsFieldId, ForegroundsFieldMask,
                     false,
                     (FieldAccessMethod) &ViewportBase::getMFForegrounds),
    new FieldDescription(SFUInt32::getClassType(), 
                     "travMask", 
                     TravMaskFieldId, TravMaskFieldMask,
                     false,
                     (FieldAccessMethod) &ViewportBase::getSFTravMask),
    new FieldDescription(SFReal32::getClassType(), 
                     "drawTime", 
                     DrawTimeFieldId, DrawTimeFieldMask,
                     true,
                     (FieldAccessMethod) &ViewportBase::getSFDrawTime)
};


FieldContainerType ViewportBase::_type(
    "Viewport",
    "AttachmentContainer",
    NULL,
    (PrototypeCreateF) &ViewportBase::createEmpty,
    Viewport::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(ViewportBase, ViewportPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &ViewportBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &ViewportBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr ViewportBase::shallowCopy(void) const 
{ 
    ViewportPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const Viewport *>(this)); 

    return returnValue; 
}

UInt32 ViewportBase::getContainerSize(void) const 
{ 
    return sizeof(Viewport); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void ViewportBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((ViewportBase *) &other, whichField);
}
#else
void ViewportBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((ViewportBase *) &other, whichField, sInfo);
}
void ViewportBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void ViewportBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

    _mfForegrounds.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

ViewportBase::ViewportBase(void) :
    _sfLeft                   (), 
    _sfRight                  (), 
    _sfBottom                 (), 
    _sfTop                    (), 
    _sfParent                 (), 
    _sfCamera                 (), 
    _sfRoot                   (), 
    _sfBackground             (), 
    _mfForegrounds            (), 
    _sfTravMask               (UInt32(TypeTraits<UInt32>::getMax())), 
    _sfDrawTime               (Real32(0.0f)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

ViewportBase::ViewportBase(const ViewportBase &source) :
    _sfLeft                   (source._sfLeft                   ), 
    _sfRight                  (source._sfRight                  ), 
    _sfBottom                 (source._sfBottom                 ), 
    _sfTop                    (source._sfTop                    ), 
    _sfParent                 (source._sfParent                 ), 
    _sfCamera                 (source._sfCamera                 ), 
    _sfRoot                   (source._sfRoot                   ), 
    _sfBackground             (source._sfBackground             ), 
    _mfForegrounds            (source._mfForegrounds            ), 
    _sfTravMask               (source._sfTravMask               ), 
    _sfDrawTime               (source._sfDrawTime               ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

ViewportBase::~ViewportBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 ViewportBase::getBinSize(const BitVector &whichField)
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

    if(FieldBits::NoField != (ParentFieldMask & whichField))
    {
        returnValue += _sfParent.getBinSize();
    }

    if(FieldBits::NoField != (CameraFieldMask & whichField))
    {
        returnValue += _sfCamera.getBinSize();
    }

    if(FieldBits::NoField != (RootFieldMask & whichField))
    {
        returnValue += _sfRoot.getBinSize();
    }

    if(FieldBits::NoField != (BackgroundFieldMask & whichField))
    {
        returnValue += _sfBackground.getBinSize();
    }

    if(FieldBits::NoField != (ForegroundsFieldMask & whichField))
    {
        returnValue += _mfForegrounds.getBinSize();
    }

    if(FieldBits::NoField != (TravMaskFieldMask & whichField))
    {
        returnValue += _sfTravMask.getBinSize();
    }

    if(FieldBits::NoField != (DrawTimeFieldMask & whichField))
    {
        returnValue += _sfDrawTime.getBinSize();
    }


    return returnValue;
}

void ViewportBase::copyToBin(      BinaryDataHandler &pMem,
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

    if(FieldBits::NoField != (ParentFieldMask & whichField))
    {
        _sfParent.copyToBin(pMem);
    }

    if(FieldBits::NoField != (CameraFieldMask & whichField))
    {
        _sfCamera.copyToBin(pMem);
    }

    if(FieldBits::NoField != (RootFieldMask & whichField))
    {
        _sfRoot.copyToBin(pMem);
    }

    if(FieldBits::NoField != (BackgroundFieldMask & whichField))
    {
        _sfBackground.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ForegroundsFieldMask & whichField))
    {
        _mfForegrounds.copyToBin(pMem);
    }

    if(FieldBits::NoField != (TravMaskFieldMask & whichField))
    {
        _sfTravMask.copyToBin(pMem);
    }

    if(FieldBits::NoField != (DrawTimeFieldMask & whichField))
    {
        _sfDrawTime.copyToBin(pMem);
    }


}

void ViewportBase::copyFromBin(      BinaryDataHandler &pMem,
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

    if(FieldBits::NoField != (ParentFieldMask & whichField))
    {
        _sfParent.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (CameraFieldMask & whichField))
    {
        _sfCamera.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (RootFieldMask & whichField))
    {
        _sfRoot.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (BackgroundFieldMask & whichField))
    {
        _sfBackground.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ForegroundsFieldMask & whichField))
    {
        _mfForegrounds.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (TravMaskFieldMask & whichField))
    {
        _sfTravMask.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (DrawTimeFieldMask & whichField))
    {
        _sfDrawTime.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void ViewportBase::executeSyncImpl(      ViewportBase *pOther,
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

    if(FieldBits::NoField != (ParentFieldMask & whichField))
        _sfParent.syncWith(pOther->_sfParent);

    if(FieldBits::NoField != (CameraFieldMask & whichField))
        _sfCamera.syncWith(pOther->_sfCamera);

    if(FieldBits::NoField != (RootFieldMask & whichField))
        _sfRoot.syncWith(pOther->_sfRoot);

    if(FieldBits::NoField != (BackgroundFieldMask & whichField))
        _sfBackground.syncWith(pOther->_sfBackground);

    if(FieldBits::NoField != (ForegroundsFieldMask & whichField))
        _mfForegrounds.syncWith(pOther->_mfForegrounds);

    if(FieldBits::NoField != (TravMaskFieldMask & whichField))
        _sfTravMask.syncWith(pOther->_sfTravMask);

    if(FieldBits::NoField != (DrawTimeFieldMask & whichField))
        _sfDrawTime.syncWith(pOther->_sfDrawTime);


}
#else
void ViewportBase::executeSyncImpl(      ViewportBase *pOther,
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

    if(FieldBits::NoField != (ParentFieldMask & whichField))
        _sfParent.syncWith(pOther->_sfParent);

    if(FieldBits::NoField != (CameraFieldMask & whichField))
        _sfCamera.syncWith(pOther->_sfCamera);

    if(FieldBits::NoField != (RootFieldMask & whichField))
        _sfRoot.syncWith(pOther->_sfRoot);

    if(FieldBits::NoField != (BackgroundFieldMask & whichField))
        _sfBackground.syncWith(pOther->_sfBackground);

    if(FieldBits::NoField != (TravMaskFieldMask & whichField))
        _sfTravMask.syncWith(pOther->_sfTravMask);

    if(FieldBits::NoField != (DrawTimeFieldMask & whichField))
        _sfDrawTime.syncWith(pOther->_sfDrawTime);


    if(FieldBits::NoField != (ForegroundsFieldMask & whichField))
        _mfForegrounds.syncWith(pOther->_mfForegrounds, sInfo);


}

void ViewportBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (ForegroundsFieldMask & whichField))
        _mfForegrounds.beginEdit(uiAspect, uiContainerSize);

}
#endif



#include <OSGSFieldTypeDef.inl>
#include <OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<ViewportPtr>::_type("ViewportPtr", "AttachmentContainerPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(ViewportPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(ViewportPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);

OSG_END_NAMESPACE
