The examples show how to develope C++ project with CMake on Linux.

Demo A: All the files are in one directory. Only one "CMakeLists.txt" is involved.

Demo B: Two subdirectories are introduced, but only one "CMakeLists.txt" exists.

Demo C: Each subdirectory owns one "CMakeLists.txt". The files contained in folder "core" are for library building.

Demo D: The project structure is similar to Demo C, but the demo bin is generated to the specified folder.

Demo E: Two separated modules are built as two shared libraries. 

Demo F: All the core modules are made as one library.

Demo G: The demo links the shared library pre-built by demo F.

Demo H: A cmake macro is used to range over all the subdirectories in "core". This demo presents the usage of cmake macro.
