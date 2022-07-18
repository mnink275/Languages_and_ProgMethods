#include <iomanip>
#include <iostream>
#include <stdexcept>
#include <sstream>
#include <vector>
#include "Employee.cpp"
#include "SalariedEmployee.cpp"
#include "CommissionEmployee.cpp"
#include "BasePlusCommissionEmployee.cpp"
using namespace std;

void virtualViaPointer(const Employee* const baseClassPtr) {
    cout << baseClassPtr->toString() << "\nearned $"
         << baseClassPtr->earnings() << "\n\n";
}

void virtualViaReference(const Employee& baseClassRef) {
    cout << baseClassRef.toString() << "\nearned $"
         << baseClassRef.earnings() << "\n\n";
}

int main() {
    cout << fixed << setprecision(2);

    SalariedEmployee salariedEmployee{
        "John", "Smith", "111-11-1111", 800};
    CommissionEmployee commissionEmployee{
        "Sue", "Jones", "333-33-3333", 10000, .06};
    BasePlusCommissionEmployee basePlusCommissionEmployee{
        "Bob", "Lewis", "444-44-4444", 5000, .04, 300
    };

    cout << "EMPLOYEES PROCESSED INDIVIDUALLY USING STATIC BINDING\n"
         << salariedEmployee.toString() << "\nearned $"
         << salariedEmployee.earnings() << "\n\n"
         << commissionEmployee.toString() << "\nearned $"
         << commissionEmployee.earnings() << "\n\n"
         << basePlusCommissionEmployee.toString() << "\nearned $"
         << basePlusCommissionEmployee.earnings() << "\n\n";

    vector<Employee *> employees{&salariedEmployee, &commissionEmployee,
                                 &basePlusCommissionEmployee};

    cout << "EMPLOYEES PROCESSED POLYMORPHICALLY VIA DYNAMIC BINDING\n\n";
    for(const Employee* employeePtr : employees) {
        virtualViaPointer(employeePtr);
    }

    cout << "VIRTUAL FUNCTION CALLS MADE OFF BASE-CLASS REFERENCES\n";
    for(const Employee* employeePtr : employees) {
        virtualViaReference(*employeePtr);
    }
}

