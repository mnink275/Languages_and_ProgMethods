#include <iostream>
#include "Employee.cpp"
main()
{
    std::cout << std::endl << "Количество служащих перед созданием объектов равно "
    << Employee::getCount() << std::endl; // используется имя класса.

    Employee *elPtr = new Employee("Susan" , "Baker");
    Employee *e2Ptr = new Employee("Robert", "Jones");

    std::cout << "Количество служащих после создания объектов равно "
    << elPtr->getCount () << std::endl;
    std::cout << std::endl << "Служащий 1: " << elPtr->getFirstName()
    << " " << elPtr->getLastName() << std::endl << "Служащий 2: "
    << e2Ptr->getFirstName() << " " << e2Ptr->getLastName()
    << std::endl << std::endl;
    delete elPtr; // освобождение памяти.
    delete e2Ptr; // освобождение памяти.
    std::cout << "Количество служащих после удаления равно "
    << Employee::getCount() << std::endl;
    return 0;
}