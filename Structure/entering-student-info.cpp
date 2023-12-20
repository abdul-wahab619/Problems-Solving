#include <iostream>
using namespace std;
struct Student
{
    int rno;
    int marks;
    float avg;
    char grade;
};

int main()
{
    Student st;
    cout << "Enter Student Roll No: ";
    cin >> st.rno;

    cout << "\nEnter Student Marks: ";
    cin >> st.marks;

    cout << "\nEnter Average marks: ";
    cin >> st.avg;

    cout << "\nEnter Grade of the Student: ";
    cin >> st.grade;

    cout << "\n\nYou Entered the following details: \n";

    cout << "Roll No = " << st.rno;
    cout << "\nMarks = " << st.marks;
    cout << "\nAverage = " << st.marks;
    cout << "\nGrade = " << st.grade;
}