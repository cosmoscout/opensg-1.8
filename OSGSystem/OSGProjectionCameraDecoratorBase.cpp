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
 **     class ProjectionCameraDecorator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEPROJECTIONCAMERADECORATORINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGProjectionCameraDecoratorBase.h"
#include "OSGProjectionCameraDecorator.h"


OSG_USING_NAMESPACE

const OSG::BitVector  ProjectionCameraDecoratorBase::UserFieldMask = 
    (TypeTraits<BitVector>::One << ProjectionCameraDecoratorBase::UserFieldId);

const OSG::BitVector  ProjectionCameraDecoratorBase::SurfaceFieldMask = 
    (TypeTraits<BitVector>::One << ProjectionCameraDecoratorBase::SurfaceFieldId);

const OSG::BitVector  ProjectionCameraDecoratorBase::LeftFieldMask = 
    (TypeTraits<BitVector>::One << ProjectionCameraDecoratorBase::LeftFieldId);

const OSG::BitVector  ProjectionCameraDecoratorBase::BottomFieldMask = 
    (TypeTraits<BitVector>::One << ProjectionCameraDecoratorBase::BottomFieldId);

const OSG::BitVector  ProjectionCameraDecoratorBase::NormalFieldMask = 
    (TypeTraits<BitVector>::One << ProjectionCameraDecoratorBase::NormalFieldId);

const OSG::BitVector  ProjectionCameraDecoratorBase::WidthFieldMask = 
    (TypeTraits<BitVector>::One << ProjectionCameraDecoratorBase::WidthFieldId);

const OSG::BitVector  ProjectionCameraDecoratorBase::HeightFieldMask = 
    (TypeTraits<BitVector>::One << ProjectionCameraDecoratorBase::HeightFieldId);

const OSG::BitVector ProjectionCameraDecoratorBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var NodePtr         ProjectionCameraDecoratorBase::_sfUser
    The coordinate system relative to the camera.
*/
/*! \var Pnt3f           ProjectionCameraDecoratorBase::_mfSurface
    4 points describing the rectangular projection surface, in the camera coordinate system. Counterclockwise, starting at lower left corner of the screen.
*/
/*! \var Plane           ProjectionCameraDecoratorBase::_sfLeft
    The left edge direction vector.
*/
/*! \var Plane           ProjectionCameraDecoratorBase::_sfBottom
    The bottom edge direction vector.
*/
/*! \var Plane           ProjectionCameraDecoratorBase::_sfNormal
    The normal of the projection surface.
*/
/*! \var Real32          ProjectionCameraDecoratorBase::_sfWidth
    The width of the projection screen.
*/
/*! \var Real32          ProjectionCameraDecoratorBase::_sfHeight
    The height of the projection screen.
*/

//! ProjectionCameraDecorator description

FieldDescription *ProjectionCameraDecoratorBase::_desc[] = 
{
    new FieldDescription(SFNodePtr::getClassType(), 
                     "user", 
                     UserFieldId, UserFieldMask,
                     false,
                     (FieldAccessMethod) &ProjectionCameraDecoratorBase::getSFUser),
    new FieldDescription(MFPnt3f::getClassType(), 
                     "surface", 
                     SurfaceFieldId, SurfaceFieldMask,
                     false,
                     (FieldAccessMethod) &ProjectionCameraDecoratorBase::getMFSurface),
    new FieldDescription(SFPlane::getClassType(), 
                     "left", 
                     LeftFieldId, LeftFieldMask,
                     true,
                     (FieldAccessMethod) &ProjectionCameraDecoratorBase::getSFLeft),
    new FieldDescription(SFPlane::getClassType(), 
                     "bottom", 
                     BottomFieldId, BottomFieldMask,
                     true,
                     (FieldAccessMethod) &ProjectionCameraDecoratorBase::getSFBottom),
    new FieldDescription(SFPlane::getClassType(), 
                     "normal", 
                     NormalFieldId, NormalFieldMask,
                     true,
                     (FieldAccessMethod) &ProjectionCameraDecoratorBase::getSFNormal),
    new FieldDescription(SFReal32::getClassType(), 
                     "width", 
                     WidthFieldId, WidthFieldMask,
                     true,
                     (FieldAccessMethod) &ProjectionCameraDecoratorBase::getSFWidth),
    new FieldDescription(SFReal32::getClassType(), 
                     "height", 
                     HeightFieldId, HeightFieldMask,
                     true,
                     (FieldAccessMethod) &ProjectionCameraDecoratorBase::getSFHeight)
};


FieldContainerType ProjectionCameraDecoratorBase::_type(
    "ProjectionCameraDecorator",
    "StereoCameraDecorator",
    NULL,
    (PrototypeCreateF) &ProjectionCameraDecoratorBase::createEmpty,
    ProjectionCameraDecorator::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(ProjectionCameraDecoratorBase, ProjectionCameraDecoratorPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &ProjectionCameraDecoratorBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &ProjectionCameraDecoratorBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr ProjectionCameraDecoratorBase::shallowCopy(void) const 
{ 
    ProjectionCameraDecoratorPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const ProjectionCameraDecorator *>(this)); 

    return returnValue; 
}

UInt32 ProjectionCameraDecoratorBase::getContainerSize(void) const 
{ 
    return sizeof(ProjectionCameraDecorator); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void ProjectionCameraDecoratorBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((ProjectionCameraDecoratorBase *) &other, whichField);
}
#else
void ProjectionCameraDecoratorBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((ProjectionCameraDecoratorBase *) &other, whichField, sInfo);
}
void ProjectionCameraDecoratorBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void ProjectionCameraDecoratorBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

    _mfSurface.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

ProjectionCameraDecoratorBase::ProjectionCameraDecoratorBase(void) :
    _sfUser                   (), 
    _mfSurface                (), 
    _sfLeft                   (), 
    _sfBottom                 (), 
    _sfNormal                 (), 
    _sfWidth                  (), 
    _sfHeight                 (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

ProjectionCameraDecoratorBase::ProjectionCameraDecoratorBase(const ProjectionCameraDecoratorBase &source) :
    _sfUser                   (source._sfUser                   ), 
    _mfSurface                (source._mfSurface                ), 
    _sfLeft                   (source._sfLeft                   ), 
    _sfBottom                 (source._sfBottom                 ), 
    _sfNormal                 (source._sfNormal                 ), 
    _sfWidth                  (source._sfWidth                  ), 
    _sfHeight                 (source._sfHeight                 ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

ProjectionCameraDecoratorBase::~ProjectionCameraDecoratorBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 ProjectionCameraDecoratorBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (UserFieldMask & whichField))
    {
        returnValue += _sfUser.getBinSize();
    }

    if(FieldBits::NoField != (SurfaceFieldMask & whichField))
    {
        returnValue += _mfSurface.getBinSize();
    }

    if(FieldBits::NoField != (LeftFieldMask & whichField))
    {
        returnValue += _sfLeft.getBinSize();
    }

    if(FieldBits::NoField != (BottomFieldMask & whichField))
    {
        returnValue += _sfBottom.getBinSize();
    }

    if(FieldBits::NoField != (NormalFieldMask & whichField))
    {
        returnValue += _sfNormal.getBinSize();
    }

    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        returnValue += _sfWidth.getBinSize();
    }

    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        returnValue += _sfHeight.getBinSize();
    }


    return returnValue;
}

void ProjectionCameraDecoratorBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (UserFieldMask & whichField))
    {
        _sfUser.copyToBin(pMem);
    }

    if(FieldBits::NoField != (SurfaceFieldMask & whichField))
    {
        _mfSurface.copyToBin(pMem);
    }

    if(FieldBits::NoField != (LeftFieldMask & whichField))
    {
        _sfLeft.copyToBin(pMem);
    }

    if(FieldBits::NoField != (BottomFieldMask & whichField))
    {
        _sfBottom.copyToBin(pMem);
    }

    if(FieldBits::NoField != (NormalFieldMask & whichField))
    {
        _sfNormal.copyToBin(pMem);
    }

    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        _sfWidth.copyToBin(pMem);
    }

    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        _sfHeight.copyToBin(pMem);
    }


}

void ProjectionCameraDecoratorBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (UserFieldMask & whichField))
    {
        _sfUser.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (SurfaceFieldMask & whichField))
    {
        _mfSurface.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (LeftFieldMask & whichField))
    {
        _sfLeft.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (BottomFieldMask & whichField))
    {
        _sfBottom.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (NormalFieldMask & whichField))
    {
        _sfNormal.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        _sfWidth.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        _sfHeight.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void ProjectionCameraDecoratorBase::executeSyncImpl(      ProjectionCameraDecoratorBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (UserFieldMask & whichField))
        _sfUser.syncWith(pOther->_sfUser);

    if(FieldBits::NoField != (SurfaceFieldMask & whichField))
        _mfSurface.syncWith(pOther->_mfSurface);

    if(FieldBits::NoField != (LeftFieldMask & whichField))
        _sfLeft.syncWith(pOther->_sfLeft);

    if(FieldBits::NoField != (BottomFieldMask & whichField))
        _sfBottom.syncWith(pOther->_sfBottom);

    if(FieldBits::NoField != (NormalFieldMask & whichField))
        _sfNormal.syncWith(pOther->_sfNormal);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
        _sfWidth.syncWith(pOther->_sfWidth);

    if(FieldBits::NoField != (HeightFieldMask & whichField))
        _sfHeight.syncWith(pOther->_sfHeight);


}
#else
void ProjectionCameraDecoratorBase::executeSyncImpl(      ProjectionCameraDecoratorBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (UserFieldMask & whichField))
        _sfUser.syncWith(pOther->_sfUser);

    if(FieldBits::NoField != (LeftFieldMask & whichField))
        _sfLeft.syncWith(pOther->_sfLeft);

    if(FieldBits::NoField != (BottomFieldMask & whichField))
        _sfBottom.syncWith(pOther->_sfBottom);

    if(FieldBits::NoField != (NormalFieldMask & whichField))
        _sfNormal.syncWith(pOther->_sfNormal);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
        _sfWidth.syncWith(pOther->_sfWidth);

    if(FieldBits::NoField != (HeightFieldMask & whichField))
        _sfHeight.syncWith(pOther->_sfHeight);


    if(FieldBits::NoField != (SurfaceFieldMask & whichField))
        _mfSurface.syncWith(pOther->_mfSurface, sInfo);


}

void ProjectionCameraDecoratorBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (SurfaceFieldMask & whichField))
        _mfSurface.beginEdit(uiAspect, uiContainerSize);

}
#endif



#include <OSGSFieldTypeDef.inl>
#include <OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<ProjectionCameraDecoratorPtr>::_type("ProjectionCameraDecoratorPtr", "StereoCameraDecoratorPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(ProjectionCameraDecoratorPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(ProjectionCameraDecoratorPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);

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
    static Char8 cvsid_hpp       [] = OSGPROJECTIONCAMERADECORATORBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGPROJECTIONCAMERADECORATORBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGPROJECTIONCAMERADECORATORFIELDS_HEADER_CVSID;
}
