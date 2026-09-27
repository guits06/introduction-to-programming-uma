// File: 01.compare.cpp
// Author: Guillermo Torres Sanchez
// Date: mié 23 sep 2026
// Time: 11:30
// Description: 'Prompt user for two integer number, store them and get if its greater, less or equal than the second'
// Distribution: CachyOS


#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter number a: ";
    cin >> a;
    cout << endl << "Enter number b: ";
    cin >> b;
    cout << endl;

    if (a == b) {
        cout << "They're the same number" << endl;
    } else if ( a < b ) {
        cout << a << " is lower than " << b << endl;
    } else {
        cout << a << " is greater than " << b << endl;
    }
    return 0;
}
