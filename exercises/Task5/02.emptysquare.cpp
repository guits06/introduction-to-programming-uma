// File: 02.emptysquare.cpp
// Author: Guillermo Torres Sanchez
// Date: sáb 24 oct 2026
// Time: 16:29
// Description: 'Empty square'
// Distribution: CachyOS

#include <iostream>
using namespace std;

const int SIZE = 20;

int main()
{    
    for (int i = 1; i<=SIZE; i++)
    {
        for (int j = 1 ; j <= SIZE; j++) {
            if (i == 1 or i == SIZE or 
                j == 1 or j == SIZE) {
                cout << "*";
            } else 
            {
                cout << " ";
            }
        }

        cout << endl;
    }
    return 0;
}
