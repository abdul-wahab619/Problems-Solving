#include <iostream>
using namespace std;

int main() {
    int arr[5], min;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter a number: ";
        cin >> arr[i];
    }

    cout << "\n-:Before Sorting:- \n";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    //main logic of the problem
    for (int i = 0; i < 4; i++)
    {
        min = i;
        for (int j = i + 1; j < 5; j++)
        {
            if(arr[j] < arr[i]){
                min = j;
            }
        }
        if(min != i) {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }

    cout << "\n-:After Sorting:- \n";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}