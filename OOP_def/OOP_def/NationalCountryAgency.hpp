//
//  NationalCountryAgency.hpp
//  OOP_def
//
//  Created by Eduard on 24.03.2018.
//  Copyright © 2018 Macbook. All rights reserved.
//

#ifndef NationalCountryAgency_hpp
#define NationalCountryAgency_hpp

#include <stdio.h>
#include <iostream>
#include "Date.hpp"

using namespace std;

class Agency{
private:
    Date d;
    char *name;
    int id;
public:
    Agency();
    Agency(Date _d, char *_name, int _id);
    ~Agency();
    Agency &setDate(Date _d);
    Agency &setName(char *_name);
    Agency &setId(int _id);
    Date getDate(){return d;};
    char getName(){return *name;};
    int getId(){return id;};
    friend ostream& operator << (ostream& s, const Agency& A);
};

#endif /* NationalCountryAgency_hpp */
