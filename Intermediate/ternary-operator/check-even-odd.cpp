#include <iostream>
using namespace std;
int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Number is " << (number % 2 == 0 ? "Even" : "Odd") << endl;
}