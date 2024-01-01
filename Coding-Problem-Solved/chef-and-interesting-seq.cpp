#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, L;
        cin >> N >> L;

        vector<int> arr(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end(), greater<int>());

        long long maxCost = 0;

        // Calculate cost for each interesting sequence
        for (int i = 0; i < L; ++i)
        {
            maxCost += arr[i];
        }

        cout << maxCost << endl;
    }

    return 0;
}
