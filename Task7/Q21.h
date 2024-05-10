class Rectangle {
private:
    float length;
    float width;

public:
    // Default constructor
    Rectangle();

    // Overloaded constructor
    Rectangle(float len, float wid);

    // Accessor methods for length and width
    void setLength(float len);
    void setWidth(float wid);

    // Accessor methods for retrieving length and width
    float getLength() const;
    float getWidth() const;

    // Function to calculate area
    float calculateArea() const;

    // Destructor
    ~Rectangle();
};
