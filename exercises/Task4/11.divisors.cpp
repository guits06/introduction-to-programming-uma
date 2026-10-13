// File: 11.divisors.cpp
// Author: Guillermo Torres Sanchez
// Date: mar 13 oct 2026
// Time: 18:51
// Description: 'Print all divisors of a given number'
// Distribution: CachyOS

#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Insert a number: ";
    cin >> number;
    cout << number << "  -> ";
    for (int i = 1; i<= number; i++) {
        if ((number % i) == 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}