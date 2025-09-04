#pragma once

class Point
{
public:
    double x;
    double y;

public:
    Point(double a, double b);
    double getX() const;
    double getY() const;

    double area() const;
    double perimeter() const;
};