add_custom_target(${example}DiffsForReadMe ALL DEPENDS ${${example}DiffFilesForReadMe})

if(NOT ${MARKDOWN_PP} MATCHES "MARKDOWN_PP-NOTFOUND")
	add_custom_command(
		OUTPUT ${example_ROOT}/README.md
		COMMAND ${MARKDOWN_PP} ${example_ROOT}/README.mdpp -o ${example_ROOT}/README.md
		DEPENDS ${example_ROOT}/README.mdpp ${${example}DiffFilesForReadMe} ${example_ROOT}/pub/example.h
		WORKING_DIRECTORY ${example_ROOT}/../..
	)
endif()

add_custom_target(
	${example}_ReadMe ALL
	DEPENDS ${example_ROOT}/README.md)
