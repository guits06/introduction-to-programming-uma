// File: 06.minVec.cpp
// Author: Guillermo Torres Sanchez
// Date: vie 06 nov 2026
// Time: 16:40
// Description: 'Returns the smallest value in a'
// Distribution: CachyOS


#include <iostream>
#include <array>
using namespace std;

const int N = 3;

typedef array<int, N> TVec;

int main()
{
    int minVec(TVec a);

    TVec a = {{1, -22, 0}};
    cout << "Smallest value: " << minVec(a) << endl;

    return 0;
}

int minVec(TVec a){
    int lowest = 999999;
    for (int i = 0; i < N; i++){
        if (a[i] < lowest)
            lowest = a[i];
    }
    return lowest;
}
