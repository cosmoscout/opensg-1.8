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

#ifndef _OSGSHADERPARAMETERREAL_H_
#define _OSGSHADERPARAMETERREAL_H_
#ifdef __sgi
#pragma once
#endif

#include <OSGConfig.h>

#include <OSGShaderParameterRealBase.h>

OSG_BEGIN_NAMESPACE

/*! \brief ShaderParameterReal class. See \ref
           PageSystemShaderParameterReal for a description.
*/

class OSG_SYSTEMLIB_DLLMAPPING ShaderParameterReal : public ShaderParameterRealBase {
 private:
  typedef ShaderParameterRealBase Inherited;

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
  /*---------------------------------------------------------------------*/
  /*! \name                  Constructors                                */
  /*! \{                                                                 */

  ShaderParameterReal(void);
  ShaderParameterReal(const ShaderParameterReal& source);

  /*! \}                                                                 */
  /*---------------------------------------------------------------------*/
  /*! \name                   Destructors                                */
  /*! \{                                                                 */

  virtual ~ShaderParameterReal(void);

  /*! \}                                                                 */

  /*==========================  PRIVATE  ================================*/
 private:
  friend class FieldContainer;
  friend class ShaderParameterRealBase;

  static void initMethod(void);

  // prohibit default functions (move to 'public' if you need one)

  void operator=(const ShaderParameterReal& source);
};

typedef ShaderParameterReal* ShaderParameterRealP;

OSG_END_NAMESPACE

#include <OSGShaderParameterRealBase.inl>
#include <OSGShaderParameterReal.inl>

#define OSGSHADERPARAMETERREAL_HEADER_CVSID                                                        \
  "@(#)$Id: OSGShaderParameterReal.h,v 1.2 2005/02/24 17:29:15 a-m-z Exp $"

#endif /* _OSGSHADERPARAMETERREAL_H_ */
