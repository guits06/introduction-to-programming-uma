// File: 07.wineGlass.cpp
// Author: Guillermo Torres Sanchez
// Date: sáb 24 oct 2026
// Time: 17:24
// Description: 'Printing a wine glass with a specific half-width'
// Distribution: CachyOS

#include <iostream>
using namespace std;

int main()
{
    int halfWidth = 5;
    for (int i = 0; i < halfWidth; i++) {
        for (int j = 0; j < i; j++)
            cout << " ";
        for (int j = 0; j < 2 * halfWidth + 1 - 2 * i; j++)
            cout << "*";
        cout << endl;
    }

    for (int i = 0; i < halfWidth; i++) {
        for (int j = 0; j < halfWidth; j++)
            cout << " ";
        cout << "*" << endl;
    }

    
    for (int i = 0; i < halfWidth + 2; i++)
        cout << "*";
    cout << endl;

    for (int i = 0; i < 2 * halfWidth + 3; i++)
        cout << "*";
    cout << endl;

    return 0;
}
