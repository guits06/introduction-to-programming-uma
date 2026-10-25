// File: 09.multtriangle.cpp
// Author: Guillermo Torres Sanchez
// Date: dom 25 oct 2026
// Time: 08:27
// Description: 'Print a specific triangle for any given height'
// Distribution: CachyOS

#include <iostream>
using namespace std;

int main()
{
    int height;
    int countNumber = 1;
    cout << "Insert a height: "; cin >> height;

    for (int i = 1; i<=height; i++){
        for (int j = 1; j<=i; j++){
            cout << countNumber;
            countNumber++; // Sum
            countNumber%=10; // get the last number
        }
        cout << endl;

    }
    
    return 0;
}
