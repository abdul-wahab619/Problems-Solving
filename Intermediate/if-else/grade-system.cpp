#include <iostream>
using namespace std;
int main()
{
    int score;

    cout << "Enter your marks score: ";
    cin >> score;

    if (score >= 90) {
        cout << "Your grade is A." << endl;
    }
    else if (score >= 80) {
        cout << "Your grade is B." << endl;
    }
    else if (score >= 70) {
        cout << "Your grade is C." << endl;
    }else if (score >= 60) {
        cout << "Your grade is D." << endl;
    }else {
        cout << "Your grade is F." << endl;
    }
}