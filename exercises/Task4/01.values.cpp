// File: 01.values.cpp
// Author: Guillermo Torres Sanchez
// Date: lun 05 oct 2026
// Time: 12:56
// Description: 'Finds the largest value, smallest and the arithmetic mean of a series of 
//               N integers entered from the keyboard'
// Distribution: CachyOS


#include <iostream>
using namespace std;

int main(){
    unsigned int n, nLoop;
    int lowest = 999999;
    int highest = 0;
    int sum = 0;
    cout << "How many integers do you want to enter?: "; cin >> nLoop;
    
    for ( int i=1; i <= nLoop; i++ ){
        cout << "Enter number " << i << ": "; cin >> n;
        
        lowest = (n < lowest) ? n : lowest;
        highest = (n > highest) ? n : highest;
        sum+=n;
    }

    int av = (float)sum / nLoop + 0.5;

    cout << "----------------------------" << endl
         << "-   R  E   S  U  L  T  S  -" << endl
         << "----------------------------" << endl
         << " Largest: " << highest       << endl
         << " Smallest: " << lowest       << endl
         << " Mean: " << av               << endl;
    return 0;
}
