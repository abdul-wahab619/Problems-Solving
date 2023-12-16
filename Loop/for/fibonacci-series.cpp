#include <iostream>
using namespace std;
int main()
{
    // 0 1 1 2 3 5 8 13 ....

    int n1, n2, n3;
    n1 = 0;
    n2 = 1;
    cout << "Fibonacci Series is shown below:\n";
    cout << n1 << " " << n2 << " ";
    for (int i = 1; i <= 10; i ++)
    {
        n3 = n1 + n2;
        cout << n3 << " ";
        n1 = n2;
        n2 = n3;
    }

    return (0);
}
