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
)

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
	__zz_cib_Module-proxy.h
	__zz_cib_pointer_helper.h
)


foreach(RESFILE ${RESFILES})
	add_custom_command(
		TARGET cib
		PRE_BUILD
			COMMAND echo Copying ${RESFILE}
			COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_CURRENT_SOURCE_DIR}/res/${RESFILE} ${RESDIR}/${RESFILE}
	)
endforeach()

add_subdirectory(test)
