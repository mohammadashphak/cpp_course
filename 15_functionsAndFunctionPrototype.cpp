#include <iostream>
using namespace std;

// Function Prototype
/*
-> A function prototype is a declaration of a function that tells the compiler about the function name, return type, and parameters.
*/

// Function Declaration (Function Prototype)
// type function-name (parameters);
// int sum(int a, int b); //-> Acceptable
// int sum(int a, b);     //-> Not Acceptable
int sum(int, int); //-> Acceptable

// void g(void); //-> Acceptable
void g(); //--> Acceptable

int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Function Call
    cout << "Sum is: " << sum(num1, num2) << endl; // num1 and num2 are called arguments
    return 0;
}

// Function Definition
int sum(int a, int b)
{
    // Parameters a and b will be taking values from arguments num1 and num2.
    int c = a + b;
    return c;
}

void g(void)
{
    cout << "Hello World!" << endl;
}