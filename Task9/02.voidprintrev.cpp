// File: 02.voidprintrev.cpp
// Author: Guillermo Torres Sanchez
// Date: vie 06 nov 2026
// Time: 16:17
// Description: 'using tvec prints the array in reverse order'
// Distribution: CachyOS

#include <iostream>
#include <array>
using namespace std;

const int N = 5;

typedef array<float, N> TVec;

int main()
{
    // Functions
    void printRev(TVec a);

    printRev((TVec){{1, 20, 3, 40, 5}});
    cout << endl;

    return 0;
}

void printRev(TVec a){
    for (int i = N-1; i>=0; i--){
        cout << a[i] << " ";
    }
}