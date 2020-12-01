@call "C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\Common7\Tools\VsDevCmd.bat"
cmake ..\cib
devenv cib.sln /Build
devenv cib.sln /Project RUN_TESTS /Build
