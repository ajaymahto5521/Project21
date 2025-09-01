#include "Filereader.h"
#include <iostream>
Filereader::Filereader(const std::string &n)
{
    fout.open(n);
}
Filereader::~Filereader()
{
    if (fout.is_open())
    {
        fout.close();
    }
}
void Filereader::FileWriting(std::vector<Shape *> shapes)
{
    for (Shape *shape : shapes)
    {
        fout << shape->getName();

        if (Circle *cir = dynamic_cast<Circle *>(shape))
        {
            fout << "\nArea: " << cir->area() << "\n";
            fout << "Perimeter: " << cir->perimeter() << "\n";
        }

        if (Rectangle *rec = dynamic_cast<Rectangle *>(shape))
        {
            fout << "\nArea: " << rec->area() << std::endl;
            fout << "Perimeter: " << rec->perimeter() << "\n";
        }
        if (Triangle *tri = dynamic_cast<Triangle *>(shape))
        {
            fout << "\nArea: " << tri->area() << std::endl;
            fout << "Perimeter: " << tri->perimeter() << "\n";
        }

        if (Line *line = dynamic_cast<Line *>(shape))
        {
            fout << "\nLength: " << line->length() << "\n";
        }
        fout << "\n";
    }
}
