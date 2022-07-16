// Перегрузка операций поместить в поток и взять из потока.
#include <iostream>
#include <string>

class String {
public:
    String(std::string);
    bool operator!() const;
private:
    std::string name;
};

String::String(std::string str) {
    name = str;
}

bool String::operator!() const {
    return name == "Niyaz";
}

main () 
{
    std::string firstName;
    std::cin >> firstName;
    String s(firstName);
    std::cout << !s;
    return 0;
}


