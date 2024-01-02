#include <iostream>
#include <unordered_map>

using namespace std;

int romanToInt(string s)
{
    unordered_map<char, int> romanValues = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}};

    int result = 0;

    for (int i = 0; i < s.length(); ++i)
    {
        int current = romanValues[s[i]];
        int next = (i + 1 < s.length()) ? romanValues[s[i + 1]] : 0;

        if (current < next)
        {
            result += (next - current);
            i++; // Skip the next character, as it has been considered
        }
        else
        {
            result += current;
        }
    }

    return result;
}

int main()
{
    // Example usage
    string roman1 = "III";
    cout << romanToInt(roman1) << endl; // Output: 3

    string roman2 = "LVIII";
    cout << romanToInt(roman2) << endl; // Output: 58

    string roman3 = "MCMXCIV";
    cout << romanToInt(roman3) << endl; // Output: 1994

    return 0;
}
