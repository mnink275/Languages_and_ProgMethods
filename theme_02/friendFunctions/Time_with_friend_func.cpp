// Определение функций-элементов класса Time.

#include <iostream>
#include "Time_with_friend_func.h"

////////////////////////////////////////////////////////////////////////////////
void setCustomHour(Time& t, int hr) {       // Дружественная функция может
                                            // изменять скрытые данные.
    t.hour = hr;
}
////////////////////////////////////////////////////////////////////////////////


Time::Time() {      // Time::ФУНКЦИЯ позволяет использовать данные-элементы без бинарной операции разрешения области дейстия (::).
    hour = minute = second = 0;
}

void Time::printTime() {        // Функция print не получает аргументов. Дело в том, что она неявно знает, что использует данные-элементы объекта типа Time;
    std::cout << hour << ":" << minute << ":" << second << std::endl;
}

void Time::setTime(int h, int m, int s) {
    hour = (h > 0 && h <= 24) ? h : 0;      // Условный тернарный оператор.
    minute = (m > 0 && m <= 60) ? m : 0;
    second = (s > 0 && s <= 60) ? s : 0;
}

void Time::setHour(int h) {
    hour = (h > 0 && h <= 24) ? h : 0;
}

void Time::setMinute(int m) {
    minute = (m > 0 && m <= 60) ? m : 0;
}

void Time::setSecond(int s) {
    second = (s > 0 && s <= 60) ? s : 0;
}

int Time::getHour() {
    return hour;
}

int Time::getMinute() {
    return minute;
}

int Time::getSecond() {
    return second;
}
