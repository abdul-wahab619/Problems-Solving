#include <iostream>
using namespace std;
int main()
{
    int num, p;
    p = 1;

    cout << "Enter a number: ";
    cin >> num;
    for (int i = 2; i <= num / 2; i++)
    {
        if(num % 2 == 0) {
            p = 0;
            break;
        }
    }
    if(p == 1) {
        cout << num << "is a prime number.";
    }
    else {
        cout << num << "is not a prime number.";
    }

    return (0);
}
