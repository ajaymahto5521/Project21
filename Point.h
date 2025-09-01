#pragma once
#include "Shape.h"

class Point : Public Shape
{
private:
    double x;
    double y;

public:
    point(double a, double b)

        double area() const override;
    double perimeter() const override;
};