#include <iostream>
using namespace std;
int main()
{
    int a, b, max, lcm;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    if(a > b){
        max = a;
    }
    else {
        max = b;
    }
    do
    {
        if(max % a == 0 && max % b){
            lcm = max;
            break;
        }
        else {
            max++;
        }
    } while (1);

    cout << "LCM of " << a << " and " << b << " is: " << lcm << endl;
    return (0);
}
