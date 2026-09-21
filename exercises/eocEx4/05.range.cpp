// File: 05.range.cpp
// Author: Guillermo Torres Sanchez
// Date: lun 21 sep 2026
// Time: 14:18
// Description: 'Check if the number is between 10 and 20'
// Distribution: CachyOS


#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Insert a number: ";
    cin >> num;

    if (num >= 10 and num <= 20){
        cout << "The number is inside the range";
    } else {
        cout << "The number is outside the range";
    }
    cout << endl;
    return 0;
}
