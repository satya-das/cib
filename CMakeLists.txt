cmake_minimum_required(VERSION 2.8.7)

project(cib)

enable_testing()

include("../common/cmake/conf.cmake")

#[[
if(MSVC)
	add_compile_options("/std:c++latest")
endif(MSVC)
]]

set(CMAKE_INSTALL_RPATH "$ORIGIN")
set(CMAKE_BUILD_WITH_INSTALL_RPATH TRUE) # only if you want copy from the build tree

add_definitions(-DBOOST_AUTO_LINK_NOMANGLE)
add_subdirectory(../cppparser  ${CMAKE_BINARY_DIR}/cppparser)

include_directories(../common/third_party)

cmake_policy(SET CMP0063 NEW)
set(CMAKE_CXX_VISIBILITY_PRESET hidden)

#############################################
## CIB

set(CIB_SOURCES
	src/cib.cpp
	src/cibhelper.cpp
	src/cibidmgr.cpp
	src/main.cpp
	src/cibobjfactory.cpp
	src/cibfunction_helper.cpp
	src/cibutil.cpp
	src/cibcompound.cpp
	src/ciboptionparser.cpp
)

set(RESDIR ${CMAKE_BINARY_DIR}/cibres)
set(RESFILES
	__zz_cib_Module-classId-repo.cpp
	__zz_cib_Module-class-internal-def.h
	__zz_cib_Module-decl.h
	__zz_cib_Module-def.h
	__zz_cib_Module-export.h
	__zz_cib_Module-handle.h
	__zz_cib_Module-handle-helper.h
	__zz_cib_Module-import.h
	__zz_cib_Module-mtable.h
	__zz_cib_Module-mtable-helper.h
	__zz_cib_Module-delegate-helper.h
	__zz_cib_Module-proxy.h
	__zz_cib_pointer_helper.h
)

list(APPEND RESPATHS)

foreach(RESFILE ${RESFILES})
	add_custom_command(
		OUTPUT ${RESDIR}/${RESFILE}
		COMMAND echo Copying ${RESFILE}
		COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_CURRENT_SOURCE_DIR}/res/${RESFILE} ${RESDIR}/${RESFILE}
		DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/res/${RESFILE}
	)
	list(APPEND RESPATHS ${RESDIR}/${RESFILE})
	endforeach()
add_custom_target(CibResources DEPENDS ${RESPATHS})

add_executable(cib
	${CIB_SOURCES}
)
target_link_libraries(cib
	PRIVATE
		cppparser
		boost_filesystem
)
target_include_directories(cib
	PRIVATE
		../common
)
add_dependencies(cib CibResources)
set(CMAKE_CXX_OUTPUT_EXTENSION_REPLACE 1)

find_program(
	MARKDOWN_PP
	"markdown-pp"
	PATHS ENV PATH
)

set(EXAMPLES
	010-simple-class
	015-simple-class-and-bkwd-compatibility
	018-simple-class-and-forwd-compatibility
	020-virtual-function
	030-virtual-function-and-bkwd-compatibility
	035-virtual-function-and-forwd-compatibility
	040-inheritance-change-and-bkwd-compatibility
	050-inheritance-type-and-bkwd-compatibility
	060-simple-interface-class
	070-simple-interface-class-and-bkwd-compatibility
	075-simple-interface-class-and-forwd-compatibility
	080-complex-interface-classes
	090-complex-interface-classes-and-bkwd-compatibility
	100-template-classes
	110-facade-classes-and-rtti
	120-proxy-object-reuse
	130-layout-sharing-proxy-classes
	140-rvalue-parameters
	150-reference-of-pointer
	160-free-functions
	170-private-virtuals
	180-pod-struct
	# 190-function-pointer
)
add_subdirectory(examples)

add_subdirectory(demo)

if(NOT ${MARKDOWN_PP} MATCHES "MARKDOWN_PP-NOTFOUND")
	add_custom_command(
		OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/examples/README.md
		COMMAND ${MARKDOWN_PP} ${CMAKE_CURRENT_SOURCE_DIR}/examples/README.mdpp -o ${CMAKE_CURRENT_SOURCE_DIR}/examples/README.md
		DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/examples/README.mdpp
		WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
	)
	add_custom_command(
		OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/README.md
		COMMAND ${MARKDOWN_PP} ${CMAKE_CURRENT_SOURCE_DIR}/src/README.mdpp -o ${CMAKE_CURRENT_SOURCE_DIR}/README.md
		DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/src/README.mdpp ${CMAKE_CURRENT_SOURCE_DIR}/examples/README.md ${RESPATHS} ${EXAMPLE_HEADERS} ExamplesReadme
		WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
	)
	add_custom_target(
		ReadMeCib ALL
		DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/README.md)
else()
  message("Markdown-pp NOT FOUND: ${MARKDOWN_PP}")
endif()
