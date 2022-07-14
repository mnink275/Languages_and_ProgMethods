// Определения функций-элементов класса Employee
#include <iostream>
#include <cstring>
#include <cassert>
#include "employee.h"
// Задание начального значения статического элемента данных
int Employee::count = 0;

// Определение статической функции-элемента, которая
// возвращает количество созданных объектов,
int Employee::getCount() {return count;}

// Конструктор динамически выделяет память для
// имени и фамилии и использует strcpy, чтобы
//скопировать имя и фамилию в объект.
Employee::Employee(const char *first, const char *last) {
    firstName = new char[strlen(first) + 1];
    assert(firstName != 0) ; // проверка выделения памяти
    strcpy(firstName, first);
    lastName = new char[strlen(last) + 1];
    assert(lastName != 0); // проверка выделения памяти
    strcpy(lastName, last);
    ++count; // увеличение статического счетчика служащих
    std::cout << "Конструктор Employee() для " << firstName << ' '
              << lastName << " вызван." << std::endl;
}

// Деструктор освобождает динамически выделенную память
Employee::~Employee() {
    std::cout << "~Employee() вызван для " << firstName << ' ' << lastName
            << std::endl;
    delete [] firstName; // освобождение памяти
    delete [] lastName; // освобождение памяти
    --count; // уменьшение статического счетчика служащих
}

// Возвращение имени служащего
const char *Employee::getFirstName() const {
// Const перед возвращаемым типом предотвращает изменение клиентом закрытых
// данных. Клиент должен скопировать возвращенную строку перед тем, как
// деструктор освободит динамическую память; это позволит избежать
// неопределенного указателя.
    return firstName;
}

// Возвращение фамилии служащего
const char *Employee::getLastName() const {
// Const перед возвращаемым типом предотвращает изменение клиентом закрытых
// данных. Клиент должен скопировать возвращенную строку перед тем, как
// деструктор освободит динамическую память; это позволит избежать
// неопределенного указателя.
    return lastName;
}