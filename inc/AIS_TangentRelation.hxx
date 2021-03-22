// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_TangentRelation_HeaderFile
#define _AIS_TangentRelation_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_AIS_TangentRelation.hxx>

#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <Standard_Real.hxx>
#include <Standard_Integer.hxx>
#include <AIS_Relation.hxx>
#include <Handle_Geom_Plane.hxx>
#include <PrsMgr_PresentationManager3d.hxx>
#include <Handle_Prs3d_Presentation.hxx>
#include <Handle_Prs3d_Projector.hxx>
#include <Handle_Geom_Transformation.hxx>
#include <SelectMgr_Selection.hxx>
class TopoDS_Shape;
class Geom_Plane;
class Prs3d_Presentation;
class Prs3d_Projector;
class Geom_Transformation;


//! A framework to display tangency constraints between
//! two or more Interactive Objects of the datum type.
//! The datums are normally faces or edges.
class AIS_TangentRelation : public AIS_Relation
{

public:

  
  //! TwoFacesTangent or TwoEdgesTangent relation
  //! Constructs an object to display tangency constraints.
  //! This object is defined by the first shape aFShape, the
  //! second shape aSShape, the plane aPlane and the index anExternRef.
  //! aPlane serves as an optional axis.
  //! anExternRef set to 0 indicates that there is no relation.
  Standard_EXPORT AIS_TangentRelation(const TopoDS_Shape& aFShape, const TopoDS_Shape& aSShape, const Handle(Geom_Plane)& aPlane, const Standard_Integer anExternRef = 0);
  
  //! Returns the external reference for tangency.
  //! The values are as follows:
  //! -   0 - there is no connection;
  //! -   1 - there is a connection to the first shape;
  //! -   2 - there is a connection to the second shape.
  //! This reference is defined at construction time.
  Standard_EXPORT   Standard_Integer ExternRef() ;
  
  //! Sets the external reference for tangency, aRef.
  //! The values are as follows:
  //! -   0 - there is no connection;
  //! -   1 - there is a connection to the first shape;
  //! -   2 - there is a connection to the second shape.
  //! This reference is initially defined at construction time.
  Standard_EXPORT   void SetExternRef (const Standard_Integer aRef) ;
  
  //! computes the presentation according to a point of view
  //! given by <aProjector>.
  //! To be Used when the associated degenerated Presentations
  //! have been transformed by <aTrsf> which is not a Pure
  //! Translation. The HLR Prs can't be deducted automatically
  //! WARNING :<aTrsf> must be applied
  //! to the object to display before computation  !!!
  Standard_EXPORT virtual   void Compute (const Handle(Prs3d_Projector)& aProjector, const Handle(Geom_Transformation)& aTrsf, const Handle(Prs3d_Presentation)& aPresentation) ;




  DEFINE_STANDARD_RTTI(AIS_TangentRelation)

protected:




private: 

  
  Standard_EXPORT   void Compute (const Handle(PrsMgr_PresentationManager3d)& aPresentationManager, const Handle(Prs3d_Presentation)& aPresentation, const Standard_Integer aMode = 0) ;
  
  Standard_EXPORT   void Compute (const Handle(Prs3d_Projector)& aProjector, const Handle(Prs3d_Presentation)& aPresentation) ;
  
  Standard_EXPORT   void ComputeSelection (const Handle(SelectMgr_Selection)& aSelection, const Standard_Integer aMode) ;
  
  Standard_EXPORT   void ComputeTwoFacesTangent (const Handle(Prs3d_Presentation)& aPresentation) ;
  
  Standard_EXPORT   void ComputeTwoEdgesTangent (const Handle(Prs3d_Presentation)& aPresentation) ;

  gp_Pnt myAttach;
  gp_Dir myDir;
  Standard_Real myLength;
  Standard_Integer myExternRef;


};







#endif // _AIS_TangentRelation_HeaderFile
