#include <iostream>
#include <iomanip>
#include "point.cpp"
#include "circle.cpp"

main() {
    Point *pointPtr, p(3.5, 5.3);
    Circle *circlePtr, c(2.7, 1.2, 8.9);
    
    std::cout << "Point p: " << p << "\nCurcle c: " << c << std::endl;

    // Рассмотрение Circle как Point (видит только часть базового класса).
    pointPtr = &c;
    std::cout << "\nCircle c (через *pointPtr): " << *pointPtr << std::endl;
    
    // Рассмотрение Circle как Point (с помощью приведения типов).
    pointPtr = &c;
    circlePtr = (Circle*) pointPtr;
    std::cout << "\nCircle c (через *circlePtr): \n" << *circlePtr
              << "\nПлощадь c (через circlePtr): "
              << circlePtr->area() << std::endl; 

    // ОПАСНОСТЬ: рассмотрение Point как Circle.
    pointPtr = &p;
    circlePtr = (Circle*) pointPtr;
    std::cout << "\nPoint p (через *circlePtr): \n" << *circlePtr
              << "\nПлощадь объекта circlePtr указывает на: "
              << circlePtr->area() << std::endl; 
}