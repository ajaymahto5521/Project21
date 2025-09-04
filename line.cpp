#include "Line.h"
#include <cmath>
Line::Line(Point a, Point b) : Shape("Line"), p1(a), p2(b) {}

double Line::length() const
{
    double dx = p2.getX() - p1.getX();
    double dy = p2.getY() - p1.getY();
    return sqrt(dx * dx + dy * dy);
}
std::vector<Point> Line::getpoints() const{
    std::vector<Point> points;
    points.push_back(p1);
    points.push_back(p2);
    return points;
}