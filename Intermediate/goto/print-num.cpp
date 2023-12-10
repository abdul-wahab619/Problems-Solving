#include <iostream>
using namespace std;
int main()
{
    int num = 1;

    loop:
        cout << num << "- Abdul Wahab" << endl;
        num++;
        if(num<=5)
            goto loop;
        cout << "End Program!";
    }