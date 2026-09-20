// File: 04.celsius.cpp
// Author: Guillermo Torres Sanchez
// Date: dom 20 sep 2026
// Time: 12:23
// Description: 'Program that asks for Celsius and prints Farenheit'
// Distribution: CachyOS

#include <iostream>
using namespace std;

float c,f;

int main() 
{
    // Conversion formula:
    // F = (9/5) * C + 32

    cout << "Temperature in Celsius: ";
    cin >> c;

    f = (float(9)/5) * c + 32;

    cout << "Temperature in Farenheit: " << f
         << endl;
    return 0;
}
