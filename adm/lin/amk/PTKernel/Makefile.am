# Makefile.am for Open Cascade toolkit PTKernel
srcdir = @srcdir@

VPATH = @srcdir@ : \
@top_srcdir@/drv/DBC : @top_srcdir@/src/DBC: \
@top_srcdir@/drv/PCollection : @top_srcdir@/src/PCollection: \
@top_srcdir@/drv/PColStd : @top_srcdir@/src/PColStd: \
@top_srcdir@/drv/PMMgt : @top_srcdir@/src/PMMgt: \
@top_srcdir@/drv/PShort : @top_srcdir@/src/PShort: \
@top_srcdir@/drv/PStandard : @top_srcdir@/src/PStandard: \
@top_srcdir@/drv/PTColStd : @top_srcdir@/src/PTColStd: \
@top_srcdir@/drv/ObjMgt : @top_srcdir@/src/ObjMgt


AM_CXXFLAGS = 


AM_CFLAGS = 


INCLUDES = $(CSF_OPT_INCLUDES) $(STLPort_INCLUDES)  \
-I@top_srcdir@/inc \
-I@top_srcdir@/drv/DBC -I@top_srcdir@/src/DBC \
-I@top_srcdir@/drv/PCollection -I@top_srcdir@/src/PCollection \
-I@top_srcdir@/drv/PColStd -I@top_srcdir@/src/PColStd \
-I@top_srcdir@/drv/PMMgt -I@top_srcdir@/src/PMMgt \
-I@top_srcdir@/drv/PShort -I@top_srcdir@/src/PShort \
-I@top_srcdir@/drv/PStandard -I@top_srcdir@/src/PStandard \
-I@top_srcdir@/drv/PTColStd -I@top_srcdir@/src/PTColStd \
-I@top_srcdir@/drv/ObjMgt -I@top_srcdir@/src/ObjMgt


lib_LTLIBRARIES=libPTKernel.la

libPTKernel_la_LIBADD = $(CSF_OPT_LIBS) \
 \
../TKernel/libTKernel.la \
$(STLPort_LIB) 

libPTKernel_la_SOURCES = \
@top_srcdir@/drv/DBC/DBC_VArrayNodeOfVArrayOfCharacter_0.cxx \
@top_srcdir@/drv/DBC/DBC_VArrayNodeOfVArrayOfExtCharacter_0.cxx \
@top_srcdir@/drv/DBC/DBC_VArrayNodeOfVArrayOfInteger_0.cxx \
@top_srcdir@/drv/DBC/DBC_VArrayNodeOfVArrayOfReal_0.cxx \
@top_srcdir@/drv/DBC/DBC_VArrayOfCharacter_0.cxx \
@top_srcdir@/drv/DBC/DBC_VArrayOfExtCharacter_0.cxx \
@top_srcdir@/drv/DBC/DBC_VArrayOfInteger_0.cxx \
@top_srcdir@/drv/DBC/DBC_VArrayOfReal_0.cxx \
@top_srcdir@/drv/DBC/DBC_VArrayTNodeOfVArrayOfCharacter_0.cxx \
@top_srcdir@/drv/DBC/DBC_VArrayTNodeOfVArrayOfExtCharacter_0.cxx \
@top_srcdir@/drv/DBC/DBC_VArrayTNodeOfVArrayOfInteger_0.cxx \
@top_srcdir@/drv/DBC/DBC_VArrayTNodeOfVArrayOfReal_0.cxx \
@top_srcdir@/drv/ObjMgt/ObjMgt_PSeqOfExtRef_0.cxx \
@top_srcdir@/drv/ObjMgt/ObjMgt_SeqExplorerOfPSeqOfExtRef_0.cxx \
@top_srcdir@/drv/ObjMgt/ObjMgt_SeqNodeOfPSeqOfExtRef_0.cxx \
@top_srcdir@/drv/PColStd/PColStd_FieldOfHArray1OfExtendedString_0.cxx \
@top_srcdir@/drv/PColStd/PColStd_FieldOfHArray1OfInteger_0.cxx \
@top_srcdir@/drv/PColStd/PColStd_FieldOfHArray1OfPersistent_0.cxx \
@top_srcdir@/drv/PColStd/PColStd_FieldOfHArray1OfReal_0.cxx \
@top_srcdir@/drv/PColStd/PColStd_FieldOfHArray2OfInteger_0.cxx \
@top_srcdir@/drv/PColStd/PColStd_FieldOfHArray2OfPersistent_0.cxx \
@top_srcdir@/drv/PColStd/PColStd_FieldOfHArray2OfReal_0.cxx \
@top_srcdir@/drv/PColStd/PColStd_HArray1OfExtendedString_0.cxx \
@top_srcdir@/drv/PColStd/PColStd_HArray1OfInteger_0.cxx \
@top_srcdir@/drv/PColStd/PColStd_HArray1OfPersistent_0.cxx \
@top_srcdir@/drv/PColStd/PColStd_HArray1OfReal_0.cxx \
@top_srcdir@/drv/PColStd/PColStd_HArray2OfInteger_0.cxx \
@top_srcdir@/drv/PColStd/PColStd_HArray2OfPersistent_0.cxx \
@top_srcdir@/drv/PColStd/PColStd_HArray2OfReal_0.cxx \
@top_srcdir@/drv/PColStd/PColStd_VArrayNodeOfFieldOfHArray1OfExtendedString_0.cxx \
@top_srcdir@/drv/PColStd/PColStd_VArrayNodeOfFieldOfHArray1OfInteger_0.cxx \
@top_srcdir@/drv/PColStd/PColStd_VArrayNodeOfFieldOfHArray1OfPersistent_0.cxx \
@top_srcdir@/drv/PColStd/PColStd_VArrayNodeOfFieldOfHArray1OfReal_0.cxx \
@top_srcdir@/drv/PColStd/PColStd_VArrayNodeOfFieldOfHArray2OfInteger_0.cxx \
@top_srcdir@/drv/PColStd/PColStd_VArrayNodeOfFieldOfHArray2OfPersistent_0.cxx \
@top_srcdir@/drv/PColStd/PColStd_VArrayNodeOfFieldOfHArray2OfReal_0.cxx \
@top_srcdir@/drv/PColStd/PColStd_VArrayTNodeOfFieldOfHArray1OfExtendedString_0.cxx \
@top_srcdir@/drv/PColStd/PColStd_VArrayTNodeOfFieldOfHArray1OfInteger_0.cxx \
@top_srcdir@/drv/PColStd/PColStd_VArrayTNodeOfFieldOfHArray1OfPersistent_0.cxx \
@top_srcdir@/drv/PColStd/PColStd_VArrayTNodeOfFieldOfHArray1OfReal_0.cxx \
@top_srcdir@/drv/PColStd/PColStd_VArrayTNodeOfFieldOfHArray2OfInteger_0.cxx \
@top_srcdir@/drv/PColStd/PColStd_VArrayTNodeOfFieldOfHArray2OfPersistent_0.cxx \
@top_srcdir@/drv/PColStd/PColStd_VArrayTNodeOfFieldOfHArray2OfReal_0.cxx \
@top_srcdir@/drv/PShort/PShort_FieldOfHArray1OfShortReal_0.cxx \
@top_srcdir@/drv/PShort/PShort_FieldOfHArray2OfShortReal_0.cxx \
@top_srcdir@/drv/PShort/PShort_HArray1OfShortReal_0.cxx \
@top_srcdir@/drv/PShort/PShort_HArray2OfShortReal_0.cxx \
@top_srcdir@/drv/PShort/PShort_HSequenceOfShortReal_0.cxx \
@top_srcdir@/drv/PShort/PShort_SeqExplorerOfHSequenceOfShortReal_0.cxx \
@top_srcdir@/drv/PShort/PShort_SeqNodeOfHSequenceOfShortReal_0.cxx \
@top_srcdir@/drv/PShort/PShort_VArrayNodeOfFieldOfHArray1OfShortReal_0.cxx \
@top_srcdir@/drv/PShort/PShort_VArrayNodeOfFieldOfHArray2OfShortReal_0.cxx \
@top_srcdir@/drv/PShort/PShort_VArrayTNodeOfFieldOfHArray1OfShortReal_0.cxx \
@top_srcdir@/drv/PShort/PShort_VArrayTNodeOfFieldOfHArray2OfShortReal_0.cxx \
@top_srcdir@/drv/PTColStd/PTColStd_DataMapIteratorOfPersistentTransientMap_0.cxx \
@top_srcdir@/drv/PTColStd/PTColStd_DataMapIteratorOfTransientPersistentMap_0.cxx \
@top_srcdir@/drv/PTColStd/PTColStd_DataMapNodeOfPersistentTransientMap_0.cxx \
@top_srcdir@/drv/PTColStd/PTColStd_DataMapNodeOfTransientPersistentMap_0.cxx \
@top_srcdir@/drv/PTColStd/PTColStd_DoubleMapIteratorOfDoubleMapOfTransientPersistent_0.cxx \
@top_srcdir@/drv/PTColStd/PTColStd_DoubleMapNodeOfDoubleMapOfTransientPersistent_0.cxx \
@top_srcdir@/drv/PTColStd/PTColStd_DoubleMapOfTransientPersistent_0.cxx \
@top_srcdir@/drv/PTColStd/PTColStd_MapPersistentHasher_0.cxx \
@top_srcdir@/drv/PTColStd/PTColStd_PersistentTransientMap_0.cxx \
@top_srcdir@/drv/PTColStd/PTColStd_TransientPersistentMap_0.cxx \
@top_srcdir@/src/DBC/DBC_BaseArray.cxx \
@top_srcdir@/src/DBC/DBC_DBVArray.cxx \
@top_srcdir@/src/ObjMgt/ObjMgt_ExternRef.cxx \
@top_srcdir@/src/ObjMgt/ObjMgt_ExternShareable.cxx \
@top_srcdir@/src/PCollection/PCollection_HAsciiString.cxx \
@top_srcdir@/src/PCollection/PCollection_HExtendedString.cxx \
@top_srcdir@/src/PMMgt/PMMgt_PManaged.cxx \
@top_srcdir@/src/PStandard/PStandard_ArrayNode.cxx

