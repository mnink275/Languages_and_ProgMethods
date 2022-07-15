#include <iostream>

using namespace std;

class Balls {
public:
    Balls(int);
    Balls(const Balls& old);
    ~Balls();
    // int* getData(); // Функция-утилита.
private:
    int Size;
    int* data;
};

Balls::Balls(int size) {
    cout << "Вызвался конструктор: " << this << '\n';
    this->Size = size;
    this->data = new int[size];
    for(int i = 0; i < size; i++)  {
        data[i] = i;
    }
}

Balls::Balls(const Balls& old) {
    cout << "Вызвался конструктор копирования: " << this << '\n';

    // this->data = old.data;   Базовое копирование, побитовое.

    // Правильная реализация, если работаем с динамической памятью:
    this->Size = old.Size; // Копируем Size из "старого" объекта.
    this->data = new int[old.Size];   // Выделяем новую память.
    for(int i = 0; i < old.Size; i++) {   // Копируем данные из "старого"
        this->data[i] = old.data[i];      // объекта в "новый".
    }



    
}


Balls::~Balls() {
    cout << "Вызвался деструктор: " << this << '\n';
    delete[] data;
}

Balls Foo(Balls copy) { // Тут происходит копирование.
    cout << "Вызвалась функция Foo()" << '\n';
    return copy;
}

// int* Balls::getData() {
//     return data;
// }
int main() {
    Balls b(10);
    Foo(b);
}