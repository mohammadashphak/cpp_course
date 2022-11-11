#include <iostream>
using namespace std;

int main()
{

    // Conditional Statements
    // if, if-else, if-else-if ladder, nested if-else, switch

    // if
    int a = 3, b = 4;
    if (a > b)
    {
        cout << "a is greater than b" << endl;
    }

    // if-else
    int c = 3, d = 4;
    if (c > d)
    {
        cout << "c is greater than d" << endl;
    }
    else
    {
        cout << "d is greater than c" << endl;
    }

    // if-else-if ladder
    int e = 3, f = 4, g = 5;
    if (e > f && e > g)
    {
        cout << "e is greater than f and g" << endl;
    }
    else if (f > e && f > g)
    {
        cout << "f is greater than e and g" << endl;
    }
    else
    {
        cout << "g is greater than e and f" << endl;
    }

    // nested if-else
    int h = 3, i = 4, j = 5;
    if (h > i)
    {
        if (h > j)
        {
            cout << "h is greater than i and j" << endl;
        }
        else
        {
            cout << "j is greater than h and i" << endl;
        }
    }
    else
    {
        if (i > j)
        {
            cout << "i is greater than h and j" << endl;
        }
        else
        {
            cout << "j is greater than h and i" << endl;
        }
    }

    // switch
    int k = 3;
    switch (k)
    {
    case 1:
        cout << "You are 1" << endl;
        break;
    case 2:
        cout << "You are 2" << endl;
        break;
    case 3:
        cout << "You are 3" << endl;
        break;
    case 4:
        cout << "You are 4" << endl;
        break;
    case 5:
        cout << "You are 5" << endl;
        break;
    default:
        cout << "You are not in the list" << endl;
        break;
    }

    // Selection control statements
    // break, continue, goto

    // break
    for (int i = 0; i < 40; i++)
    {
        if (i == 3)
        {
            break;
        }
        cout << i << endl;
    }

    // continue
    for (int i = 0; i < 40; i++)
    {
        if (i == 3)
        {
            continue;
        }
        cout << i << endl;
    }

    // goto
    for (int i = 0; i < 40; i++)
    {
        if (i == 3)
        {
            goto jump;
        }
        cout << i << endl;
    }
jump:
    cout << "I have jumped" << endl;

    return 0;
}