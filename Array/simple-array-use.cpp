#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < length; i++)
    {
        cout << "Enter " << i + 1 << " number: ";
        cin >> arr[i];
    }
    for (int i = 0; i < length; i++)
    {
        cout << "You Entered: " << arr[i] << endl;
    }
}
