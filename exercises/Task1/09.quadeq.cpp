// File: 09.quadeq.cpp
// Author: Guillermo Torres Sanchez
// Date: lun 21 sep 2026
// Time: 12:47
// Description: 'Program that asks for coefficients of a quadratic equation and prints its two real roots'
// Distribution: CachyOS

#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    float a, b, c;
    cout << "a: ";
    cin >> a;
    cout << endl << "b: ";
    cin >> b;
    cout << endl << "c: ";
    cin >> c;


    float res1 = (( 0 - b + sqrt((b * b) - 4 * a * c)) / (2 * a));
    float res2 = (( 0 - b - sqrt((b * b) - 4 * a * c)) / (2 * a));
    
    cout << "Results:" << endl
         << "x = "     << res1 << endl
         << "x = "     << res2 << endl;
    return 0;
}
