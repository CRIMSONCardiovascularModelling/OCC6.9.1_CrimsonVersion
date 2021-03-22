// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <BRepMAT2d_DataMapNodeOfDataMapOfBasicEltShape.hxx>

#include <Standard_Type.hxx>

#include <MAT_BasicElt.hxx>
#include <TopoDS_Shape.hxx>
#include <TColStd_MapTransientHasher.hxx>
#include <BRepMAT2d_DataMapOfBasicEltShape.hxx>
#include <BRepMAT2d_DataMapIteratorOfDataMapOfBasicEltShape.hxx>

 


IMPLEMENT_STANDARD_TYPE(BRepMAT2d_DataMapNodeOfDataMapOfBasicEltShape)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TCollection_MapNode),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(BRepMAT2d_DataMapNodeOfDataMapOfBasicEltShape)


IMPLEMENT_DOWNCAST(BRepMAT2d_DataMapNodeOfDataMapOfBasicEltShape,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(BRepMAT2d_DataMapNodeOfDataMapOfBasicEltShape)


#define TheKey Handle(MAT_BasicElt)
#define TheKey_hxx <MAT_BasicElt.hxx>
#define TheItem TopoDS_Shape
#define TheItem_hxx <TopoDS_Shape.hxx>
#define Hasher TColStd_MapTransientHasher
#define Hasher_hxx <TColStd_MapTransientHasher.hxx>
#define TCollection_DataMapNode BRepMAT2d_DataMapNodeOfDataMapOfBasicEltShape
#define TCollection_DataMapNode_hxx <BRepMAT2d_DataMapNodeOfDataMapOfBasicEltShape.hxx>
#define TCollection_DataMapIterator BRepMAT2d_DataMapIteratorOfDataMapOfBasicEltShape
#define TCollection_DataMapIterator_hxx <BRepMAT2d_DataMapIteratorOfDataMapOfBasicEltShape.hxx>
#define Handle_TCollection_DataMapNode Handle_BRepMAT2d_DataMapNodeOfDataMapOfBasicEltShape
#define TCollection_DataMapNode_Type_() BRepMAT2d_DataMapNodeOfDataMapOfBasicEltShape_Type_()
#define TCollection_DataMap BRepMAT2d_DataMapOfBasicEltShape
#define TCollection_DataMap_hxx <BRepMAT2d_DataMapOfBasicEltShape.hxx>
#include <TCollection_DataMapNode.gxx>

