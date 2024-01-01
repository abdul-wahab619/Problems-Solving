#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int main()
{
    int a, b;
    cout << "Enter the values of a,b: ";
    cin >> a >> b;

    int res = gcd(a, b);

    cout << "Greatest Common Factor is: " << res << endl;
}
