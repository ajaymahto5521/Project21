#pragma once
#include "Shape.h"
#include "point.h"

class Line : public Shape
{
private:
    Point p1;
    Point p2;

public:
    Line(Point a, Point b);

    double length() const;
};