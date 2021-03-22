// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Approx_SequenceNodeOfSequenceOfHArray1OfReal_HeaderFile
#define _Approx_SequenceNodeOfSequenceOfHArray1OfReal_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Approx_SequenceNodeOfSequenceOfHArray1OfReal.hxx>

#include <Handle_TColStd_HArray1OfReal.hxx>
#include <TCollection_SeqNode.hxx>
#include <TCollection_SeqNodePtr.hxx>
class TColStd_HArray1OfReal;
class Approx_SequenceOfHArray1OfReal;



class Approx_SequenceNodeOfSequenceOfHArray1OfReal : public TCollection_SeqNode
{

public:

  
    Approx_SequenceNodeOfSequenceOfHArray1OfReal(const Handle(TColStd_HArray1OfReal)& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      Handle(TColStd_HArray1OfReal)& Value()  const;




  DEFINE_STANDARD_RTTI(Approx_SequenceNodeOfSequenceOfHArray1OfReal)

protected:




private: 


  Handle(TColStd_HArray1OfReal) myValue;


};

#define SeqItem Handle(TColStd_HArray1OfReal)
#define SeqItem_hxx <TColStd_HArray1OfReal.hxx>
#define TCollection_SequenceNode Approx_SequenceNodeOfSequenceOfHArray1OfReal
#define TCollection_SequenceNode_hxx <Approx_SequenceNodeOfSequenceOfHArray1OfReal.hxx>
#define Handle_TCollection_SequenceNode Handle_Approx_SequenceNodeOfSequenceOfHArray1OfReal
#define TCollection_SequenceNode_Type_() Approx_SequenceNodeOfSequenceOfHArray1OfReal_Type_()
#define TCollection_Sequence Approx_SequenceOfHArray1OfReal
#define TCollection_Sequence_hxx <Approx_SequenceOfHArray1OfReal.hxx>

#include <TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _Approx_SequenceNodeOfSequenceOfHArray1OfReal_HeaderFile
