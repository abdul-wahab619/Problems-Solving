// C++ program to illustrate the use of union in C++
#include <iostream>
using namespace std;

// Creating a union
union geek
{
    // Defining data members
    long int age;
    char grade;
    float GPA;
};

int main()
{

    // Defining a union variable
    union geek student1;
    cout << "Size of Union: " << sizeof(student1);

    // Assigning values to data member of union geek and
    // printing the values of data members
    student1.age = 25;
    cout << "\nAge : " << student1.age << endl;

    student1.grade = 'B';
    cout << "Grade : " << student1.grade << endl;

    student1.GPA = 4.5;
    cout << "GPA : " << student1.GPA << endl;

    return 0;
}
