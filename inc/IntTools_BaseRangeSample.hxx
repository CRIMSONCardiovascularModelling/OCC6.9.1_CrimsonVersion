// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntTools_BaseRangeSample_HeaderFile
#define _IntTools_BaseRangeSample_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Integer.hxx>


//! base class for range index management
class IntTools_BaseRangeSample 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT IntTools_BaseRangeSample();
  
  Standard_EXPORT IntTools_BaseRangeSample(const Standard_Integer theDepth);
  
      void SetDepth (const Standard_Integer theDepth) ;
  
      Standard_Integer GetDepth()  const;




protected:





private:



  Standard_Integer myDepth;


};


#include <IntTools_BaseRangeSample.lxx>





#endif // _IntTools_BaseRangeSample_HeaderFile
