# About the poject
```
The examples show how to develope C++ project with CMake,Eclipse and QtCreator on Linux.
```

#### Demo A
All the files are in one directory.  "CMakeLists.txt" is involved.
#### Demo B
Two subdirectories are introduced, but "CMakeLists.txt"  exist.
#### Demo C
Each subdirectory owns one "CMakeLists.txt". The files contained in folder "core" are for library building.
And the current directory also owns "demoC.pro".
#### Demo D
The project structure is similar to Demo C, but the demo bin is generated to the specified folder.
At the same time,"demoD.pro" is involved in the current directory.
#### Demo E
Two separated modules are built as two shared libraries. 
Furthermore,"demoE.pro" exists in the current directory.
The project file "hello.pro" of QtCreator is placed in the folder "hello" of the subfolder "core".
And the project file "sqrt.pro" of QtCreator is placed in the folder "sqrt" of the subfolder "core".
#### Demo F
All the core modules are made as one library.
At the same time, the current directory also owns "demoF.pro".
#### Demo G
The demo links the shared library pre-built by demo F.
Besides,in the current directory "demoG.pro" also exist.
#### Demo H
A cmake macro is used to range over all the subdirectories in "core". This demo presents the usage of cmake macro.
Moreover,"demoH.pro" is placed in current directory.
#### Demo I
It shows how to test the user lib module with Boost. NOTE: the Boost package should be installed before making the demo otherwise error will occur. While the method of calling a third part package is presented as well. 

**For more information, please contact [szl@mpig.com.cn](http://mpig.com.cn)**
