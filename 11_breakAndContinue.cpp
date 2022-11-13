#include <iostream>
using namespace std;

int main()
{
    // Break and Continue
    // break and continue are two keywords in C++ which are used to control the flow of loops.
    // break: It is used to terminate the loop immediately.
    // continue: It is used to skip the current iteration of the loop and continue with the next iteration.

    // Although we have already seen the use of break and continue in the sequence control selection, we will see it again here.
    
    // Example of break
    for (int i = 1; i <= 40; i++)
    {
        if (i == 5)
        {
            break;
        }
        cout << i << endl;
    }

    // Example of continue
    for (int i = 1; i <= 40; i++)
    {
        if (i == 5)
        {
            continue;
        }
        cout << i << endl;
    }

    return 0;
}