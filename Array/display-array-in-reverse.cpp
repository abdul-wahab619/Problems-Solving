#include <iostream>
using namespace std;

int main() {
    int size = 5,max;
    int num[size];
    max = 0;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter a number: ";
        cin >> num[i];
    }

    cout << "\nActual Order of the Array: \n";
    for (int j = 0; j < size; j++)
    {
        cout << num[j] <<" ";
    }
    cout << "\nReverse Order of the Array: \n";
    for (int k = 4; k >= 0; k--)
    {
        cout << num[k] <<" ";
    }
}