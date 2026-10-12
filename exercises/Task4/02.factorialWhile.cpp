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
    cout << "Enter a number n: ";
    cin  >> n;

    int i = n;
    while (i>0){
        n *=(n-1);
        i--;
    }
    cout << n << endl;
    return 0;

}
