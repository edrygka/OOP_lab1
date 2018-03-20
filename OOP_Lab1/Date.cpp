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
    this->day = ltm->tm_mday;
    this->month = 1 + ltm->tm_mon;
    this->year = 1900 + ltm->tm_year;
    cout << "Date constructor with current date" << endl;
}

Date::Date(string _keyInput){
    cout << "input day" << endl;
    cin >> this->day;
    cout << "input month" << endl;
    cin >> this->month;
    cout << "input year" << endl;
    cin >> this->year;
    cout << "Date constructor by default" << endl;
}

Date::Date(int _day, int _month, int _year){
    this->day = _day;
    this->month = _month;
    this->year = _year;
    cout << "Date constructor with params" << endl;
}

Date::Date(const Date &src){
    this->day = src.day;
    this->month = src.month;
    this->year = src.year;
}

Date::~Date(){
    cout << "Date destructor" << endl;
}

Date &Date::setDay(int _day){
    this->day = _day;
    return *this;
}

Date &Date::setMonth(int _month){
    this->month = _month;
    return *this;
}

Date &Date::setYear(int _year){
    this->year = _year;
    return *this;
}

Date& Date::operator=(const Date& date){
    this->year = date.year;
    this->month = date.month;
    this->day = date.day;
    return *this;
}

ostream& operator << (ostream& s, const Date& d){
    return s << " Day: " << d.day << " Month: " << d.month << " Year: " << d.year << endl;
}

