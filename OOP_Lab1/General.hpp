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
    Device *dev;
public:
    General();
    General(Device *d);
    General(const General &src);
    ~General();
    int getSum(){return this->summ;};
    int getCount(){return this->genCount;};
    void showAllInfo();
    void addDevice(Device *n);
    void showInfo(int count);
};

#endif /* General_hpp */
