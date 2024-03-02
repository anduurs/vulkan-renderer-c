@echo off

REM Setup visual studio build tools
if not defined DevEnvDir (
    call "C:\Program Files (x86)\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvarsall.bat" x64
)

REM Debug build
if not exist .\bin\debug\x64 mkdir .\bin\debug\x64
pushd .\bin\debug\x64
cl -DDEBUG_BUILD=1 -FAsc -Zi /Od /FeVulkanRenderer ..\..\..\src\platform\win32\win32_main.cpp user32.lib Gdi32.lib 
popd

REM Release build
REM if not exist .\bin\release\x64 mkdir .\bin\release\x64
REM pushd .\bin\release\x64
REM cl -DDEBUG_BUILD=0 -FAsc /FeVulkanRenderer ..\..\..\src\platform\win32\win32_main.cpp user32.lib Gdi32.lib 
REM popd

REM call ".\res\shaders\glsl\spv-compile.bat"

.\res\shaders\glslangValidator -V .\res\shaders\glsl\basic_vertex_shader.vert -o .\res\shaders\spv\basic_vertex_shader.spv
.\res\shaders\glslangValidator -V .\res\shaders\glsl\basic_frag_shader.frag -o .\res\shaders\spv\basic_frag_shader.spv