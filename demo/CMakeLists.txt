add_subdirectory(client-calls)
add_subdirectory(client-is-called)
add_subdirectory(templates)

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
