// File: t0201.booleans.cpp
// Author: Guillermo Torres Sanchez
// Date: mié 23 sep 2026
// Time: 08:32
// Description: 'Print the value of the following expressions'
// Distribution: CachyOS


#include <iostream>
using namespace std;

int main()
{
    cout << "true and true -> " << (true and true) << endl;
    cout << "false and true -> " << (false and true) << endl;
    cout << "1 == 1 and 2 == 1 -> " << (1 == 1 and 2 == 1) << endl;
    cout << "1 == 1 or 2 != 1 -> " << (1 == 1 or 2 != 1) << endl;
    cout << "true and 1 == 1 -> " << (true and 1 == 1) << endl;
    cout << "1 != 0 and 2 == 1 -> " << (1 != 0 and 2 == 1) << endl;
    cout << "not (true and false) -> " << (not (true and false)) << endl;
    cout << "not ( 1 == 1 and 0 != 1) -> " << (not (1 == 1 and 0 != 1)) << endl;
    cout << "not ( 10 == 1 or 100 == 100) -> " << (not (10 == 1 or 100 == 100)) << endl;
    cout << "not ( 1 != 10 or 3 == 4) -> " << (not (1 != 10 or 3 == 4)) << endl;
    cout << "1 == 1 and not (1 == 1 or 1 == 0) -> " << (1 == 1 and not (1 == 1 or 1 == 0)) << endl;
    return 0;
}
