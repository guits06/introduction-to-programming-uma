// File: 11.primeNumbers.cpp
// Author: Guillermo Torres Sanchez
// Date: dom 25 oct 2026
// Time: 08:41
// Description: 'Prints the first N prime numbers'
// Distribution: CachyOS

#include <iostream>
using namespace std;

const int N = 100;
int main()
{
    bool found;
    cout << "First " << N << " prime numbers" << endl;
    for (int i = 2; i <= N; i++)
    {
        found = true;
        for (int j = 2; j <= i; j++)
        {
            if (i % j == 0 and i != 1 and i != j)
            {
                found = false;
            }
        }

        if (found)
        {
            cout << (i!=2 ? ", " : "") << i;
        }
    }
    return 0;
}
