#include <iostream>
using namespace std;

// struct
/*
-> A structure is a user-defined data type in C/C++.
-> A structure creates a data type that can be used to group items of possibly different types into a single type.
-> Structures in C++ can contain two types of members:
1. Data Member: These members are normal C++ variables. We can create a structure with variables of different data types in C++.
2. Member Functions: These members are normal C++ functions. Along with variables, we can also include functions inside a structure declaration.
*/
typedef struct Student // typedef is used to give a new name to an existing data type. (see std at end of the structure definition)
{
    // Data Members
    int rollNumber = 0; // Default value of rollNumber is 0. (C++ 11)
    int age;
    float percentage;

    // Member Function
    void display()
    {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Age: " << age << endl;
        cout << "Percentage: " << percentage << endl;
    }
} st;
// std is the alias name of the structure Student (optional). We can use Student instead of std. (see typedef). If we don't use typedef, the std will become a variable of type Student.

// union
/*
-> A union is a type of structure that can be used where the amount of memory used is a key factor.
-> Similarly to the structure, the union can contain different types of data types.
-> Each time a new variable is initialized from the union it overwrites the previous in C language but in C++ we also don't need this keyword and uses that memory location.
-> This is most useful when the type of data being passed through functions is unknown, using a union which contains all possible data types can remedy this problem.
-> It is declared by using the keyword "union".
*/
union Money
{
    int rice;     // 4 bytes
    char car;     // 1 bytes
    float pounds; // 4 bytes
};

// enum
/*
-> Enums are user-defined types that consist of named integral constants.
-> It helps to assign constants to a set of names to make the program easier to read, maintain and understand.
-> An Enumeration is declared by using the keyword “enum“.
*/
enum Meal
{
    breakfast, // 0
    lunch,     // 1
    dinner     // 2
};

int main()
{
    struct Student s1; // st s1; (see typedef)

    // Accessing Data Members
    cout << "Roll Number: " << s1.rollNumber << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Percentage: " << s1.percentage << endl;

    // Assigning Values to Data Members
    s1.rollNumber = 1;
    s1.age = 18;
    s1.percentage = 90.5;

    // Accessing Data Members
    cout << "Roll Number: " << s1.rollNumber << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Percentage: " << s1.percentage << endl;

    // Accessing Member Functions
    s1.display();

    // Structures can be initialized using curly braces
    struct Student s2 = {2, 19, 95.5};
    s2.display();

    // array of structures
    struct Student s3[3];
    s3[0] = {3, 20, 96.5};

    s3[0].display();

    s3[1].rollNumber = 4;
    s3[1].age = 21;
    s3[1].percentage = 97.5;

    s3[1].display();

    // Structure Pointer
    struct Student s4 = {5, 22, 98.5};

    struct Student *ptr = &s4;
    ptr->display(); // (*ptr).display(); // '->' is arrow operator. It is used to access the members of a structure using a pointer to that structure.

    ptr->rollNumber = 6;
    ptr->age = 23;
    ptr->percentage = 99.5;

    ptr->display();

    // Initializing a union
    union Money m1;
    m1.rice = 34;

    cout << "rice: " << m1.rice << endl;     // 34
    cout << "car: " << m1.car << endl;       // garbage value
    cout << "pounds: " << m1.pounds << endl; // garbage value

    m1.car = 'c';

    cout << "rice: " << m1.rice << endl;     // garbage value
    cout << "car: " << m1.car << endl;       // c
    cout << "pounds: " << m1.pounds << endl; // garbage value

    m1.pounds = 34.89;

    cout << "rice: " << m1.rice << endl;     // garbage value
    cout << "car: " << m1.car << endl;       // garbage value
    cout << "pounds: " << m1.pounds << endl; // 34.89

    // Initializing an enum
    enum Meal m2 = lunch;
    cout << "m2: " << m2 << endl; // 1

    cout << "breakfast: " << breakfast << endl; // 0
    cout << "lunch: " << lunch << endl;         // 1
    cout << "dinner: " << dinner << endl;       // 2

    return 0;
}