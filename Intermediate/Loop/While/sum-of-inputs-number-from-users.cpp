#include <iostream>
using namespace std;
int main()
{
    int num, original, sum, rem;
    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while (num != 0)
    {
        rem = num % 10;
        if(rem == 0){
            sum = sum + num;
        }
        else {
            sum = sum + rem;
        }
        num = num / 10;
    }
    cout << "The sum of " << original << " is = " << sum << endl;
    return (0);
}