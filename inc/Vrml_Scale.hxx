// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Vrml_Scale_HeaderFile
#define _Vrml_Scale_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <gp_Vec.hxx>
#include <Standard_OStream.hxx>
class gp_Vec;


//! defines a Scale node of VRML specifying transform
//! properties.
//! This  node  defines  a  3D  scaling  about  the  origin.
//! By  default  :
//! myRotation  =  (1 1 1)
class Vrml_Scale 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Vrml_Scale();
  
  Standard_EXPORT Vrml_Scale(const gp_Vec& aScaleFactor);
  
  Standard_EXPORT   void SetScaleFactor (const gp_Vec& aScaleFactor) ;
  
  Standard_EXPORT   gp_Vec ScaleFactor()  const;
  
  Standard_EXPORT   Standard_OStream& Print (Standard_OStream& anOStream)  const;




protected:





private:



  gp_Vec myScaleFactor;


};







#endif // _Vrml_Scale_HeaderFile
