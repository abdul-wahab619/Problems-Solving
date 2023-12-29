#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int a, b, c, d, res;

    // Assign values to variables
    a = 10;
    b = 20;
    c = 15;
    d = 8;

    // Use of precedence operators to calculate result
    res = a * b / (-c * 31 % 13) * d;

    // Display the result
    cout << "Result of Precedence Operator is: " << res;

    // Return 0 to indicate successful execution
    return 0;
}
/*
Expression with Precedence Operators:

res = a * b / (-c * 31 % 13) * d;: This line contains an arithmetic expression that involves precedence operators. The order of evaluation is determined by the precedence and associativity of the operators.
a * b: Multiplication of a and b.
(-c * 31 % 13): This expression involves negation (-), multiplication (*), and modulus (%) operators.
a * b / (-c * 31 % 13): Division of the result of the first part by the result of the second part.
... * d: Finally, multiply the result by d.
*/