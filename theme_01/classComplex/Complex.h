#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
public:
    Complex(double = 0., double = 0.);
    void add(double, double);
    void substract(double, double);
    void print_complex_number();
private:
    double real;
    double imaginary;
    double ans_real;
    double ans_imaginary;
};


#endif