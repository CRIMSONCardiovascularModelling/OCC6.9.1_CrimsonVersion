// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _STEPCAFControl_DataMapOfPDExternFile_HeaderFile
#define _STEPCAFControl_DataMapOfPDExternFile_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMap.hxx>
#include <Handle_StepBasic_ProductDefinition.hxx>
#include <Handle_STEPCAFControl_ExternFile.hxx>
#include <Handle_STEPCAFControl_DataMapNodeOfDataMapOfPDExternFile.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class StepBasic_ProductDefinition;
class STEPCAFControl_ExternFile;
class TColStd_MapTransientHasher;
class STEPCAFControl_DataMapNodeOfDataMapOfPDExternFile;
class STEPCAFControl_DataMapIteratorOfDataMapOfPDExternFile;



class STEPCAFControl_DataMapOfPDExternFile  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT STEPCAFControl_DataMapOfPDExternFile(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   STEPCAFControl_DataMapOfPDExternFile& Assign (const STEPCAFControl_DataMapOfPDExternFile& Other) ;
  STEPCAFControl_DataMapOfPDExternFile& operator = (const STEPCAFControl_DataMapOfPDExternFile& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~STEPCAFControl_DataMapOfPDExternFile()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const Handle(StepBasic_ProductDefinition)& K, const Handle(STEPCAFControl_ExternFile)& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const Handle(StepBasic_ProductDefinition)& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const Handle(StepBasic_ProductDefinition)& K) ;
  
  Standard_EXPORT  const  Handle(STEPCAFControl_ExternFile)& Find (const Handle(StepBasic_ProductDefinition)& K)  const;
 const  Handle(STEPCAFControl_ExternFile)& operator() (const Handle(StepBasic_ProductDefinition)& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   Handle(STEPCAFControl_ExternFile)& ChangeFind (const Handle(StepBasic_ProductDefinition)& K) ;
  Handle(STEPCAFControl_ExternFile)& operator() (const Handle(StepBasic_ProductDefinition)& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const Handle(StepBasic_ProductDefinition)& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const Handle(StepBasic_ProductDefinition)& K) ;




protected:





private:

  
  Standard_EXPORT STEPCAFControl_DataMapOfPDExternFile(const STEPCAFControl_DataMapOfPDExternFile& Other);




};







#endif // _STEPCAFControl_DataMapOfPDExternFile_HeaderFile
