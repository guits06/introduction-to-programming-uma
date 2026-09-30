// File: 08.astro.cpp
// Author: Guillermo Torres Sanchez
// Date: mar 29 sep 2026
// Time: 19:23
// Description: 'Displays the astrological sign for a given birth date'
// Distribution: CachyOS


#include <iostream>
using namespace std;

int main()
{
    unsigned int day;
    string month, sign;

    cout << "Enter the day of birth: ";
    cin >> day;

    cout << "Enter the month of birth (e.g. March, july..): ";
    cin >> month;
    

    /* Now the conditional rush is coming.... */
    /* You need to be filled with determination */

    // I like this indentation for this, otherwise it would be mostly unreadable

    if ((day >= 21 and month == "march") or (day <= 19 and month == "april")) {sign = "Aries";}
    else if ((day >= 20 and month == "april") or (day <= 20 and month == "may")) {sign = "Taurus";}
    else if ((day >= 21 and month == "may") or (day <= 20 and month == "june")) {sign = "Gemini";}
    else if ((day >= 21 and month == "june") or (day <= 22 and month == "july")) {sign = "Cancer";}
    else if ((day >= 23 and month == "july") or (day <= 22 and month == "august")) {sign = "Leo";}
    else if ((day >= 23 and month == "august") or (day <= 22 and month == "september")) {sign = "Virgo";}
    else if ((day >= 23 and month == "september") or (day <= 22 and month == "october")) {sign = "Libra";}
    else if ((day >= 23 and month == "october") or (day <= 21 and month == "november")) {sign = "Scorpio";}
    else if ((day >= 22 and month == "november") or (day <= 21 and month == "december")) {sign = "Sagittarius";}
    else if ((day >= 22 and month == "december") or (day <= 19 and month == "january")) {sign = "Capricorn";}
    else if ((day >= 20 and month == "january") or (day <= 18 and month == "february")) {sign = "Aquarius";}
    else if ((day >= 19 and month == "february") or (day <= 20 and month == "march")) {sign = "Pisces";}

    cout << "Your sign is " << sign << endl;
}
