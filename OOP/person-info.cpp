#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string name;
    int age;
    string country;

public:
    void setName(string n)
    {
        name = n;
    }
    void setAge(int a)
    {
        age = a;
    }
    void setCountry(string c)
    {
        country = c;
    }
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    string getCountry()
    {
        return country;
    }
};
int main()
{
    Person p;
    p.setName("Abdul Wahab");
    p.setAge(22);
    p.setCountry("Pakistan");

    cout << "Name: " << p.getName() << endl;
    cout << "Age: " << p.getAge() << endl;
    cout << "Country: " << p.getCountry() << endl;

    return 0;
}
