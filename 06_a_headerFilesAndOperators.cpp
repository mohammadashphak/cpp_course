// Header files
/*
1. Header files are files that contain declarations of functions, classes, variables, etc.
2. Header files are used to avoid code duplication.
3. Header files are included in the program using the #include preprocessor directive.
*/

// There are two types of Header files
// 1. System Header Files: It comes with the compiler
#include <iostream>

// 2. User Defined Header Files: It is written by the programmer
#include "06_b_sampleFile.cpp" // This will produce an error if "06_b_sample_file.cpp" is not present in the current directory.

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 4, b = 5;

    return 0;
}