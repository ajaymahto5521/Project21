#include "point.h"
Point::Point(double a, double b)
    : Shape("Point"), x(a), y(b) {}

double Point::area() const
{
    return 0;
}
double Point::perimeter() const
{
    return 0;
}