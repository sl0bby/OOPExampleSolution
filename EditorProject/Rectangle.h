#pragma once

#include "Shape.h"
#include "Point.h"

class Rectangle : public Shape {
private:
    Point topLeft;
    double width;
    double height;
public:
    Rectangle(double x, double y, double w, double h);
    double getPerimeter() const;
    double getArea() const;
    double getDistanceToOrigin() const;
    std::string printInfo() const;
    std::string getType() const;
};