#pragma once
#include "Shape.h"
#include "Point.h"
#include <vector>

class Circle : public Shape
{ // Inheritance
private:
    Point p1;
    Point p2;

public:
    Circle(Point p1, Point p2);
    double radius() const;
    double area() const;      // Polymorphism
    double perimeter() const; // Polymorphism
    std::vector<Point> getpoints() const;
};