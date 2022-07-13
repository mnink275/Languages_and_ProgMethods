#include "Complex.cpp"


int main()
{
    Complex cplx(2,3);  // Первое число: (2 + 3i).
    cplx.add(4,5);  // Добавляю (4 + 5i).
    cplx.print_complex_number();

    cplx.substract(4,5);  // Вычитаю (4 + 5i).
    cplx.print_complex_number();

    return 0;
}
