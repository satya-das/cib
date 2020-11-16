add_subdirectory(1-simple-class)
add_subdirectory(2-interface-class)
add_subdirectory(3-template-class)

if(NOT ${MARKDOWN_PP} MATCHES "MARKDOWN_PP-NOTFOUND")
    add_custom_command(
        OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/README.md
        COMMAND ${MARKDOWN_PP} ${CMAKE_CURRENT_SOURCE_DIR}/README.mdpp -o ${CMAKE_CURRENT_SOURCE_DIR}/README.md
        DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/README.mdpp
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
    )

    add_custom_target(
        DemoDocs ALL
        DEPENDS
            ${CMAKE_CURRENT_SOURCE_DIR}/README.md
    )
endif()
