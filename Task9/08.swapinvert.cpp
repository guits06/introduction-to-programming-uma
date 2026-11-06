// File: 08.swapinvert.cpp
// Author: Guillermo Torres Sanchez
// Date: vie 06 nov 2026
// Time: 16:49
// Description: 'Invert array using a void swap();'
// Distribution: CachyOS

#include <iostream>
#include <array>
using namespace std;

const int N = 5;

typedef array<int, N> TVec;

int main()
{
    void printArr(TVec a);
    void invertArr(TVec & a);

    TVec a = {1, 2, 3, 4, 5};
    printArr(a);
    cout << endl;
    invertArr(a);
    cout << "after invert:" << endl;
    printArr(a);
    cout << endl;

    return 0;
}

void swap(int &a, int &b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

void printArr(TVec a)
{
    for (int i = 0; i < N; i++)
    {
        cout << a[i] << " ";
    }
}

void invertArr(TVec &a)
{
    for (int j = 1; j <= N; j++)
    {
        for (int i = 0; i < N - j; i++)
        {
            swap(a[i], a[i + 1]);
        }
    }
}
