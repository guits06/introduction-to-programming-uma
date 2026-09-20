// File: 01.sum1to100.cpp
// Author: Guillermo Torres Sanchez
// Date: mié 16 sep 2026
// Time: 17:16
// Description: 'The sum of all numbers from 1 to 100'
// Distribution: CachyOS

#include <iostream>
using namespace std;


int sum;
int main()
{
    sum = 0;
    for (int i=1;i<=100;i++ ) {
        sum+=i;
    }

    cout << sum << endl;
    return 0;
}
