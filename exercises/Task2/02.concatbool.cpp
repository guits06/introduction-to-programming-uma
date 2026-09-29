// File: t0202.concatbool.cpp
// Author: Guillermo Torres Sanchez
// Date: mié 23 sep 2026
// Time: 10:59
// Description: 'Prompts the user for a number x and prints (true/false) whether 0 <=x <=100'
// Distribution: CachyOS


#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Write a number x: ";
    cin >> x;
    cout << endl << ( x >= 0 and x <= 100 ) << endl;
    return 0;
}
