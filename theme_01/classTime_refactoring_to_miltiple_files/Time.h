// Header file.
// Объявление класса Time.

// include guard (защищают от повторного декларирования класса, если заголовочный файл вызывается в нескольких *.cpp).
#ifndef MY_CLASS_H      //  if not defined, determines if provided macros does not exists (if it does, entire code berween #indef and #endif will be skipped).
#define MY_CLASS_H      // Defines the macros.


class Time {    // Класс является абстрактным типом данных (АТД).
public:     // Спецификатор доступа, открытые элементы.
    Time();     // Конструктор. В нём можно инициализировать значения данных-элементов (атрибутов). Можно устанавливать значения по умолчанию (int = 0 в аргументах). 
    void setTime(int, int, int);  // Открытые функции (методы класса) - это интерфейс класса, они доступны клиентам. 
                                  // Функции являются прототипами (происходит только их объявление).
    void setHour(int);
    void setMinute(int);
    void setSecond(int);

    int getHour();
    int getMinute();
    int getSecond();

    void printTime();
//    ~Time();        // Деструктор. Срабатывает при выходе из области видимости, в которой был вызван объект класа Time (и, соответственно, вызван его деструктор).
private:        // Спецификатор доступа, скрывает элементы от клиентов.
    int hour;       // Данные-элемента класса, используются в функциях-элементах.
    int minute;
    int second;
};


#endif      // Closes off #ifndef directive.