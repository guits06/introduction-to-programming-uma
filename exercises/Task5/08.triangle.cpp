// File: 08.triangle.cpp
// Author: Guillermo Torres Sanchez
// Date: dom 25 oct 2026
// Time: 08:26
// Description: 'Triangle with specific height'
// Distribution: CachyOS

#include <iostream>
using namespace std;


const int HEIGHT = 20;
int main()
{
    for (int i = 1; i <= HEIGHT; i++){
        for (int j = 1; j <= i; j++){
            cout << j;
        }
        cout << endl;
    }   
    return 0;
}
