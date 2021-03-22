// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Extrema_HArray1OfPOnSurf_HeaderFile
#define _Extrema_HArray1OfPOnSurf_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Extrema_HArray1OfPOnSurf.hxx>

#include <Extrema_Array1OfPOnSurf.hxx>
#include <MMgt_TShared.hxx>
#include <Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Extrema_POnSurf;
class Extrema_Array1OfPOnSurf;



class Extrema_HArray1OfPOnSurf : public MMgt_TShared
{

public:

  
    Extrema_HArray1OfPOnSurf(const Standard_Integer Low, const Standard_Integer Up);
  
    Extrema_HArray1OfPOnSurf(const Standard_Integer Low, const Standard_Integer Up, const Extrema_POnSurf& V);
  
      void Init (const Extrema_POnSurf& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Extrema_POnSurf& Value) ;
  
     const  Extrema_POnSurf& Value (const Standard_Integer Index)  const;
  
      Extrema_POnSurf& ChangeValue (const Standard_Integer Index) ;
  
     const  Extrema_Array1OfPOnSurf& Array1()  const;
  
      Extrema_Array1OfPOnSurf& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(Extrema_HArray1OfPOnSurf)

protected:




private: 


  Extrema_Array1OfPOnSurf myArray;


};

#define ItemHArray1 Extrema_POnSurf
#define ItemHArray1_hxx <Extrema_POnSurf.hxx>
#define TheArray1 Extrema_Array1OfPOnSurf
#define TheArray1_hxx <Extrema_Array1OfPOnSurf.hxx>
#define TCollection_HArray1 Extrema_HArray1OfPOnSurf
#define TCollection_HArray1_hxx <Extrema_HArray1OfPOnSurf.hxx>
#define Handle_TCollection_HArray1 Handle_Extrema_HArray1OfPOnSurf
#define TCollection_HArray1_Type_() Extrema_HArray1OfPOnSurf_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _Extrema_HArray1OfPOnSurf_HeaderFile
