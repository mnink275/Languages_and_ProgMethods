#ifndef EMPLOY1_H
#define EMPLOYl_H


class Employee {
public:
    Employee(const char*, const char*);
    ~Employee(); // деструктор
    const char *getFirstName() const;
    const char *getLastName() const;
    // Статическая функция-элемент. "Не видит" обычные данные-элементы, только
    // статические данные-элементы.
    static int getCount();
private:
    char *firstName;
    char *lastName;
    // Статическая переменная "число созданных объектов".
    // Область действия - Класс. Общая для всех классов.
    static int count;
};


#endif