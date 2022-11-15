#include <iostream>
using namespace std;

int main()
{
    // Pointer Arithmetic
    /*
    -> Pointer arithmetic is the process of adding or subtracting a number from a pointer.
    -> Pointer arithmetic is used to access the elements of an array.
    */

    int a = 10;
    int *p1 = &a;

    cout << "a: " << a << endl;     // Output the value of a (10)
    cout << "p1: " << p1 << endl;   // Output the memory address of a (0x7ffe5367e044)
    cout << "*p1: " << *p1 << endl; // Output the value of a (10)

    p1++; // Increment the pointer by 1

    cout << "p1: " << p1 << endl;   // Output the memory address of a (0x7ffe5367e048)
    cout << "*p1: " << *p1 << endl; // Output the value of a (random)

    p1--; // Decrement the pointer by 1

    cout << "p1: " << p1 << endl;   // Output the memory address of a (0x7ffe5367e044)
    cout << "*p1: " << *p1 << endl; // Output the value of a (10)

    // Array Example
    int marks[] = {23, 45, 56, 89};

    int mathMarks[4];
    mathMarks[0] = 2278;
    mathMarks[1] = 738;
    mathMarks[2] = 378;
    mathMarks[3] = 578;

    cout << "These are math marks" << endl;
    cout << mathMarks[0] << endl;
    cout << mathMarks[1] << endl;
    cout << mathMarks[2] << endl;
    cout << mathMarks[3] << endl;

    // Change the value of an array element
    marks[2] = 455;
    cout << "These are the changed marks" << endl;
    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << "The value of marks " << i << " is " << marks[i] << endl;
    }

    // Pointer to an array
    int arr[10] = {23, 122, 41, 67};

    // The name of an array is a pointer to the first element of the array
    cout << "Address of first memory block (arr): " << arr << endl;
    cout << "Address of first memory block (&arr[0]): " << &arr[0] << endl;
    cout << "Address of first memory block (&arr): " << &arr << endl;

    // Get value of array elements using array name
    cout << "*arr = " << *arr << endl;
    cout << "arr[0] = " << arr[0] << endl;
    cout << "*(arr + 1) = " << *(arr + 1) << endl;
    cout << "arr[1] = " << arr[1] << endl;

    cout << "*arr + 1 = " << *arr + 1 << endl;
    cout << "*(arr + 1) = " << *(arr + 1) << endl;
    cout << "*(arr) + 1 = " << *(arr) + 1 << endl;
    cout << "(*arr) + 1 = " << (*arr) + 1 << endl;
    cout << "*(&arr) = " << *(&arr) << endl; // &arr is a pointer to an entire array
    cout << "*(&arr + 1) = " << *(&arr + 1) << endl;
    cout << "*(&arr) + 1 = " << *(&arr) + 1 << endl;

    // Important
    cout << "3 [arr] = " << 3 [arr] << endl; // i[arr] = arr[i] = *(arr + i)

    // sizeof(array) and sizeof(pointer) are different
    cout << "sizeof(arr) = " << sizeof(arr) << endl;
    cout << "sizeof(*arr) = " << sizeof(*arr) << endl;
    cout << "sizeof(&arr) = " << sizeof(&arr) << endl;

    int *ptr = &arr[0];
    cout << "sizeof(ptr) = " << sizeof(ptr) << endl;
    cout << "sizeof(*ptr) = " << sizeof(*ptr) << endl;
    cout << "sizeof(&ptr) = " << sizeof(&ptr) << endl;

    // Address of array elements
    int arr2[20] = {1, 2, 3, 5};
    cout << "&arr2[0] = " << &arr2[0] << endl;
    cout << "&arr2 = " << &arr2 << endl; // &arr2 = &arr2[0], but &arr2 is a pointer to an entire array (not a pointer to the first element of the array)
    cout << "arr2 = " << arr2 << endl;
    cout << "arr2 + 1 = " << arr2 + 1 << endl;   // arr2 + 1 = &arr2[1]
    cout << "&arr2 + 1 = " << &arr2 + 1 << endl; // &arr2 is a pointer to an entire array (not a pointer to the first element of the array) so &arr2 + 1 will point the next block of 20 elements

    int *p = &arr2[0];
    cout << "p = " << p << endl;
    cout << "p + 1 = " << p + 1 << endl;   // p + 1 = &arr2[1]
    cout << "&p = " << &p << endl;         // &p is a pointer to a pointer
    cout << "&p + 1 = " << &p + 1 << endl; // &p + 1 = &p + sizeof(int*)

    return 0;
}
