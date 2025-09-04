#include "GeometryEngine.h"
#include <vector>
#include "Filewriter.h"
#include <iostream>

void GeometryEngine::viewPoints()
{
    std::string select;
    std::cout << "Select names from the list: Point, Line, Triangle, Rectangle, Circle: ";
    std::cin >> select;

    std::vector<Point> shapes;
    double p1x, p1y, p2x, p2y, p3x, p3y;
    std::cout << "Enter 1st point: ";
    std::cin >> p1x >> p1y;
    Point p1(p1x, p1y);

    if (select == "Point")
    {
        shapes.push_back(p1);
    }
    else if (select == "Line")
    {
        std::cout << "Enter 2nd point: ";
        std::cin >> p2x >> p2y;
        Point p2(p2x, p2y);
        Line l(p1, p2);
        shapes = l.getpoints();
    }
    else if (select == "Triangle")
    {
        std::cout << "Enter 2nd point: ";
        std::cin >> p2x >> p2y;
        Point p2(p2x, p2y);
        std::cout << "Enter 3rd point: ";
        std::cin >> p3x >> p3y;
        Point p3(p3x, p3y);
        Triangle t(p1, p2, p3);
        shapes = t.getpoints();
    }
    else if (select == "Rectangle")
    {
        std::cout << "Enter 3rd point: ";
        std::cin >> p3x >> p3y;
        Point p3(p3x, p3y);
        Rectangle r(p1, p3);
        shapes = r.getpoints();
    }
    else if (select == "Circle")
    {
        std::cout << "Enter 2nd point: ";
        std::cin >> p2x >> p2y;
        Point p2(p2x, p2y);
        Circle c(p1, p2);
        shapes = c.getpoints();
    }
    else
    {
        std::cout << "Please check you input again! ";
    }
    Filewriter f;
    f.FileWriting(shapes);
}