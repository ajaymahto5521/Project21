#pragma once
#include "Shape.h"
#include "point.h"
#include<vector>

class Line : public Shape
{
private:
    Point p1;
    Point p2;

public:
    Line(Point a, Point b);
    double length() const;
    std::vector<Point> getpoints() const; 
};