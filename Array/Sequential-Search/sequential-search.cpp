#include <iostream>
using namespace std;

int main() {
    int arr[10] = {12, 33, 44, 55, 34, 53, 56, 77, 4, 5};
    int find, loc;
    loc = -1;
    cout << "Enter a number to find: ";
    cin >> find;

    for (int i = 0; i < 10; i++)
    {
        if(arr[i] == find) {
            loc = i;
        }
    }

    if(loc == -1) {
        cout << "Value not found in the array." << endl;
    }
    else {
        cout << "Value found at the index: " << loc << endl;
    }
}