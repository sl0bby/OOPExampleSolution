#include "Point.h"
#include <cmath>
#include <string>

using namespace std;

Point::Point(double x, double y) : x(x), y(y) {}

double Point::getDistanceToOrigin() const {
    return sqrt(x * x + y * y);
}

string Point::printInfo() const {
    return "Type: Point. Coordinates: (" + to_string(x) + ", " + to_string(y) + ")";
}

string Point::getType() const {
    return "Point";
}

double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}