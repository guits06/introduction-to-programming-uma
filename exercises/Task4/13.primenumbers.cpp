// File: 13.primenumbers.cpp
// Author: Guillermo Torres Sanchez
// Date: mar 13 oct 2026
// Time: 19:00
// Description: 'Determine if a number is prime or not'
// Distribution: CachyOS


#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Insert a number: "; cin >> number;

    int n = 2;
    while (number % n != 0) {
        ++n;
    }

    string result = (number == n) ? "prime" : "not prime";

    cout << "The number is " << result;
    return 0;
}