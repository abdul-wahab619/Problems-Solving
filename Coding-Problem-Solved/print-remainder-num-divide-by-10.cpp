#include <iostream>
using namespace std;
int main()
{
    int num, rem;
    cout << "Enter a number: ";
    cin >> num;

    rem = num % 10;

    cout << "Remainder of " << num << " is: " << rem << endl;
}