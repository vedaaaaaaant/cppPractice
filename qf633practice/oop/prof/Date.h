#ifndef DATE_H
#define DATE_H

#include <iostream>

class datetime_t { // hold date[time] (interpreted as UTC)
public:
    int year;
    int month;
    int day;
    int hour = 0;
    int min = 0;
    int sec = 0;
    datetime_t(int y, int m, int d, int hour_ = 0, int min_ = 0, int sec_ = 0) : year(y), month(m), day(d), hour(hour), min(min), sec(sec_) {};
    datetime_t(){}
};

double operator-(const datetime_t& d1, const datetime_t& d2);
std::ostream& operator<<(std::ostream& os, const datetime_t& date);
std::istream& operator>>(std::istream& is, datetime_t& date);

//typedef datetime_t Date;  // making an alia to accomodate legacy code
#endif
