// File: 01.positive.cpp
// Author: Guillermo Torres Sanchez
// Date: lun 21 sep 2026
// Time: 14:04
// Description: 'Input an integer number and check if its positive'
// Distribution: CachyOS

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Input an integer number: ";
    cin >> num;
    cout << endl;

    // Check whether the number is positive
    if ( num >= 0 ) {
        cout << "The number is positive";
    }
    else {
        cout << "The number is negative";
    }

    cout << endl;
    return 0;

}
