#ifndef DATE_H
#define DATE_H

#include <vector>
#include <iostream>

class Date {
    friend std::ostream& operator<<(std::ostream&, const Date&);
public:
    Date(int m = 1, int d = 1, int y = 1900);
    void setDate(int, int, int);
    Date& operator++();
    Date operator++(int);
    Date& operator +=(unsigned int);
    static bool leapYear(int);
    bool endOfMonth(int) const;
private:
    unsigned int month;
    unsigned int day;
    unsigned int year;

    static const std::vector<unsigned int> days;
    void helpIncrement();
};

#endif