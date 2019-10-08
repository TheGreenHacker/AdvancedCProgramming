# DLL_LIB
Shared library for generic circular doubly linked list in C.


## How to install 
Clone the LibraryDesigning repository:
    git clone https://github.com/TheGreenHacker/CLibraryDesigning

Then, cd into the DLL_LIB directory and run:
> cd CLibraryDesigning
> mkdir build
> cd build
> make 
> make install or sudo make install, depending on current user permissions
    
This installs the library in /usr/local/lib


## How to use
Include the required header file, e.g. #include "dll.h". When compiling a program that uses dll, specifiy:
* where header files are located 
* library search path (/usr/local/lib by default)
* dll, the library linker needs to link with

Example:
  gcc main.c -o main  -I /path/to/libdll/install/dir/include -L /path/to/libdll/install/dir/lib -ldll
