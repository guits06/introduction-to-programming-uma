// File: 03.rightTriangle.cpp
// Author: Guillermo Torres Sanchez
// Date: dom 20 sep 2026
// Time: 12:10
// Description: 'Prompts the user for two legs of a right triangle and computes and prints the hypotenuse'
// Distribution: CachyOS

#include <iostream>
#include <cmath> // For using square root
using namespace std;

// The formula is h=sqrt((a*a)+(b*b))

/* Declaring variables */
float a, b, h;

int main()
{
    // Asking user through stin
    cout << "Enter a: ";
    cin >> a;
    cout << endl 
         << "Enter b: ";
    cin >> b;

    // Calculating the hypotenuse
    h = sqrt((a*a)+(b*b));
        // It's better computing x*x than pow(x, 2) for efficiency and simplicity
    
    // Printing to the stdout
    cout << "The hypotenuse is: " << h << endl
         << "   |\\" << endl
         << " a | \\  " << h << endl
         << "   |__\\ " << endl
         << "     b "  << endl << endl
         << " - a = "  << a << endl
         << " - b = "  << b << endl;
    return 0;
}

