#include <iostream>
#include <vector>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Line.h"
#include "PoInt.h"
#include "Filewriter.h"
#include"GeometryEngine.h"

int main()
{
    GeometryEngine g;
    g.viewPoints();

    std::cin.get();
    return 0;
}