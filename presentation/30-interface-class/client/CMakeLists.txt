project(interface-class-client)

cmake_minimum_required(VERSION 3.4)

include("../../../../common/cmake/conf.cmake")

if(NOT "${CMAKE_CXX_COMPILER_ID}" STREQUAL "MSVC")
	# This is required when MethodTable is implemented using struct
	SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC")
endif()

set(CLIENT_SOURCES
	main.cpp
)

set(LIBRARY_EXP_SOURCES
	${CMAKE_CURRENT_SOURCE_DIR}/../library/exp/A.cpp
)

add_executable(interface-class-client
	${CLIENT_SOURCES}
	${LIBRARY_EXP_SOURCES}
)
target_include_directories(interface-class-client
	PRIVATE
		${CMAKE_CURRENT_SOURCE_DIR}/../library/exp
)

target_link_libraries(interface-class-client
	PRIVATE
		interface-class-library
)

set_target_properties(interface-class-client
	PROPERTIES
		COMPILE_DEFINITIONS DLLIMPORT=${DLLIMPORT}
)

if(MSVC)
    set_target_properties(interface-class-client PROPERTIES LINK_FLAGS "${LINK_FLAGS} /INCREMENTAL:NO")
endif()

add_test(NAME interface-class COMMAND $<TARGET_FILE:interface-class-client>)
