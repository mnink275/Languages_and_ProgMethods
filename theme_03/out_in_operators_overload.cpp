// Перегрузка операций поместить в поток и взять из потока.
#include <iostream>
#include <iomanip>
#include <string>
class PhoneNumber{
    friend std::ostream &operator << (std::ostream &, const PhoneNumber &);
    friend std::istream &operator >> (std::istream &, PhoneNumber &);
private:
    std::string areaCode; //трехцифровой код местности
    std::string exchange; //трехцифровой коммутатор 
    std::string line; //четырехцифровая линия
};
// Перегруженная операция поместить в поток
// (она не может быть функцией элементом).
std::ostream& operator<<(std::ostream& output, const PhoneNumber &num)
{
    output << "(" << num.areaCode << ") " << num.exchange << "-" 
           << num.line << "\n";
    return output; // разрешает cout << a << b <<c;
}
// Перегруженная операция взять из потока
std::istream& operator>> (std::istream &input, PhoneNumber &num)
{
    input.ignore(); //пропуск (
    input >> std::setw(3) >> num.areaCode; //ввод кода местности
    input.ignore(2); //пропуск ) и пробела
    input >> std::setw(3) >> num.exchange; //ввод коммутатора
    input.ignore(); //пропуск дефиса (-)
    input >> std::setw(4) >> num.line; //ввод линии
    return input; //разрешает cin >> а >> Ь >>с;
}

main ()
{
    PhoneNumber phone; // создание объекта phone
    std::cout << "Введите номер телефона в "
    << "виде (123) 456-7890:" << std::endl;
    // cin >> phone активизирует функцию operator>>
    // путем вызова operator>> (cin, phone).
    std::cin >> phone;
    // cout << phone активизирует функцию operator<<
    // путем вызова operator<< (cout, phone).
    std::cout << "Был введен номер телефона:"<< std::endl
    << phone << std::endl;
    return 0;
}


