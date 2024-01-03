#include <iostream>

using namespace std;

void fibo_series(int num)
{
    int n1 = 0, n2 = 1, n3;

    if (num == 0)
    {
        cout << "Fibonacci Series: " << n1 << endl;
        return;
    }
    else if (num == 1)
    {
        cout << "Fibonacci Series: " << n1 << " " << n2 << endl;
        return;
    }

    cout << "Fibonacci Series: " << n1 << " " << n2 << " ";

    for (int i = 2; i < num; i++)
    {
        n3 = n1 + n2;
        cout << n3 << " ";
        n1 = n2;
        n2 = n3;
    }
    cout << endl;
}

int main()
{
    int num;
    cout << "Enter the length of Fibonacci Series: ";
    cin >> num;

    fibo_series(num);

    return 0;
}
