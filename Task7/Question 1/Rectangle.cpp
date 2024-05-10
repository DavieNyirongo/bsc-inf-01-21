
#include "Rectangle.h"

// this Default constructor
Rectangle::Rectangle() : length(0.0), width(0.0) {}

// Overloaded constructor
Rectangle::Rectangle(float l, float w) : length(l), width(w) {}

// Destructor
Rectangle::~Rectangle() {}

// Setter method for length
void Rectangle::setLength(float l) {
    length = l;
}

// Setter method for width
void Rectangle::setWidth(float w) {
    width = w;
}

// Getter method for length
float Rectangle::getLength() const {
    return length;
}

// Getter method for width
float Rectangle::getWidth() const {
    return width;
}

// Calculate area of the rectangle
float Rectangle::calculateArea() const {
    return length * width;
}

