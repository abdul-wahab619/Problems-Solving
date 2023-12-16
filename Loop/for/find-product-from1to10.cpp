#include <iostream>
using namespace std;
int main()
{
    long int product;
    product = 1;

    for (int i = 1; i <= 10; i += 2)
    {
        product *= i;
    }

    cout << "Product Result of 1 to 10: " << product << endl;

    return (0);
}
