#include <iostream>
using namespace std;
int main()
{
    int c;
    c = 10;

    do {
        cout << "Number = " << c << endl;
        c -= 1;
    } while (c >= 1);
    return (0);
}