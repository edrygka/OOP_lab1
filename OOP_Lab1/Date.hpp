//
//  Date.hpp
//  OOP_Lab1
//
//  Created by Eduard on 17.02.2018.
//  Copyright © 2018 Macbook. All rights reserved.
//

#ifndef Date_hpp
#define Date_hpp

#include <stdio.h>
#include <iostream>

class Date{
private:
    int day, month, year;
public:
    Date();
    Date(std::string _now);
    Date(int _day, int _month, int _year);
    Date(const Date &src);
    int getDay(){return this->day;};
    int getMonth(){return this->month;};
    int getYear(){return this->year;};
    Date &setDay(int _day);
    Date &setMonth(int _month);
    Date &setYear(int _year);
    void outputDate();
    friend std::ostream& operator << (std::ostream& s, const Date& d);
    ~Date();
};

#endif /* Date_hpp */
