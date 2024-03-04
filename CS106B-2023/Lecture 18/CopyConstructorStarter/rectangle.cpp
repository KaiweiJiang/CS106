#include "rectangle.h"

Rectangle::Rectangle(double width, double height) { // constructor
   this->width = new double;
   this->height = new double;
   *(this->width) = width;
   *(this->height) = height;
}

Rectangle::~Rectangle() { // destructor
    delete height;
    delete width;
}

double Rectangle::area() {
    return *width * *height;
}

double Rectangle::perimeter() {
    return 2 * *width + 2 * *height;
}

double Rectangle::getHeight() {
    return *height;
}

double Rectangle::getWidth() {
    return *width;
}
