//
//  Date.hpp
//  OOP_def
//
//  Created by Eduard on 03.04.2018.
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
    Date(std::string _keyInput);
    Date(int _day, int _month, int _year);
    Date(const Date &src);
    int getDay(){return this->day;};
    int getMonth(){return this->month;};
    int getYear(){return this->year;};
    Date &setDay(int _day);
    Date &setMonth(int _month);
    Date &setYear(int _year);
    Date& operator=(const Date& date);
    friend std::ostream& operator << (std::ostream& s, const Date& d);
    ~Date();
};

#endif /* Date_hpp */
