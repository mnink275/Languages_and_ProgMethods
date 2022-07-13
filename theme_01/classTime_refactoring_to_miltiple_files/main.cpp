#include <iostream>
#include "Time.cpp"


void incrementMinutes(Time &tt, int incr) {
    tt.setMinute(tt.getMinute() + incr);
    std::cout << "Увеличим время на " << incr << " минут. Текущее время: ";

}
int main()
{  
    Time t;     // t является объектом типа Time.

    std::cout << "Initial time value: ";
    t.printTime();      // Вызов функции-элемента класса через точку, как в питоне.
    t.setTime(16,10,33);
    std::cout << "Current time value: ";
    t.printTime();

    t.setHour(17);
    t.setMinute(34);
    t.setSecond(25);
    t.printTime();

    incrementMinutes(t, 5);
    t.printTime();

    return 0;
}
// Икапсулируя операции, скрывая реализацию, мы исключаем возможность для других частей программы оказаться
// зависимыми от особенностей реализации. Реализация меняется, интерфейс остаётся тем же.