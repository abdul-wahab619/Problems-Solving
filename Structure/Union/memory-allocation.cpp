#include <iostream>
using namespace std;

// Creating a union
union geek
{
    // Defining data members
    int age;
    float GPA;
    double marks;
};

int main()
{

    // Defining a union variable.
    geek student1;

    cout << "Memory address of age: " << &student1.age
         << endl;
    cout << "Memory address of GPA: " << &student1.GPA
         << endl;
    cout << "Memory address of marks: " << &student1.marks
         << endl;

    cout << "Size of a union: " << sizeof(student1) << endl;

    return 0;
}
