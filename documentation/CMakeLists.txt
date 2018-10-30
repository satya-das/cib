add_custom_command(
	OUTPUT ../README.md
	COMMAND markdown-pp ../READEME.mdpp -o ../README.md
	DEPENDS ../README.mdpp
)

