# SudokuOpenCV
A Visual C++ Application for testing the OpenCV functionality for the CompleteSudoku Project
## Installation
If you have OpenCV installed and configured with Visual Studio 2015, simply import from this repository.  
If not, get OpenCV configured and installed for C++.
### Visual Studio Configuration Instructions (for Windows)
1. WARNING: OpenCV can be very difficult to configure correctly
2. Download OpenCV version 2.4 from https://sourceforge.net/projects/opencvlibrary/ and unpack the files to a particular location you will need to remember.
3. Have Visual Studio Community Edition 2015 downloaded and installed
4. Open the project file ConsoleApplication1.sln from within Visual Studio
5. Use the top menu to change the active configuration from Debug to Release. Change the solution to either x86 or x64 depending on your system.
6. Right click on the project in the Solution Explorer and select Properties>VC++ Directories
7. Modify the fields to the Executable Directories, Include Directories, and Library Directories to contain the paths to your locally saved /bin/, /include/ and /lib/ directories respectively from your OpenCV installation.
8. Go to Linker>General from the project properties and set Use Library Dependent Inputs to true
9. Go to Linker>Input and paste the names of all the .lib files (NOT d.lib files) from your openCV /lib/ directory
10. Copy the .dll files from your OpenCV /bin/ directory into the appropriate release folder (where the executable is)
11. WARNING: Make sure that the linked libraries and binaries are consistent with the platform configuration (x86/x32 vs. x64)
12. Still not working? That’s not surprising to be honest.

### After OpenCV is configured
The source files of this OpenCV application are `DigitRecognizer.h`, `DigitRecognizer.cpp`, and `ConsoleApplication1.cpp`  
  
If you are not using Visual Studio, remove the `#include "stdafx.h"` line from the top of these files. The header file locations may also need to be changed depending on your OpenCV installation.
