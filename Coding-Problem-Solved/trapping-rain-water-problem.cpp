// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[5] = {1, 0, 2, 3, 0};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int water = 0;
//     int lmax, rmax;
//     lmax = arr[0];
//     rmax = arr[n - 1];

//     for (int i = 1; i < n - 1; i++)
//     {
//         for (int j = i; j >= 0; j--)
//         {
//             if (arr[j] > lmax)
//             {
//                 lmax = arr[j];
//             }
//         }
//         for (int j = i; j < n; j++)
//         {
//             if (arr[j] > rmax)
//             {
//                 rmax = arr[j];
//             }
//         }
//         // height
//         water += min(lmax, rmax) - arr[i];
//     }
//     // time complexity O(n^2)
//     // space complexity O(1)

//     cout << "Total water store is: " << water << endl;
// }
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of Array: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter value " << i + 1 << " : ";
        cin >> arr[i];
    }

    int water = 0;
    int left[n], right[n];
    left[0] = arr[0];
    right[n - 1] = arr[n - 1];

    // for left side
    for (int i = 1; i < n; i++)
    {
        left[i] = max(left[i - 1], arr[i]);
    }

    // for right side
    for (int i = n - 2; i >= 0; i--)
    {
        right[i] = max(right[i + 1], arr[i]);
    }

    // Calculate trapped water
    // for (int i = 1; i < n - 1; i++)
    // {
    //     water += max(0, min(left[i], right[i]) - arr[i]);
    // }
    // Calculate trapped water
    for (int i = 1; i < n - 1; i++)
    {
        int currentTrappedWater = min(left[i], right[i]) - arr[i];
        water += (currentTrappedWater > 0) ? currentTrappedWater : 0;
    }

    cout << "Total water stored is: " << water << endl;
    return 0;
}
