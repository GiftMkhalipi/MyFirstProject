/*#include <iostream>
using namespace std;

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle();                              // default constructor
    Rectangle(double l, double w);            // overloaded constructor (added in step 2)

    ~Rectangle();                             // destructor

    // Setters (assign)
    void setLength(double l);
    void setWidth(double w);

    // Getters (retrieve)
    double getLength() const;
    double getWidth() const;

    // Area
    double calculateArea() const;
};

#endif

//Rectangle.cpp (implementation)

#include "Rectangle.h"

// Default constructor: both members = 0
Rectangle::Rectangle() {
    length = 0.0;
    width = 0.0;
}

// Overloaded constructor
Rectangle::Rectangle(double l, double w) {
    length = l;
    width = w;
}

// Destructor (does nothing for now)
// Destructor (does nothing for now)
Rectangle::~Rectangle() { }

void Rectangle::setLength(double l) { length = l; }
void Rectangle::setWidth(double w)  { width = w; }

double Rectangle::getLength() const { return length; }
double Rectangle::getWidth()  const { return width; }

double Rectangle::calculateArea() const {
    return length * width;
}
*/


#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    // ---- Rectangle #1: default constructor + setters ----
    Rectangle rect1;
    double l1, w1;

    cout << "Enter length of rectangle 1: ";
    cin >> l1;
    cout << "Enter width of rectangle 1: ";
    cin >> w1;

    rect1.setLength(l1);
    rect1.setWidth(w1);

    cout << "Area of rectangle 1: " << rect1.calculateArea() << endl;

    // ---- Rectangle #2: overloaded constructor ----
    double l2, w2;
    cout << "\nEnter length of rectangle 2: ";
    cin >> l2;
    cout << "Enter width of rectangle 2: ";
    cin >> w2;

    Rectangle rect2(l2, w2);
    cout << "Area of rectangle 2: " << rect2.calculateArea() << endl;

    return 0;
}
