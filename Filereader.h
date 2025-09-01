#include <fstream>
#include <vector>
#include <string.h>
#include "Point.h"
#include "Line.h"
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

class Filereader
{
private:
    std::ofstream fout;

public:
    Filereader(const std::string &n);
    ~Filereader();

    void FileWriting(std::vector<Shape *> shapes);
};