project(simple-class-library)

cmake_minimum_required(VERSION 3.4)

include("../../../../common/cmake/conf.cmake")

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/demo)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/demo)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/demo)

set(LIBRARY_PUB_FILE_NAMES
	Circle.h
)

set(CIB_OUTPUT
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_Demo-gateway.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_Demo-decl.h
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_Demo-export.h
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_Demo-ids.h
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_Demo-mtable.h
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_Demo-mtable-helper.h
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_Demo-classId-repo.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_Demo-proxy-mgr.h
	${CMAKE_CURRENT_SOURCE_DIR}/exp/__zz_cib_internal/__zz_cib_Demo-ids.h
	${CMAKE_CURRENT_SOURCE_DIR}/exp/__zz_cib_internal/Circle-postdef.h
	${CMAKE_CURRENT_SOURCE_DIR}/exp/__zz_cib_internal/Circle-predef.h
	${CMAKE_CURRENT_SOURCE_DIR}/exp/Circle.h
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
	COMMAND ${CIB} -i pub -o exp -b cib -m Demo --apidecor=EXAMPLE_API -c ${CMAKE_CURRENT_SOURCE_DIR}/abi/__zz_cib_Demo-ids.h >${CMAKE_LIBRARY_OUTPUT_DIRECTORY}/dev.null
	DEPENDS cib ${LIBRARY_PUB_FILES}
	WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)

set(LIBRARY_SOURCES
	Circle.cpp
)
add_library(simple-class-library_cibified
	SHARED
		${LIBRARY_SOURCES}
		${LIBRARY_PUB_FILES}
		${CIB_OUTPUT}
)
set_target_properties(simple-class-library_cibified
	PROPERTIES
		COMPILE_DEFINITIONS EXAMPLE_API=
)
target_include_directories(simple-class-library_cibified
	PRIVATE
		pub
		cib
)
add_dependencies(simple-class-library_cibified cib)

add_library(simple-class-library
	SHARED
		${LIBRARY_SOURCES}
		${LIBRARY_PUB_FILES}
)
set_target_properties(simple-class-library
	PROPERTIES
		COMPILE_DEFINITIONS EXAMPLE_API=${DLLEXPORT}
)

target_include_directories(simple-class-library
	PUBLIC
		pub
)
if(MSVC)
    set_target_properties(simple-class-library PROPERTIES LINK_FLAGS "${LINK_FLAGS} /INCREMENTAL:NO")
    set_target_properties(simple-class-library_cibified PROPERTIES LINK_FLAGS "${LINK_FLAGS} /INCREMENTAL:NO")
endif()
