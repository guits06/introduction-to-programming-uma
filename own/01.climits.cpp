// File: 01.climits.cpp
// Author: Guillermo Torres Sanchez
// Date: lun 21 sep 2026
// Time: 17:45
// Description: 'Finding range limits of integer and floats'
// Distribution: CachyOS

#include <iostream>
#include <climits>
#include <cfloat>
using namespace std;

int main()
{
    cout << "Unsigned short: " << USHRT_MAX << endl
         << "Short: " << SHRT_MIN << " -> " << SHRT_MAX << endl
         << "Integer: " << INT_MIN << " -> " << INT_MAX << endl
         << "Unsigned Long: " << ULONG_MAX << endl
         << "Float: " << FLT_MIN << " -> " << FLT_MAX << endl
         << "Double: " << DBL_MIN << " -> " << DBL_MAX << endl
         << "Long Double: " << LDBL_MIN << " -> " << LDBL_MAX << endl;

    return 0;
 }
