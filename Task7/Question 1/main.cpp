#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    float length, width;

    // Create an instance of Rectangle
    Rectangle rect;

    // Prompt user for length and width
    cout << "Enter length of the rectangle: ";
    cin >> length;
    cout << "Enter width of the rectangle: ";
    cin >> width;

    // Use accessor methods to set length and width
    rect.setLength(length);
    rect.setWidth(width);

    // Calculate and display the area
    cout << "Area of the rectangle: " << rect.calculateArea() <<endl;

    return 0;
}
