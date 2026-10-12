// File: 03.triangle.cpp
// Author: Guillermo Torres Sanchez
// Date: mié 07 oct 2026
// Time: 11:09
// Description: ''
// Distribution: CachyOS


#include <iostream>
using namespace std;

int main()
{
    unsigned int a, b, c;
    cout << "Insert 3 real numbers: "; cin >> a >> b >> c;

    if ( a <= b and b <= c ) {
        if (c > (a+b)){
            cout << "They can't form a triangle" << endl;
        } else if (a == b and b == c) {
            cout << "It is equilateral" << endl;
        } else if ( a == b and b != c) {
            cout << "It is isosceles" << endl;
        } else if ((c*c) == ((a*a)+ (b*b))) {
            cout << "It is right" << endl;
        } else if ((c*c) < ((a*a)+ (b*b))){
            cout << "It is acute" << endl;
        } else if ((c*c) > ((a*a)+ (b*b))){
            cout << "It is obtuse" << endl;
        }
    } else {
        cout << "The numbers are not in order" << endl;
    }
    return 0;
}
