// File: 04.filledrhombus.cpp
// Author: Guillermo Torres Sanchez
// Date: sáb 24 oct 2026
// Time: 16:48
// Description: 'Filled rhombus'
// Distribution: CachyOS

#include <iostream>
using namespace std;


const int SIDEHALF = 4;
int main()
{
    for (int i = 1; i <= SIDEHALF; i++){
        for (int space = 1; space <= SIDEHALF - i; space++)
            cout << " ";
        for (int add = 2; add <= 2*i; add++)
            cout << "*";
        cout << endl;
    }

    for (int i = SIDEHALF-1; i >= 1; i--){
        for (int space = 1; space <= SIDEHALF - i; space++)
            cout << " ";
        for (int add = 2; add <= 2*i; add++)
            cout << "*";
        cout << endl;
    }
    return 0;
}
