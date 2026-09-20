// File: 08.digits.cpp
// Author: Guillermo Torres Sanchez
// Date: dom 20 sep 2026
// Time: 13:36
// Description: 'Print four digit integers separated by spaces without strings or arrays'
// Distribution: CachyOS

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a 4-digit number: ";
    cin >> num;

    int d1 = num / 1000;
    int d2 = (num / 100) - (d1 * 10);
    int d3 = (num / 10)  - ((d1 * 100)+(d2 * 10));
    int d4 = num - ((d1 * 1000) + (d2 * 100) + (d3 * 10));


    cout << endl
         << d1 << " "
         << d2 << " "
         << d3 << " "
         << d4 << " "
         << endl;

    return 0;
}
