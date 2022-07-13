// TIME.H
// Объявление класса Time.
// Функции-элементы определены в Time.CPP
#ifndef TIME_H
#define TIME_H


class Time {
public:
    Time(int = 0, int = 0, int = 0); // конструктор по умолчанию
                                     // функции записи "set"
    Time &setTime(int, int, int); // установка часа, минут
                                  // и секунд
    Time &setHour(int); // установка часа
    Time &setMinute(int); // установка минут
    Time &setSecond(int); // установка секунд
                          // функции чтения get (обычно объявляются const)
    int getHour() const; // возвращает значение часа
    int getMinute() const; // возвращает значение минут
    int getSecond() const; // возвращает значение секунд
    // функции печати (обычно объявляются const)
    void printMilitary() const; // печать военного
                                // времени
    void printStandard() const; // печать стандартного
                                // времени
private:
    int hour;
    int minute;
    int second;
};


#endif