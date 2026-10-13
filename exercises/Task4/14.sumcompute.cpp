// File: 14.sumcompute.cpp
// Author: Guillermo Torres Sanchez
// Date: mar 13 oct 2026
// Time: 19:06
// Description: 'Compute the sum and verify the result matches the closed formula'
// Distribution: CachyOS


#include <iostream>
using namespace std;

int main()
{
    int n = 10000;
    int num = 0;
    for (int i = 1; i<=n; i++){
        num+=i;
    }

    cout << "The value of the sum is: " << num << endl;
    
    int formulaResult = (n*(n+1)) / 2;
    cout << "The formula result is " << formulaResult << endl;
    return 0;
}