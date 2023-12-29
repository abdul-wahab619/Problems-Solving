#include <iostream>
using namespace std;
int main()
{
    
    int num, n1, n2;
    cout << "Enter a 3-digit-number: ";
    cin >> num;

    n1 = num / 100;
    num = num % 100;
    n2 = num / 10;
    num = num % 10;

    cout << "Number in reverse order: " << num << n2 << n1 << endl;
}