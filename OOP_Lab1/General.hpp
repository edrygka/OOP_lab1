//
//  General.hpp
//  OOP_Lab1
//
//  Created by Eduard on 05.03.2018.
//  Copyright © 2018 Macbook. All rights reserved.
//

#ifndef General_hpp
#define General_hpp

#include <stdio.h>
#include <iostream>
#include "Device.hpp"

class General{
private:
    static int summ;
    int genCount;
    int size;
    Device *dev;
public:
    General();
    General(Device *newDev, int _size);
    General(const General &src);
    ~General();
    General &setGen(Device *newDev, int _size);
    int getSum(){return this->summ;};
    int getCount(){return this->genCount;};
    int getGenSize(){return this->size;};
    void addDevice(Device &newDev);
    void delDevice(int _number);
    void showInfo();
};

#endif /* General_hpp */
