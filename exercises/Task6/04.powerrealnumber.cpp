// File: 04.powerrealnumber.cpp
// Author: Guillermo Torres Sanchez
// Date: lun 26 oct 2026
// Time: 12:53
// Description: 'Computes tne n-th integer power of a real number'
// Distribution: CachyOS

#include <iostream>
using namespace std;

int main()
{
    float powx(float x, int n);
    cout << powx(2,4) << endl;
    return 0;
}

float powx(float x, int n){
    int res = 1;
    for (int i=1; i<=n; i++){
        res *= x;
    }

    return res;
}
