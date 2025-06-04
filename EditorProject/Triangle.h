#pragma once

#include "Shape.h"
#include "Point.h"

class Triangle : public Shape {
private:
    Point a;
    Point b;
    Point c;
    double distance(const Point& p1, const Point& p2) const;
public:
    Triangle(double ax, double ay, double bx, double by, double cx, double cy);
    double getPerimeter() const;
    double getArea() const;
    double getDistanceToOrigin() const;
    string printInfo() const;
    string getType() const;
};