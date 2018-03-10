//
//  Date.cpp
//  OOP_Lab1
//
//  Created by Eduard on 17.02.2018.
//  Copyright © 2018 Macbook. All rights reserved.
//

#include "Date.hpp"
#include <ctime>
#include <iostream>

using namespace std;

Date::Date(){
    time_t now = time(0);
    tm *ltm = localtime(&now);
    day = ltm->tm_mday;
    month = 1 + ltm->tm_mon;
    year = 1900 + ltm->tm_year;
    cout << "Date constructor with current date" << endl;
}

Date::Date(string _now){
    cout << "input day" << endl;
    cin >> day;
    cout << "input month" << endl;
    cin >> month;
    cout << "input year" << endl;
    cin >> year;
    cout << "Date constructor by default" << endl;
}

Date::Date(int _day, int _month, int _year){
    day = _day;
    month = _month;
    year = _year;
    cout << "Date constructor with params" << endl;
}

Date::Date(const Date &src){
    day = src.day;
    month = src.month;
    year = src.year;
}

Date::~Date(){
    cout << "Date destructor" << endl;
}

Date &Date::setDay(int _day){
    day = _day;
    return *this;
}

Date &Date::setMonth(int _month){
    month = _month;
    return *this;
}

Date &Date::setYear(int _year){
    year = _year;
    return *this;
}

void Date::outputDate(){
    cout << "Day = " << day << "; Month = " << month << "; Year = " << year << endl;
}

ostream& operator << (ostream& s, const Date& d){
    return s << "Date output\n Day: " << d.day << " Month: " << d.month << " Year: " << d.year << endl;
}

