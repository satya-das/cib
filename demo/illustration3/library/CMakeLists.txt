project(illustration3-library)

cmake_minimum_required(VERSION 3.4)

include("../../../../common/cmake/conf.cmake")

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/demo/illustration3)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/demo/illustration3)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/demo/illustration3)

set(LIBRARY_PUB_FILE_NAMES
	A.h
	value.h
)

set(CIB_OUTPUT
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_illustration3-gateway.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_illustration3-decl.h
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_illustration3-export.h
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_illustration3-ids.h
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_illustration3-mtable.h
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_illustration3-mtable-helper.h
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_illustration3-classId-repo.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_illustration3-proxy.h
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
	COMMAND ${CMAKE_BINARY_DIR}/cib -i pub -o exp -b cib -m illustration3 -c ${CMAKE_CURRENT_SOURCE_DIR}/sdk/__zz_cib_illustration3-ids.h
	COMMAND echo Generated files: ${CIB_OUTPUT}
	DEPENDS cib ${LIBRARY_PUB_FILES}
	WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)

set(LIBRARY_SOURCES
	A.cpp
)
add_library(illustration3-library_cibified
	SHARED
		${LIBRARY_SOURCES}
		${LIBRARY_PUB_FILES}
		${CIB_OUTPUT}
)
set_target_properties(illustration3-library_cibified
	PROPERTIES
		COMPILE_DEFINITIONS LIBRARYAPI=
)
target_include_directories(illustration3-library_cibified
	PRIVATE
		pub
)
add_dependencies(illustration3-library_cibified cib)

add_library(illustration3-library
	SHARED
		${LIBRARY_SOURCES}
		${LIBRARY_PUB_FILES}
)
set_target_properties(illustration3-library
	PROPERTIES
		COMPILE_DEFINITIONS LIBRARYAPI=${DLLEXPORT}
)

target_include_directories(illustration3-library
	PUBLIC
		pub
)
if(MSVC)
    set_target_properties(illustration3-library PROPERTIES LINK_FLAGS "${LINK_FLAGS} /INCREMENTAL:NO")
    set_target_properties(illustration3-library_cibified PROPERTIES LINK_FLAGS "${LINK_FLAGS} /INCREMENTAL:NO")
endif()
