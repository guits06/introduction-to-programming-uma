// File: perfectnumber.cpp
// Author: Guillermo Torres Sanchez
// Date: lun 05 oct 2026
// Time: 14:19
// Description: ''
// Distribution: CachyOS


#include <iostream>
using namespace std;

int main()
{

    int n = 0;
    while (true) {
        int s = 0;
        n++;
        for (int d = 1; d < n; ++d){
            if (n % d == 1){
                s+=d;
            }
        }

        if (s == n){
            cout << n << " is a perfect number";
        }
    return 0;
    }
}
