
#include "Circle.h"
#include <cmath>
#include <string>

using namespace std;

Circle::Circle(double cx, double cy, double r)
    : center(cx, cy), radius(r) {}

double Circle::getPerimeter() const {
    return 2 * pi * radius;
}

double Circle::getArea() const {
    return pi * radius * radius;
}

double Circle::getDistanceToOrigin() const {
    return center.getDistanceToOrigin();
}

string Circle::printInfo() const {
    return "Type: Circle. Centre: (" + to_string(center.getX()) + ", " + to_string(center.getY()) +
        "), Radius: " + to_string(radius);
}

string Circle::getType() const {
    return "Circle";
}