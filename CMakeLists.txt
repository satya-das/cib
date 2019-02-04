project(cib)

cmake_minimum_required(VERSION 3.4)

include("../common/cmake/conf.cmake")

#[[
if(MSVC)
	add_compile_options("/std:c++latest")
endif(MSVC)
]]

add_definitions(-DBOOST_AUTO_LINK_NOMANGLE)
add_subdirectory(${ROOT_DIR}/cppparser  ${CMAKE_OBJFILE_OUTPUT_DIRECTORY}/cppparser)

include_directories(third-party)

#############################################
## CIB

set(CIB_SOURCES
	cib.cpp
	cibhelper.cpp
	cibidmgr.cpp
	main.cpp
	cibobjfactory.cpp
	cibfunction_helper.cpp
	cibutil.cpp
	cibcompound.cpp
)

set(RESDIR ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/cibres)
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
		${ROOT_DIR}/common
)
add_dependencies(cib CibResources)

set(EXAMPLES example1 example2 example5 example6 example7 example8 example9 example10)
add_subdirectory(examples)

add_subdirectory(test)

find_program(
	MARKDOWN_PP
	"markdown-pp"
	PATHS ENV PATH
)

if(NOT ${MARKDOWN_PP} MATCHES "MARKDOWN_PP-NOTFOUND")
	add_custom_command(
		OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/README.md
		COMMAND ${MARKDOWN_PP} ${CMAKE_CURRENT_SOURCE_DIR}/README.mdpp -o ${CMAKE_CURRENT_SOURCE_DIR}/README.md
		DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/README.mdpp ${RESPATHS} ${EXAMPLE_HEADERS}
		WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
	)
	add_custom_target(
		ReadMe ALL
		DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/README.md)
	add_dependencies(ReadMe example1_client example2_client DiffsForReadMe)
else()
  message("Markdown-pp NOT FOUND: ${MARKDOWN_PP}")
endif()
