// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AdvApp2Var_Node_HeaderFile
#define _AdvApp2Var_Node_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <gp_XY.hxx>
#include <Standard_Integer.hxx>
#include <Handle_TColgp_HArray2OfPnt.hxx>
#include <Handle_TColStd_HArray2OfReal.hxx>
#include <Standard_Real.hxx>
class TColgp_HArray2OfPnt;
class TColStd_HArray2OfReal;
class gp_XY;
class gp_Pnt;



//! used to store constraints on a (Ui,Vj) point
class AdvApp2Var_Node 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT AdvApp2Var_Node();
  
  Standard_EXPORT AdvApp2Var_Node(const Standard_Integer iu, const Standard_Integer iv);
  
  Standard_EXPORT AdvApp2Var_Node(const gp_XY& UV, const Standard_Integer iu, const Standard_Integer iv);
  
  Standard_EXPORT   gp_XY Coord()  const;
  
  Standard_EXPORT   void SetCoord (const Standard_Real x1, const Standard_Real x2) ;
  
  Standard_EXPORT   Standard_Integer UOrder()  const;
  
  Standard_EXPORT   Standard_Integer VOrder()  const;
  
  Standard_EXPORT   void SetPoint (const Standard_Integer iu, const Standard_Integer iv, const gp_Pnt& Cte) ;
  
  Standard_EXPORT   gp_Pnt Point (const Standard_Integer iu, const Standard_Integer iv)  const;
  
  Standard_EXPORT   void SetError (const Standard_Integer iu, const Standard_Integer iv, const Standard_Real error) ;
  
  Standard_EXPORT   Standard_Real Error (const Standard_Integer iu, const Standard_Integer iv)  const;




protected:





private:

  
  Standard_EXPORT AdvApp2Var_Node(const AdvApp2Var_Node& Other);


  gp_XY myCoord;
  Standard_Integer myOrdInU;
  Standard_Integer myOrdInV;
  Handle(TColgp_HArray2OfPnt) myTruePoints;
  Handle(TColStd_HArray2OfReal) myErrors;


};







#endif // _AdvApp2Var_Node_HeaderFile
