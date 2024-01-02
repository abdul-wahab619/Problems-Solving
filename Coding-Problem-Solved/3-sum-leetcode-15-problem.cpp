#include <iostream>
#include <algorithm>

using namespace std;

void threeSum(int arr[], int n)
{
    sort(arr, arr + n);

    for (int i = 0; i < n - 2; ++i)
    {
        if (i > 0 && arr[i] == arr[i - 1])
            continue;

        int target = -arr[i];
        int left = i + 1;
        int right = n - 1;

        while (left < right)
        {
            int sum = arr[left] + arr[right];

            if (sum < target)
            {
                left++;
            }
            else if (sum > target)
            {
                right--;
            }
            else
            {
                // Found a triplet
                cout << "[" << arr[i] << " " << arr[left] << " " << arr[right] << "]" << endl;

                // Skip duplicate elements
                while (left < right && arr[left] == arr[left + 1])
                    left++;
                while (left < right && arr[right] == arr[right - 1])
                    right--;

                left++;
                right--;
            }
        }
    }
}

int main()
{
    int nums[] = {-1, 0, 1, 2, -1, -4};
    int size = sizeof(nums) / sizeof(nums[0]);

    // Find and print the triplets
    threeSum(nums, size);

    return 0;
}
