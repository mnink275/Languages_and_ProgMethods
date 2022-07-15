// Time.СРР
// Определения функций-элементов класса Time.
#include "Time.h"
#include <iostream>
// Функция конструктор для задания начальных значений закрытым данным.
// Вызов функций-элементов setTime для установки переменных.
// По умолчанию значения равны 0 (смотри описание класса).
Time::Time(int hr, int min, int sec) { setTime(hr, min, sec); }
// установка часа, минут и секунд.
Time &Time::setTime(int h, int m, int s) {
    hour = (h >= 0 && h<24) ? h: 0;
    this->minute = (m >= 0 && m < 60) ? m : 0;  // Можно так.
    (*this).second = (s >= 0 && s < 60) ? s : 0;    //А можно так.
    return *this; // возможность сцепления!
}
// Установка значения часа
Time &Time::setHour(int h) {
    hour = (h >= 0 && h < 24) ? h : 0;
    return *this; // возможность сцепления!
}
// Установка значения минут
Time &Time::setMinute(int m) {
    minute = (m >= 0 && m < 60) ? m : 0;
    return *this; // возможность сцеплени!
}
// Установка значения секунд
Time &Time::setSecond(int s) {
second = (s >= 0 && s < 60) ? s : 0;
return *this; // возможность сцепления
}
// Получение значения часа
int Time::getHour() const { return hour; }
// Получение значения минут
int Time::getMinute() const { return minute; }
// Получение значения секунд
int Time::getSecond() const { return second; }
// Отображение времени в военном формате: HH:MM:SS
void Time::printMilitary() const {
std::cout << (hour < 10 ? "0":"") << hour << ":"
<< (minute < 10 ? "0":"") << minute << ":"
<< (second < 10 ? "0":"") << second;
}
// Отображение времени в стандартном формате: HH:MM:SS AM (или РМ)
void Time::printStandard() const {
std::cout << ((hour == 0 || hour ==12) ? 12 : hour % 12) << ":"
<< (minute < 10 ? "0" : "") << minute <<  ":"
<< (second < 10 ? "0" : "") << second
<< (hour < 12 ? "AM": "PM");
}