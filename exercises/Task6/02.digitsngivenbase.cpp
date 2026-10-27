// File: 02.digitsngivenbase.cpp
// Author: Guillermo Torres Sanchez
// Date: dom 25 oct 2026
// Time: 13:40
// Description: 'Number of digits to represent n in a given base'
// Distribution: CachyOS

#include <iostream>
using namespace std;

int main()
{
    int numDigits(int n, int base=10);

    cout << numDigits(2021, 10);

    return 0;
}

int numDigits(int n, int base=10) {
    int digit = 0;
    while (n /= base != 0){
        n /= base;
        digit++;

    }
    return digit;
}
