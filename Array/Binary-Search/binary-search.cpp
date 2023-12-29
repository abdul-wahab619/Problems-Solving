#include <iostream>
using namespace std;

int main() {
    int arr[10] = {12, 33, 44, 55, 34, 53, 56, 77, 4, 5};
    int find, loc;
    int mid, start, end;
    start = 0;
    end = 9;
    loc = -1;
    cout << "Enter a number to find: ";
    cin >> find;

    while (start <= end)
    {
        mid = (start + end) / 2;

        if(arr[mid] == find){
            loc = mid;
            break;
        }
        else if(find < arr[mid]) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }

    if(loc == -1) {
        cout << "Value not found in the array." << endl;
    }
    else {
        cout << "Value found at the index: " << loc << endl;
    }
}