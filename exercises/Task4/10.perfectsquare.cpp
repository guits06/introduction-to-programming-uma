// File: 10.perfectsquare.cpp
// Author: Guillermo Torres Sanchez
// Date: mar 13 oct 2026
// Time: 18:39
// Description: 'Given a natural number determine whether it is a perfect square'
// Distribution: CachyOS


#include <iostream>
#include <climits>
using namespace std;

int main()
{
    unsigned int number;
    cout << "Insert a number, max =  " << UINT_MAX << ": ";
    cin >> number;
    unsigned int i = 0;
    while (i*i <= number){
        if (i*i == number) {
            cout << i << " is the perfect square of " << number << endl;
        }
        i++;
    }
    return 0;
}