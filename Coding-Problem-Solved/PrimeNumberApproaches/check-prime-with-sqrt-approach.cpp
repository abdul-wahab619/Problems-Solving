#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num;
    bool check = false;
    cout << "Enter a number: ";
    cin >> num;
    int org = num;
    for (int i = 2; i < sqrt(num); i++)
    {
        if (num % i == 0)
        {
            check = true;
            break;
        }
        num = num / 10;
    }

    if (check == false)
        cout << "Given number is a prime number " << org << endl;
    else
        cout << "Given number is not a prime number " << org << endl;
}
