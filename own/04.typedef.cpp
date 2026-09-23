// File: 04.typedef.cpp
// Author: Guillermo Torres Sanchez
// Date: lun 21 sep 2026
// Time: 18:25
// Description: 'Learning how to use typedef'
// Distribution: CachyOS


#include <iostream>
using namespace std;

typedef float Tbalance;

int main(){
    Tbalance actualBalance = 0;
    Tbalance maxBalance = 10;
    while (maxBalance > actualBalance) {
        actualBalance++;
    }
    return 0;
}
