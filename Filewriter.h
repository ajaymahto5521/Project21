#pragma once
#include <vector>
#include <string.h>
#include "Point.h"

class Filewriter
{
private:
public:
    Filewriter();
    ~Filewriter();

    void FileWriting(std::vector<Point> point);
};