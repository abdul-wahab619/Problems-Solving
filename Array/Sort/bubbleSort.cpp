#include <iostream>
using namespace std;

int main()
{
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

    // main logic of the problem
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "\n-:After Sorting:- \n";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}