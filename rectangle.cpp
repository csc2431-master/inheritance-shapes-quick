#include "rectangle.h"

#include <string>
#include <cmath>
using std::string;


Rectangle::Rectangle(double length, double width): _length(length), _width(width){

}
Rectangle::~Rectangle(){

}
double Rectangle::Perimeter()const{
    return 2 * _length + 2 * _width;
} // Override base class method
double Rectangle::Area()const{
    return _length * _width;
}
string Rectangle::ToString()const{
    return "Rectangle";
}
double Rectangle::GetDiagonal()const{
    return sqrt(pow(_width, 2.0) + pow(_length, 2.0));
}
