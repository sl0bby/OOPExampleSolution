#include "Editor.h"
#include <string>
#include <cmath>

using namespace std;

string Editor::printAllShapes(Shape** shapes, size_t count) const {
    string result;
    for (size_t i = 0; i < count; ++i) {
        result += shapes[i]->printInfo() + "\n";
    }
    return result;
}

Shape* Editor::findClosestToOrigin(Shape** shapes, size_t count) const {
    if (count == 0) return nullptr;
    Shape* closest = shapes[0];
    double minDistance = shapes[0]->getDistanceToOrigin();
    for (size_t i = 1; i < count; ++i) {
        double d = shapes[i]->getDistanceToOrigin();
        if (d < minDistance) {
            minDistance = d;
            closest = shapes[i];
        }
    }
    return closest;
}

Shape* Editor::findFarthestFromOrigin(Shape** shapes, size_t count) const {
    if (count == 0) return nullptr;
    Shape* farthest = shapes[0];
    double maxDistance = shapes[0]->getDistanceToOrigin();
    for (size_t i = 1; i < count; ++i) {
        double d = shapes[i]->getDistanceToOrigin();
        if (d > maxDistance) {
            maxDistance = d;
            farthest = shapes[i];
        }
    }
    return farthest;
}

Shape* Editor::findShapeWithMaxArea(Shape** shapes, size_t count) const {
    if (count == 0) return nullptr;
    Shape* maxShape = shapes[0];
    double maxArea = shapes[0]->getArea();
    for (size_t i = 1; i < count; ++i) {
        double area = shapes[i]->getArea();
        if (area > maxArea) {
            maxArea = area;
            maxShape = shapes[i];
        }
    }
    return maxShape;
}

Shape* Editor::findShapeWithMinArea(Shape** shapes, size_t count) const {
    if (count == 0) return nullptr;
    Shape* minShape = shapes[0];
    double minArea = shapes[0]->getArea();
    for (size_t i = 1; i < count; ++i) {
        double area = shapes[i]->getArea();
        if (area < minArea) {
            minArea = area;
            minShape = shapes[i];
        }
    }
    return minShape;
}

Shape* Editor::findShapeWithMaxPerimeter(Shape** shapes, size_t count) const {
    if (count == 0) return nullptr;
    Shape* maxShape = shapes[0];
    double maxPerimeter = shapes[0]->getPerimeter();
    for (size_t i = 1; i < count; ++i) {
        double perimeter = shapes[i]->getPerimeter();
        if (perimeter > maxPerimeter) {
            maxPerimeter = perimeter;
            maxShape = shapes[i];
        }
    }
    return maxShape;
}

Shape* Editor::findShapeWithMinPerimeter(Shape** shapes, size_t count) const {
    if (count == 0) return nullptr;
    Shape* minShape = shapes[0];
    double minPerimeter = shapes[0]->getPerimeter();
    for (size_t i = 1; i < count; ++i) {
        double perimeter = shapes[i]->getPerimeter();
        if (perimeter < minPerimeter) {
            minPerimeter = perimeter;
            minShape = shapes[i];
        }
    }
    return minShape;
}

double Editor::totalArea(Shape** shapes, size_t count) const {
    double sum = 0;
    for (size_t i = 0; i < count; ++i) {
        sum += shapes[i]->getArea();
    }
    return sum;
}

double Editor::totalPerimeter(Shape** shapes, size_t count) const {
    double sum = 0;
    for (size_t i = 0; i < count; ++i) {
        sum += shapes[i]->getPerimeter();
    }
    return sum;
}
