#include <iostream>
#include <algorithm>

using namespace std;

bool isPalindrome(const string &str)
{
    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());

    return str == reversedStr;
}

int main()
{
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    if (isPalindrome(input))
    {
        cout << "The string is a palindrome." << endl;
    }
    else
    {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
// method 2:
#include <iostream>

using namespace std;

bool isPalindrome(const string &str)
{
    int start = 0;
    int end = str.length() - 1;

    while (start < end)
    {
        // Skip non-alphanumeric characters from the start
        while (start < end && !((str[start] >= 'a' && str[start] <= 'z') || (str[start] >= 'A' && str[start] <= 'Z') || (str[start] >= '0' && str[start] <= '9')))
        {
            start++;
        }

        // Skip non-alphanumeric characters from the end
        while (start < end && !((str[end] >= 'a' && str[end] <= 'z') || (str[end] >= 'A' && str[end] <= 'Z') || (str[end] >= '0' && str[end] <= '9')))
        {
            end--;
        }

        // Compare characters (case insensitive)
        if (tolower(str[start]) != tolower(str[end]))
        {
            return false;
        }

        // Move to the next pair of characters
        start++;
        end--;
    }

    // All pairs of characters matched, it's a palindrome
    return true;
}

int main()
{
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    if (isPalindrome(input))
    {
        cout << "The string is a palindrome." << endl;
    }
    else
    {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
