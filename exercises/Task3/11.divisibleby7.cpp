// File: 11.divisibleby7.cpp
// Author: Guillermo Torres Sanchez
// Date: mié 30 sep 2026
// Time: 17:09
// Description: 'Reads an integer n from the user and determine whether it is divisible by 7 using a specific algorithm'
// Distribution: CachyOS


#include <iostream>
using namespace std;

int main()
{
	int n;

	cout << "Insert an integer: ";
	cin  >> n;

	// Get the last digit
	int lastDigit = n % 10;
	
	// We get the remaining part
	int remainingPart = (n - lastDigit) / 10;

	// Double the last digit
	lastDigit*=2;

	// Now we substract the last digit
	remainingPart -= lastDigit;

	if (remainingPart % 7 == 0) {
		cout << "It is divisible" << endl;
	} else {
		cout << "It is not divisible" << endl;
	}
}	
