#pragma once RECTANGLE_H
#pragma once RECTANGLE_H
// Class name Rectangle
class Rectangle {
    // private member variables
private:
    float length;
    float width;
// public member function
public:
// Declare a default constructor
    Rectangle();
    Rectangle(float l, float w); // Overloaded constructor
    ~Rectangle(); // Destructor

     // Getting/ accesing methods
    void setLength(float l);
    void setWidth(float w);
    float getLength() const;
    float getWidth() const;

    //  method/function that calculates area
    float calculateArea() const;
};


