#include <iostream>
using namespace std;

int gcd(int num1, int num2)
{
    if (num1 == 0)
        return num2;
    if (num2 == 0)
        return num1;
    if (num1 == num2)
        return num1;

    if (num2 > num1)
        return gcd(num1, num2 - num1);
    else
        return gcd(num1 - num2, num2);
}

int main()
{
    int a, b;
    cout << "Enter the values of a,b: ";
    cin >> a >> b;

    int res = gcd(a, b);

    cout << "Greatest Common Factor is: " << res << endl;
}
