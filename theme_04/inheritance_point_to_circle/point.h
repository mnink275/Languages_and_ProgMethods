#ifndef POINT_H
#define POINT_H
#include <iostream>

class Point {
    friend std::ostream& operator<<(std::ostream&, const Point&);
public:
    Point(double = 0., double = 0.);
    void setPoint(double, double);
    double getX() const {return x;}
    double getY() const {return y;}
protected:  // protected даёт доступ к элементам базового класса (Point)
            // производным классам.
    double x, y;
};

#endif