set(CIBCMD $<TARGET_FILE:cib> -i pub -o exp -b cib -m Example)

list(APPEND EXP_SOURCES
	${example_ROOT}/exp/C.cpp
)
