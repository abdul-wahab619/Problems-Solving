#include <iostream>
using namespace std;

enum suit
{
    club = 0,
    diamonds = 10,
    hearts = 20,
    spades = 3,
    coc0 = 45,
    ff = 44,
    rtt = 989
} card;

int main()
{
    card = club;
    cout << "Size of enum variable " << sizeof(card) << " bytes.";
    return 0;
}