// File: 02.factorialWhile.cpp
// Author: Guillermo Torres Sanchez
// Date: lun 05 oct 2026
// Time: 13:17
// Description: 'Computes the factorial of an integer n with a while loop'
// Distribution: CachyOS


#include <iostream>
using namespace std;

int main()
{
    unsigned int n;
    unsigned int res = 1;
    cout << "Enter a number n: ";
    cin  >> n;

    int i = n;
    while (i>0){
        res = res * i;
        i--;
    }
    cout << n << "!" << " = " << res << endl;
    return 0;

}
