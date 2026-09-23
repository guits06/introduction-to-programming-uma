// File: 03.enumerations.cpp
// Author: Guillermo Torres Sanchez
// Date: lun 21 sep 2026
// Time: 18:02
// Description: 'Learning how to use enumerations'
// Distribution: CachyOS


#include <iostream>
using namespace std;



int main()
{

    // Declaring the enums here

    enum TMonth1 { JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER };
    enum TMonth2 { JANUARY1=1, FEBRUARY2};


    TMonth1 month;
    TMonth2 month2;
    
    month = JANUARY;
    cout << endl << "Number of month with TMonth1: " << month << endl; // Gives 0
    
    cout << "Insert another month for TMonth2: ";
    
    month2 = JANUARY1;
    cout << endl << "Number of month with TMonth2: " << month2 << endl; // Gives 1 as declared
    month2 = FEBRUARY2;
    month = FEBRUARY;
    cout << endl << "Now february should be 2: " << month2 << " despite being 1 in tmonth1: " << month << endl;

    return 0;
}
