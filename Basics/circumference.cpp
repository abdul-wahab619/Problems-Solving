#include <iostream>
using namespace std; 
int main ()
{
    const float Pi = 3.14;
    float r, circ;
    cout << "Enter a radius for circumference: ";
    cin >> r;
    circ = 2 * Pi * r;
    cout << "Value of Circumference is: " << circ;

    return (0);
}