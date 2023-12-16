#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;

    cout << "Enter a sentence: " << endl;
    getline(cin, sentence);

    int countWords = 0;
    int countCharacters = 0;

    for (char ch : sentence) {
        if (ch == ' ') {
            countWords++;
        } else {
            countCharacters++;
        }
    }

    // Adding 1 to countWords to include the last word
    countWords++;

    cout << "\nWords = " << countWords << endl;
    cout << "Characters = " << countCharacters << endl;

    return 0;
}
