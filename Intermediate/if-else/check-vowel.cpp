#include <iostream>
using namespace std;
int main()
{
    char ch;

    cout << "Enter any vowel character: ";
    cin >> ch;

    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U') {
        cout << ch << " is vowel character.";
    }
    else
    {
        cout << ch << " is not a vowel character.";
    }
}