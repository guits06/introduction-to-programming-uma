// File: 14.digitatposition.cpp
// Author: Guillermo Torres Sanchez
// Date: dom 25 oct 2026
// Time: 09:12
// Description: 'Takes a number and a position and prints the digit at that position'
// Distribution: CachyOS

#include <iostream>
using namespace std;

int main()
{
    int num = 1492;
    int pos = 2;

    if (pos > 0){
        int numpos = num;
        for (int i = 1; i < pos; i++){
            numpos /= 10;
        }

        cout << numpos % 10 << endl;
    }
}
