project(cib)

cmake_minimum_required(VERSION 3.4)

if (CMAKE_BUILD_TYPE MATCHES Release)
	set(TARGET_SUBDIR Release)
else()
	set(TARGET_SUBDIR Debug)
endif()

if(MSVC)
	SET(CMAKE_CXX_FLAGS "/EHsc")
endif(MSVC)

set(ROOT_DIR ${CMAKE_CURRENT_LIST_DIR}/..)
set(BASEOUTDIR ${ROOT_DIR}/build_results/${TARGET_SUBDIR})
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${BASEOUTDIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${BASEOUTDIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${BASEOUTDIR}/bin)
set(CMAKE_OBJFILE_OUTPUT_DIRECTORY ${BASEOUTDIR}/obj)

add_definitions(-DBOOST_AUTO_LINK_NOMANGLE)
add_subdirectory(${ROOT_DIR}/cppparser  ${CMAKE_OBJFILE_OUTPUT_DIRECTORY}/cppparser)

#############################################
## CIB

set(CIB_SOURCES
	cib.cpp
	cppprogex.cpp
	idmgr.cpp
	main.cpp
)

add_executable(cib ${CIB_SOURCES})
target_link_libraries(cib
	PRIVATE
		cppparser
		boost_filesystem
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
add_custom_target(cibtestshape)
add_dependencies(cibtestshape shape)
add_custom_target(cibtestdraw)
add_dependencies(cibtestdraw cibtestshape draw)
