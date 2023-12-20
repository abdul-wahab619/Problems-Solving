#include <iostream>
using namespace std;

int main()
{
    int arr[2][4] = {{15, 21, 9, 84}, {33, 73, 18, 47}};
    int min, max;
    min = max = arr[0][0];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }
    cout << "Maximum value is " << max << " and minimum value is: " << min << endl;
}