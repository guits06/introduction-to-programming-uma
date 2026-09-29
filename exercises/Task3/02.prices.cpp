// File: t03e02.prices.cpp
// Author: Guillermo Torres Sanchez
// Date: vie 25 sep 2026
// Time: 19:19
// Description: 'Price of batch items'
// Distribution: CachyOS


#include <iostream>
using namespace std;

int main() 
{
    int q, t;

    // Printing the table
    cout << "========================================" << endl
         << "    Quantity    ====    Unit price    = " << endl
         << "========================================" << endl
         << "       01       ====        100       = " << endl
         << "       02       ====        95        = " << endl
         << "       03       ====        90        = " << endl
         << "    >= 04       ====        85        = " << endl
         << "========================================" << endl << endl;


    cout << "Quantity: ";
    cin >> q;  

    if (q == 1) {
        t = 100;
    } else if ( q == 2 ) {
        t = 95;
    } else if ( q == 3 ) {
        t = 90;
    } else if ( q >= 4 ) {
        t = 85 * q;
    } else {
        cerr << "Number not valid" << endl;
        t = 0;
    }
    cout << "Total: " << t << endl;
    return 0;
}
 
