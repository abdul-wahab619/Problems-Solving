#include <iostream>
using namespace std;

int factorial(int num)
{
    if (num == 0)
    {
        return 1;
    }
    return num * factorial(num - 1);
}
int main()
{
    int num, res;
    cout << "Enter a number: ";
    cin >> num;

    res = factorial(num);

    cout << "Factorial of " << num << " is: " << res << endl;
}