// File: t024.demorgan1.cpp
// Author: Guillermo Torres Sanchez
// Date: vie 25 sep 2026
// Time: 18:49
// Description: 'Prompts for integers and prints a specific boolean expression'
// Distribution: CachyOS


#include <iostream>
using namespace std;

int main() 
{
    int x,y;

    cout << "Value of x: ";
    cin >> x;
    cout << endl << "Value of y: ";
    cin >> y;

    cout << not ( x < y and y > 5 ) << endl;

    return 0;

}
