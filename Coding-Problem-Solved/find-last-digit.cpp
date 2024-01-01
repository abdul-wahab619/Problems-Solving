#include <iostream>
using namespace std;
int main()
{
    int num, res;
    cout << "Enter a number: ";
    cin >> num;

    res = num % 10;

    cout << "Last Digit of " << num << " is: " << res << endl;
}