#include <iostream>
using namespace std;
int main()
{
    int units;
    float bill;

    cout << "Enter units consumed: ";
    cin >> units;

    if (units > 500) {
        bill = units * 7;
    }
    else if (units > 300 && units <= 500) {
        bill = units * 5;
    }
    else {
        bill = units * 2;
    }

    cout << "Your total Electricy Bill is: " << bill << endl;
}