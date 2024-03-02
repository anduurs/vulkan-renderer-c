@echo off
FOR /R %%f in (.\*) do glslangValidator -V %%f -o ..\spv\%%f