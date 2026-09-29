// File: 07.dogage2.cpp
// Author: Guillermo Torres Sanchez
// Date: mar 29 sep 2026
// Time: 18:30
// Description: 'Get years and weight and calcuate a dog's age'
// Distribution: CachyOS


#include <iostream>
using namespace std;

/*
 * I'm trying user other type of indentation to see which is 
 * more comfortable to me, i'm sorry :D
 */

int main()
{
    // Variable declarement
    // On the future change to Typedef
    float age, weight, humanAge, firstTwo, subseqYear;

    // Get data from the user
    cout << "Enter age: ";
    cin >> age;

    cout << endl << "Enter weight: ";
    cin >> weight;

    // Program Logic
    if (weight < 10)
    {
        firstTwo = 12.5;
        subseqYear = 4;
        if (age <= 2)
        {
            humanAge = firstTwo * age;
        } 
        
        else 
        {
            humanAge = ( 2 * firstTwo ) + ( ( age * subseqYear ) - firstTwo );
        }
    }
    
    else if (weight >= 10 and weight <= 25)
    {
        firstTwo = 10.5;
        subseqYear = 4;
        if (age <= 2)
        {
            humanAge = firstTwo * age;
        } 
        
        else 
        {
            humanAge = ( 2 * firstTwo ) + ( ( age * subseqYear ) - firstTwo );
        }
    }

    else if (weight > 25)
    {
        firstTwo = 9;
        subseqYear = 5;
        if (age <= 2)
        {
            humanAge = firstTwo * age;
        } 
        
        else 
        {
            humanAge = ( 2 * firstTwo ) + ( ( age * subseqYear ) - firstTwo );
        }
    }

    cout << endl << "The dog's age in human years is " << humanAge << endl;
}
