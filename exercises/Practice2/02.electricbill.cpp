// File: 02.electricbill.cpp
// Author: Guillermo Torres Sanchez
// Date: mié 07 oct 2026
// Time: 11:02
// Description: 'Reads two numbers corresponding to the last two readings of
//              the electric meter and calculates and prints on the screen
//              the total amount to be paid'
// Distribution: CachyOS


#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    float totalPrice = 1.0;
    int totalConsumption, red;
    cout << "Insert n1: " << endl;
    cin >> n1;
    cout << "Insert n2: " << endl;
    cin >> n2;

    totalConsumption = n1-n2;
    cout << "Your total consumption is " << totalConsumption << endl;
    
    for (int i=1; (i<=100) and (totalConsumption >= 1) ; i++) {
        totalPrice+=0.50;
        totalConsumption--;
    }
    for (int j=1; (j<=150) and  (totalConsumption >= 1) ; j++){
        totalPrice+=0.35;
        totalConsumption--;
    }
    for (totalConsumption; totalConsumption > 0 ; totalConsumption--){
        totalPrice+=0.25;
    }

    cout << "Your total price is " << totalPrice << "€" << endl;
   
}
