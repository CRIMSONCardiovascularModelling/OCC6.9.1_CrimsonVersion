// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeUpgrade_UnifySameDomain_HeaderFile
#define _ShapeUpgrade_UnifySameDomain_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_ShapeUpgrade_UnifySameDomain.hxx>

#include <TopoDS_Shape.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_ShapeBuild_ReShape.hxx>
#include <MMgt_TShared.hxx>
class ShapeBuild_ReShape;
class TopoDS_Shape;


//! Unifies same domain faces and edges of specified shape
class ShapeUpgrade_UnifySameDomain : public MMgt_TShared
{

public:

  
  //! empty constructor
  Standard_EXPORT ShapeUpgrade_UnifySameDomain();
  
  Standard_EXPORT ShapeUpgrade_UnifySameDomain(const TopoDS_Shape& aShape, const Standard_Boolean UnifyEdges = Standard_True, const Standard_Boolean UnifyFaces = Standard_True, const Standard_Boolean ConcatBSplines = Standard_False);
  
  Standard_EXPORT   void Initialize (const TopoDS_Shape& aShape, const Standard_Boolean UnifyEdges = Standard_True, const Standard_Boolean UnifyFaces = Standard_True, const Standard_Boolean ConcatBSplines = Standard_False) ;
  
  //! Builds the resulting shape
  Standard_EXPORT   void Build() ;
  
  //! Gives the resulting shape
  Standard_EXPORT  const  TopoDS_Shape& Shape()  const;
  
  Standard_EXPORT   TopoDS_Shape Generated (const TopoDS_Shape& aShape)  const;
  
  //! this method makes if possible a common face from each
  //! group of faces lying on coincident surfaces
  Standard_EXPORT   void UnifyFaces() ;
  
  //! this method makes if possible a common edge from each
  //! group of edges connecting common couple of faces
  Standard_EXPORT   void UnifyEdges() ;
  
  //! this method unifies same domain faces and edges
  Standard_EXPORT   void UnifyFacesAndEdges() ;




  DEFINE_STANDARD_RTTI(ShapeUpgrade_UnifySameDomain)

protected:




private: 


  TopoDS_Shape myInitShape;
  Standard_Boolean myUnifyFaces;
  Standard_Boolean myUnifyEdges;
  Standard_Boolean myConcatBSplines;
  TopoDS_Shape myShape;
  Handle(ShapeBuild_ReShape) myContext;


};







#endif // _ShapeUpgrade_UnifySameDomain_HeaderFile
