// File: 02.computeEnumber.cpp
// Author: Guillermo Torres Sanchez
// Date: mar 27 oct 2026
// Time: 10:38
// Description: 'computes e^x up to the given precision'
// Distribution: CachyOS

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << setprecision(15);
    double exp(float x, double precision=0.01);
    cout << exp(1, 0.00000000000000000000000000000000000000000000000000000000000000000000000001);
    return 0;
}


double exp(float x, double precision=0.01){
    double e = 1.0;
    double eTot = 1.0;
    double i = 1;
    double pow = 1;
    double fact = 1; 
    while (e > precision){
        pow *=x;
        fact *=i;

        e = pow / fact;
        eTot+=e;
        i++;
    }
    return eTot;

}