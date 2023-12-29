#include <iostream>
using namespace std;
int main()
{
    int j;
    for (int i = 0; i <= 7; i++)
    {
        j = i;
        while(j <= 7) {
            cout << "* ";
            j++;
        }
        cout << "\n";
    }

    return (0);
}
