#include <iostream>

using namespace std;

bool isPalindrome(int x)
{
    // Special case: Negative numbers and numbers ending with 0 are not palindromes
    if (x < 0 || (x % 10 == 0 && x != 0))
    {
        return false;
    }

    int reversed = 0;
    while (x > reversed)
    {
        reversed = reversed * 10 + x % 10;
        x /= 10;
    }

    // For odd-length palindromes, we need to ignore the middle digit
    return x == reversed || x == reversed / 10;
}

int main()
{
    // Example usage
    int num1 = 121;
    cout << isPalindrome(num1) << endl; // Output: true

    int num2 = -121;
    cout << isPalindrome(num2) << endl; // Output: false

    int num3 = 10;
    cout << isPalindrome(num3) << endl; // Output: false

    return 0;
}
