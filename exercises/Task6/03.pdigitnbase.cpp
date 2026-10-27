// File: 03.pdigitnbase.cpp
// Author: Guillermo Torres Sanchez
// Date: dom 25 oct 2026
// Time: 14:05
// Description: 'Returns the p-th digit of n in a specified base'
// Distribution: CachyOS

#include <iostream>
using namespace std;

int main()
{
    int digit(int n, int p, int base);

    cout << digit(2026, 2, 10) << endl;
    return 0;
}

int digit(int n, int p, int base){
    int d = n;
    for (int i = 1; i < p; i++){
        d /= base;
    }

    return d % base;
}
