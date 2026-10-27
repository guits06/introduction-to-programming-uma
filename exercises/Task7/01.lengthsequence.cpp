// File: 01.lengthsequence.cpp
// Author: Guillermo Torres Sanchez
// Date: lun 26 oct 2026
// Time: 18:30
// Description: 'Returns the length of the longest sequence entered via keyboard'
// Distribution: CachyOS

#include <iostream>
using namespace std;

int main()
{
    int lss(void);
    cout << lss() << endl;
}

int lss(void)
{
    int maxcount = 0;
    int count = 0;
    int n;
    int prevn = 2;
    while (cin >> n and n < 2)
    {
        if (n == 0)
        {
            if (prevn == 0)
            {
                count++;
            }
            else
            {
                count = 1;
            }
        }
        else
        {
            if (prevn == 0 or prevn == 1)
            {
                count++;
            }
            else
            {
                count = 1;
            }
        }

        if (maxcount < count) maxcount = count;
        prevn = n;
    }
    return count;
}