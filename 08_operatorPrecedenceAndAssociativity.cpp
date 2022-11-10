#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    // Operator Precedence and Associativity
    /*
    // Operator Precedence
    -> Operator precedence is the order in which operators are evaluated.
    -> Operators with higher precedence are evaluated first.
    -> Operators with same precedence are evaluated from left to right.
    -> Operators with lower precedence are evaluated last.
    -> Operator precedence is the same in all programming languages.

    // Associativity
    -> Associativity is the order in which operators with same precedence are evaluated.
    -> Associativity is the same in all programming languages.
    -> Associativity is either left to right or right to left.
    -> Associativity is not the same for all operators.
    -> Associativity is not the same in all programming languages.
    */

    int a = 3, b = 4;
    int c = 24, d = 5;
    cout << "The value of a * b + c / d is: " << a * b + c / d << endl;
    cout << "The value of a * b / c + d is: " << a * b / c + d << endl;

    /*
    -> In the above example, the value of a * b + c / d is 7 and the value of a * b / c + d is 1.
    -> The reason is that the operator precedence of * and / is same and it is evaluated from left to right.
    -> So, the value of a * b is 12 and the value of c / d is 4.
    -> The value of a * b + c / d is 12 + 4 = 16.
    -> The value of a * b / c + d is 12 / 24 + 5 = 1.
    */

    /*
    Operator Precedence Table
    Precedence    Operator                              Associativity
    1             () [] -> .                            Left to right
    2             ! ~ ++ -- + - * & (type) sizeof       Right to left
    3             * / %                                 Left to right
    4             + -                                   Left to right
    5             << >>                                 Left to right
    6             < <= > >=                             Left to right
    7             == !=                                 Left to right
    8             &                                     Left to right
    9             ^                                     Left to right
    10            |                                     Left to right
    11            &&                                    Left to right
    12            ||                                    Left to right
    13            ?:                                    Right to left
    14            = += -= *= /= %= &= ^= |= <<= >>=     Right to left
    15            ,                                     Left to right
    */
    return 0;
}