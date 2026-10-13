// File: 04.countLetters.cpp
// Author: Guillermo Torres Sanchez
// Date: lun 12 oct 2026
// Time: 09:16
// Description: 'Reads characters until a period is entered'
// Distribution: CachyOS


#include <iostream>
using namespace std;
int main()
{   
    char c;
    int uppercaseLetters=0, vowels=0, nonLetters=0;
    cout << "Char: ";
    c = cin.get(); // Read one character at a time AND SPACES
    while (c != '.'){
        // C equal to an uppercase letter
        if (c >= 'A' and c <= 'Z'){
            uppercaseLetters++;
        } else if (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u') {
            vowels++;
        } else if (c < 'a' and c > 'z'){
            nonLetters++;
        }
    cout << "Char: ";
    c = cin.get();

    }
    cout << "Uppercase Letters: " << uppercaseLetters << endl
         << "Vowels: " << vowels << endl
         << "Non-letter hcaracters: " << nonLetters << endl;
    return 0;
}