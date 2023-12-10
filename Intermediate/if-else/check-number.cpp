#include <iostream>
using namespace std;
int main()
{

    int num;
    cout << "Enter your marks: ";
    cin >> num;

    if (num > 0) {
        cout << "It is positive number." << endl;
    }
    if (num < 0) {
        cout << "It is negative number." << endl;
    }
    if(num == 0) {
        cout << "It is equal to zero." << endl;
    }
}