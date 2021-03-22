// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <Units_TokensSequence.hxx>

#include <Standard_Type.hxx>

#include <Standard_NoSuchObject.hxx>
#include <Standard_OutOfRange.hxx>
#include <Units_Token.hxx>
#include <Units_TksSequence.hxx>

 


IMPLEMENT_STANDARD_TYPE(Units_TokensSequence)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(Units_TokensSequence)


IMPLEMENT_DOWNCAST(Units_TokensSequence,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(Units_TokensSequence)


#define Item Handle(Units_Token)
#define Item_hxx <Units_Token.hxx>
#define TheSequence Units_TksSequence
#define TheSequence_hxx <Units_TksSequence.hxx>
#define TCollection_HSequence Units_TokensSequence
#define TCollection_HSequence_hxx <Units_TokensSequence.hxx>
#define Handle_TCollection_HSequence Handle_Units_TokensSequence
#define TCollection_HSequence_Type_() Units_TokensSequence_Type_()
#include <TCollection_HSequence.gxx>

