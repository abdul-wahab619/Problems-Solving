#include <iostream>
using namespace std;

class Triangle
{
private:
    int l1, l2, l3;

public:
    Triangle(int a, int b, int c)
    {
        l1 = a;
        l2 = b;
        l3 = c;
    }

    ~Triangle()
    {
        cout << "Object is destroyed\n";
    }

    void checkTriangle();
};

void Triangle::checkTriangle()
{
    if (l1 == l2 && l1 == l3)
    {
        cout << "It is an equilateral triangle";
    }
    else if (l1 == l2 || l1 == l3 || l2 == l3)
    {
        cout << "It is an isosceles triangle";
    }
    else
    {
        cout << "It is a scalene triangle";
    }
}

int main()
{
    Triangle t(12, 22, 33);

    // Call the checkTriangle method to check and display the type of triangle
    t.checkTriangle();

    return 0;
}
