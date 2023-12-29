#include <iostream>

int findPeakElement(const int arr[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        if ((i == 0 || arr[i] >= arr[i - 1]) && (i == n - 1 || arr[i] >= arr[i + 1]))
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    const int arr[] = {1, 3, 20, 4, 1, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    int peakIndex = findPeakElement(arr, size);

    if (peakIndex != -1)
    {
        std::cout << "A peak element is found at index " << peakIndex << ": " << arr[peakIndex] << std::endl;
    }
    else
    {
        std::cout << "No peak element found in the array." << std::endl;
    }

    return 0;
}
