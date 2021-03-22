// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TShort_HArray1OfShortReal_HeaderFile
#define _TShort_HArray1OfShortReal_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TShort_HArray1OfShortReal.hxx>

#include <TShort_Array1OfShortReal.hxx>
#include <MMgt_TShared.hxx>
#include <Standard_ShortReal.hxx>
#include <Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class TShort_Array1OfShortReal;



class TShort_HArray1OfShortReal : public MMgt_TShared
{

public:

  
    TShort_HArray1OfShortReal(const Standard_Integer Low, const Standard_Integer Up);
  
    TShort_HArray1OfShortReal(const Standard_Integer Low, const Standard_Integer Up, const Standard_ShortReal& V);
  
      void Init (const Standard_ShortReal& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Standard_ShortReal& Value) ;
  
     const  Standard_ShortReal& Value (const Standard_Integer Index)  const;
  
      Standard_ShortReal& ChangeValue (const Standard_Integer Index) ;
  
     const  TShort_Array1OfShortReal& Array1()  const;
  
      TShort_Array1OfShortReal& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(TShort_HArray1OfShortReal)

protected:




private: 


  TShort_Array1OfShortReal myArray;


};

#define ItemHArray1 Standard_ShortReal
#define ItemHArray1_hxx <Standard_ShortReal.hxx>
#define TheArray1 TShort_Array1OfShortReal
#define TheArray1_hxx <TShort_Array1OfShortReal.hxx>
#define TCollection_HArray1 TShort_HArray1OfShortReal
#define TCollection_HArray1_hxx <TShort_HArray1OfShortReal.hxx>
#define Handle_TCollection_HArray1 Handle_TShort_HArray1OfShortReal
#define TCollection_HArray1_Type_() TShort_HArray1OfShortReal_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _TShort_HArray1OfShortReal_HeaderFile
