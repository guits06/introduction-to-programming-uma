// File: 04.sign.cpp
// Author: Guillermo Torres Sanchez
// Date: lun 21 sep 2026
// Time: 14:14
// Description: 'determine if positive, negative or zero'
// Distribution: CachyOS


#include <iostream>
using namespace std;

int main() 
{
    int num;
    cout << "Insert Number: ";
    cin >> num;

    if ( num == 0 ) {
        cout << endl << "ZEROOOOO";
    } else if ( num < 0 ) {
        cout << endl << "The number is negative";
    } else if ( num > 0 ) {
        cout << endl << "The number is positive";
    }

    cout << endl; 
    return 0;
}

