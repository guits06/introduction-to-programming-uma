#!/bin/bash

# File: 03.compare.cpp.sol
# Author: Guillermo Torres Sanchez
# Date: mié 23 sep 2026
# Time: 12:09
# Description: 'Correct solutions for compare.cpp'
# Distribution: CachyOS

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Introduce number a: ";
    cin  >> a;
    cout << "Introduce number b: ";
    cin  >> b;
    cout << "Introduce number c: ";
    cin  >> c;


    if (a >= b and a >= c) {
        cout << a << endl;
        if (b >= c) {
            cout << b << endl;
            cout << c << endl;
        }
    } else if (a <= b and a <= c) {
        cout << a << endl;
        if (b <= c) {
            cout << b << endl;
            cout << c << endl;
        }
    }
    return 0;
}
