// File: 05.seconds.cpp
// Author: Guillermo Torres Sanchez
// Date: dom 20 sep 2026
// Time: 12:31
// Description: 'Asks the user for a number of seconds elapsed since midnight and prints equivalent in hours, minutes and seconds'
// Distribution: CachyOS



#include <iostream>
using namespace std;


int main()
{
    int h, // Hours
    totm, // Total Minutes
    m, // Minutes 
    s, // Seconds
    totsec; // Total seconds

/* The reason I used the variables totm and tots is to make the code a little bit more efficient
 * as I also could've evaded totm and added m = ((totsec / 60) % 60)
 *
 * Same in hours, i could've used instead h = ((totsec / 60) / 60)  */

    cout << "Seconds: ";
    cin >> totsec;
    cout << endl;

    // Calculating seconds
    s = (totsec % 60);

    // Calculating minutes
    totm = (totsec / 60);
    m = (totm % 60);

    // Calculating hours
    h = (totm  / 60);

    cout << endl << "---- Time passed ----" << endl
         << " - Hours: " << h << endl
         << " - Minutes: " << m << endl
         << " - Seconds: " << s << endl;
return 0;
}

/* Proposed solution:
 * int totalSeconds;
 * cout << "Seconds: ";
 * cin >> totalSeconds;
 *
 * int hours   = totalSeconds / 3600;
 * int minutes = (totalSeconds % 3600) / 60;
 * int seconds = totalseconds % 60;
 *
 * cout << hours << "h " << minutes << "m " << seconds << "s" << endl;
 * return 0;
 */
