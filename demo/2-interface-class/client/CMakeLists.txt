project(interface-class)

cmake_minimum_required(VERSION 3.4)

include("../../../../common/cmake/conf.cmake")

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/demo)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/demo)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/demo)

set(CLIENT_SOURCES
	main.cpp
)

set(LIBRARY_EXP_SOURCES
	${CMAKE_CURRENT_SOURCE_DIR}/../library/exp/A.cpp
)

set_source_files_properties(${CMAKE_CURRENT_SOURCE_DIR}/../library/exp/A.cpp GENERATED)

add_executable(interface-class_cibified
	${CLIENT_SOURCES}
	${LIBRARY_EXP_SOURCES}
)
target_include_directories(interface-class_cibified
	PRIVATE
		${CMAKE_CURRENT_SOURCE_DIR}/../library/exp
)

target_link_libraries(interface-class_cibified
	PRIVATE
		interface-class-library_cibified
)

add_executable(interface-class
	${CLIENT_SOURCES}
)
set_target_properties(interface-class
	PROPERTIES
		COMPILE_DEFINITIONS LIBRARYAPI=${DLLIMPORT}
)
target_link_libraries(interface-class
	PRIVATE
		interface-class-library
)
target_include_directories(interface-class
	PRIVATE
		${CMAKE_CURRENT_SOURCE_DIR}/../library/pub
)
if(MSVC)
    set_target_properties(interface-class PROPERTIES LINK_FLAGS "${LINK_FLAGS} /INCREMENTAL:NO")
    set_target_properties(interface-class_cibified PROPERTIES LINK_FLAGS "${LINK_FLAGS} /INCREMENTAL:NO")
endif()
