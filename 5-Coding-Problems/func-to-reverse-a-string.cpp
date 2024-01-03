#include <iostream>
#include <string>

using namespace std;

void rev_str(string &str)
{

    int n = str.length();

    for (int i = 0; i < n / 2; i++)
    {
        int temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Before String: \n";
    cout << str << endl;
    rev_str(str);

    cout << "After reversing the string: \n";
    cout << str;
}