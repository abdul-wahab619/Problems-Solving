#include <iostream>
using namespace std;
int main()
{
    int num, sumeven, sumodd;
    cout << "Enter a number: ";
    cin >> num;
    sumeven = 0;
    sumodd = 0;

    while (num >= 0)
    {
        if(num % 2 == 0)
           sumeven = sumeven + num;
        else
            sumodd = sumodd + num;

        num--;
    }
    cout << "The Sum of all Even Numbers: " << sumeven
         << "\n The Sum of all Odd Numbers: " << sumodd << endl;
    return (0);
}