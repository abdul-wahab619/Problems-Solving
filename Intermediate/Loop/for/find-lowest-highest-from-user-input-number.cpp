#include <iostream>
using namespace std;
int main()
{
    int num, low, high, rem, orig;

    cout << "Enter a number: ";
    cin >> num;

    orig = num;
    low = num % 10;
    high = num % 10;
    num = num / 10;

    for (int i = num; i >= 1; i = i / 10) {
        rem = i % 10;

        if(rem > high){
            high = rem;
        }
        if (rem < low){
            low = rem;
        }
    }
    cout << "The highest number of " << num << "is: " << high << endl;
    cout << "The lowest number of " << num << "is: " << low << endl;
    return (0);
}
