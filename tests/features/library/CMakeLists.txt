project(FeatureTestsLib)

cmake_minimum_required(VERSION 3.4)

## LIBRARY FILES

set(LIBRARY_SOURCES
	template.cpp
)



###########################################################
## DETAILS
###########################################################

include("../common.cmake")

set(LIBRARY_CIB_FILES
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_FeatureTests-gateway.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_FeatureTests-decl.h
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_FeatureTests-export.h
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_FeatureTests-ids.h
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_FeatureTests-mtable.h
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_FeatureTests-mtable-helper.h
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_FeatureTests-classId-repo.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_FeatureTests-proxy.h
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_FeatureTests-proxy-mgr.h
)

set(LIBRARY_PUB_FILES "")
foreach(PUB_FILE_NAME ${LIBRARY_PUB_FILE_NAMES})
	list(APPEND LIBRARY_CIB_FILES ${CMAKE_CURRENT_SOURCE_DIR}/cib/${PUB_FILE_NAME}.cpp)
	list(APPEND LIBRARY_PUB_FILES ${CMAKE_CURRENT_SOURCE_DIR}/pub/${PUB_FILE_NAME})
endforeach()

set(CIB_OUTPUT ${LIBRARY_CIB_FILES} ${LIBRARY_EXP_FILES})

foreach(CIBOUTFILE ${CIB_OUTPUT})
	set_source_files_properties(${CIBOUTFILE} GENERATED)
endforeach()

add_custom_command(
	OUTPUT ${CIB_OUTPUT}
	COMMAND echo Running cib...
	COMMAND ${CMAKE_BINARY_DIR}/cib -i pub -o exp -b cib -m FeatureTests
	COMMAND echo Generated files: ${CIB_OUTPUT}
	DEPENDS cib CibResources ${LIBRARY_PUB_FILES}
	WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)

add_library(FeatureTestsLib
	SHARED
		${LIBRARY_SOURCES}
		${LIBRARY_CIB_FILES}
		${LIBRARY_PUB_FILES}
)

target_include_directories(FeatureTestsLib
	PRIVATE
		pub
)
add_dependencies(FeatureTestsLib cib)

if(MSVC)
    set_target_properties(FeatureTestsLib PROPERTIES LINK_FLAGS "${LINK_FLAGS} /INCREMENTAL:NO")
endif()

