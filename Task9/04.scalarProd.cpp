// File: 04.scalarProd.cpp
// Author: Guillermo Torres Sanchez
// Date: vie 06 nov 2026
// Time: 16:27
// Description: 'Function scalarprod that returns the scalar product of two vectors'
// Distribution: CachyOS

#include <iostream>
#include <array>
using namespace std;

const int N = 3;

typedef array<int,N> TVec;

int main()
{
    float scalarProd(TVec a, TVec b);

    TVec a = {{1,2,3}};
    TVec b = {{3,1,1}};
    cout << "Scalar product : "
         << scalarProd(a,b) << endl;

    return 0;
}

float scalarProd(TVec a, TVec b){
    int result = 0;
    int product;
    for (int i = 0; i<N; i++){
        product = a[i] * b[i];
        result+=product;
    }
    return result;    
}
