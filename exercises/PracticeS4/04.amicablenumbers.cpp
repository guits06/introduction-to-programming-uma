// File: 04.amicablenumbers.cpp
// Author: Guillermo Torres Sanchez
// Date: mar 27 oct 2026
// Time: 18:22
// Description: 'check if amicable'
// Distribution: CachyOS

#include <iostream>
using namespace std;

int main()
{
    void printRes(int a, int b);
    printRes(1184, 1210);   
}

bool amicable(int a, int b){
    // Check sum of divisors of A
    int sumA = 0;
    for (int i = 1; i<a; i++){
        if (a % i == 0)
            sumA+=i;
    }

    // Check sum of divisors of B
    int sumB = 0;
    for (int i = 1; i<b; i++){
        if (b % i == 0)
            sumB+=i;
    }

    if (sumA == b and sumB == a)
        return true;
    else
        return false;
}

void printRes(int a, int b){
        bool amicable(int a, int b);
        cout << "The numbers " << a << " and " << b
             << " are " << (amicable(a,b) ? "" : "NOT ") << "amicable"
             << endl;
}