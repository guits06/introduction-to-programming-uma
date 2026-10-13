// File: 03.multiples35.cpp
// Author: Guillermo Torres Sanchez
// Date: lun 12 oct 2026
// Time: 09:31
// Description: 'Find all multiples of 35 in the range [1500,2700]'
// Distribution: CachyOS


#include <iostream>
using namespace std;

const unsigned int NUM = 35;
const unsigned int MIN = 1500;
const unsigned int MAX = 2700;


int main()
{
    for (int i = MIN ; i <= MAX ; i++) {
        if ((i % NUM) == 0) {
            cout << i << " is a multiple of " << NUM << endl;
        }
    }
}