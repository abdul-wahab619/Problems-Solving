#include <iostream>
using namespace std;
int main()
{
    int num, mid, sum;
    sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    mid = num / 2;

    for (int i = 1; i <= mid; i = i++) {
        if (num % i == 0){
            sum = sum + i;
        }
    }
    if (sum == num) {
        cout << num << " is a perfect number." << endl;
    }
    else {
        cout << num << " is not a perfect number." << endl;

    }
    return (0);
}
