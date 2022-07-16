#include <iostream>
#include <stdexcept>
#include "Array.h"

using namespace std;
Array::Array(size_t arraySize)
    : size{(arraySize > 0 ? arraySize
            : throw invalid_argument{"Array size must be greather than 0"})},
    ptr{new double[size]{}} { // {} allows to null the array 
        /*Empty body*/
}

Array::Array(const Array& arrayToCopy)
    : size{arrayToCopy.size}, ptr{new double[size]} {
        for (size_t i{0}; i < size; ++i) {
            ptr[i] = arrayToCopy.ptr[i];
        }
    }

Array::~Array() {
    delete[] ptr;
}

size_t Array::getSize() const { 
    return size;
}

double Array::arraySumFinder(const Array& vector) const {
    double sum = 0.;
    for (int i{0}; i < vector.size; ++i) {
        sum += vector.ptr[i];
    }
    return sum;
}

const Array& Array::operator=(const Array& right) {
    if (&right != this) {
        if (size != right.size) {
            delete[] ptr;
            size = right.size;
            ptr = new double[size];
        }
        for (size_t i{0}; i < size; ++i) {
            ptr[i] = right.ptr[i];
        }
    }
    return *this;
}

const Array Array::operator+(const Array& right) {
    if (this->size == right.size) {
        Array tmp{this->size};
        for (int i{0}; i < right.size; ++i) {
            tmp.ptr[i] = ptr[i] + right.ptr[i];
        }
        return tmp;
    } else {
        throw length_error {"The right Array must be equal to the left"};
    }
}

const Array Array::operator-(const Array& right) {
    if (this->size == right.size) {
        Array tmp{this->size};
        for (int i{0}; i < right.size; ++i) {
            tmp.ptr[i] = ptr[i] - right.ptr[i];
        }
        return tmp;
    } else {
        throw length_error {"The right Array must be equal to the left"};
    }
}

const Array Array::operator*(double num) {
    Array tmp{this->size};
    for (int i{0}; i < this->size; ++i) {
        tmp.ptr[i] = ptr[i] * num;
    }
    return tmp;
}

const Array Array::operator/(double num) {
    Array tmp{this->size};
    for (int i{0}; i < this->size; ++i) {
        tmp.ptr[i] = ptr[i] / num;
    }
    return tmp;
}

bool Array::operator>(const Array& comp) {
    if (arraySumFinder(*this) > arraySumFinder(comp)) {
        cout << arraySumFinder(*this) << endl;
        cout << arraySumFinder(comp) << endl;
        return true;
    }
    return false;
}

bool Array::operator<(const Array& comp) {
    if (arraySumFinder(*this) < arraySumFinder(comp)) {
        return true;
    }
    return false;
}







bool Array::operator==(const Array& right) const {
    if (size != right.size) {
        return false;
    }

    for (size_t i{0}; i < size; ++i) {
        if (ptr[i] != right.ptr[i]) {
            return false;
        }
    }
    return true;
}

bool Array::operator!=(const Array& right) const {
    if (size != right.size) {
        return true;
    }

    for (size_t i{0}; i < size; ++i) {
        if (ptr[i] != right.ptr[i]) {
            return true;
        }
    }
    return false;
}

double& Array::operator[](int subscript) {
    if (subscript < 0 || subscript >= size) {
        throw out_of_range{"Subscript out of range"};
    }

    return ptr[subscript];
}

double Array::operator[](int subscript) const {
    if (subscript < 0 || subscript >= size) {
        throw out_of_range{"Subscript out of range"};
    }

    return ptr[subscript];
}

istream& operator>>(istream& input, Array& a) {
    for (size_t i{0}; i < a.size; ++i) {
        input >> a.ptr[i];
    }

    return input;
}

ostream& operator<<(ostream& output, const Array& a) {
    for (size_t i{0}; i < a.size; ++i) {
        output << a.ptr[i] << " ";
    }

    output << endl;
    return output;
}