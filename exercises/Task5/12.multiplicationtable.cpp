// File: 12.multiplicationtable.cpp
// Author: Guillermo Torres Sanchez
// Date: dom 25 oct 2026
// Time: 08:50
// Description: 'Multiplication table using loops'
// Distribution: CachyOS

#include <iostream>
#include <iomanip>
using namespace std;

const int FROM = 1;
const int TO = 30;

int main()
{
    for (int i = FROM; i <= TO; i++){
        for (int j = FROM; j<=TO; j++){
            cout << setw(6) << i*j;
        }
        cout << endl;
    }
    return 0;
}
