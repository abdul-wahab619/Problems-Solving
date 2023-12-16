#include <iostream>
using namespace std;
int main()
{
    int num, fact, c;
    cout << "Enter a number: ";
    cin >> num;
    fact = 1;
    c = 1;

    while (c <= num)
    {
        fact = fact * c;
        c = c + 1;
    }
    cout << "The Factorial result of " << num << " is = " << fact << endl;
    return (0);
}