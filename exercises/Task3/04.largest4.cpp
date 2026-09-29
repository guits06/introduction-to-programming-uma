// File: 04.largest4.cpp
// Author: Guillermo Torres Sanchez
// Date: lun 28 sep 2026
// Time: 13:05
// Description: 'Show which of the integers is the largest'
// Distribution: CachyOS


#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    int large;

    cout << "Number 1: ";
    cin >> a;
    cout << endl << "Number 2: ";
    cin >> b;
    cout << endl << "Number 3: ";
    cin >> c;
    cout << endl << "Number 4: ";
    cin >> d;
    
    large = a;
    if ( large < b ) {
        large = b;
    } 
    if ( large < c ) {
        large = c;
    }
    if ( large < d ) {
        large = d;
    }

    cout << endl << "The greatest one is " << large << endl;
    return 0;
}


