#include <iostream>
#include <string>
using namespace std;

int main() {
    for (int i = 0; i < 6; i++) {
        for(int j = 0; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}
