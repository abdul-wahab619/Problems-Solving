#include <iostream>
using namespace std;
int main()
{

    int num;
    cout << "Enter a year: ";
    cin >> num;

    if (num % 4 == 0) {
        cout << "It is Leap year." << endl;
    }
    else {
        cout << "It is not Leap year." << endl;
    }
}