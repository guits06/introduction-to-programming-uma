// File: 06.timedecomposition.cpp
// Author: Guillermo Torres Sanchez
// Date: mar 29 sep 2026
// Time: 18:47
// Description: 'Prints number of days, hours, minutes, and seconds to make an amount'
// Distribution: CachyOS


#include <iostream>
#include <climits> // I might try something :D
using namespace std;


int main() 
{
    unsigned int secIntroduced, sec, min, hour, days, quotient;
    
    cout << "Seconds: ";
    cin >> secIntroduced;

    sec = ( secIntroduced % 60 );
    quotient = (secIntroduced / 60);
    min = quotient % 60;
    quotient /= 60;
    hour = (quotient % 24); 
    days = (quotient / 24);

    // Print 

    if (days == 1)
    {
        cout << "1 day, ";
    }

    else
    {
        cout << days << " days, ";
    }


    if (hour == 1)
    {
        cout << "1 hour, ";
    }
    
    else
    {
        cout << hour << " hours, ";
    }

    
    if (min == 1)
    {
        cout << "1 minute, ";
    }

    else
    {
        cout << min << " minutes, ";
    }


    if (sec == 1)
    {
        cout << "1 second." << endl;
    }

    else 
    {
        cout << sec << " seconds." << endl;
    }

    return 0;
}
