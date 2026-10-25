// File: 03.emptysquaredoubleline.cpp
// Author: Guillermo Torres Sanchez
// Date: sáb 24 oct 2026
// Time: 16:34
// Description: 'Empty square with a double-line border'
// Distribution: CachyOS

#include <iostream>
using namespace std;

const int SIZE = 6;

int main()
{
    for (int i = 1; i <= SIZE; i++)
    {
        for (int j = 1; j <= SIZE; j++)
        {
            if (i == 1 or i == 2 or
                i == SIZE - 1 or i == SIZE)
            {
                cout << "*";
            }
            else if (j == 1 or j == 2 or j == SIZE - 1 or j == SIZE)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
