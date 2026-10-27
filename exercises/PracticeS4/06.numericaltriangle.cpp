// File: 06.numericaltriangle.cpp
// Author: Guillermo Torres Sanchez
// Date: mar 27 oct 2026
// Time: 18:09
// Description: 'prints a numerical triangle :/'
// Distribution: CachyOS

#include <iostream>
using namespace std;

int main()
{
    void pNumTriangle(int height);

    pNumTriangle(6);
}

void pNumTriangle(int height){
    int num = 1;
    for (int i = 1; i<=height; i++){
        for (int j = 1; j<=height-i; j++){
            cout << " ";
        }

        for (int k = 1; k<=(i*2)-1; k++){
            cout << num;
            num++;
            num%=10;
        }

        cout << endl;
    }
}
