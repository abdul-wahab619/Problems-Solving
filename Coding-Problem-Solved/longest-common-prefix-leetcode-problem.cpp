#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    if (strs.empty())
    {
        return "";
    }

    sort(strs.begin(), strs.end());

    string first = strs[0];
    string last = strs.back();
    int commonLength = min(first.length(), last.length());

    int i = 0;
    while (i < commonLength && first[i] == last[i])
    {
        i++;
    }

    return first.substr(0, i);
}

int main()
{
    // Example usage
    vector<string> strs1 = {"flower", "flow", "flight"};
    cout << longestCommonPrefix(strs1) << endl; // Output: "fl"

    vector<string> strs2 = {"dog", "racecar", "car"};
    cout << longestCommonPrefix(strs2) << endl; // Output: ""

    return 0;
}
