// File: 01.constants.cpp
// Author: Guillermo Torres Sanchez
// Date: dom 20 sep 2026
// Time: 11:51
// Description: 'Defining constants'
// Distribution: CachyOS

#include <iostream>
using namespace std;

const int MAXNUMBEROFCHARS = 256;
const float PI = 3.1416;
const char ENDOFLINE = '\n';
const int UPLOW = 32; // 32 positions of difference

int main()
{
    cout << MAXNUMBEROFCHARS << endl
         << PI << endl
         << ENDOFLINE << endl
         << UPLOW << endl;

    return 0;
}


