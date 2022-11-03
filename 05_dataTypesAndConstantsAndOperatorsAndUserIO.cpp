#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    // Data Types: int, float, double, char, bool
    /*
    int a = 4;
    float b = 4.5;
    double c = 4.5;
    char d = 'd';
    bool e = true;

    cout << "Size of int is " << sizeof(a) << endl;
    cout << "Size of float is " << sizeof(b) << endl;
    cout << "Size of double is " << sizeof(c) << endl;
    cout << "Size of char is " << sizeof(d) << endl;
    cout << "Size of bool is " << sizeof(e) << endl;
    */

    // Constants
    /*
    // we can't change the value of constant variable once it is initialized
    const int a = 4;

    // a = 5; // this will give error
    cout << a << endl;
    */

    // Operators
    /*
    int a = 4, b = 6;

    // 1. Arithmetic Operators
    cout << "The value of a + b: " << a + b << endl;
    cout << "The value of a - b: " << a - b << endl;
    cout << "The value of a * b: " << a * b << endl;
    cout << "The value of a / b: " << a / b << endl;
    cout << "The value of a % b: " << a % b << endl;
    cout << "The value of a++: " << a++ << endl;
    cout << "The value of a--: " << a-- << endl;
    cout << "The value of ++a: " << ++a << endl;
    cout << "The value of --a: " << --a << endl;

    // 2. Assignment Operators
    int c;
    cout << "The value of c = 34: " << (c = 34) << endl;
    cout << "The value of c += 2: " << (c += 2) << endl;
    cout << "The value of c -= 2: " << (c -= 2) << endl;
    cout << "The value of c *= 2: " << (c *= 2) << endl;
    cout << "The value of c /= 2: " << (c /= 2) << endl;
    cout << "The value of c %= 2: " << (c %= 2) << endl;

    // 3. Comparison Operators/ Relational Operators
    cout << "The value of a == b: " << (a == b) << endl;
    cout << "The value of a != b: " << (a != b) << endl;
    cout << "The value of a >= b: " << (a >= b) << endl;
    cout << "The value of a <= b: " << (a <= b) << endl;
    cout << "The value of a > b: " << (a > b) << endl;
    cout << "The value of a < b: " << (a < b) << endl;

    // 4. Logical Operators
    cout << "The value of (a == b) && (a < b): " << ((a == b) && (a < b)) << endl;
    cout << "The value of (a == b) || (a < b): " << ((a == b) || (a < b)) << endl;
    cout << "The value of !(a == b): " << (!(a == b)) << endl;

    // 5. Bitwise Operators
    cout << "The value of a & b: " << (a & b) << endl;
    cout << "The value of a | b: " << (a | b) << endl;
    cout << "The value of a ^ b: " << (a ^ b) << endl;
    cout << "The value of ~a: " << (~a) << endl;
    cout << "The value of a << 2: " << (a << 2) << endl;
    cout << "The value of a >> 2: " << (a >> 2) << endl;

    // 6. Misc Operators
    cout << "The value of sizeof(4): " << sizeof(4) << endl;
    cout << "The value of sizeof(a): " << sizeof(a) << endl;
    cout << "The value of sizeof(a + b): " << sizeof(a + b) << endl;
    */

   // Manipulators
   /*
    int a = 3, b = 78, c = 1233;
    cout << "The value of a without setw is: " << a << endl;
    cout << "The value of b without setw is: " << b << endl;
    cout << "The value of c without setw is: " << c << endl;

    cout << "The value of a with setw(4) is: " << setw(4) << a << endl;
    cout << "The value of b with setw(4) is: " << setw(4) << b << endl;
    cout << "The value of c with setw(4) is: " << setw(4) << c << endl;

    cout << "The value of a with setfill('*') is: " << setw(4) << setfill('*') << a << endl;
    cout << "The value of b with setfill('*') is: " << setw(4) << setfill('*') << b << endl;
    cout << "The value of c with setfill('*') is: " << setw(4) << setfill('*') << c << endl;

    cout << "The value of a with left is: " << setw(4) << setfill('*') << left << a << endl;
    cout << "The value of b with left is: " << setw(4) << setfill('*') << left << b << endl;
    cout << "The value of c with left is: " << setw(4) << setfill('*') << left << c << endl;

    cout << "The value of a with right is: " << setw(4) << setfill('*') << right << a << endl;
    cout << "The value of b with right is: " << setw(4) << setfill('*') << right << b << endl;
    cout << "The value of c with right is: " << setw(4) << setfill('*') << right << c << endl;

    // setprecision
    cout << "The value of PI with setprecision(10) is: " << setprecision(10) << M_PI << endl;
   */

    // Input/Output
    /*
    int a, b, c;
    cout << "Enter the value of a" << endl;
    cin >> a;
    cout << "Enter the value of b" << endl;
    cin >> b;
    cout << "Enter the value of c" << endl;
    cin >> c;

    cout << "The value of a is: " << a << endl;
    cout << "The value of b is: " << b << endl;
    cout << "The value of c is: " << c << endl;
    */
   
    return 0;
}