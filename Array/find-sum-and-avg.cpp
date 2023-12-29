#include <iostream>
using namespace std;

int main() {
    int arr[5], sum;
    float avg;
    sum = 0;
    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < length; i++)
    {
        cout << "Enter " << i + 1 << " number: ";
        cin >> arr[i];
        sum += arr[i];
    }
    avg = sum / 5.0;
    cout << "Sum of Array elements is: " << sum << endl;
    cout << "Average of the Array elements is: " << avg << endl;
}
