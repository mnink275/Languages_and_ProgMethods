#include "circle.h"

Circle::Circle(double r, double a, double b)
        : Point(a, b) { // Вызов конструктора базового класса.
    radius = r;
}

void Circle::setRadius(double r) {
    radius = r;
}

double Circle::getRadius() const {
    return radius;
}

double Circle::area() const {
    return 3.14159 * radius * radius;
}

std::ostream &operator<<(std::ostream &output, const Circle &c) {
    output << "Центр = [" << c.x << ", " << c.y << "]; Радиус = "
           << std::setiosflags(std::ios::showpoint) << std::setprecision(3)
           << c.radius;
    return output;
}