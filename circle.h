#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"
#include <string>
using std::string;

class Circle : public Shape{
private:
    double _radius;
public:
    Circle(double radius);
    ~Circle();
    virtual double Area()const;
    virtual double Perimeter()const;
    virtual string ToString()const;
};


#endif