#include "Triangle.h"
#include <cmath>
#include <string>

using namespace std;

Triangle::Triangle(double ax, double ay, double bx, double by, double cx, double cy)
    : a(ax, ay), b(bx, by), c(cx, cy) {}

double Triangle::distance(const Point& p1, const Point& p2) const {
    double dx = p2.getX() - p1.getX();
    double dy = p2.getY() - p1.getY();
    return sqrt(dx * dx + dy * dy);
}

double Triangle::getPerimeter() const {
    double d1 = distance(a, b);
    double d2 = distance(b, c);
    double d3 = distance(c, a);
    return d1 + d2 + d3;
}

double Triangle::getArea() const {
    double area = fabs(a.getX() * (b.getY() - c.getY()) +
        b.getX() * (c.getY() - a.getY()) +
        c.getX() * (a.getY() - b.getY())) / 2.0;
    return area;
}

double Triangle::getDistanceToOrigin() const {
    double centerX = (a.getX() + b.getX() + c.getX()) / 3.0;
    double centerY = (a.getY() + b.getY() + c.getY()) / 3.0;
    return sqrt(centerX * centerX + centerY * centerY);
}

string Triangle::printInfo() const {
    return "Type: Triangle. Vertices: (" + to_string(a.getX()) + ", " + to_string(a.getY()) +
        "), (" + to_string(b.getX()) + ", " + to_string(b.getY()) +
        "), (" + to_string(c.getX()) + ", " + to_string(c.getY()) + ")";
}

string Triangle::getType() const {
    return "Triangle";
}