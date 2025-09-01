#pragma once
#include <string>

// Abstract Base Class (Abstraction)
class Shape
{
protected:
    std::string name; // Encapsulation (private/protected data)

public:
    Shape(const std::string &n);
    virtual ~Shape();

    // Common method
    std::string getName() const;
};