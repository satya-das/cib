set(${example}DiffFilesForReadMe ${example_ROOT}/header-diff.diff)

add_custom_command(
    OUTPUT ${${example}DiffFilesForReadMe}
    COMMAND mkdir -p ${example_ROOT}/../readme-assets/${example}
    COMMAND diff -Bw -u1000 --label pub/example.h --label exp/example.h pub/example.h exp/example.h >${example_ROOT}/../readme-assets/${example}/header-diff.diff || echo $$\? >/dev/null
    DEPENDS ${example_ROOT}/pub/example.h ${example_ROOT}/exp/example.h
    WORKING_DIRECTORY ${example_ROOT}
)

add_custom_target(${example}DiffsForReadMe ALL DEPENDS ${${example}DiffFilesForReadMe})

