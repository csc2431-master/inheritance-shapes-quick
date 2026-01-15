#include "circle.h"
#include <cmath>

Circle::Circle(double radius): _radius(radius){

}
Circle::~Circle(){

}
double Circle::Area()const{
    return M_PI * _radius * _radius;
}
double Circle::Perimeter()const{
    return 2 * M_PI * _radius;
}
string Circle::ToString()const{
    return "Circle";
}
