#pragma once

#include "Shape.h"
#include "Point.h"

class Circle : public Shape {
private:
    const double pi = 3.14;
    Point center;
    double radius;
public:
    Circle(double cx, double cy, double r);
    double getPerimeter() const;
    double getArea() const;
    double getDistanceToOrigin() const;
    string printInfo() const;
    string getType() const;
};