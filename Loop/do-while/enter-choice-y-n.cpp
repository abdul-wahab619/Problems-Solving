#include <iostream>
using namespace std;
int main()
{
    char choice;
    int num1, num2;

    do {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        cout << "\nProduct of these two numbers is: " << num1 * num2 << endl;
        cout << "Enter your choice to further continue or not (y/n): ";
        cin >> choice;
    } while (choice != 'n');
    return (0);
}