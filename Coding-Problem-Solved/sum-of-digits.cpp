#include <iostream>
using namespace std;

int sum_of_digit(int num)
{

    int sum = 0;
    int rem;
    while (num > 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    return sum;
}

int main()
{
    int num_of_digit;
    cout << "Enter positive number of digits to sum: ";
    cin >> num_of_digit;
    int res = sum_of_digit(num_of_digit);
    cout << "result: " << res;

    return 0;
}
