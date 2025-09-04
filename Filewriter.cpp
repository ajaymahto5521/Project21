#include "Filewriter.h"
#include <fstream>
#include <iostream>

Filewriter::Filewriter() {}
Filewriter::~Filewriter() {}
void Filewriter::FileWriting(std::vector<Point> point)
{
    std::ofstream filew("Ajay.dat");
    for (int i = 0; i < point.size(); i++)
    {
        filew << point[i].x << " " << point[i].y << "\n";
    }
    filew.close();
}
