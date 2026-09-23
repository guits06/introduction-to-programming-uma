// File: 05.randomnumbers.cpp
// Author: Guillermo Torres Sanchez
// Date: lun 21 sep 2026
// Time: 18:45
// Description: 'A game with random numbers'
// Distribution: CachyOS


#include <iostream>
#include <cstlib>
#include <ctime>
using namespace std;

int main() {
    // The sequence will be determined by the system time
    srand(time(0));
    
