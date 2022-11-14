#include <iostream>
using namespace std;

int main()
{
    // What is a pointer?
    /*
    A pointer is a variable that stores the address of another variable.
    The address of a variable is the location of the variable in the memory.
    The address of a variable can be obtained using the & operator.
    */

    // Example of pointer
    int a = 3;
    int *b;
    b = &a;

    // & --> (Address of) Operator
    /*
    The & operator is also known as the address-of operator.
    It is used to get the address of a variable.
    */
    cout << "The address of a is " << &a << endl;
    cout << "The address of a is " << b << endl;

    // * --> (value at) Dereference operator
    /*
    The * operator is also known as the dereference operator.
    It is used to get the value stored at a particular address.
    */
    cout << "The value at address b is " << *b << endl;

    // Pointer to pointer
    /*
    A pointer that stores the address of another pointer is known as a pointer to pointer.
    */
    int **c = &b;
    cout << "The address of b is " << &b << endl;
    cout << "The address of b is " << c << endl;
    cout << "The value at address c is " << *c << endl;
    cout << "The value at address value_at(value_at(c)) is " << **c << endl;

    return 0;
}