#include "Rectangle.h"
#include <cmath>
#include <string>

using namespace std;

Rectangle::Rectangle(double x, double y, double w, double h)
    : topLeft(x, y), width(w), height(h) {}

double Rectangle::getPerimeter() const {
    return 2 * (width + height);
}

double Rectangle::getArea() const {
    return width * height;
}

double Rectangle::getDistanceToOrigin() const {
    
    double centerX = topLeft.getX() + width / 2;
    double centerY = topLeft.getY() - height / 2; 
    return sqrt(centerX * centerX + centerY * centerY);
}

string Rectangle::printInfo() const {
    return "Тип: Rectangle, Верхний левый угол: (" + to_string(topLeft.getX()) +
        ", " + to_string(topLeft.getY()) + "), Ширина: " + to_string(width) +
        ", Высота: " + to_string(height);
}

string Rectangle::getType() const {
    return "Rectangle";
}