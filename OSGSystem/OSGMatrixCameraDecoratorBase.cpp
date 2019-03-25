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
 **     class MatrixCameraDecorator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEMATRIXCAMERADECORATORINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGMatrixCameraDecoratorBase.h"
#include "OSGMatrixCameraDecorator.h"


OSG_USING_NAMESPACE

const OSG::BitVector  MatrixCameraDecoratorBase::PreViewingFieldMask = 
    (TypeTraits<BitVector>::One << MatrixCameraDecoratorBase::PreViewingFieldId);

const OSG::BitVector  MatrixCameraDecoratorBase::PostViewingFieldMask = 
    (TypeTraits<BitVector>::One << MatrixCameraDecoratorBase::PostViewingFieldId);

const OSG::BitVector  MatrixCameraDecoratorBase::PreProjectionTranslationFieldMask = 
    (TypeTraits<BitVector>::One << MatrixCameraDecoratorBase::PreProjectionTranslationFieldId);

const OSG::BitVector  MatrixCameraDecoratorBase::PostProjectionTranslationFieldMask = 
    (TypeTraits<BitVector>::One << MatrixCameraDecoratorBase::PostProjectionTranslationFieldId);

const OSG::BitVector  MatrixCameraDecoratorBase::PreProjectionFieldMask = 
    (TypeTraits<BitVector>::One << MatrixCameraDecoratorBase::PreProjectionFieldId);

const OSG::BitVector  MatrixCameraDecoratorBase::PostProjectionFieldMask = 
    (TypeTraits<BitVector>::One << MatrixCameraDecoratorBase::PostProjectionFieldId);

const OSG::BitVector MatrixCameraDecoratorBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Matrix          MatrixCameraDecoratorBase::_sfPreViewing
    The matrix to multiply to the right of the viewing matrix, i.e.          applied before the viewing matrix.
*/
/*! \var Matrix          MatrixCameraDecoratorBase::_sfPostViewing
    The matrix to multiply to the left of the viewing matrix, i.e.          applied after the viewing matrix.
*/
/*! \var Matrix          MatrixCameraDecoratorBase::_sfPreProjectionTranslation
    The matrix to multiply to the right of the projectionTranslation matrix, i.e.          applied before the projectionTranslation matrix.
*/
/*! \var Matrix          MatrixCameraDecoratorBase::_sfPostProjectionTranslation
    The matrix to multiply to the left of the projectionTranslation matrix, i.e.          applied before the projectionTranslation matrix.
*/
/*! \var Matrix          MatrixCameraDecoratorBase::_sfPreProjection
    The matrix to multiply to the right of the projection matrix, i.e.          applied before the projection matrix.
*/
/*! \var Matrix          MatrixCameraDecoratorBase::_sfPostProjection
    The matrix to multiply to the left of the projection matrix, i.e.          applied before the projection matrix.
*/

//! MatrixCameraDecorator description

FieldDescription *MatrixCameraDecoratorBase::_desc[] = 
{
    new FieldDescription(SFMatrix::getClassType(), 
                     "preViewing", 
                     PreViewingFieldId, PreViewingFieldMask,
                     false,
                     (FieldAccessMethod) &MatrixCameraDecoratorBase::getSFPreViewing),
    new FieldDescription(SFMatrix::getClassType(), 
                     "postViewing", 
                     PostViewingFieldId, PostViewingFieldMask,
                     false,
                     (FieldAccessMethod) &MatrixCameraDecoratorBase::getSFPostViewing),
    new FieldDescription(SFMatrix::getClassType(), 
                     "preProjectionTranslation", 
                     PreProjectionTranslationFieldId, PreProjectionTranslationFieldMask,
                     false,
                     (FieldAccessMethod) &MatrixCameraDecoratorBase::getSFPreProjectionTranslation),
    new FieldDescription(SFMatrix::getClassType(), 
                     "postProjectionTranslation", 
                     PostProjectionTranslationFieldId, PostProjectionTranslationFieldMask,
                     false,
                     (FieldAccessMethod) &MatrixCameraDecoratorBase::getSFPostProjectionTranslation),
    new FieldDescription(SFMatrix::getClassType(), 
                     "preProjection", 
                     PreProjectionFieldId, PreProjectionFieldMask,
                     false,
                     (FieldAccessMethod) &MatrixCameraDecoratorBase::getSFPreProjection),
    new FieldDescription(SFMatrix::getClassType(), 
                     "postProjection", 
                     PostProjectionFieldId, PostProjectionFieldMask,
                     false,
                     (FieldAccessMethod) &MatrixCameraDecoratorBase::getSFPostProjection)
};


FieldContainerType MatrixCameraDecoratorBase::_type(
    "MatrixCameraDecorator",
    "CameraDecorator",
    NULL,
    (PrototypeCreateF) &MatrixCameraDecoratorBase::createEmpty,
    MatrixCameraDecorator::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(MatrixCameraDecoratorBase, MatrixCameraDecoratorPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &MatrixCameraDecoratorBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &MatrixCameraDecoratorBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr MatrixCameraDecoratorBase::shallowCopy(void) const 
{ 
    MatrixCameraDecoratorPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const MatrixCameraDecorator *>(this)); 

    return returnValue; 
}

UInt32 MatrixCameraDecoratorBase::getContainerSize(void) const 
{ 
    return sizeof(MatrixCameraDecorator); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void MatrixCameraDecoratorBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((MatrixCameraDecoratorBase *) &other, whichField);
}
#else
void MatrixCameraDecoratorBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((MatrixCameraDecoratorBase *) &other, whichField, sInfo);
}
void MatrixCameraDecoratorBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void MatrixCameraDecoratorBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

MatrixCameraDecoratorBase::MatrixCameraDecoratorBase(void) :
    _sfPreViewing             (Matrix(1,0,0,0, 0,1,0,0, 0,0,1,0, 0,0,0,1)), 
    _sfPostViewing            (Matrix(1,0,0,0, 0,1,0,0, 0,0,1,0, 0,0,0,1)), 
    _sfPreProjectionTranslation(Matrix(1,0,0,0, 0,1,0,0, 0,0,1,0, 0,0,0,1)), 
    _sfPostProjectionTranslation(Matrix(1,0,0,0, 0,1,0,0, 0,0,1,0, 0,0,0,1)), 
    _sfPreProjection          (Matrix(1,0,0,0, 0,1,0,0, 0,0,1,0, 0,0,0,1)), 
    _sfPostProjection         (Matrix(1,0,0,0, 0,1,0,0, 0,0,1,0, 0,0,0,1)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

MatrixCameraDecoratorBase::MatrixCameraDecoratorBase(const MatrixCameraDecoratorBase &source) :
    _sfPreViewing             (source._sfPreViewing             ), 
    _sfPostViewing            (source._sfPostViewing            ), 
    _sfPreProjectionTranslation(source._sfPreProjectionTranslation), 
    _sfPostProjectionTranslation(source._sfPostProjectionTranslation), 
    _sfPreProjection          (source._sfPreProjection          ), 
    _sfPostProjection         (source._sfPostProjection         ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

MatrixCameraDecoratorBase::~MatrixCameraDecoratorBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 MatrixCameraDecoratorBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (PreViewingFieldMask & whichField))
    {
        returnValue += _sfPreViewing.getBinSize();
    }

    if(FieldBits::NoField != (PostViewingFieldMask & whichField))
    {
        returnValue += _sfPostViewing.getBinSize();
    }

    if(FieldBits::NoField != (PreProjectionTranslationFieldMask & whichField))
    {
        returnValue += _sfPreProjectionTranslation.getBinSize();
    }

    if(FieldBits::NoField != (PostProjectionTranslationFieldMask & whichField))
    {
        returnValue += _sfPostProjectionTranslation.getBinSize();
    }

    if(FieldBits::NoField != (PreProjectionFieldMask & whichField))
    {
        returnValue += _sfPreProjection.getBinSize();
    }

    if(FieldBits::NoField != (PostProjectionFieldMask & whichField))
    {
        returnValue += _sfPostProjection.getBinSize();
    }


    return returnValue;
}

void MatrixCameraDecoratorBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (PreViewingFieldMask & whichField))
    {
        _sfPreViewing.copyToBin(pMem);
    }

    if(FieldBits::NoField != (PostViewingFieldMask & whichField))
    {
        _sfPostViewing.copyToBin(pMem);
    }

    if(FieldBits::NoField != (PreProjectionTranslationFieldMask & whichField))
    {
        _sfPreProjectionTranslation.copyToBin(pMem);
    }

    if(FieldBits::NoField != (PostProjectionTranslationFieldMask & whichField))
    {
        _sfPostProjectionTranslation.copyToBin(pMem);
    }

    if(FieldBits::NoField != (PreProjectionFieldMask & whichField))
    {
        _sfPreProjection.copyToBin(pMem);
    }

    if(FieldBits::NoField != (PostProjectionFieldMask & whichField))
    {
        _sfPostProjection.copyToBin(pMem);
    }


}

void MatrixCameraDecoratorBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (PreViewingFieldMask & whichField))
    {
        _sfPreViewing.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (PostViewingFieldMask & whichField))
    {
        _sfPostViewing.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (PreProjectionTranslationFieldMask & whichField))
    {
        _sfPreProjectionTranslation.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (PostProjectionTranslationFieldMask & whichField))
    {
        _sfPostProjectionTranslation.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (PreProjectionFieldMask & whichField))
    {
        _sfPreProjection.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (PostProjectionFieldMask & whichField))
    {
        _sfPostProjection.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void MatrixCameraDecoratorBase::executeSyncImpl(      MatrixCameraDecoratorBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (PreViewingFieldMask & whichField))
        _sfPreViewing.syncWith(pOther->_sfPreViewing);

    if(FieldBits::NoField != (PostViewingFieldMask & whichField))
        _sfPostViewing.syncWith(pOther->_sfPostViewing);

    if(FieldBits::NoField != (PreProjectionTranslationFieldMask & whichField))
        _sfPreProjectionTranslation.syncWith(pOther->_sfPreProjectionTranslation);

    if(FieldBits::NoField != (PostProjectionTranslationFieldMask & whichField))
        _sfPostProjectionTranslation.syncWith(pOther->_sfPostProjectionTranslation);

    if(FieldBits::NoField != (PreProjectionFieldMask & whichField))
        _sfPreProjection.syncWith(pOther->_sfPreProjection);

    if(FieldBits::NoField != (PostProjectionFieldMask & whichField))
        _sfPostProjection.syncWith(pOther->_sfPostProjection);


}
#else
void MatrixCameraDecoratorBase::executeSyncImpl(      MatrixCameraDecoratorBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (PreViewingFieldMask & whichField))
        _sfPreViewing.syncWith(pOther->_sfPreViewing);

    if(FieldBits::NoField != (PostViewingFieldMask & whichField))
        _sfPostViewing.syncWith(pOther->_sfPostViewing);

    if(FieldBits::NoField != (PreProjectionTranslationFieldMask & whichField))
        _sfPreProjectionTranslation.syncWith(pOther->_sfPreProjectionTranslation);

    if(FieldBits::NoField != (PostProjectionTranslationFieldMask & whichField))
        _sfPostProjectionTranslation.syncWith(pOther->_sfPostProjectionTranslation);

    if(FieldBits::NoField != (PreProjectionFieldMask & whichField))
        _sfPreProjection.syncWith(pOther->_sfPreProjection);

    if(FieldBits::NoField != (PostProjectionFieldMask & whichField))
        _sfPostProjection.syncWith(pOther->_sfPostProjection);



}

void MatrixCameraDecoratorBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<MatrixCameraDecoratorPtr>::_type("MatrixCameraDecoratorPtr", "CameraDecoratorPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(MatrixCameraDecoratorPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(MatrixCameraDecoratorPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);

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
    static Char8 cvsid_hpp       [] = OSGMATRIXCAMERADECORATORBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGMATRIXCAMERADECORATORBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGMATRIXCAMERADECORATORFIELDS_HEADER_CVSID;
}
