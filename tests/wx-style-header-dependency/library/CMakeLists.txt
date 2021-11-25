project(wxStyleHeaderDependencyTestsLib)

cmake_minimum_required(VERSION 3.4)

## LIBRARY FILES

set(LIBRARY_SOURCES
	class-name.cpp
	platform-specific-impl/class-name.cpp
)



###########################################################
## DETAILS
###########################################################

include("../common.cmake")

set(LIBRARY_CIB_FILES
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_wxStyleHeaderDependencyTests-gateway.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_wxStyleHeaderDependencyTests-decl.h
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_wxStyleHeaderDependencyTests-export.h
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_wxStyleHeaderDependencyTests-ids.h
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_wxStyleHeaderDependencyTests-mtable.h
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_wxStyleHeaderDependencyTests-mtable-helper.h
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_wxStyleHeaderDependencyTests-classId-repo.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_wxStyleHeaderDependencyTests-proxy-mgr.h
)

set(LIBRARY_PUB_FILES "")
foreach(PUB_FILE_NAME ${LIBRARY_PUB_FILE_BASENAMES})
	list(APPEND LIBRARY_CIB_FILES ${CMAKE_CURRENT_SOURCE_DIR}/cib/${PUB_FILE_NAME}.h.cpp)
	list(APPEND LIBRARY_PUB_FILES ${CMAKE_CURRENT_SOURCE_DIR}/pub/${PUB_FILE_NAME}.h)
endforeach()

set(CIB_OUTPUT ${LIBRARY_CIB_FILES} ${LIBRARY_EXP_FILES})

foreach(CIBOUTFILE ${CIB_OUTPUT})
	set_source_files_properties(${CIBOUTFILE} GENERATED)
endforeach()

add_custom_command(
	OUTPUT ${CIB_OUTPUT}
	COMMAND echo Running cib...
	COMMAND ${CIB} -i pub -o exp -b cib -m wxStyleHeaderDependencyTests --wx-style-header-dependency true
	COMMAND echo Generated files: ${CIB_OUTPUT}
	DEPENDS cib ${LIBRARY_PUB_FILES}
	WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)

add_library(wxStyleHeaderDependencyTestsLib
	SHARED
		${LIBRARY_SOURCES}
		${LIBRARY_CIB_FILES}
		${LIBRARY_PUB_FILES}
)

target_include_directories(wxStyleHeaderDependencyTestsLib
	PRIVATE
		pub
		cib
)
add_dependencies(wxStyleHeaderDependencyTestsLib cib)

if(MSVC)
    set_target_properties(wxStyleHeaderDependencyTestsLib PROPERTIES LINK_FLAGS "${LINK_FLAGS} /INCREMENTAL:NO")
endif()

