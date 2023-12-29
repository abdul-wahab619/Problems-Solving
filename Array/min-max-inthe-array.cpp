// C++ code for the approach

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a[] = {1, 423, 6, 46, 34, 23, 13, 53, 4};
    int n = sizeof(a) / sizeof(a[0]);

    sort(a, a + n);
    cout << "min-" << a[0] << " max-" << a[n - 1] << endl;

    return 0;
}
