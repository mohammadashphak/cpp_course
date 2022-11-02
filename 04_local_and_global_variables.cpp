#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // Local and Global Variables
    int a = 5; // global variable: declared outside of any function
    cout << a << endl;
    {
        int a = 10;        // local variable: declared inside the braces of a function
        cout << a << endl; // prints 10 as the local variable is given preference over the global variable.
    }
    cout << a << endl; // prints 5 as the local variable is out of scope.
    return 0;
}