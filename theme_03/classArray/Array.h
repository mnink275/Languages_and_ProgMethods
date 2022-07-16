#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

class Array {
    friend std::ostream& operator<<(std::ostream&, const Array&);
    friend std::istream& operator>>(std::istream&, Array&);
public:
    explicit Array(size_t = 10); // explicit - запрещаем неявное преобразование типов.
    Array(const Array&);
    size_t getSize() const;
    const Array& operator=(const Array&);
    bool operator==(const Array&) const;
    bool operator!=(const Array&) const;
    double& operator[](int);
    double operator[](int) const;

    const Array operator+(const Array&);
    const Array operator-(const Array&);
    const Array operator*(double);
    const Array operator/(double);

    bool operator>(const Array&);
    bool operator<(const Array&);
    ~Array();
private:
    double arraySumFinder(const Array&) const; // Функция-утилита
    size_t size;
    double* ptr;
};


#endif