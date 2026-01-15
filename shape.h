#ifndef SHAPE_H
#define SHAPE_H

#include <string>
using std::string;

class Shape{

public:
    Shape();
    ~Shape();
    virtual double Perimeter()const;
    virtual double Area()const;
    virtual string ToString()const;
};


#endif