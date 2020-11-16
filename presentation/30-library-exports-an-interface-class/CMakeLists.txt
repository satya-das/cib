project(library-exports-an-interface-class)

cmake_minimum_required(VERSION 3.4)

include("../../../common/cmake/conf.cmake")

set(LIBRARY_PUB_FILES
	library/pub/A.h
)
set(LIBRARY_SOURCES
)
set(CIB_SOURCES
	library/cib/MethodTableA.cpp
	library/cib/MethodTableGenericI.cpp
)

add_library(library-exports-an-interface-class-library
	SHARED
		${LIBRARY_SOURCES}
		${LIBRARY_PUB_FILES}
		${CIB_SOURCES}
)
set_target_properties(library-exports-an-interface-class-library
	PROPERTIES
		COMPILE_DEFINITIONS DLLEXPORT=${DLLEXPORT}
)
target_include_directories(library-exports-an-interface-class-library
	PRIVATE
		library/pub
)

if(MSVC)
    set_target_properties(library-exports-an-interface-class-library PROPERTIES LINK_FLAGS "${LINK_FLAGS} /INCREMENTAL:NO")
endif()


########### CLIENT ##########


if(NOT "${CMAKE_CXX_COMPILER_ID}" STREQUAL "MSVC")
	# This is required when MethodTable is implemented using struct
	SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC")
endif()

set(CLIENT_SOURCES
	client/main.cpp
)

set(LIBRARY_EXP_SOURCES
	${CMAKE_CURRENT_SOURCE_DIR}/library/exp/A.cpp
)

add_executable(library-exports-an-interface-class-client
	${CLIENT_SOURCES}
	${LIBRARY_EXP_SOURCES}
)
target_include_directories(library-exports-an-interface-class-client
	PRIVATE
		${CMAKE_CURRENT_SOURCE_DIR}/library/exp
)

target_link_libraries(library-exports-an-interface-class-client
	PRIVATE
		library-exports-an-interface-class-library
)

set_target_properties(library-exports-an-interface-class-client
	PROPERTIES
		COMPILE_DEFINITIONS DLLIMPORT=${DLLIMPORT}
)

if(MSVC)
    set_target_properties(library-exports-an-interface-class-client PROPERTIES LINK_FLAGS "${LINK_FLAGS} /INCREMENTAL:NO")
endif()

add_test(NAME library-exports-an-interface-class COMMAND $<TARGET_FILE:library-exports-an-interface-class-client>)
