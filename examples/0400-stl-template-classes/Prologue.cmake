set(CIBCMD $<TARGET_FILE:cib> --input-folder pub/ --output-folder exp/ --bind-folder cib/ --module Example)

list(APPEND EXP_SOURCES
	${example_ROOT}/exp/C.cpp
)
