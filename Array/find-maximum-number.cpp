#include <iostream>
using namespace std;

int main() {
    int size = 5,max;
    int num[size];
    max = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter a number: ";
        cin >> num[i];

        if(max < num[i]) {
            max = num[i];
        }
    }

    cout << "Maximum number is: " << max << endl;
}