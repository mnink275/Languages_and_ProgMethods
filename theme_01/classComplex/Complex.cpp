#include <iostream>
#include "Complex.h"

Complex::Complex(double re, double im) {
    real = re;
    imaginary = im;
}


void Complex::add(double re, double im) {
    ans_real = real + re;
    ans_imaginary = imaginary + im;
}


void Complex::substract(double re, double im) {
    ans_real = real - re;
    ans_imaginary = imaginary - im;
}


void Complex::print_complex_number() {
    std::cout << "(" << ans_real << "," << ans_imaginary << ")\n";  
}
