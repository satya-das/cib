set(${example}DiffFilesForReadMe ${example_ROOT}/header-diff.diff)

add_custom_command(
    OUTPUT ${${example}DiffFilesForReadMe}
    DEPENDS ${example_ROOT}/pub/example.h ${example_ROOT}/exp/example.h
    WORKING_DIRECTORY ${example_ROOT}
)

add_custom_target(${example}DiffsForReadMe ALL DEPENDS ${${example}DiffFilesForReadMe})

