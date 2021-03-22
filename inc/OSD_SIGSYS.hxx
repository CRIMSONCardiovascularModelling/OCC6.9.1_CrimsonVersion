// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _OSD_SIGSYS_HeaderFile
#define _OSD_SIGSYS_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard_DefineException.hxx>
#include <Standard_SStream.hxx>
#include <OSD_Signal.hxx>
#include <Handle_OSD_SIGSYS.hxx>

#if !defined No_Exception && !defined No_OSD_SIGSYS
  #define OSD_SIGSYS_Raise_if(CONDITION, MESSAGE) \
  if (CONDITION) OSD_SIGSYS::Raise(MESSAGE);
#else
  #define OSD_SIGSYS_Raise_if(CONDITION, MESSAGE)
#endif

DEFINE_STANDARD_EXCEPTION(OSD_SIGSYS, OSD_Signal)

#endif // _OSD_SIGSYS_HeaderFile
