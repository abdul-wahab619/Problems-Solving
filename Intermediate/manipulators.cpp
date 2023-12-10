#include <iostream>
#include <iomanip>  // Include the iomanip header for setw
using namespace std; 

int main ()
{
    //endl
    cout << "Abdul" << endl
         << "Wahab" << endl;
    //setw
    int n = 3928;
    double d = 91.5;
    char str[] = "OOP using C++";
    cout << "(" << setw(5) << n << ")";
    cout << "(" << setw(5) << d << ")";
    cout << "(" << setw(5) << str << ")";

    //setPrecision
    cout << setprecision(5) << n << endl;

    //fixed, showpoint
    double x, y, z;
    x = 15.675;
    y = 235.73;
    z = 9525.9864;
    cout.setf(ios::fixed, ios::floatfield);
    cout.setf(ios::showpoint);
    cout << setprecision(2) << "setprecision(2)" << endl;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "z: " << z << endl;

    //setfill
    char str1[] = "OOP using C++";
    cout << setw(20) << setfill('*') << str1 << endl;
}
/* Manipulator are:
1- endl
2- setw
3- setprecision 
4- showpoint
5- fixed
6- setfill
*/

