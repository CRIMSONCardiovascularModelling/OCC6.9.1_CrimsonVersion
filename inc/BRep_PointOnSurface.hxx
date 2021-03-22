// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRep_PointOnSurface_HeaderFile
#define _BRep_PointOnSurface_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_BRep_PointOnSurface.hxx>

#include <Standard_Real.hxx>
#include <BRep_PointsOnSurface.hxx>
#include <Handle_Geom_Surface.hxx>
#include <Standard_Boolean.hxx>
class Geom_Surface;
class TopLoc_Location;


//! Representation by two parameters on a surface.
class BRep_PointOnSurface : public BRep_PointsOnSurface
{

public:

  
  Standard_EXPORT BRep_PointOnSurface(const Standard_Real P1, const Standard_Real P2, const Handle(Geom_Surface)& S, const TopLoc_Location& L);
  
  Standard_EXPORT virtual   Standard_Boolean IsPointOnSurface()  const;
  
  Standard_EXPORT virtual   Standard_Boolean IsPointOnSurface (const Handle(Geom_Surface)& S, const TopLoc_Location& L)  const;
  
  Standard_EXPORT virtual   Standard_Real Parameter2()  const;
  
  Standard_EXPORT virtual   void Parameter2 (const Standard_Real P) ;




  DEFINE_STANDARD_RTTI(BRep_PointOnSurface)

protected:




private: 


  Standard_Real myParameter2;


};







#endif // _BRep_PointOnSurface_HeaderFile
