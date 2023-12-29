#include <iostream>

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; ++j)
    {
        if (arr[j] <= pivot)
        {
            ++i;
            // Swap arr[i] and arr[j]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Swap arr[i+1] and arr[high]
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

int kthSmallest(int arr[], int low, int high, int K)
{
    if (K > 0 && K <= high - low + 1)
    {
        int pivotIndex = partition(arr, low, high);

        if (pivotIndex - low == K - 1)
        {
            return arr[pivotIndex];
        }
        else if (pivotIndex - low > K - 1)
        {
            return kthSmallest(arr, low, pivotIndex - 1, K);
        }
        else
        {
            return kthSmallest(arr, pivotIndex + 1, high, K - pivotIndex + low - 1);
        }
    }

    return -1; // Return -1 for invalid input
}

int main()
{
    int arr[] = {12, 3, 5, 7, 19};
    int N = sizeof(arr) / sizeof(arr[0]);
    int K = 2;

    int result = kthSmallest(arr, 0, N - 1, K);

    if (result != -1)
    {
        std::cout << "K'th smallest element is " << result << std::endl;
    }
    else
    {
        std::cout << "Invalid input or K is out of bounds." << std::endl;
    }

    return 0;
}
