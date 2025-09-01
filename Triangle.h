#pragma once
#include "Shape.h"
#include "Point.h"

class Triangle : public Shape
{
private:
    Point p1;
    Point p2;
    Point p3;

public:
    Triangle(Point a, Point b, Point c);

    double perimeter() const;
    double area() const;
};