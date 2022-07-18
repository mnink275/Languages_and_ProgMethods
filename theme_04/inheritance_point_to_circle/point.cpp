#include <iostream>
#include "point.h"

Point::Point(double a, double b) {
    setPoint(a,b);
}

void Point::setPoint(double a, double b) {
    x = a;
    y = b;
}

std::ostream &operator<<(std::ostream &output, const Point &p) {
    output << "[" << p.x << ", " << p.y << "]";
    return output;
}