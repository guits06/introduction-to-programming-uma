// File: 02.lowertoupper.cpp
// Author: Guillermo Torres Sanchez
// Date: lun 21 sep 2026
// Time: 17:57
// Description: 'Converts lowercase to uppercase'
// Distribution: CachyOS


#include <iostream>
using namespace std;

int main() 
{
    char ch;
    cout << "Introduce a character: ";
    cin >> ch;

    if ( ch >= 'a' and ch <= 'z' ) {
        ch-=32;
    }
    
    cout << endl << ch << endl;
    return 0;
    
}
