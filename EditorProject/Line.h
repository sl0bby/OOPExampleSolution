#pragma once

#include "Shape.h"
#include "Point.h"

class Line : public Shape {
private:
    Point p1;
    Point p2;
public:
    Line(double x1, double y1, double x2, double y2);
    double getPerimeter() const;
    string printInfo() const;
    string getType() const;
};