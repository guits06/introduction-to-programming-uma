// File: 04.ordinalnumber.cpp
// Author: Guillermo Torres Sanchez
// Date: mié 07 oct 2026
// Time: 11:21
// Description: 'Reads the ordinal number and prints the number of days in that month'
// Distribution: CachyOS


#include <iostream>
using namespace std;

int main(){
    typedef enum {JANUARY = 1, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER} TMonth;
    unsigned int month, days;

    cout << "Month: "; cin >> month;
        if (month >= 0 and month <= 12){
            if (month == JANUARY or
                month == MARCH or
                month == MAY or
                month == JULY or
                month == AUGUST or
                month == OCTOBER or
                month == DECEMBER) {
                    days = 31;
                } else if (month == FEBRUARY){
                    days = 28;
                } else {
                    days = 30;
                }
                cout << "There are " << days << " days" << endl;
        } else {
            cerr << "You entered a non-valid month";
        }
        return 0;
}
