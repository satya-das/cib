
cmake_minimum_required(VERSION 3.4)

include("../../common/cmake/conf.cmake")

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${BASEOUTDIR}/lib/cibtest)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${BASEOUTDIR}/lib/cibtest)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${BASEOUTDIR}/bin/cibtest)
set(CMAKE_OBJFILE_OUTPUT_DIRECTORY ${BASEOUTDIR}/obj)
set(CMAKE_PDB_OUTPUT_DIRECTORY     ${BASEOUTDIR}/pdb)

set(EXAMPLES example1 example2)
foreach(example ${EXAMPLES})
    set(PROJECT_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/${example})
    set(LIBNAME ${example}_lib)
    set(CLIENTNAME ${example}_client)

    set(PUB_FILE_NAMES
	    example.h
    )
    set(LIB_GLUE_SRCS
	    ${PROJECT_ROOT}/cib/__zz_cib_Example.cpp
	    ${PROJECT_ROOT}/cib/__zz_cib_Example-classId-repo.cpp
	    ${PROJECT_ROOT}/cib/__zz_cib_Example-decl.h
	    ${PROJECT_ROOT}/cib/__zz_cib_Example-export.h
	    ${PROJECT_ROOT}/cib/__zz_cib_Example-ids.h
	    ${PROJECT_ROOT}/cib/__zz_cib_Example-mtable.h
	    ${PROJECT_ROOT}/cib/__zz_cib_Example-mtable-helper.h
	    ${PROJECT_ROOT}/cib/__zz_cib_Example-proxy.h
    )
    set(PUB_FILES "")
    foreach(PUBFILE ${PUB_FILE_NAMES})
	    list(APPEND LIB_GLUE_SRCS ${PROJECT_ROOT}/cib/${PUBFILE}.cpp)
	    list(APPEND PUB_FILES ${PROJECT_ROOT}/pub/${PUBFILE})
    endforeach()
    foreach(CIBOUTFILE ${LIB_GLUE_SRCS})
	    set_source_files_properties(${CIBOUTFILE} GENERATED)
    endforeach()

    add_subdirectory(${example})
endforeach()

