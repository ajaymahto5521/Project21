#include "Circle.h"
#include "Line.h"
#include <cmath>

Circle::Circle(Point p1,Point p2) : Shape("Circle"), p1(p1), p2(p2) {}

double Circle::radius() const{
    Line l(p1,p2);
    return l.length();
}

double Circle::area() const {
    return M_PI * radius() * radius();
}

double Circle::perimeter() const {
    return 2 * M_PI * radius();
}

std::vector<Point> Circle::getpoints() const{
    std::vector<Point> points;
    points.push_back(p1);
    points.push_back(p2);
    return points;
}