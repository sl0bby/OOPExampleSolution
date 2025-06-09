#include <iostream>
#include "Point.h"
#include "Line.h"
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Editor.h"

using namespace std;

int main() {
    const size_t count = 5;
    Shape** shapes = new Shape * [count];

    shapes[0] = new Point(1.0, 2.0);
    shapes[1] = new Circle(3.0, 4.0, 5.0);
    shapes[2] = new Rectangle(0.0, 0.0, 10.0, 20.0);
    shapes[3] = new Line(1.0, 1.0, 4.0, 5.0);
    shapes[4] = new Triangle(0.0, 0.0, 3.0, 0.0, 0.0, 4.0);

    Editor editor;

    cout << "Information about all figures:\n" << editor.printAllShapes(shapes, count) << "\n";

    Shape* closest = editor.findClosestToOrigin(shapes, count);
    cout << "\nThe figure closest to the origin (" << closest->getType() << "):\n"
        << closest->printInfo() << "\n";

    Shape* farthest = editor.findFarthestFromOrigin(shapes, count);
    cout << "\nA figure far from the origin (" << farthest->getType() << "):\n"
        << farthest->printInfo() << "\n";

    Shape* maxAreaShape = editor.findShapeWithMaxArea(shapes, count);
    cout << "\nFigure with maximum area (" << maxAreaShape->getType() << "):\n"
        << maxAreaShape->printInfo() << "\n";

    Shape* minAreaShape = editor.findShapeWithMinArea(shapes, count);
    cout << "\nFigure with minimum area (" << minAreaShape->getType() << "):\n"
        << minAreaShape->printInfo() << "\n";

    Shape* maxPerimeterShape = editor.findShapeWithMaxPerimeter(shapes, count);
    cout << "\nFigure with maximum perimeter (" << maxPerimeterShape->getType() << "):\n"
        << maxPerimeterShape->printInfo() << "\n";

    Shape* minPerimeterShape = editor.findShapeWithMinPerimeter(shapes, count);
    cout << "\nFigure with minimum perimeter (" << minPerimeterShape->getType() << "):\n"
        << minPerimeterShape->printInfo() << "\n";

    cout << "\nTotal area of ??all figures: " << editor.totalArea(shapes, count) << "\n";
    cout << "Total perimeter of all figures: " << editor.totalPerimeter(shapes, count) << "\n";

    for (size_t i = 0; i < count; ++i) {
        delete shapes[i];
    }
    delete[] shapes;

    return 0;
}