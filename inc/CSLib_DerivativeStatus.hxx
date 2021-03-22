// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _CSLib_DerivativeStatus_HeaderFile
#define _CSLib_DerivativeStatus_HeaderFile

#include <Standard_PrimitiveTypes.hxx>


//! D1uIsNull : ||D1U|| <= Resolution
//!
//! D1vIsNull : ||D1V|| <= Resolution
//!
//! D1IsNull  : the first derivatives in the U and V parametric
//! directions have null length  :
//! ||D1U|| <= Resolution and ||D1V|| <= Resolution
//!
//! D1uD1vRatioIsNull : the first derivative in the U direction has
//! null length by comparison with the derivative
//! in the V direction
//! ||D1U|| / ||D1V|| <= RealEpsilon
//!
//! D1vD1uRatioIsNull : the first derivative in the V direction has
//! null length by comparison with the derivative
//! in the U direction
//! ||D1V|| / ||D1U|| <= RealEpsilon
//!
//! D1uIsParallelD1v : the angle between the derivatives in the U and
//! V direction is null (tolerance criterion given
//! as input data)
enum CSLib_DerivativeStatus
{
CSLib_Done,
CSLib_D1uIsNull,
CSLib_D1vIsNull,
CSLib_D1IsNull,
CSLib_D1uD1vRatioIsNull,
CSLib_D1vD1uRatioIsNull,
CSLib_D1uIsParallelD1v
};

#endif // _CSLib_DerivativeStatus_HeaderFile
