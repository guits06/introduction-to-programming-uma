// File: 06.arrays.cpp
// Author: Guillermo Torres Sanchez
// Date: mié 04 nov 2026
// Time: 11:07
// Description: 'Arrays owo'
// Distribution: CachyOS

#include <iostream>
#include <array>
using namespace std;

/* Constants */
const int N = 5;
const int NPER = 55;

int main()
{
    /*
    An array can store and work with multiple values of the same data type
    */

    array<int, N> numbers;

    // Declaring the position 0
    numbers[0] = 164;

    cout << "numbers[0] = " << numbers[0] << endl << "Now...." << endl;

    for (int i = 0; i<N; i++){
        numbers[i] = i*i;
        cout << "numbers[" << i << "] = " << numbers[i] << endl;
    }

    int num;

    cout << "--------------------" << endl
         << "Array size: " << numbers.size() << endl // Best practice to use a defined constant (like int N)
         << "Array size (w/ const): " << N << endl;

    return 0;
}
