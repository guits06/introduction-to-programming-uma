// File: 09.find12.cpp
// Author: Guillermo Torres Sanchez
// Date: vie 06 nov 2026
// Time: 17:01
// Description: 'Returns the first index at which the pair 1, 2 appears consecutively in a or -1 if it does not appear'
// Distribution: CachyOS

#include <iostream>
#include <array>
using namespace std;

const int N = 5;

typedef array<int, N> TVec;


int main()
{
    void printArr(TVec a);
    int find12(TVec a);
    TVec a = {{3, 1, 2, 3, 4}};

    printArr(a); cout << endl;
    cout << "1,2 at: " << find12(a) << endl; // 1

    a = (TVec){{3, 2, 2, 2, 1}};
    printArr(a); cout << endl;
    cout << "1,2 at: " << find12(a) << endl; // -1

    return 0;
}


void printArr(TVec a)
{
    for (int i = 0; i < N; i++)
    {
        cout << a[i] << " ";
    }
}

int find12(TVec a){
    int position = -1;
    bool lastOne = false;
    for (int i = 0; i<N; i++){
        if (position == -1){
            if (a[i] == 1){
                lastOne = true;
            } else 
            if (lastOne and a[i] == 2){
                position = a[i-1];
            }

        }
    }

    return position;
}