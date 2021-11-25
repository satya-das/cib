set(LIBRARY_PUB_FILE_BASENAMES
  # List of public headers without extension
	class-name
  platform-specific-impl/class-name
)

###########################################################
## DETAILS
###########################################################

include("../../../../common/cmake/conf.cmake")

set(EXP_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../library/exp)

set(LIBRARY_EXP_FILES "${EXP_DIR}/__zz_cib_internal/__zz_cib_wxStyleHeaderDependencyTests-ids.h")
foreach(PUBFILE_BASENAME ${LIBRARY_PUB_FILE_BASENAMES})
  list(APPEND LIBRARY_EXP_FILES 	${EXP_DIR}/__zz_cib_internal/${PUBFILE_BASENAME}-predef.h)
  list(APPEND LIBRARY_EXP_FILES 	${EXP_DIR}/__zz_cib_internal/${PUBFILE_BASENAME}-postdef.h)

  list(APPEND LIBRARY_EXP_FILES 	${EXP_DIR}/${PUBFILE_BASENAME}.h)
  list(APPEND LIBRARY_EXP_FILES 	${EXP_DIR}/${PUBFILE_BASENAME}.cpp)
endforeach()
