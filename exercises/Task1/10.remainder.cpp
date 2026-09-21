// File: 10.remainder.cpp
// Author: Guillermo Torres Sanchez
// Date: lun 21 sep 2026
// Time: 17:33
// Description: 'Receives two integers and prints quotient, remainder and result'
// Distribution: CachyOS

#include <iostream>
using namespace std;

int main()
{
    // Declaring each number
    int m,n;
    float q,r, exact;
    
    // Ask for m, n
    cout << "Dividend: ";
    cin >> m;
    cout << "Divisor: ";
    cin >> n;

    // Getting each value
    q        = m / n;
    r        = m % n;
    exact    = float(m) / n;

    // Printing values
    cout << "Quotient: " << q << endl
         << "Remainder: " << r << endl
         << "Exact: " << exact << endl;

    return 0;
}
