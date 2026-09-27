// File: 05.randomnumbers.cpp
// Author: Guillermo Torres Sanchez
// Date: lun 21 sep 2026
// Time: 18:45
// Description: 'A game with random numbers'
// Distribution: CachyOS


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Without adding a random seed
    cout << "Without adding a random seed\n";
    for (int i = 0; i < 5; i++){
        cout << rand() << endl;
    }


    // Using the system time as a random seed
    srand(time(0));
    for (int i = 0; i < 10; ++i) {
        // Generate a random number
        cout << rand() << endl;
    }
    return 0;
}


















