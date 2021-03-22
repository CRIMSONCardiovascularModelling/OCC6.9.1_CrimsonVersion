// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRAlgo_Intersection_HeaderFile
#define _HLRAlgo_Intersection_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TopAbs_Orientation.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Real.hxx>
#include <Standard_ShortReal.hxx>
#include <TopAbs_State.hxx>


//! Describes  an intersection  on   an edge to  hide.
//! Contains a parameter and   a state (ON =   on  the
//! face, OUT = above the face, IN = under the Face)
class HLRAlgo_Intersection 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT HLRAlgo_Intersection();
  
  Standard_EXPORT HLRAlgo_Intersection(const TopAbs_Orientation Ori, const Standard_Integer Lev, const Standard_Integer SegInd, const Standard_Integer Ind, const Standard_Real P, const Standard_ShortReal Tol, const TopAbs_State S);
  
      void Orientation (const TopAbs_Orientation Ori) ;
  
      TopAbs_Orientation Orientation()  const;
  
      void Level (const Standard_Integer Lev) ;
  
      Standard_Integer Level()  const;
  
      void SegIndex (const Standard_Integer SegInd) ;
  
      Standard_Integer SegIndex()  const;
  
      void Index (const Standard_Integer Ind) ;
  
      Standard_Integer Index()  const;
  
      void Parameter (const Standard_Real P) ;
  
      Standard_Real Parameter()  const;
  
      void Tolerance (const Standard_ShortReal T) ;
  
      Standard_ShortReal Tolerance()  const;
  
      void State (const TopAbs_State S) ;
  
      TopAbs_State State()  const;




protected:





private:



  TopAbs_Orientation myOrien;
  Standard_Integer mySegIndex;
  Standard_Integer myIndex;
  Standard_Integer myLevel;
  Standard_Real myParam;
  Standard_ShortReal myToler;
  TopAbs_State myState;


};


#include <HLRAlgo_Intersection.lxx>





#endif // _HLRAlgo_Intersection_HeaderFile
