project(templates-library)

cmake_minimum_required(VERSION 3.4)

include("../../../../common/cmake/conf.cmake")

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/demo/templates)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/demo/templates)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/demo/templates)

set(LIBRARY_PUB_FILE_NAMES
	A.h
	value.h
)

set(CIB_OUTPUT
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_templates-gateway.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_templates-decl.h
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_templates-export.h
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_templates-ids.h
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_templates-mtable.h
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_templates-mtable-helper.h
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_templates-classId-repo.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_templates-proxy.h
)
set(LIBRARY_PUB_FILES "")
foreach(PUBFILE ${LIBRARY_PUB_FILE_NAMES})
	list(APPEND CIB_OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/cib/${PUBFILE}.cpp)
	list(APPEND LIBRARY_PUB_FILES ${CMAKE_CURRENT_SOURCE_DIR}/pub/${PUBFILE})
endforeach()
foreach(CIBOUTFILE ${CIB_OUTPUT})
	set_source_files_properties(${CIBOUTFILE} GENERATED)
endforeach()
add_custom_command(
	OUTPUT ${CIB_OUTPUT}
	COMMAND echo Running cib...
	COMMAND ${CMAKE_BINARY_DIR}/cib -i pub -o exp -b cib -m templates -c ${CMAKE_CURRENT_SOURCE_DIR}/sdk/__zz_cib_templates-ids.h
	COMMAND echo Generated files: ${CIB_OUTPUT}
	DEPENDS cib ${LIBRARY_PUB_FILES}
	WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)

set(LIBRARY_SOURCES
	A.cpp
)
add_library(templates-library_cibified
	SHARED
		${LIBRARY_SOURCES}
		${LIBRARY_PUB_FILES}
		${CIB_OUTPUT}
)
set_target_properties(templates-library_cibified
	PROPERTIES
		COMPILE_DEFINITIONS LIBRARYAPI=
)
target_include_directories(templates-library_cibified
	PRIVATE
		pub
)
add_dependencies(templates-library_cibified cib)

add_library(templates-library
	SHARED
		${LIBRARY_SOURCES}
		${LIBRARY_PUB_FILES}
)
set_target_properties(templates-library
	PROPERTIES
		COMPILE_DEFINITIONS LIBRARYAPI=${DLLEXPORT}
)

target_include_directories(templates-library
	PUBLIC
		pub
)
if(MSVC)
    set_target_properties(templates-library PROPERTIES LINK_FLAGS "${LINK_FLAGS} /INCREMENTAL:NO")
    set_target_properties(templates-library_cibified PROPERTIES LINK_FLAGS "${LINK_FLAGS} /INCREMENTAL:NO")
endif()
