#include <iostream>
using namespace std;
int main()
{
    char choice;
    long num, orig, rev, digit;
    rev = 0;

    cout << "Enter a number to check Palidrome or not: ";
    cin >> num;

    orig = num;

    do
    {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    } while (num != 0);

    if(orig == rev) {
        cout << rev << " is a Palindrome." << endl;
    }
    else {
        cout << rev << " is not a Palindrome." << endl;
    }
    return (0);
}
