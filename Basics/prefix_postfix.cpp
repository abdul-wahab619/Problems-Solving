#include <iostream>
using namespace std; 
int main ()
{
    int a = 10, res;
    // initial
    res = a;
    cout << "\nBefore value of a: " << res;
    //prefix
    res = ++a;
    cout << "\nValue of a Prefix: " << res;
    //postfix
    res = a++;
    cout << "\nValue of 'a' Postfix: " << res;

    return (0);
}