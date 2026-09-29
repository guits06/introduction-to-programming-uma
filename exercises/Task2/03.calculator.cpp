// File: t0203.calculator.cpp
// Author: Guillermo Torres Sanchez
// Date: mié 23 sep 2026
// Time: 11:08
// Description: 'Prompts the user for two float numbers and an operator and prints the result'
// Distribution: CachyOS


#include <iostream>
using namespace std;

int main()
{
    float a, b, res;
    char op;

    cout << "Enter number a: ";
    cin >> a;
    cout << endl << "Enter an operator: ";
    cin >> op;
    cout << endl << "Enter number b: ";
    cin >> b;
   
    switch (op) {
        case '+':
            res = (a + b);
            break;
        case '-':
            res = (a - b);
            break;
        case '*':
            res = (a * b);
            break;
        case '/':
            res = (a / b);
            break;
        case '%':
            res = (int(a) % int(b)); // Not valid with float numbers
            break;
        default:
            cerr << "You introduced an invalid operator" << endl;
            return 1;
    }

    cout << endl << "SOL: " << res << endl;
    return 0;

}

