#include <iostream>
#include <vector>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Line.h"
#include "PoInt.h"
#include "Filereader.h"

int main()
{
    std::vector<Shape *> shapes;
    Point p1(3.4, 4.8);
    Point p2(5.7, 8.6);

    Point a(0, 0);
    Point b(0, 5);
    Point c(5, 0);
    shapes.push_back(new Circle(5.0));
    shapes.push_back(new Rectangle(4.0, 6.0));
    shapes.push_back(new Triangle(a, b, c));
    shapes.push_back(new Line(p1, p2));
    shapes.push_back(new Point(3.4, 5.7));

    Filereader fileinput("Shape.dat");
    fileinput.FileWriting(shapes);

    // Clean up memory
    for (Shape *shape : shapes)
    {
        delete shape;
    }

    std::cin.get();
    std::cin.get();

    return 0;
}