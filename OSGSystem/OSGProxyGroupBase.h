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
 **     class ProxyGroup
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGPROXYGROUPBASE_H_
#define _OSGPROXYGROUPBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OSGConfig.h>
#include <OSGSystemDef.h>

#include <OSGBaseTypes.h>
#include <OSGRefPtr.h>
#include <OSGCoredNodePtr.h>

#include <OSGGroup.h> // Parent

#include <OSGBoolFields.h> // Enabled type
#include <OSGStringFields.h> // Url type
#include <OSGNodeFields.h> // Root type
#include <OSGUInt32Fields.h> // State type
#include <OSGBoolFields.h> // ConcurrentLoad type
#include <OSGDynamicVolumeFields.h> // Volume type
#include <OSGUInt32Fields.h> // Indices type
#include <OSGUInt32Fields.h> // Triangles type
#include <OSGUInt32Fields.h> // Positions type
#include <OSGUInt32Fields.h> // Geometries type
#include <OSGStringFields.h> // AbsoluteUrl type
#include <OSGUInt8Fields.h> // Inline type

#include <OSGProxyGroupFields.h>

OSG_BEGIN_NAMESPACE

class ProxyGroup;
class BinaryDataHandler;

//! \brief ProxyGroup Base Class.

class OSG_SYSTEMLIB_DLLMAPPING ProxyGroupBase : public Group
{
  private:

    typedef Group    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef ProxyGroupPtr  Ptr;

    enum
    {
        EnabledFieldId        = Inherited::NextFieldId,
        UrlFieldId            = EnabledFieldId        + 1,
        RootFieldId           = UrlFieldId            + 1,
        StateFieldId          = RootFieldId           + 1,
        ConcurrentLoadFieldId = StateFieldId          + 1,
        VolumeFieldId         = ConcurrentLoadFieldId + 1,
        IndicesFieldId        = VolumeFieldId         + 1,
        TrianglesFieldId      = IndicesFieldId        + 1,
        PositionsFieldId      = TrianglesFieldId      + 1,
        GeometriesFieldId     = PositionsFieldId      + 1,
        AbsoluteUrlFieldId    = GeometriesFieldId     + 1,
        InlineFieldId         = AbsoluteUrlFieldId    + 1,
        NextFieldId           = InlineFieldId         + 1
    };

    static const OSG::BitVector EnabledFieldMask;
    static const OSG::BitVector UrlFieldMask;
    static const OSG::BitVector RootFieldMask;
    static const OSG::BitVector StateFieldMask;
    static const OSG::BitVector ConcurrentLoadFieldMask;
    static const OSG::BitVector VolumeFieldMask;
    static const OSG::BitVector IndicesFieldMask;
    static const OSG::BitVector TrianglesFieldMask;
    static const OSG::BitVector PositionsFieldMask;
    static const OSG::BitVector GeometriesFieldMask;
    static const OSG::BitVector AbsoluteUrlFieldMask;
    static const OSG::BitVector InlineFieldMask;


    static const OSG::BitVector MTInfluenceMask;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static        FieldContainerType &getClassType    (void); 
    static        UInt32              getClassTypeId  (void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType  (void); 
    virtual const FieldContainerType &getType  (void) const; 

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

           SFBool              *getSFEnabled        (void);
           SFString            *getSFUrl            (void);
           SFNodePtr           *getSFRoot           (void);
           SFUInt32            *getSFState          (void);
           SFBool              *getSFConcurrentLoad (void);
           SFDynamicVolume     *getSFVolume         (void);
           SFUInt32            *getSFIndices        (void);
           SFUInt32            *getSFTriangles      (void);
           SFUInt32            *getSFPositions      (void);
           SFUInt32            *getSFGeometries     (void);
           MFUInt8             *getMFInline         (void);

           bool                &getEnabled        (void);
     const bool                &getEnabled        (void) const;
           std::string         &getUrl            (void);
     const std::string         &getUrl            (void) const;
           NodePtr             &getRoot           (void);
     const NodePtr             &getRoot           (void) const;
           UInt32              &getState          (void);
     const UInt32              &getState          (void) const;
           bool                &getConcurrentLoad (void);
     const bool                &getConcurrentLoad (void) const;
           DynamicVolume       &getVolume         (void);
     const DynamicVolume       &getVolume         (void) const;
           UInt32              &getIndices        (void);
     const UInt32              &getIndices        (void) const;
           UInt32              &getTriangles      (void);
     const UInt32              &getTriangles      (void) const;
           UInt32              &getPositions      (void);
     const UInt32              &getPositions      (void) const;
           UInt32              &getGeometries     (void);
     const UInt32              &getGeometries     (void) const;
           UInt8               &getInline         (const UInt32 index);
           MFUInt8             &getInline         (void);
     const MFUInt8             &getInline         (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setEnabled        ( const bool &value );
     void setUrl            ( const std::string &value );
     void setRoot           ( const NodePtr &value );
     void setState          ( const UInt32 &value );
     void setConcurrentLoad ( const bool &value );
     void setVolume         ( const DynamicVolume &value );
     void setIndices        ( const UInt32 &value );
     void setTriangles      ( const UInt32 &value );
     void setPositions      ( const UInt32 &value );
     void setGeometries     ( const UInt32 &value );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (const BitVector         &whichField);
    virtual void   copyToBin  (      BinaryDataHandler &pMem,
                               const BitVector         &whichField);
    virtual void   copyFromBin(      BinaryDataHandler &pMem,
                               const BitVector         &whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  ProxyGroupPtr      create          (void); 
    static  ProxyGroupPtr      createEmpty     (void); 

    /*! \}                                                                 */

    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerPtr     shallowCopy     (void) const; 

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/
  protected:

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFBool              _sfEnabled;
    SFString            _sfUrl;
    SFNodePtr           _sfRoot;
    SFUInt32            _sfState;
    SFBool              _sfConcurrentLoad;
    SFDynamicVolume     _sfVolume;
    SFUInt32            _sfIndices;
    SFUInt32            _sfTriangles;
    SFUInt32            _sfPositions;
    SFUInt32            _sfGeometries;
    SFString            _sfAbsoluteUrl;
    MFUInt8             _mfInline;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    ProxyGroupBase(void);
    ProxyGroupBase(const ProxyGroupBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ProxyGroupBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

           SFString            *getSFAbsoluteUrl    (void);

           std::string         &getAbsoluteUrl    (void);
     const std::string         &getAbsoluteUrl    (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setAbsoluteUrl    (const std::string &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      ProxyGroupBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      ProxyGroupBase *pOther,
                         const BitVector         &whichField,
                         const SyncInfo          &sInfo     );

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField,
                               const SyncInfo          &sInfo);

    virtual void execBeginEdit     (const BitVector &whichField,
                                          UInt32     uiAspect,
                                          UInt32     uiContainerSize);

            void execBeginEditImpl (const BitVector &whichField,
                                          UInt32     uiAspect,
                                          UInt32     uiContainerSize);

    virtual void onDestroyAspect(UInt32 uiId, UInt32 uiAspect);
#endif

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/
  private:

    friend class FieldContainer;

    static FieldDescription   *_desc[];
    static FieldContainerType  _type;


    // prohibit default functions (move to 'public' if you need one)
    void operator =(const ProxyGroupBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef ProxyGroupBase *ProxyGroupBaseP;

typedef osgIF<ProxyGroupBase::isNodeCore,
              CoredNodePtr<ProxyGroup>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet ProxyGroupNodePtr;

typedef RefPtr<ProxyGroupPtr> ProxyGroupRefPtr;

OSG_END_NAMESPACE

#define OSGPROXYGROUPBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGPROXYGROUPBASE_H_ */
