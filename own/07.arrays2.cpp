// File: 07.arrays2.cpp
// Author: Guillermo Torres Sanchez
// Date: mié 04 nov 2026
// Time: 11:24
// Description: 'Arrays but with typedef'
// Distribution: CachyOS

#include <iostream>
#include <array>
using namespace std;

/*
Constants
*/

const int N = 3;
const int NPER = 55;

/*
Typedef arrays
*/

typedef array<float, N> TVector;
typedef array<int, NPER> TAges;
int main()
{
    TAges ages;
    cout << ages.size() << endl; // This will give 55


    /* Comparison of arrays 
    Yeah, we can compare them
    
    TVector a, b;
    a = b;

    bool eq = (a == b);
    bool ne = (a != b);
    bool gt = (a > b);

    */
    
    
    /* Array Initialisation */
    void printVec(TVector v); // This is the function
    
    TVector v = {1,2,3};
    printVec(v);

    printVec(TVector{3,3,6}); // Casting the literal array

    TVector allZero1 = {}; // Initialising everything being 0;
    TVector allZero2 = {0}; // Same but more explicit;
    /*
        For each one will be..
        int = 0
        float = 0.0
        char = 0 (character NUL)
    */

    cout << "AllZero1 -> ";
    printVec(allZero1);
    cout << "AllZero2 -> ";
    printVec(allZero2);
    
    TVector v1 = {3, 5, -2}; // Quick init
    TVector v2 = {{1,2}}; // Only first two initialised
    TVector v3 = {0}; // First one is zero but others are defaulted
    return 0;
}

void printVec(TVector v) {
    cout << "Vector: ";
    for (int i = 0; i<N; i++) {
        cout << (i == 0 ? "" : ", ") << v[i];
    }
    cout << endl;
}
