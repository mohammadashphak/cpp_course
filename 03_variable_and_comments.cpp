// C++ Comments
/*
A comment is a human-readable text in the source code, which is ignored by the compiler. Comments can be used to insert any informative piece which a programmer does not wish to be executed. It could be either to explain a piece of code or to make it more readable. In addition, it can be used to prevent the execution of alternative code when the process of debugging is done.
-> Comments can be singled-lined or multi-lined.

1. Single Line Comments
-> Single-line comments start with two forward slashes (//).
-> Any information after the slashes // lying on the same line would be ignored (will not be executed) since they become unparsable.
*/

// An example of how we use a single-line comment

/*
###############################################################################################################
#include <iostream>

int main()
{
    // This is a single line comment
    std::cout << "Hello World";
    return 0;
}
###############################################################################################################
*/

// 2. Multi - line comments
// -> A multi - line comment starts with /* and ends with */.
// -> Any information between /* and */ will be ignored by the compiler.
// -> An example of how we use a multi - line comment

// ###############################################################################################################
// #include <iostream>

// int main()
// {
/* This is a
multi-line
comment */

// std::cout << "Hello World";
// return 0;
// }
// ###############################################################################################################

// C++ Variables
/*
-> Variables are containers for storing data values.
-> In C++, there are different types of variables.
-> Some of them are as follows:
1. an integer variable defined with the keyword int stores integers (whole numbers), without decimals, such as 63 or -1.
2. a floating point variable defined with keyword float stores floating point numbers, with decimals, such as 79.97 or -13.26.
3. a character variable defined with the keyword char stores single characters, such as 'A' or 'z'. Char values are bound to be surrounded by single quotes.
4. a boolean variable defined with the keyword bool stores a single value 0 or 1 for false and true respectively.

Declaration
-> We cannot declare a variable without specifying its data type. The data type of a variable depends on what we want to store in the variable and how much space we want it to hold. The syntax for declaring a variable is simple:
    data_type  variable_name;
                OR
    data_type variable_name = value;

->  The tutorial will go over data types later on.They will be dealt with in great detail.

Naming a Variable
-> There is no limit to what we can call a variable.Yet there are specific rules we must follow while naming a variable :
-> A variable name in C++ can have a length of range 1 to 255 characters
-> A variable name can only contain alphabets, digits, and underscores(_).
-> A variable cannot start with a digit.
-> A variable cannot include any white space in its name.
-> Variable names are case sensitive
-> The name should not be a reserved keyword or any special character.

Variable Scope
-> The scope of a variable is the region in a program where the existence of that variable is valid.Based on its scope, variables can be classified into two types :

1. Local variables : Local variables are declared inside the braces of any function and can be assessed only from that particular function.
2. Global variables : Global variables are declared outside of any function and can be accessed from anywhere.

An example that demonstrates the difference in applications of a local and a global variable is given below.
*/

/*
###############################################################################################################
#include <iostream>
using namespace std;

int a = 5; // global variable

void func()
{
    cout << a << endl;
}

int main()
{
    int a = 10; // local variable
    cout << a << endl;
    func();
    return 0;
}
###############################################################################################################
*/