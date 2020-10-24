@call "C:\Program Files\Microsoft Visual Studio\2017\Community\Common7\Tools\VsDevCmd.bat"
cmake ..\cib
devenv cib.sln /Build
