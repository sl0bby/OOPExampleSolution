
#include "Line.h"
#include <cmath>
#include <string>


Line::Line(double x1, double y1, double x2, double y2)
    : p1(x1, y1), p2(x2, y2) {}

double Line::getPerimeter() const {
    double dx = p2.getX() - p1.getX();
    double dy = p2.getY() - p1.getY();
    return sqrt(dx * dx + dy * dy);
}

string Line::printInfo() const {
    return "Type: Line. Begin: (" + to_string(p1.getX()) + ", " + to_string(p1.getY()) +
        "), End: (" + to_string(p2.getX()) + ", " + to_string(p2.getY()) + ")";
}

string Line::getType() const {
    return "Line";
}