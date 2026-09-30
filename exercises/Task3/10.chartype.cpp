// File: 10.chartype.cpp
// Author: Guillermo Torres Sanchez
// Date: mié 30 sep 2026
// Time: 16:33
// Description: 'Reads a char and tells the type'
// Distribution: CachyOS


#include <iostream>
using namespace std;

int main()
{
	char c;
	string type;

	cout << "Insert a char: ";
	cin  >> c;

	if (c >= '1' and c <= '9') {type = "a number";}
	else if (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u') {type = "a lowercase vowel";}
	else {type = "something else";}

	cout << "It is " << type << endl;

	return 0;

}
