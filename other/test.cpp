#include <iostream>

class Time {
public:
    Time(int h = 5);
    void printTime() const;
private:
    int hour;
};

Time::Time(int h) {
    hour = h;
}
void Time::printTime() const {
    std::cout << hour;
}

int main()
{  
    Time t;
    t.printTime();
    return 0;
}