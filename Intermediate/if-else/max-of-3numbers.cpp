#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;

    cout << "Enter 3 numbers: ";
    cin >> num1 >> num2 >> num3;

    if (num1 > num2 && num1 > num3) {
        cout << "Num1 is greater: " << num1 << endl;
    }
    else if (num2 > num1 && num2 > num3) {
        cout << "Num2 is greater: " << num2 << endl;
    }
    else {
        cout << "Num3 is greater: " << num3 << endl;
    }
}