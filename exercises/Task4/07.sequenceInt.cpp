// File: 07.sequenceInt.cpp
// Author: Guillermo Torres Sanchez
// Date: lun 12 oct 2026
// Time: 09:40
// Description: 'Find positions of te fist and last occurrence of 12 and if it doesnt appear, print 0 for both'
// Distribution: CachyOS

#include <iostream>
using namespace std;

int main()
{
    int n;
    int first = 0;
    int last = 0; // Ocurrences of 12
    int pos = 1;
    while (cin >> n and n != 0)
    {
        if (n == 12)
        {
            if (first == 0)
            {
                first = pos;
            }

            last = pos;
        }

        pos++;
    }

    cout << "---- Results ----" << endl
         << " - Inserted numbers: " << pos << endl
         << " - First ocurrence: " << first << endl
         << " - Last ocurrence: " << last << endl;
    return 0;
}