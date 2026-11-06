// File: 05.negativeElements.cpp
// Author: Guillermo Torres Sanchez
// Date: vie 06 nov 2026
// Time: 16:37
// Description: 'Number of negative elements in a'
// Distribution: CachyOS

#include <iostream>
#include <array>
using namespace std;

const int N = 3;

typedef array<int, N> TVec;

int main()
{
    int numberOfNeg(TVec a);

    TVec a = {{1, -22, 0}};
    cout << "Negatives: " << numberOfNeg(a) << endl;

    return 0;
}

int numberOfNeg(TVec a){
    int sum = 0;
    for (int i = 0; i < N; i++){
        if (a[i] < 0)
            sum++;
    }
    return sum;
}
