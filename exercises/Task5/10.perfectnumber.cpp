// File: 10.perfectnumber.cpp
// Author: Guillermo Torres Sanchez
// Date: dom 25 oct 2026
// Time: 08:33
// Description: 'Computes que sum of its divisors including 1 and checks if the number equals that sum'
// Distribution: CachyOS

#include <iostream>
using namespace std;

const int NUM = 28;

int main()
{
    int sum = 0;

    cout << NUM << "  ->  ";
    for (int i = 1; i<NUM;i++){
        if (NUM % i == 0){

            // Only if not 1 add the plus sign
            if (i == 1){
                cout << i;
            } else {
                cout << "+" << i;
            }

            // Add it to the sum variable
            sum+=i;
        }
    }

    bool isPerfect = (NUM == sum);
    cout << "  =  " << sum << "  ->   " << NUM << " is " << (isPerfect ? "" : "not") << " perfect";

    
    return 0;
}
