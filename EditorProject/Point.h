#pragma once

#include "Shape.h"

class Point : public Shape {
private:
    double x;
    double y;
public:
    Point(double x, double y);
    double getDistanceToOrigin() const;
    string printInfo() const;
    string getType() const;

    double getX() const;
    double getY() const;
};