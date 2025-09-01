#include "Triangle.h"
#include "Line.h"
#include <cmath>

Triangle::Triangle(Point a, Point b, Point c)
    : Shape("Triangle"), p1(a), p2(b), p3(c) {}

double Triangle::perimeter() const
{
    Line l1(p1, p2);
    Line l2(p2, p3);
    Line l3(p1, p3);
    return (l1.length() + l2.length() + l3.length());
}

double Triangle::area() const
{
    // Heron's formula
    Line l1(p1, p2);
    Line l2(p2, p3);
    Line l3(p1, p3);
    double s = perimeter() / 2.0;
    return std::sqrt(s * (s - l1.length()) * (s - l2.length()) * (s - l3.length()));
}