#include "Rectangle.h"

Rectangle::Rectangle(Point p1, Point p3)
    : Shape("Rectangle"), p1(p1), p3(p3), p2(p1.x, p3.y), p4(p3.x,p1.y) {}

double Rectangle::area() const {
    return 0;
}

double Rectangle::perimeter() const {
    return 0;
}
std::vector<Point> Rectangle::getpoints() const{
    std::vector<Point> points;
    points.push_back(p1);
    points.push_back(p2);
    points.push_back(p3);
    points.push_back(p4);
    return points;
}