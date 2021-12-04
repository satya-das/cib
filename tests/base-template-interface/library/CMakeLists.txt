project(BaseTemplateInterfaceTestsLib)

cmake_minimum_required(VERSION 3.4)

## LIBRARY FILES

set(LIBRARY_SOURCES
	base-template-interface.cpp
)



###########################################################
## DETAILS
###########################################################

include("../common.cmake")

set(LIBRARY_CIB_FILES
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_BaseTemplateInterfaceTests-gateway.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_BaseTemplateInterfaceTests-decl.h
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_BaseTemplateInterfaceTests-export.h
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_BaseTemplateInterfaceTests-ids.h
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_BaseTemplateInterfaceTests-mtable.h
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_BaseTemplateInterfaceTests-mtable-helper.h
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_BaseTemplateInterfaceTests-classId-repo.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_BaseTemplateInterfaceTests-proxy-mgr.h
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
	COMMAND ${CIB} --input-folder pub/ --output-folder exp/ --bind-folder cib/ --module BaseTemplateInterfaceTests
	COMMAND echo Generated files: ${CIB_OUTPUT}
	DEPENDS cib ${LIBRARY_PUB_FILES}
	WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)

add_library(BaseTemplateInterfaceTestsLib
	SHARED
		${LIBRARY_SOURCES}
		${LIBRARY_CIB_FILES}
		${LIBRARY_PUB_FILES}
)

target_include_directories(BaseTemplateInterfaceTestsLib
	PRIVATE
		pub
		cib
)
add_dependencies(BaseTemplateInterfaceTestsLib cib)

if(MSVC)
    set_target_properties(BaseTemplateInterfaceTestsLib PROPERTIES LINK_FLAGS "${LINK_FLAGS} /INCREMENTAL:NO")
endif()

