// File: t0205.demorgan2.cpp
// Author: Guillermo Torres Sanchez
// Date: vie 25 sep 2026
// Time: 19:05
// Description: 'Defines constants, use de morgan laws'
// Distribution: CachyOS


#include <iostream>
using namespace std;

int main()
{
    const int A = 2, B = 3, C = 2;
    bool found = false;

    cout << "not ( ( " << found << " and ( " << A << " == " << B << " )) or ( " << A << " == " << C << " ) ) -> ";
    cout << boolalpha << (not ( (found and (A == B)) or (A == C) )) << endl;
    cout << "not ( " << found << " and ( " << A << " == " << B << " )) and not ( " << A << " == " << C << " ) -> ";
    cout << boolalpha << (( not (found and (A == B)) and not (A == C) )) << endl;
    return 0;

}
