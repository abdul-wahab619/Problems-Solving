#include <iostream>
using namespace std;
int main()
{
    int num, sum, r;
    sum = 0;
    cout << "Enter a number:";
    cin >> num;

    while (num != 0){
        r = num % 10;
        sum = sum + (r * r * r);
        num /= 10;
    }
    if(sum == num) {
        cout << num << " is a Armstrong number.";
    }
    else {
        cout << num << " is not a Armstrong number.";
    }

        return (0);
}
