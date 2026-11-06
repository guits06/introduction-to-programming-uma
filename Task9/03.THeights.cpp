// File: 03.THeights.cpp
// Author: Guillermo Torres Sanchez
// Date: vie 06 nov 2026
// Time: 16:21
// Description: 'THeights and build the mean function'
// Distribution: CachyOS

#include <iostream>
#include <array>
using namespace std;

/* Constants */
const int N = 5;

/* Typedefs */
typedef array<float, N> THeights;

int main()
{

    float mean(THeights a);
    THeights alumHeights = {
        1.83,
        1.78,
        1.55,
        1.90,
        1.60
    };
 
    cout << "The average is " << mean(alumHeights) << endl;
    return 0;
}


float mean(THeights a){
    float average = 0;
    for (int i = 0; i<N; i++){
        average+=a[i];
    }

    average/=N;

    return average;

}