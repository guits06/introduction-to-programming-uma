// File: 01.triangle.cpp
// Author: Guillermo Torres Sanchez
// Date: mar 27 oct 2026
// Time: 10:13
// Description: 'Receives the height of the next numerical triangle and prints it'
// Distribution: CachyOS

#include <iostream>
using namespace std;

int main()
{
    void triangle(int h);

    triangle(11);
    return 0;
}

void triangle(int h)
{
    for (int i = 1; i <= h; i++)
    {
        int spaces = h-i;
        {
            for (int j = 1; j <= spaces; j++)
            {
                cout << " ";
            }

            int num = i;
            for (int k = 1; k < i*2; k++)
            {
                    cout << num%10;

                if (k<i){
                    num++;
                } else {
                    num--;
                }
                
            }

            cout << endl;
        }
    }
}
