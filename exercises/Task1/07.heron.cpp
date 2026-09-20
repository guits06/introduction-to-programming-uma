// File: 07.heron.cpp
// Author: Guillermo Torres Sanchez
// Date: dom 20 sep 2026
// Time: 13:27
// Description: 'Asks the user for the three sides of a triangle and
// prints its perimeter and area using Heron's formula'
// Distribution: CachyOS

#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    float a, b, c;
    cout << "Side a: ";
    cin >> a;
    cout << "  Side b: ";
    cin >> b;
    cout << "  Side c: ";
    cin >> c;
    cout << endl;

    // Calculations
    float perimeter = a + b + c;   
    float s = perimeter / 2;
    float surface = sqrt(s * (s - a) * (s - b) * (s - c));// Heron's formula

    cout << "Perimeter: " << perimeter
         << "  Surface: " << surface
         << endl;
    return 0;
}
