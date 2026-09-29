// File: 05.quadraticeq.cpp
// Author: Guillermo Torres Sanchez
// Date: lun 28 sep 2026
// Time: 13:14
// Description: ''
// Distribution: CachyOS


#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b,c, sr;
    int res1, res2;
    bool check;
    cout << "Enter coefficients a b c: ";
    cin >> a >> b >> c;

    sr = ((( b * b ) - 4 * a * c ));
    check = (sr >= 0 and a != 0);

    if (check) {
        res1 = (0 - b + sqrt(sr)) / (2 * a);
        res2 = (0 - b - sqrt(sr)) / (2 * a);
        
        cout << endl
             << "x(1) = " << res1 << endl
             << "x(2) = " << res2 << endl;
        return 0;

    } else {
        cout << endl <<  "Either you entered coefficients that make an imaginary solution or \"a\" equals 0"<< endl;
        return 1;
    }
}
