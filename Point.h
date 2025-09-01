#pragma once
#include "Shape.h"

class Point : public Shape
{
private:
    double x;
    double y;

public:
    Point(double a, double b);
    double getX() const;
    double getY() const;

    double area() const;
    double perimeter() const;
};