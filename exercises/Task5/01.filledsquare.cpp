// File: 01.filledsquare.cpp
// Author: Guillermo Torres Sanchez
// Date: sáb 24 oct 2026
// Time: 16:24
// Description: 'Prints a filled square'
// Distribution: CachyOS

#include <iostream>
using namespace std;

typedef unsigned int Tpositiveint;
const Tpositiveint side = 4;

int main()
{
    for (Tpositiveint j = 1; j <= side; j++)
    {
        for (Tpositiveint i = 1; i <= side; i++)
        {
            cout << '*';
        }
        cout << endl;
    }

    return 0;
}
