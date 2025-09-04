#pragma once
#include "Shape.h"
#include "Point.h"
#include <vector>

class Rectangle : public Shape
{
private:
   Point p1;
   Point p3;
   Point p2;
   Point p4;

public:
    Rectangle(Point p1, Point p3);

    double area() const;
    double perimeter() const;
    std::vector<Point> getpoints() const;
};