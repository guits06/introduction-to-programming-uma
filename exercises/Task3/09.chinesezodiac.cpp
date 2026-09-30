// File: 09.chinesezodiac.cpp
// Author: Guillermo Torres Sanchez
// Date: mié 30 sep 2026
// Time: 16:39
// Description: 'Displays the chinese zodiac sign for a given year of birth'
// Distribution: CachyOS


#include <iostream>
using namespace std;

int main()
{
	unsigned int year;
	string zodiac;

	cout << "Enter your year of birth: ";
	cin  >> year;

	// With the euclidean division we can obtain every year of the chinese zodiac
	
	switch (year % 12){
	case 0:
		zodiac = "monkey";
		break;
	case 1:
		zodiac = "rooster";
		break;
	case 2:
		zodiac = "dog";
		break;
	case 3:
		zodiac = "pig";
		break;
	case 4:
		zodiac = "rat";
		break;
	case 5:
		zodiac = "ox";
		break;
	case 6:
		zodiac = "tiger";
		break;
	case 7:
		zodiac = "rabbit";
		break;
	case 8:
		zodiac = "dragon";
		break;
	case 9:
		zodiac = "snake";
		break;
	case 10:
		zodiac = "horse";
		break;
	case 11:
		zodiac = "goat";
		break;
	}

	cout << "Your animal is: " << zodiac << endl;
	return 0;
}
