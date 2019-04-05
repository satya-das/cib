project(memorylib)

cmake_minimum_required(VERSION 3.4)

include("../../../../common/cmake/conf.cmake")

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${BASEOUTDIR}/lib/cibtest)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${BASEOUTDIR}/lib/cibtest)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${BASEOUTDIR}/bin/cibtest)
set(CMAKE_OBJFILE_OUTPUT_DIRECTORY ${BASEOUTDIR}/obj)
set(CMAKE_CURRENT_BINARY_DIR, ${CMAKE_OBJFILE_OUTPUT_DIRECTORY})

set(MEMORYLIB_PUB_FILE_NAMES
    intrusive_base.h
    intrusive_ptr.h
)

set(CIB_OUTPUT
	${CMAKE_CURRENT_SOURCE_DIR}/cib/__zz_cib_Memory_ids.h
	${CMAKE_CURRENT_SOURCE_DIR}/cib/cib_MemoryLib.h
	${CMAKE_CURRENT_SOURCE_DIR}/cib/cib_MemoryLib.cpp
)
set(MEMORYLIB_PUB_FILES "")
foreach(PUBFILE ${MEMORYLIB_PUB_FILE_NAMES})
	list(APPEND CIB_OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/cib/${PUBFILE})
	list(APPEND CIB_OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/cib/${PUBFILE}.cpp)
	list(APPEND MEMORYLIB_PUB_FILES ${CMAKE_CURRENT_SOURCE_DIR}/pub/${PUBFILE})
endforeach()
foreach(CIBOUTFILE ${CIB_OUTPUT})
	set_source_files_properties(${CIBOUTFILE} GENERATED)
endforeach()
add_custom_command(
	OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/cib/cib_MemoryLib.cpp
	COMMAND echo Running cib...
	COMMAND ${BINDIR}/cib -i pub -o exp -b cib -m Memory
	COMMAND echo Generated files: ${CIB_OUTPUT}
	DEPENDS cib ${MEMORYLIB_PUB_FILES}
	WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)

set(MEMORYLIB_SOURCES
    intrusive_ptr.cpp
)
add_library(memorylib_cibified
	SHARED
		${MEMORYLIB_SOURCES}
		${MEMORYLIB_PUB_FILES}
		${CIB_OUTPUT}
)
target_include_directories(memorylib_cibified
	PRIVATE
		pub
)
add_dependencies(memorylib_cibified cib)

add_library(memorylib
	SHARED
		${MEMORYLIB_SOURCES}
		${MEMORYLIB_PUB_FILES}
)
target_include_directories(memorylib
	PUBLIC
		pub
)
