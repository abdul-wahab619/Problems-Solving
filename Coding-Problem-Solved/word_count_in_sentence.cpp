#include <iostream>
#include <string>
using namespace std;

int sum_of_digit(string str)
{
    int count = 0;
    bool inword = false;
    for (char ch : str)
    {
        if (ch == ' ' || ch == '\t' || ch == '\n')
        {
            inword = false;
        }
        else if (!inword)
        {
            inword = true;
            count++;
        }
    }
    return count;
}

int main()
{
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);
    int res = sum_of_digit(str);
    cout << "There are" << res << " words in a given sentence.";

    return 0;
}
