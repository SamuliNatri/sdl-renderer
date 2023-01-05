@echo off
cl main.c ^
/Fea.exe /Zi /nologo ^
/Ilibs\SDL2-2.26.1\include ^
/link ^
/SUBSYSTEM:console ^
/LIBPATH:libs\SDL2-2.26.1\lib\x64 ^
SDL2.lib SDL2main.lib shell32.lib
