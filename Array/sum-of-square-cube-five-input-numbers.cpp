#include <iostream>
using namespace std;

int main() {
    int size = 5;
    int numbers[size];
    int square[size];
    int cube[size];
    int sums[size];

    for (int i = 0; i < 5; i++) {
        numbers[i] = i;
        square[i] = i * i;
        cube[i] = i * i * i;
        sums[i] = numbers[i] + square[i] + cube[i];
    }
    int total = 0;
    cout << "numbers:";
    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << "\t";
    }
    cout << endl;

    cout << "square:\t";
    for (int i = 0; i < size; i++)
    {
        cout << square[i] << "\t";
    }
    cout << endl;

    cout << "cube:\t";
    for (int i = 0; i < size; i++)
    {
        cout << cube[i] << "\t";
    }
    cout << endl;

    cout << "sums:\t";
    for (int i = 0; i < size; i++)
    {
        cout << sums[i] << "\t";
        total += sums[i];
    }
    cout << endl;

    cout << "Grand Total is: " << total << endl;
}
