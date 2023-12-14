#include <iostream>
using namespace std;
int main()
{
    // sum = 1^2 + 2^2 + 3^2 + 4^2 .....n^2

    int sum, n;
    sum = 0;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i ++)
    {
        sum = sum + (i * i);
    }

    cout << "Sum of Square is: " << sum << endl;

    return (0);
}
