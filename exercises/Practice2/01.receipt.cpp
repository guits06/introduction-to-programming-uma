// File: 01.receipt.cpp
// Author: Guillermo Torres Sanchez
// Date: mié 07 oct 2026
// Time: 10:56
// Description: '12% discount and 5% discount if greater than 300€'
// Distribution: CachyOS


#include <iostream>
using namespace std;

int main()
{
    float price = 301.00;
    float finalPrice;
    if (price > 300.00) {
        cout << "You've been aplied an extra 5% discount" << endl;
        finalPrice = price - price * 0.17;
    } else {
        finalPrice = price - price * 0.12;
    }

    cout << "Final price: " << finalPrice <<"€" << endl;
    return 0;
}
