/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
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
 **     class StatisticsForeground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &StatisticsForegroundBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 StatisticsForegroundBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 


/*------------------------------ get -----------------------------------*/

//! Get the StatisticsForeground::_mfElementIDs field.
inline
MFInt32 *StatisticsForegroundBase::getMFElementIDs(void)
{
    return &_mfElementIDs;
}

//! Get the StatisticsForeground::_sfCollector field.
inline
SFStatCollector *StatisticsForegroundBase::getSFCollector(void)
{
    return &_sfCollector;
}


//! Get the value of the StatisticsForeground::_sfCollector field.
inline
StatCollector &StatisticsForegroundBase::getCollector(void)
{
    return _sfCollector.getValue();
}

//! Get the value of the StatisticsForeground::_sfCollector field.
inline
const StatCollector &StatisticsForegroundBase::getCollector(void) const
{
    return _sfCollector.getValue();
}

//! Set the value of the StatisticsForeground::_sfCollector field.
inline
void StatisticsForegroundBase::setCollector(const StatCollector &value)
{
    _sfCollector.setValue(value);
}


//! Get the value of the \a index element the StatisticsForeground::_mfElementIDs field.
inline
Int32 &StatisticsForegroundBase::getElementIDs(const UInt32 index)
{
    return _mfElementIDs[index];
}

//! Get the StatisticsForeground::_mfElementIDs field.
inline
MFInt32 &StatisticsForegroundBase::getElementIDs(void)
{
    return _mfElementIDs;
}

//! Get the StatisticsForeground::_mfElementIDs field.
inline
const MFInt32 &StatisticsForegroundBase::getElementIDs(void) const
{
    return _mfElementIDs;
}

OSG_END_NAMESPACE

#define OSGSTATISTICSFOREGROUNDBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"
