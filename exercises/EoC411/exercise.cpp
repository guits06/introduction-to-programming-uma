// File: what.cpp
// Author: Guillermo Torres Sanchez
// Date: mié 04 nov 2026
// Time: 12:23
// Description: 'Function to count the number of times a value x is in an array main'
// Distribution: CachyOS

#include <iostream>
#include <array>
using namespace std;

const int N = 6;
typedef array<float, N> TVec;

int main()
{
    int count(TVec a, int x);
    cout << count(TVec{1,2,2,2,4,5}, 2) << endl;
}

int count(TVec a, int x){
    int counter = 0;
    for (int i = 0; i < N; i++){
        if (a[i]== x)
            counter++;
    }
    return counter;
}