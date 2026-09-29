// File: 01.loopsum.cpp
// Author: Guillermo Torres Sanchez
// Date: lun 28 sep 2026
// Time: 13:19
// Description: 'Sums number until the user enters 0'
// Distribution: CachyOS


#include <iostream>
#include <cfloat>
using namespace std;

int main()
{
    float num = 1;
    int i = 0;
    float sum = 0;
    float highest = 0;
    float lowest = FLT_MAX;
    float average;

    while ( num != 0 ) {
        cout << endl << "( " << sum << " / " << FLT_MAX << " ) " << "Write a number: ";
        cin >> num;

        // Check if the number is surpassing the float  limit
        if (num == FLT_MIN  or num == FLT_MAX or 
            sum == FLT_MIN or sum == FLT_MAX) {
            cout << endl << "You've surpassed the float limit" << endl;
            num = 0;

        // Make the sum
        } else {
            sum += num;

            // Checks: num != 0, highest and lowest
            if ( num != 0 ) {
                i++;
            }
            if ( num > highest ) {
                highest = num;
            } 

            if ( num < lowest ) {
                lowest = num;
            }
        }
    }
    
    // Get the average
    average = sum / i;

    // Print final message
    cout << endl <<
         "Sum: " << sum << endl <<
        "Average: " << average << endl <<
        "Highest: " << highest << endl <<
        "Lowest : " << lowest << endl;
}
