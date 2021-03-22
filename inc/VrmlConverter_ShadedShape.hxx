// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _VrmlConverter_ShadedShape_HeaderFile
#define _VrmlConverter_ShadedShape_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_OStream.hxx>
#include <Handle_VrmlConverter_Drawer.hxx>
class TopoDS_Shape;
class VrmlConverter_Drawer;
class TopoDS_Face;
class Poly_Connect;
class TColgp_Array1OfDir;


//! ShadedShape - computes  the  shading presentation of shapes
//! by triangulation algorithms, converts this one into VRML objects
//! and writes (adds) into anOStream.
//! All requested properties of the representation including
//! the maximal chordial deviation  are specify in aDrawer.
//! This  kind  of  the  presentation  is  converted  into
//! IndexedFaceSet ( VRML ).
class VrmlConverter_ShadedShape 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT static   void Add (Standard_OStream& anOStream, const TopoDS_Shape& aShape, const Handle(VrmlConverter_Drawer)& aDrawer) ;
  
  Standard_EXPORT static   void ComputeNormal (const TopoDS_Face& aFace, Poly_Connect& pc, TColgp_Array1OfDir& Nor) ;




protected:





private:





};







#endif // _VrmlConverter_ShadedShape_HeaderFile
