// File: 05.prices.cpp
// Author: Guillermo Torres Sanchez
// Date: dom 20 sep 2026
// Time: 13:21
// Description: 'Asks the user for the price of a product and a discount percentage 
// and prints the final price with the discount'
// Distribution: CachyOS

#include <iostream>
using namespace std;

int main()
{
    float price, discount, fprice;

    cout << "Price: ";
    cin >> price;
    cout << endl << "Discount (%): ";
    cin >> discount;

    // Final price logic
    fprice = (price - (price * (discount/100)));
    
    // Outputting final price
    cout << "Final price: " << fprice << endl;
    return 0;
}

/* Expected code: float finalPrice = price * (1 - discount / 100.0); */
