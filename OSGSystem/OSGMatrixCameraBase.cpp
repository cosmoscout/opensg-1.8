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
 **     class MatrixCamera!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEMATRIXCAMERAINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGMatrixCameraBase.h"
#include "OSGMatrixCamera.h"


OSG_USING_NAMESPACE

const OSG::BitVector  MatrixCameraBase::ProjectionMatrixFieldMask = 
    (TypeTraits<BitVector>::One << MatrixCameraBase::ProjectionMatrixFieldId);

const OSG::BitVector  MatrixCameraBase::ModelviewMatrixFieldMask = 
    (TypeTraits<BitVector>::One << MatrixCameraBase::ModelviewMatrixFieldId);

const OSG::BitVector MatrixCameraBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Matrix          MatrixCameraBase::_sfProjectionMatrix
    
*/
/*! \var Matrix          MatrixCameraBase::_sfModelviewMatrix
    
*/

//! MatrixCamera description

FieldDescription *MatrixCameraBase::_desc[] = 
{
    new FieldDescription(SFMatrix::getClassType(), 
                     "ProjectionMatrix", 
                     ProjectionMatrixFieldId, ProjectionMatrixFieldMask,
                     false,
                     (FieldAccessMethod) &MatrixCameraBase::getSFProjectionMatrix),
    new FieldDescription(SFMatrix::getClassType(), 
                     "ModelviewMatrix", 
                     ModelviewMatrixFieldId, ModelviewMatrixFieldMask,
                     false,
                     (FieldAccessMethod) &MatrixCameraBase::getSFModelviewMatrix)
};


FieldContainerType MatrixCameraBase::_type(
    "MatrixCamera",
    "Camera",
    NULL,
    (PrototypeCreateF) &MatrixCameraBase::createEmpty,
    MatrixCamera::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(MatrixCameraBase, MatrixCameraPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &MatrixCameraBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &MatrixCameraBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr MatrixCameraBase::shallowCopy(void) const 
{ 
    MatrixCameraPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const MatrixCamera *>(this)); 

    return returnValue; 
}

UInt32 MatrixCameraBase::getContainerSize(void) const 
{ 
    return sizeof(MatrixCamera); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void MatrixCameraBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((MatrixCameraBase *) &other, whichField);
}
#else
void MatrixCameraBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((MatrixCameraBase *) &other, whichField, sInfo);
}
void MatrixCameraBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void MatrixCameraBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

MatrixCameraBase::MatrixCameraBase(void) :
    _sfProjectionMatrix       (), 
    _sfModelviewMatrix        (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

MatrixCameraBase::MatrixCameraBase(const MatrixCameraBase &source) :
    _sfProjectionMatrix       (source._sfProjectionMatrix       ), 
    _sfModelviewMatrix        (source._sfModelviewMatrix        ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

MatrixCameraBase::~MatrixCameraBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 MatrixCameraBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ProjectionMatrixFieldMask & whichField))
    {
        returnValue += _sfProjectionMatrix.getBinSize();
    }

    if(FieldBits::NoField != (ModelviewMatrixFieldMask & whichField))
    {
        returnValue += _sfModelviewMatrix.getBinSize();
    }


    return returnValue;
}

void MatrixCameraBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ProjectionMatrixFieldMask & whichField))
    {
        _sfProjectionMatrix.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ModelviewMatrixFieldMask & whichField))
    {
        _sfModelviewMatrix.copyToBin(pMem);
    }


}

void MatrixCameraBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ProjectionMatrixFieldMask & whichField))
    {
        _sfProjectionMatrix.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ModelviewMatrixFieldMask & whichField))
    {
        _sfModelviewMatrix.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void MatrixCameraBase::executeSyncImpl(      MatrixCameraBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (ProjectionMatrixFieldMask & whichField))
        _sfProjectionMatrix.syncWith(pOther->_sfProjectionMatrix);

    if(FieldBits::NoField != (ModelviewMatrixFieldMask & whichField))
        _sfModelviewMatrix.syncWith(pOther->_sfModelviewMatrix);


}
#else
void MatrixCameraBase::executeSyncImpl(      MatrixCameraBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (ProjectionMatrixFieldMask & whichField))
        _sfProjectionMatrix.syncWith(pOther->_sfProjectionMatrix);

    if(FieldBits::NoField != (ModelviewMatrixFieldMask & whichField))
        _sfModelviewMatrix.syncWith(pOther->_sfModelviewMatrix);



}

void MatrixCameraBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<MatrixCameraPtr>::_type("MatrixCameraPtr", "CameraPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(MatrixCameraPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(MatrixCameraPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);

OSG_END_NAMESPACE
