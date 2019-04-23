project(illustration3-client)

cmake_minimum_required(VERSION 3.4)

include("../../../../common/cmake/conf.cmake")

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/demo/illustration3)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/demo/illustration3)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/demo/illustration3)

set(CLIENT_SOURCES
	main.cpp
)

set(LIBRARY_EXP_SOURCES
	${CMAKE_CURRENT_SOURCE_DIR}/../library/exp/A.cpp
)

set_source_files_properties(${CMAKE_CURRENT_SOURCE_DIR}/../library/exp/A.cpp GENERATED)

add_executable(illustration3-client_cibified
	${CLIENT_SOURCES}
	${LIBRARY_EXP_SOURCES}
)
target_include_directories(illustration3-client_cibified
	PRIVATE
		${CMAKE_CURRENT_SOURCE_DIR}/../library/exp
)

target_link_libraries(illustration3-client_cibified
	PRIVATE
		illustration3-library_cibified
)

add_executable(illustration3-client
	${CLIENT_SOURCES}
)
set_target_properties(illustration3-client
	PROPERTIES
		COMPILE_DEFINITIONS LIBRARYAPI=${DLLIMPORT}
)
target_link_libraries(illustration3-client
	PRIVATE
		illustration3-library
)
target_include_directories(illustration3-client
	PRIVATE
		${CMAKE_CURRENT_SOURCE_DIR}/../library/pub
)
if(MSVC)
    set_target_properties(illustration3-client PROPERTIES LINK_FLAGS "${LINK_FLAGS} /INCREMENTAL:NO")
    set_target_properties(illustration3-client_cibified PROPERTIES LINK_FLAGS "${LINK_FLAGS} /INCREMENTAL:NO")
endif()
