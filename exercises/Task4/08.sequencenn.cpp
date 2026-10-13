// File: 08.sequencenn.cpp
// Author: Guillermo Torres Sanchez
// Date: mar 13 oct 2026
// Time: 18:08
// Description: 'Read a sequence of natural numbers terminated by 0 or stop early if the current sum of previous elements equals the current number.'
// Distribution: CachyOS

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    bool found = false;

    while (cin >> n and n != 0)
    {
        if (n == sum)
        {
            found = true;
            sum += n;
        }
    }

    if (found)
        cout << "Found" << endl;

    else
        cout << "Not found" << endl;
    return 0;
}