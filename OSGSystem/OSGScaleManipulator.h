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

#ifndef _OSGSCALEMANIPULATOR_H_
#define _OSGSCALEMANIPULATOR_H_
#ifdef __sgi
#pragma once
#endif

#include <OSGConfig.h>

#include <OSGScaleManipulatorBase.h>

OSG_BEGIN_NAMESPACE

/*! \brief ScaleManipulator class. See \ref
           PageManipulatorsScaleManipulator for a description.
*/

class OSG_SYSTEMLIB_DLLMAPPING ScaleManipulator : public ScaleManipulatorBase {
 private:
  typedef ScaleManipulatorBase Inherited;

  /*==========================  PUBLIC  =================================*/
 public:
  /*---------------------------------------------------------------------*/
  /*! \name                      Sync                                    */
  /*! \{                                                                 */

  virtual void changed(BitVector whichField, UInt32 origin);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                     Output                                   */
  /*! \{                                                                 */

  virtual void dump(UInt32 uiIndent = 0, const BitVector bvFlags = 0) const;

  /*! \}                                                                 */
  /*=========================  PROTECTED  ===============================*/
 protected:
  // Variables should all be in ScaleManipulatorBase.

  /*---------------------------------------------------------------------*/
  /*! \name                  Constructors                                */
  /*! \{                                                                 */

  ScaleManipulator(void);
  ScaleManipulator(const ScaleManipulator& source);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                   Destructors                                */
  /*! \{                                                                 */

  virtual ~ScaleManipulator(void);

  /*! \}                                                                 */

  virtual NodePtr makeHandleGeo();
  virtual void    doMovement(TransformPtr t, Int32 coord, Real32 value, const Vec3f& translation,
         const Quaternion& rotation, const Vec3f& scaleFactor, const Quaternion& scaleOrientation);

  /*==========================  PRIVATE  ================================*/
 private:
  friend class FieldContainer;
  friend class ScaleManipulatorBase;

  static void initMethod(void);

  // prohibit default functions (move to 'public' if you need one)

  void operator=(const ScaleManipulator& source);
};

typedef ScaleManipulator* ScaleManipulatorP;

OSG_END_NAMESPACE

#include <OSGScaleManipulatorBase.inl>
#include <OSGScaleManipulator.inl>

#define OSGSCALEMANIPULATOR_HEADER_CVSID                                                           \
  "@(#)$Id: OSGScaleManipulator.h,v 1.1 2005/06/26 12:44:41 a-m-z Exp $"

#endif /* _OSGSCALEMANIPULATOR_H_ */
