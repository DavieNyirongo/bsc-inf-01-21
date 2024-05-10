#include <iostream>
#include "Rectangle.h"

int main() {
    float length1, width1, length2, width2;

    // Create an instance of Rectangle using default constructor
    Rectangle rect1;

    // Input length and width from user for rect1
    std::cout << "Enter length of rectangle 1: ";
    std::cin >> length1;
    rect1.setLength(length1);

    std::cout << "Enter width of rectangle 1: ";
    std::cin >> width1;
    rect1.setWidth(width1);

    // Create another instance of Rectangle using overloaded constructor
    std::cout << "Enter length of rectangle 2: ";
    std::cin >> length2;

    std::cout << "Enter width of rectangle 2: ";
    std::cin >> width2;

    Rectangle rect2(length2, width2);

    // Output area of both rectangles
    std::cout << "Area of rectangle 1: " << rect1.calculateArea() << std::endl;
    std::cout << "Area of rectangle 2: " << rect2.calculateArea() << std::endl;

    return 0;
}
