set(LIBRARY_PUB_FILE_NAMES
  file-defining-class.h
  file-using-forward-decl.h
)



###########################################################
## DETAILS
###########################################################

include("../../../../common/cmake/conf.cmake")

set(LIBRARY_PUB_FILE_BASENAMES "")
foreach(PUBFILE ${LIBRARY_PUB_FILE_NAMES})
  get_filename_component(PUBFILE_BASENAME ${PUBFILE} NAME_WE)
  list(APPEND LIBRARY_PUB_FILE_BASENAMES ${PUBFILE_BASENAME})
endforeach()

set(EXP_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../library/exp)

set(LIBRARY_EXP_FILES "${EXP_DIR}/__zz_cib_internal/__zz_cib_StlDependencyTest-ids.h")
foreach(PUBFILE_BASENAME ${LIBRARY_PUB_FILE_BASENAMES})
  list(APPEND LIBRARY_EXP_FILES 	${EXP_DIR}/__zz_cib_internal/${PUBFILE_BASENAME}-predef.h)
  list(APPEND LIBRARY_EXP_FILES 	${EXP_DIR}/__zz_cib_internal/${PUBFILE_BASENAME}-postdef.h)

  list(APPEND LIBRARY_EXP_FILES 	${EXP_DIR}/${PUBFILE_BASENAME}.h)
  list(APPEND LIBRARY_EXP_FILES 	${EXP_DIR}/${PUBFILE_BASENAME}.cpp)
endforeach()
