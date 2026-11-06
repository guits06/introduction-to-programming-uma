// File: 07.minMaxVec.cpp
// Author: Guillermo Torres Sanchez
// Date: vie 06 nov 2026
// Time: 16:42
// Description: 'procedure that returns both the minimum and maximum through reference'
// Distribution: CachyOS

#include <iostream>
#include <array>
using namespace std;

const int N = 3;

typedef array<int, N> TVec;

int main()
{

    void printArr(TVec a);
    void minMaxVec(TVec a, int &mn, int &mx);

    int mn, mx;
    TVec a = {{1, -22, 0}};

    printArr(a);
    cout << endl;

    minMaxVec(a, mn, mx);
    cout << "Min: " << mn << endl; // -22
    cout << "Max: " << mx << endl; // 1

    a = (TVec){{0, 1, 0}};
    printArr(a);
    cout << endl;

    minMaxVec(a, mn, mx);
    cout << "Min: " << mn << endl; // 0
    cout << "Max: " << mx << endl; // 1

    return 0;
}

void printArr(TVec a){
    for (int i = 0; i<N; i++){
        cout << a[i] << " ";
    }
}

void minMaxVec(TVec a, int &mn, int &mx){
    mn = 100000;
    mx = -100000;

    for (int i = 0; i<N; i++){
        if (a[i]<mn)
            mn = a[i];
        if (a[i]>mx)
            mx = a[i];
    }

}