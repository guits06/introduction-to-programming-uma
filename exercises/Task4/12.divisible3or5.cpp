// File: 12.divisible3or5.cpp
// Author: Guillermo Torres Sanchez
// Date: mar 13 oct 2026
// Time: 18:56
// Description: 'Print all numbers in [1,n] that are divisible by 3 or by 5'
// Distribution: CachyOS


#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Insert a number";
    cin >> number;
    cout << number << "  -> ";
    for (int i = 1; i<=number; i++){
        if ((i % 3) == 0 or (i % 5) == 0) {
            cout << i << " ";
        }
        
    }
    cout << endl;

    return 0;
}