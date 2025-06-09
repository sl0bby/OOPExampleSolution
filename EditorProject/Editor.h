#pragma once

#include "Shape.h"

class Editor {
public:
    string printAllShapes(Shape** shapes, size_t count) const;
    Shape* findClosestToOrigin(Shape** shapes, size_t count) const;
    Shape* findFarthestFromOrigin(Shape** shapes, size_t count) const;
    Shape* findShapeWithMaxArea(Shape** shapes, size_t count) const;
    Shape* findShapeWithMinArea(Shape** shapes, size_t count) const;
    Shape* findShapeWithMaxPerimeter(Shape** shapes, size_t count) const;
    Shape* findShapeWithMinPerimeter(Shape** shapes, size_t count) const;
    double totalArea(Shape** shapes, size_t count) const;
    double totalPerimeter(Shape** shapes, size_t count) const;
};