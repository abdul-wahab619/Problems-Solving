#include <iostream>
#include <stack>
#include <unordered_map>

using namespace std;

bool isValid(string s)
{
    stack<char> charStack;
    unordered_map<char, char> bracketMap = {{')', '('}, {']', '['}, {'}', '{'}};

    for (char c : s)
    {
        if (bracketMap.find(c) != bracketMap.end())
        {
            // Current character is a closing bracket
            char topElement = charStack.empty() ? '#' : charStack.top();

            if (topElement != bracketMap[c])
            {
                return false; // Mismatched brackets
            }

            charStack.pop();
        }
        else
        {
            // Current character is an opening bracket
            charStack.push(c);
        }
    }

    return charStack.empty();
}

int main()
{
    // Example usage
    string s1 = "()";
    cout << isValid(s1) << endl; // Output: true

    string s2 = "()[]{}";
    cout << isValid(s2) << endl; // Output: true

    string s3 = "(]";
    cout << isValid(s3) << endl; // Output: false

    return 0;
}
