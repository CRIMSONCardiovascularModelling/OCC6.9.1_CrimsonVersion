// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _LProp_AnalyticCurInf_HeaderFile
#define _LProp_AnalyticCurInf_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <GeomAbs_CurveType.hxx>
#include <Standard_Real.hxx>
class LProp_CurAndInf;


//! Computes the locals extremas of curvature of a gp curve
//! Remark : a gp curve has not inflection.
class LProp_AnalyticCurInf 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT LProp_AnalyticCurInf();
  
  Standard_EXPORT   void Perform (const GeomAbs_CurveType T, const Standard_Real UFirst, const Standard_Real ULast, LProp_CurAndInf& Result) ;




protected:





private:





};







#endif // _LProp_AnalyticCurInf_HeaderFile
