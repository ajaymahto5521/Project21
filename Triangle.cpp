#include "Triangle.h"
#include "Line.h"
#include <cmath>
#include <vector>

Triangle::Triangle(Point a, Point b, Point c)
    : Shape("Triangle"), p1(a), p2(b), p3(c) {}


double Triangle::area() const {
    return 0;
}

double Triangle::perimeter() const {
    return 0;
}
std::vector<Point> Triangle::getpoints() const{
    std::vector<Point> points;
    points.push_back(p1);
    points.push_back(p2);
    points.push_back(p3);
   
    return points;
}
