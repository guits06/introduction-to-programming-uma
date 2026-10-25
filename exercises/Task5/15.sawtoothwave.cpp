// File: 15.sawtoothwave.cpp
// Author: Guillermo Torres Sanchez
// Date: dom 25 oct 2026
// Time: 09:33
// Description: 'Printing a sawtooth wave'
// Distribution: CachyOS

#include <iostream>
using namespace std;

const int HEIGHT = 5;
const int TEETH = 3;

int main()
{
    // For height
    for (int i = 1; i <= HEIGHT; i++)
    {
        // For every teeth
        for (int j = 1; j <= TEETH; j++)
        {
            // Printing spaces
            if (j == 1)
            {
                for (int sp = 1; sp <= HEIGHT - i; sp++)
                    cout << " ";
            }
            else
            {
                for (int sp = 1; sp <= ((HEIGHT - i)*2)-1; sp++) // It should be double the spaces to get an entire triangle of difference
                    cout << " ";
            }

            // Printing *
            for (int k = 1; k < i * 2; k++)
            {
                if ((k == 1 or k == (i * 2) - 1) and not ( i == HEIGHT and k == (i * 2) - 1))
                    cout << "*";
                else if ( i == HEIGHT and k == (i * 2) - 1 )
                    cout << "";
                else {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}
