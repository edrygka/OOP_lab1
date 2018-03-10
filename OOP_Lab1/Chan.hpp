//
//  Chan.hpp
//  OOP_Lab1
//
//  Created by Eduard on 01.03.2018.
//  Copyright © 2018 Macbook. All rights reserved.
//

#ifndef Chan_hpp
#define Chan_hpp

#include <stdio.h>
#include <iostream>
#include "Device.hpp"

class Сhan{
private:
    static int summ;
    int channelCount;
    Device *dev;
public:
    Сhan();
    Сhan(Device *d);
    Сhan(const Сhan &src);
    ~Сhan();
    int getSum(){return this->summ;};
    int getCount(){return this->channelCount;};
    void showAllInfo();
    void addDevice(Device *n);
    void showInfo(int count);
};

#endif /* Channel_hpp */
