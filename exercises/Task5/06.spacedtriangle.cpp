// File: 06.spacedtriangle.cpp
// Author: Guillermo Torres Sanchez
// Date: sáb 24 oct 2026
// Time: 17:16
// Description: 'Printing a spaced triangle'
// Distribution: CachyOS

#include <iostream>
using namespace std;

int main()
{
    int side = 6;
    for (int i = 1; i<=side; i++){
        for (int j = 1; j<=side-i; j++){
            cout << " ";
        }
        for (int j = 1; j<=i*2; j++){
            if (j % 2 == 0)
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
    }
    for (int i = side-1; i>0; i--){
        for (int j = 1; j<=side-i; j++){
            cout << " ";
        }
        for (int j = 1; j<=i*2; j++){
            if (j % 2 == 0)
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
    }




    return 0;
}
