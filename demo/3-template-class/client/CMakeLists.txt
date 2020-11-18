project(template-class-client)

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

add_executable(template-class-client_cibified
	${CLIENT_SOURCES}
	${LIBRARY_EXP_SOURCES}
)
target_include_directories(template-class-client_cibified
	PRIVATE
		${CMAKE_CURRENT_SOURCE_DIR}/../library/exp
)

target_link_libraries(template-class-client_cibified
	PRIVATE
		template-class-library_cibified
)

add_executable(template-class-client
	${CLIENT_SOURCES}
)
set_target_properties(template-class-client
	PROPERTIES
		COMPILE_DEFINITIONS EXAMPLE_API=${DLLIMPORT}
)
target_link_libraries(template-class-client
	PRIVATE
		template-class-library
)
target_include_directories(template-class-client
	PRIVATE
		${CMAKE_CURRENT_SOURCE_DIR}/../library/pub
)
if(MSVC)
    set_target_properties(template-class-client PROPERTIES LINK_FLAGS "${LINK_FLAGS} /INCREMENTAL:NO")
    set_target_properties(template-class-client_cibified PROPERTIES LINK_FLAGS "${LINK_FLAGS} /INCREMENTAL:NO")
endif()
