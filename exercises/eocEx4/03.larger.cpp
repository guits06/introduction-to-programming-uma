// File: 03.larger.cpp
// Author: Guillermo Torres Sanchez
// Date: lun 21 sep 2026
// Time: 14:10
// Description: 'Prompt two integer numbers and check which one is larger'
// Distribution: CachyOS


#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cout << "Insert number 1: ";
    cin >> n1;
    cout << endl << "Insert number 2: ";
    cin >> n2;

    if (n1 == n2) {
        cout << endl << "They are the same";
    } else if ( n1 < n2 ) {
        cout << endl << n2 << " is greater than " << n1;
    } else {
        cout << endl << n1 << " is greater than " << n2;
    }
    cout << endl;
    return 0;

}
