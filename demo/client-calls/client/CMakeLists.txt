project(client-calls)

cmake_minimum_required(VERSION 3.4)

include("../../../../common/cmake/conf.cmake")

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/demo/client-calls)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/demo/client-calls)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/demo/client-calls)

set(CLIENT_SOURCES
	main.cpp
)

set(LIBRARY_EXP_SOURCES
	${CMAKE_CURRENT_SOURCE_DIR}/../library/exp/A.cpp
)

set_source_files_properties(${CMAKE_CURRENT_SOURCE_DIR}/../library/exp/A.cpp GENERATED)

add_executable(client-calls_cibified
	${CLIENT_SOURCES}
	${LIBRARY_EXP_SOURCES}
)
target_include_directories(client-calls_cibified
	PRIVATE
		${CMAKE_CURRENT_SOURCE_DIR}/../library/exp
)

target_link_libraries(client-calls_cibified
	PRIVATE
		client-calls-library_cibified
)

add_executable(client-calls
	${CLIENT_SOURCES}
)
set_target_properties(client-calls
	PROPERTIES
		COMPILE_DEFINITIONS LIBRARYAPI=${DLLIMPORT}
)
target_link_libraries(client-calls
	PRIVATE
		client-calls-library
)
target_include_directories(client-calls
	PRIVATE
		${CMAKE_CURRENT_SOURCE_DIR}/../library/pub
)
if(MSVC)
    set_target_properties(client-calls PROPERTIES LINK_FLAGS "${LINK_FLAGS} /INCREMENTAL:NO")
    set_target_properties(client-calls_cibified PROPERTIES LINK_FLAGS "${LINK_FLAGS} /INCREMENTAL:NO")
endif()
