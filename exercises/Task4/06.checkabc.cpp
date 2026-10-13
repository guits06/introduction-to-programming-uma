// File: 06.checkabc.cpp
// Author: Guillermo Torres Sanchez
// Date: mar 13 oct 2026
// Time: 18:30
// Description: 'checks if the string abc appears'
// Distribution: CachyOS

#include <iostream>
using namespace std;

int main()
{
    char a, b, c, input;

    cout << "Insert numbers and stop with \".\":";
    cin >> input;
    a = b = c = input;

    while (cin >> input and input != '.')
    {
        a = b;
        b = c;
        c = input;
    }

    if (a == 'a' and b == 'b' and c == 'c')
    {
        cout << "entered" << endl;
    }
    else
    {
        cout << "not entered" << endl;
    }
}