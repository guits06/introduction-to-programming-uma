// File: 08.arrayToolbox.cpp
// Author: Guillermo Torres Sanchez
// Date: mié 04 nov 2026
// Time: 11:39
// Description: 'idk, the typical toolbox of subprograms to master from the book'
// Distribution: CachyOS

#include <iostream>
#include <array>
using namespace std;

const int N = 3;
typedef array<int,N> TVec;

int main()
{
    /* Functions to make */
    void initArr(TVec& a, int value = 0);
    void printArr(TVec a);
    void readArr(TVec& a);
    TVec readArr();
    int sumArr(TVec a);
    bool isIn(TVec a, int x);
    int indexOf(TVec a, int x);
    int count(TVec a, int x);
    bool anyReps(TVec a);
    int findPosFirstMax(TVec a);


    return 0;
}

void initArr(TVec &a, int value = 0){
    for (int i = 0; i < N; i++){
        a[i] = value;
    }
}

void printArr(TVec a){
    for (int i = 0; i < N; i++){
        cout << "[" << i << "]" << "= " << a[i] << endl;
    }
}

