#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;

    cout << "Enter 3 numbers: ";
    cin >> num1 >> num2 >> num3;

    if (num1 == num2) {
        if(num1 == num3) {
            cout << "All numbers are same.";
        }
        else
        {
            cout << "All numbers are different";
        }
    }else {
        cout << "All numbers are different";
    }
}