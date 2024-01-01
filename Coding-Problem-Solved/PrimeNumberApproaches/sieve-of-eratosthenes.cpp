#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Nth term to find prime numbers: ";
    cin >> n;
    int sieve[n];
    sieve[1] = 0;

    for (int i = 2; i <= n; i++)
    {
        sieve[i] = 1;
    }
    for (int i = 2; (long long)i * i < n; i++)
    {
        if (sieve[i] == 1)
        {
            for (int j = i * i; j <= n; j = j + i)
            {
                sieve[j] = 0;
            }
        }
    }
    for (int i = 1; i < n; i++)
    {
        if (sieve[i] == 1)
        {
            cout << i << " ";
        }
    }
}
