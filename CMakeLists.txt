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
	src/cibsmartptr_helper.cpp
)

set(CIB_HEADERS
	src/cibhelper.h
	src/cibidmgr.h
	src/cibobjfactory.h
	src/cibfunction_helper.h
	src/cibutil.h
	src/cibcompound.h
	src/ciboptionparser.h
)

set(RESDIR ${CMAKE_BINARY_DIR}/cibres)
set(RESFILES
	__zz_cib_Module-class-down-cast.h
	__zz_cib_Module-class-fwd-decl.h
	__zz_cib_Module-classId-repo.cpp
	__zz_cib_Module-class-internal-def.h
	__zz_cib_Module-class-helper.h
	__zz_cib_Module-class-proxy-detection.h
	__zz_cib_Module-class-types.h
	__zz_cib_Module-client-type-converters.h
	__zz_cib_Module-type-converter-base.h
	__zz_cib_Module-type-converter-natives.h
	__zz_cib_Module-client-type-converter-proxy.h
	__zz_cib_Module-client-type-converter-std-function.h
	__zz_cib_Module-type-converter-value-classes.h
	__zz_cib_Module-std-function-converter-base.h
	__zz_cib_Module-decl.h
	__zz_cib_Module-def.h
	__zz_cib_Module-delegate-helper.h
	__zz_cib_Module-export.h
	__zz_cib_Module-import.h
	__zz_cib_Module-internal.h
	__zz_cib_Module-internal-proxy.h
	__zz_cib_Module-library-type-converter-class.h
	__zz_cib_Module-type-converter-function-object.h
	__zz_cib_Module-type-converter-smart-ptr.h
	__zz_cib_Module-library-type-converter-std-function.h
	__zz_cib_Module-type-converter-value-classes.h
	__zz_cib_Module-library-type-converters.h
	__zz_cib_Module-local-proxy-mgr.h
	__zz_cib_Module-mtable.h
	__zz_cib_Module-mtable-helper.h
	__zz_cib_Module-null-proxy-mgr.h
	__zz_cib_Module-generic.h
	__zz_cib_Module-proxy-mgr.cpp
	__zz_cib_Module-proxy-mgr.h
	__zz_cib_Module-remote-proxy-mgr.h
	__zz_cib_Module-smart-ptr-detection.h
	__zz_cib_Module-smart-ptr-input.h
	__zz_cib_Module-value-types.h
	__zz_cib_Module-type-traits.h
	__zz_cib_pointer_helper.h
	__zz_cib_stl-interface/vector
	__zz_cib_stl-interface/list
	__zz_cib_stl-helpers/__zz_cib_vector-iterator.h
	__zz_cib_stl-helpers/__zz_cib_vector-reverse_iterator.h
	__zz_cib_stl-helpers/__zz_cib_bidirectional_iterator.h
	__zz_cib_stl-helpers/__zz_cib_bidirectional_reverse_iterator.h
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
	${CIB_HEADERS}
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
	019-function-overloading
	020-virtual-function
	030-virtual-function-and-bkwd-compatibility
	035-virtual-function-and-forwd-compatibility
	040-inheritance-change-and-bkwd-compatibility
	050-inheritance-type-and-bkwd-compatibility
	055-abstract-class
	060-simple-interface-class
	065-trivial-interface-class
	070-simple-interface-class-and-bkwd-compatibility
	075-simple-interface-class-and-forwd-compatibility
	080-complex-interface-classes
	090-complex-interface-classes-and-bkwd-compatibility
	100-template-classes
	110-facade-classes-and-rtti
	115-protected-methods
	120-proxy-object-reuse
	130-layout-sharing-proxy-classes
	140-rvalue-parameters
	150-reference-of-pointer
	160-free-functions
	170-private-virtuals
	# 180-pod-struct
	# 190-function-pointer
	200-deleted-members
	210-enum-parameters
	220-unique-ptr
	225-intrusive-ptr
	230-lib-deletes-proxy
	240-operator-overloading
	250-namespace
	260-conditional-api-availability
	300-std-vector
	310-std-function
)

add_subdirectory(examples)

add_subdirectory(demo)

add_subdirectory(tests)

if(NOT ${MARKDOWN_PP} MATCHES "MARKDOWN_PP-NOTFOUND")
	add_custom_command(
		OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/examples/README.md
		COMMAND ${MARKDOWN_PP} ${CMAKE_CURRENT_SOURCE_DIR}/examples/README.mdpp -o ${CMAKE_CURRENT_SOURCE_DIR}/examples/README.md
		DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/examples/README.mdpp
		WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
	)
	add_custom_command(
		OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/demo/README.md
		COMMAND ${MARKDOWN_PP} ${CMAKE_CURRENT_SOURCE_DIR}/demo/README.mdpp -o ${CMAKE_CURRENT_SOURCE_DIR}/demo/README.md
		DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/demo/README.mdpp
		WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
	)
	add_custom_command(
		OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/README.md
		COMMAND ${MARKDOWN_PP} ${CMAKE_CURRENT_SOURCE_DIR}/src/README.mdpp -o ${CMAKE_CURRENT_SOURCE_DIR}/README.md
		DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/src/README.mdpp ${RESPATHS} ${EXAMPLE_HEADERS} ExamplesReadme
		WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
	)
	add_custom_target(
		ReadMeCib ALL
		DEPENDS
		  ${CMAKE_CURRENT_SOURCE_DIR}/README.md
		  ${CMAKE_CURRENT_SOURCE_DIR}/examples/README.md
		  ${CMAKE_CURRENT_SOURCE_DIR}/demo/README.md
  )
else()
  message("Markdown-pp NOT FOUND: ${MARKDOWN_PP}")
endif()

# It is expected that cib is run for all targets already
add_custom_target(CibCoverage echo "Running lcov ..."
    COMMAND lcov -c -d ${CMAKE_BINARY_DIR}/CMakeFiles/cib.dir -o cib.info || echo "Ignore" >/dev/null
    COMMAND lcov --remove cib.info '*cppparser*' --output-file cib.info
    COMMAND lcov --remove cib.info '*third-party/*' --output-file cib.info
    COMMAND lcov --remove cib.info '*common/*' --output-file cib.info
    COMMAND lcov --remove cib.info '*boost/*' --output-file cib.info
    COMMAND lcov --remove cib.info '/usr/*' --output-file cib.info
    COMMAND genhtml cib.info
)
