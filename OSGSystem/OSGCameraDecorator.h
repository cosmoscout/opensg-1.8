/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *             Copyright (C) 2000-2002 by the OpenSG Forum                   *
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

#ifndef _OSGCAMERADECORATOR_H_
#define _OSGCAMERADECORATOR_H_
#ifdef __sgi
#pragma once
#endif

#include <OSGConfig.h>

#include <OSGCameraDecoratorBase.h>

OSG_BEGIN_NAMESPACE

/*! \brief Camera Decorator base class, see \ref
    PageSystemWindowCameraDecorators for a description.
*/

class OSG_SYSTEMLIB_DLLMAPPING CameraDecorator : public CameraDecoratorBase {
 private:
  typedef CameraDecoratorBase Inherited;

  /*==========================  PUBLIC  =================================*/
 public:
  /*---------------------------------------------------------------------*/
  /*! \name                      Sync                                    */
  /*! \{                                                                 */

  virtual void changed(BitVector whichField, UInt32 origin);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                      your_category                           */
  /*! \{                                                                 */

  virtual void draw(DrawAction* action, const Viewport& port);

  virtual void getProjection(Matrix& result, UInt32 width, UInt32 height);

  virtual void getProjectionTranslation(Matrix& result, UInt32 width, UInt32 height);

  virtual void getViewing(Matrix& result, UInt32 width, UInt32 height);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                     Output                                   */
  /*! \{                                                                 */

  virtual void dump(UInt32 uiIndent = 0, const BitVector bvFlags = 0) const;

  /*! \}                                                                 */
  /*=========================  PROTECTED  ===============================*/
 protected:
  // Variables should all be in CameraDecoratorBase.

  /*---------------------------------------------------------------------*/
  /*! \name                  Constructors                                */
  /*! \{                                                                 */

  CameraDecorator(void);
  CameraDecorator(const CameraDecorator& source);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                   Destructors                                */
  /*! \{                                                                 */

  virtual ~CameraDecorator(void);

  /*! \}                                                                 */

  /*==========================  PRIVATE  ================================*/
 private:
  friend class FieldContainer;
  friend class CameraDecoratorBase;

  static void initMethod(void);

  // prohibit default functions (move to 'public' if you need one)

  void operator=(const CameraDecorator& source);
};

typedef CameraDecorator* CameraDecoratorP;

OSG_END_NAMESPACE

#include <OSGCameraDecoratorBase.inl>
#include <OSGCameraDecorator.inl>

#define OSGCAMERADECORATOR_HEADER_CVSID "@(#)$Id: $"

#endif /* _OSGCAMERADECORATOR_H_ */
