#include <iostream>
#include <string>

using namespace std;

int find_max(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[5];
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        cout << i + 1 << "-> Enter a number: ";
        cin >> arr[i];
    }

    int res = find_max(arr, size);

    cout << "Maximum number in the array is: \n";
    cout << res;
}