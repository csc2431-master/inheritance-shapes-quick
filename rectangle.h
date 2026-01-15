#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"
#include <string>
using std::string;

class Rectangle: public Shape{
private:
    double _length;
    double _width;
public:
    Rectangle(double length, double width);
    ~Rectangle();
    virtual double Perimeter()const; // Override base class method
    virtual double Area()const;
    virtual string ToString()const;
    double GetDiagonal()const;
};

#endif