#ifndef SHAPE_H
#define SHAPE_H

#include <string>
using std::string;

class Shape{ // Abstract

public:
    Shape();
    ~Shape();
    virtual double Perimeter()const=0;
    virtual double Area()const=0; // Virtual pure
    virtual string ToString()const;
};


#endif