#pragma once

#include <string>
using namespace std;

class Shape {
public:
    virtual ~Shape();
    virtual double getPerimeter() const;
    virtual double getArea() const;
    virtual double getDistanceToOrigin() const;
    virtual std::string printInfo() const;
    virtual std::string getType() const;
};