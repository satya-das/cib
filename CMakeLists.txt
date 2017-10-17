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
	cppprogex.cpp
	cibidmgr.cpp
	main.cpp
	cibobjfactory.cpp
	cibfunction_helper.cpp
	cibutil.cpp
)

add_executable(cib ${CIB_SOURCES})
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
set(RESFILES lib_cib.cpp lib_cib.h usr_cib.h)

foreach(RESFILE ${RESFILES})
	add_custom_command(
		TARGET cib
		POST_BUILD
			COMMAND echo Copying ${RESFILE}
			COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_CURRENT_SOURCE_DIR}/res/${RESFILE} ${RESDIR}/${RESFILE}
	)
endforeach()

# Below lines are for making sure we also build
# test projects in proper order when cib is built.
add_subdirectory(test)
add_custom_target(cibtestgraphics)
add_dependencies(cibtestgraphics graphics)
add_custom_target(cibtestdraw)
add_dependencies(cibtestdraw cibtestgraphics draw)
