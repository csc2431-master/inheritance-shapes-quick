#include "circle.h"

Circle::Circle(double radius): _radius(radius){

}
Circle::~Circle(){

}
double Circle::Area()const{
    return 3.1415954 * _radius * _radius;
}
double Circle::Perimeter()const{
    return 2 * 3.1415954 * _radius;
}
string Circle::ToString()const{
    return "Circle";
}
