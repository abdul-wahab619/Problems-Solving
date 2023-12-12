#include <iostream>
using namespace std;
int main()
{
    int num, n = 1;
    cout << "Enter a number you want for Table: ";
    cin >> num;

    while (n <= 10)
    {       
        cout << num <<" X " << n <<" = " <<num * n << endl;
        n++;
    }
    return (0);
}