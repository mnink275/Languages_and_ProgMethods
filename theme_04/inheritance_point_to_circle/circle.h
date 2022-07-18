#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
#include <iomanip>
#include "point.h"

class Circle: public Point {
    friend std::ostream &operator<<(std::ostream &, const Circle &);
public:
    Circle(double r = 0., double x = 0, double y =  0);
    void setRadius(double);
    double getRadius() const;
    double area() const;
protected:
    double radius;
};

#endif