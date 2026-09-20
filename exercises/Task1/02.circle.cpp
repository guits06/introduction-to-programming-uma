// File: 02.circle.cpp
// Author: Guillermo Torres Sanchez
// Date: dom 20 sep 2026
// Time: 12:01
// Description: 'Asks for the user for the radius and the height of a cylinder and prints its volume'
// Distribution: CachyOS

#include <iostream>
using namespace std;

const float PI = 3.141592;

int main()
{
    float radius, area, volume, height;
    cout << "Enter the circle radius: ";
    cin >> radius;
    area = PI * radius * radius;
    cout << "The area of a circle with radius " << radius 
         << " is " << area << endl;

    cout << "Enter the cylinder height: ";
    cin >> height;
    volume = area * height;
    cout << "The circle with: "<< endl
         << " - radius: " << radius << endl
         << " - height: " << height << endl
         << "Is exactly " << volume << " cubic meters" << endl;
    return 0;
}

