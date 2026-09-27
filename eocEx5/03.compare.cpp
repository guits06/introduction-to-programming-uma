// File: 03.compare.cpp
// File: 03.compare.cpp
// Author: Guillermo Torres Sanchez
// Date: mié 23 sep 2026
// Time: 11:47
// Description: 'Compare three numbers'
// Distribution: CachyOS


#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout << "Introduce number a: ";
    cin  >> a;
    cout << "Introduce number b: ";
    cin  >> b;
    cout << "Introduce number c: ";
    cin  >> c;

    if ( a >= b ) {
        if ( b <= c ) {
            cout << endl << a << " > " << c << " > " << b << endl;
        } else {
            cout << endl << a << " > " << b << " > " << c << endl;
        }

    } else if ( a <= b ) {
        if ( b <= c ) {
            cout << endl << c << " > " << b << " > " << a << endl;
        } else {
            cout << endl << b << " > " << c << " > " << a << endl;
        }
    }
    return 0;
}


