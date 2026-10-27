// File: 05.rhombus.cpp
// Author: Guillermo Torres Sanchez
// Date: mar 27 oct 2026
// Time: 18:33
// Description: 'rhombus procedure'
// Distribution: CachyOS

#include <iostream>
using namespace std;

int main()
{
    void pRhombus(int height);
    pRhombus(7);
}

void pRhombus(int height){
    for (int i = 1; i<=height; i++){
        for (int j = 1; j<=height-i; j++){
            cout << " ";
        }
        for (int k = 1; k<i*2; k++){
            if (k % 2 == 0){
                cout << " ";
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }
    // Now the inverse
    for (int i = height -1; i>=1; i--){
        for (int j = 1; j<=height-i; j++){
            cout << " ";
        }
        for (int k = 1; k<i*2; k++){
            if (k % 2 == 0){
                cout << " ";
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }
  
}