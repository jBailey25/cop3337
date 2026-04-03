#include "point.hpp"
#include <string>

Point::Point(int x, int y) {
    this->x = x;
    this->y = y;
}

bool Point::operator==(const Point& other) const {
    return (x == other.x && y == other.y);
}

bool Point::operator!=(const Point& other) const {
    return !(*this == other);
}

int& Point::operator[](int index) {
    return (index == 0) ? x : y;
}

std::string Point::toString() const{
    return "(" + std::to_string(x) + ", " std::to_string(y);
}

Point& Point::operator+(const Point&other) const{
    return Point(x + other.x, y + other.y);
}

bool Point::operator!=(const Point& other) const{
    
    return (x != other.x && y != other.y);     //OR  return(*this == other);
}

Point& Point::operator+=(const Point&other){
    // x *=
    //Point temp(x, y); OR:
    *this = *this + other; // this uses the default copy constructor
    *this = *this + other;
    return *this;

}

Point Point::operator++(){
    x+=1;
    y+= 1;
    return *this;
}

Point Point::operator++(int){
    Point temp(x, y);

    x+= 1;
    y += 1;

    return temp;
    //return Point(x++, y++); this also returns the old values, THEN increments
}



