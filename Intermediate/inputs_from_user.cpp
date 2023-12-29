#include <iostream>
using namespace std;
int main()
{
    string name;
    char city[20];
    int age;

    cout << "Enter your name: ";
    cin >> name;

    cout << "\nEnter your age: ";
    cin >> age;

    cout << "\nEnter your city: ";
    cin >> city;

    cout << "\nYour name is " << name << "age " << age << " and your city where you live " << city << endl;
}