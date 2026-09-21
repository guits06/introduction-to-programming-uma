// File: 02.even.cpp
// Author: Guillermo Torres Sanchez
// Date: lun 21 sep 2026
// Time: 14:08
// Description: 'Inputs an integer number and get if is even or odd'
// Distribution: CachyOS

#include <iostream>
using namespace std;

int main() 
{
    int num;
    cout << "Insert a number: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << endl << "EVEN";
    } else {
        cout << endl << "ODD";
    }
    
    cout << endl;
    return 0;
}
