// File: 05.codingsystem.cpp
// Author: Guillermo Torres Sanchez
// Date: mié 07 oct 2026
// Time: 11:28
// Description: 'Read number with 4 digits and prints on screen each piece of data'
// Distribution: CachyOS


#include <iostream>
using namespace std;
int main()
{
    int digits;
    int province, operationNumber1, operationNumber2, controlDigit;
    cout << "Enter 4 digits: "; cin >> digits;

    province = digits / 1000;
    operationNumber1 = (digits / 100) - province * 10;
    operationNumber2 = digits / 10 - (province * 100) - (operationNumber2 * 10) ;
    controlDigit = province * 1000 - operationNumber1 * 100 - operationNumber2 * 10;

    cout << province << endl << operationNumber1 << endl << operationNumber2 << endl << controlDigit;


}

