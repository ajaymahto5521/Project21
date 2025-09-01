#include "point.h"
Point::Point(double a, double b) : Shape("Point"), x(a), y(b) {}

double Point ::getX() const { return x; }
double Point ::getY() const { return y; }
double Point::area() const
{
    return 0;
}
double Point::perimeter() const
{
    return 0;
}