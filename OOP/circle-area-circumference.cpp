#include <iostream>
using namespace std;

class Circle
{
private:
    int radius;

public:
    Circle(int r);

    ~Circle();

    void CalcuAreaCircumference();
};
Circle::Circle(int r)
{
    radius = r;
}
Circle::~Circle()
{
    cout << "Class Object is destroyed.";
}
void Circle::CalcuAreaCircumference()
{
    double area = 3.14 * radius * radius;
    double circum = 2 * 3.14 * radius;
    cout << "Area of Circle is: " << area << endl;
    cout << "Circumference of Circle is:" << circum << endl;
}
int main()
{
    // Create Circle object with a radius of 5
    Circle myCircle(5);

    // Call the member function to calculate and display area and circumference
    myCircle.CalcuAreaCircumference();

    return 0;
}
