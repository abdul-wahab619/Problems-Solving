#include <iostream>
using namespace std;
int main()
{
    float num, sum, avg, min, max, count;
    cout << "Enter a positive number: ";
    cin >> num;
    min = num;
    max = num;

    while (num >= 0.0)
    {
        sum = sum + num;
        count++;
        if (num > max)
            max = num;
        else
            min = num;

        cout << "Enter a Positive number: ";
        cin >> num;
    }
    if(count == 0) {
        cout << "There is no positive number entered by user...";
    }else {
        avg = sum / count;
        cout << "You entered " << count << " numbers." << endl;
        cout << "Average of All the numbers are: " << avg << endl;
        cout << "Minimum number from all the numbers: " << min << endl;
        cout << "Maximum number from all the numbers: " << max << endl;
    }
    return (0);
}