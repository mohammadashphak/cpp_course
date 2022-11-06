#include <iostream>
using namespace std;

int main()
{
    // Typecasting in C++
    int a = 45;
    float b = 45.54;
    cout << "The value of a is " << (float)a << endl;
    cout << "The value of b is " << (int)b << endl;

    cout << "The sum of a and b is " << a + b << endl;
    cout << "The sum of a and b is " << a + (int)b << endl;
    cout << "The sum of a and b is " << a + int(b) << endl;

    // Reference Variables in C++
    // Referencing and Dereferencing

    int x = 3;
    int &y = x; // y is a reference variable which is a reference to a
    // int &a = 3; // You will get an error because you cannot assign a reference variable to a literal.

    cout << "The value of x is " << x << endl;
    cout << "The value of y is " << y << endl;

    cout << "The address of x is " << &x << endl;
    cout << "The address of y is " << &y << endl;

    y++;
    cout << "The value of x is " << x << endl;
    cout << "The value of y is " << y << endl;

    return 0;
}