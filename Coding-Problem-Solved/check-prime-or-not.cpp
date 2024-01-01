#include <iostream>
using namespace std;

int main()
{
    int num;
    bool check = false;
    cout << "Enter a number: ";
    cin >> num;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            check = true;
        }
        num = num / 10;
    }

    if (check == false)
        cout << "Given number is a prime number." << endl;
    else
        cout << "Given number is not a prime number." << endl;
}
