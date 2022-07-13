// Сцепление вызовов функций-элементов указателем this
#include <iostream>
#include "Time.cpp"
main() {
    Time t;
    t.setHour(18).setMinute(30).setSecond(22);
    std::cout << "Военное время: ";
    t.printMilitary();
    std::cout << std::endl << "Стандартное время: ";
    t.printStandard();
    std::cout << std::endl << std::endl << "Новое стандартное время: ";
    t.setTime(20, 20, 20).printStandard();
    std::cout << std::endl;
    return 0;
}