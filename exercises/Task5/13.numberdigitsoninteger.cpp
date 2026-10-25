// File: 13.numberdigitsoninteger.cpp
// Author: Guillermo Torres Sanchez
// Date: dom 25 oct 2026
// Time: 09:03
// Description: 'Number of decimal digits in a given integer'
// Distribution: CachyOS

#include <iostream>
using namespace std;

int main()
{
    int number = 1;

    int digits = 0;
    while (number != 0){
        number /= 10;
        digits++;
    } 

    cout << digits << (digits == 1 ? " digit" : " digits") << endl;
    return 0;
}
