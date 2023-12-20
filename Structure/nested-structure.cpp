#include <iostream>
using namespace std;
struct Student
{
    string name;
    int rno;
    int marks;
    float avg;
    char grade;
};
struct Info
{
    int age;
    Student st;
};

int main()
{
    Info io;
    cout << "Enter Student Name: ";
    getline(cin, io.st.name);

    cout << "Enter Student Age: ";
    cin >> io.age;

    cout << "\nEnter Student Roll No: ";
    cin >> io.st.rno;

    cout << "\nEnter Student Marks: ";
    cin >> io.st.marks;

    cout << "\nEnter Average marks: ";
    cin >> io.st.avg;

    cout << "\nEnter Grade of the Student: ";
    cin >> io.st.grade;

    cout << "\nYou Entered the following details: \n";

    cout << "Name = " << io.st.name;
    cout << "\nAge = " << io.age;
    cout << "\nRoll No = " << io.st.rno;
    cout << "\nMarks = " << io.st.marks;
    cout << "\nAverage = " << io.st.marks;
    cout << "\nGrade = " << io.st.grade;
}