cmake_minimum_required(VERSION 3.4)

project(cib)

enable_testing()

include("../common/cmake/conf.cmake")

if(MSVC)
	add_compile_options("/std:c++latest")
endif(MSVC)

set(CMAKE_INSTALL_RPATH "$ORIGIN")

if(NOT APPLE)
	set(CMAKE_BUILD_WITH_INSTALL_RPATH TRUE) # only if you want copy from the build tree
endif()

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

set(RES_FILE_NAMES
	__zz_cib_Module-class-down-cast.h
	__zz_cib_Module-class-fwd-decl.h
	__zz_cib_Module-classId-repo.cpp
	__zz_cib_Module-class-internal-def.h
	__zz_cib_Module-class-helper.h
	__zz_cib_Module-class-proxy-detection.h
	__zz_cib_Module-exception-abi-type.h
	__zz_cib_Module-exception-convert-to-error.h
	__zz_cib_Module-exception-throw-on-error.h
	__zz_cib_Module-class-types.h
	__zz_cib_Module-type-converters.h
	__zz_cib_Module-type-converter-base.h
	__zz_cib_Module-type-converter-basic.h
	__zz_cib_Module-std-function-converter-base.h
	__zz_cib_Module-decl.h
	__zz_cib_Module-def.h
	__zz_cib_Module-delegate-helper.h
	__zz_cib_Module-export.h
	__zz_cib_Module-import.h
	__zz_cib_Module-internal.h
	__zz_cib_Module-type-converter-proxy-class.h
	__zz_cib_Module-type-converter-proxied-class.h
	__zz_cib_Module-type-converter-function-object.h
	__zz_cib_Module-type-converter-smart-ptr.h
	__zz_cib_Module-type-converter-std-function.h
	__zz_cib_Module-handle-proxy-map.h
	__zz_cib_Module-mtable.h
	__zz_cib_Module-mtable-helper.h
	__zz_cib_Module-generic.h
	__zz_cib_Module-delegator.h
	__zz_cib_Module-proxy-mgr.cpp
	__zz_cib_Module-proxy-mgr.h
	__zz_cib_Module-proxy-types.h
	__zz_cib_Module-smart-ptr-detection.h
	__zz_cib_Module-smart-ptr-input.h
	__zz_cib_Module-value-types.h
	__zz_cib_Module-type-traits.h
	__zz_cib_stl-interface/vector
	__zz_cib_stl-interface/list
	__zz_cib_stl-helpers/__zz_cib_vector-iterator.h
	__zz_cib_stl-helpers/__zz_cib_vector-reverse_iterator.h
	__zz_cib_stl-helpers/__zz_cib_bidirectional_iterator.h
	__zz_cib_stl-helpers/__zz_cib_bidirectional_reverse_iterator.h
)

list(APPEND RES_SRC_PATHS)

foreach(RES_FILE_NAME ${RES_FILE_NAMES})
	list(APPEND RES_SRC_PATHS ${CMAKE_CURRENT_SOURCE_DIR}/res/${RES_FILE_NAME})
endforeach()

add_executable(cib
	${CIB_SOURCES}
	${CIB_HEADERS}
	${RES_SRC_PATHS}
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

set(CIB $<TARGET_FILE:cib>)
set(CIB_BIN_DIR $<TARGET_FILE_DIR:cib>)
set(RESDIR ${CIB_BIN_DIR}/cibres)

list(APPEND RESPATHS)
list(APPEND RES_SRC_PATHS)

foreach(RESFILE ${RES_FILE_NAMES})
	add_custom_command(
		TARGET cib PRE_BUILD
		COMMAND echo Copying ${RESFILE}
		COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_CURRENT_SOURCE_DIR}/res/${RESFILE} $<TARGET_FILE_DIR:cib>/cibres/${RESFILE}
		DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/res/${RESFILE}
	)
	list(APPEND RESPATHS ${RESDIR}/${RESFILE})
endforeach()

set(CMAKE_CXX_OUTPUT_EXTENSION_REPLACE 1)

find_program(
	MARKDOWN_PP
	"markdown-pp"
	PATHS ENV PATH
)

find_program(
	VALGRIND
	"valgrind"
	PATHS ENV PATH
)

add_subdirectory(examples)
add_subdirectory(demo)
add_subdirectory(presentation)
add_subdirectory(src)
add_subdirectory(tests)

if(NOT ${MARKDOWN_PP} MATCHES "MARKDOWN_PP-NOTFOUND")
else()
    message("WARNING: Markdown-pp NOT FOUND: ${MARKDOWN_PP}")
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
