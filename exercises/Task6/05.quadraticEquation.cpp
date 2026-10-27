// File: 05.quadraticEquation.cpp
// Author: Guillermo Torres Sanchez
// Date: lun 26 oct 2026
// Time: 12:59
// Description: 'Procedure that solves the quadratic equation'
// Distribution: CachyOS

#include <iostream>
using namespace std;

int main()
{
    float powx(float x, int n);
    float quadEq(float a, float b, float c, float &x1, float &x2);
    
    return 0;
}

float quadEq(float a, float b, float c, float &x1, float &x2){
    
}

float powx(float x, int n){
    int res = 1;
    for (int i=1; i<=n; i++){
        res *= x;
    }

    return res;
}
