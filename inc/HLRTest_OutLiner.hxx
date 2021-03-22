// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRTest_OutLiner_HeaderFile
#define _HLRTest_OutLiner_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_HLRTest_OutLiner.hxx>

#include <Handle_HLRTopoBRep_OutLiner.hxx>
#include <Draw_Drawable3D.hxx>
#include <Handle_Draw_Drawable3D.hxx>
#include <Standard_OStream.hxx>
#include <Draw_Interpretor.hxx>
class HLRTopoBRep_OutLiner;
class TopoDS_Shape;
class Draw_Display;
class Draw_Drawable3D;



class HLRTest_OutLiner : public Draw_Drawable3D
{

public:

  
  Standard_EXPORT HLRTest_OutLiner(const TopoDS_Shape& S);
  
      Handle(HLRTopoBRep_OutLiner) OutLiner()  const;
  
  //! Does nothhing,
  Standard_EXPORT   void DrawOn (Draw_Display& dis)  const;
  
  //! For variable copy.
  Standard_EXPORT virtual   Handle(Draw_Drawable3D) Copy()  const;
  
  //! For variable dump.
  Standard_EXPORT virtual   void Dump (Standard_OStream& S)  const;
  
  //! For variable whatis command. Set  as a result  the
  //! type of the variable.
  Standard_EXPORT virtual   void Whatis (Draw_Interpretor& I)  const;




  DEFINE_STANDARD_RTTI(HLRTest_OutLiner)

protected:




private: 


  Handle(HLRTopoBRep_OutLiner) myOutLiner;


};


#include <HLRTest_OutLiner.lxx>





#endif // _HLRTest_OutLiner_HeaderFile
