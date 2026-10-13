// File: 05.sequenceN.cpp
// Author: Guillermo Torres Sanchez
// Date: lun 12 oct 2026
// Time: 09:37
// Description: 'Reads a sequence of characters terminated by a period and determine whether the string abc appears in it'
// Distribution: CachyOS

#include <iostream>
using namespace std;

int main()
{
    int n;
    int nRead;
    bool entered;

    cout << "Insert a number: ";
    cin >> n;
    cout << "Now insert a bunch of numbers: ";
    while (cin >> nRead and nRead != 0)
    {
        if (nRead == n)
        {
            entered = true;
        }
    }

    string message = entered ? "It was entered" : "It wasn't entered";
    cout << message << endl;
}