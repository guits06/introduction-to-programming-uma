// File: 03.calculator.cpp
// Author: Guillermo Torres Sanchez
// Date: lun 28 sep 2026
// Time: 12:56
// Description: '2 numbers and sign and prints result'
// Distribution: CachyOS


#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n1, n2, res;
    char c;

    cout << "Number 1: ";
    cin >> n1;
    cout << endl << "Operator: ";
    cin >> c;
    cout << endl << "Number 2: ";
    cin >> n2;

    switch (c){
    case '+':
        res = n1 + n2;
        break;
    case '-':
        res = n1 - n2;
        break;
    case '*':
        res = n1 * n2;
        break;
    case '/':
        res = n1 / n2;
        break;
    case '%':
        res = n1 % n2;
        break;
    case '^':
        res = pow(n1,n2);
        break;

    default:
        cerr << endl << "WEWEWEWEWEWEEEE, wrong operator";
        return 1;
   }

    cout << endl << "Res: " << res << endl;
    return 0;
}


