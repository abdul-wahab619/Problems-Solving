#include <iostream>
using namespace std;

int main() {
    int day, month, total;
    int days_per_month[12] = { 31, 28, 31, 30, 31, 30, 31, 30, 31, 30, 31 };

    cout << "Enter the month number: ";
    cin >> month;

    cout << "\nEnter the day number: ";
    cin >> day;

    total = day;

    for (int i = 0; i < month-1; i++)
    {
        total += days_per_month[i];
    }
    cout << "Total number of days in this year till date = " << total << endl;
}
