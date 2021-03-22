// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_ListNodeOfListOfReal_HeaderFile
#define _TColStd_ListNodeOfListOfReal_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TColStd_ListNodeOfListOfReal.hxx>

#include <Standard_Real.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_MapNodePtr.hxx>
class TColStd_ListOfReal;
class TColStd_ListIteratorOfListOfReal;



class TColStd_ListNodeOfListOfReal : public TCollection_MapNode
{

public:

  
    TColStd_ListNodeOfListOfReal(const Standard_Real& I, const TCollection_MapNodePtr& n);
  
      Standard_Real& Value()  const;




  DEFINE_STANDARD_RTTI(TColStd_ListNodeOfListOfReal)

protected:




private: 


  Standard_Real myValue;


};

#define Item Standard_Real
#define Item_hxx <Standard_Real.hxx>
#define TCollection_ListNode TColStd_ListNodeOfListOfReal
#define TCollection_ListNode_hxx <TColStd_ListNodeOfListOfReal.hxx>
#define TCollection_ListIterator TColStd_ListIteratorOfListOfReal
#define TCollection_ListIterator_hxx <TColStd_ListIteratorOfListOfReal.hxx>
#define Handle_TCollection_ListNode Handle_TColStd_ListNodeOfListOfReal
#define TCollection_ListNode_Type_() TColStd_ListNodeOfListOfReal_Type_()
#define TCollection_List TColStd_ListOfReal
#define TCollection_List_hxx <TColStd_ListOfReal.hxx>

#include <TCollection_ListNode.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_ListNode
#undef TCollection_ListNode_hxx
#undef TCollection_ListIterator
#undef TCollection_ListIterator_hxx
#undef Handle_TCollection_ListNode
#undef TCollection_ListNode_Type_
#undef TCollection_List
#undef TCollection_List_hxx




#endif // _TColStd_ListNodeOfListOfReal_HeaderFile
