//
//  Device.cpp
//  OOP_Lab1
//
//  Created by Eduard on 17.02.2018.
//  Copyright © 2018 Macbook. All rights reserved.
//

#include "Device.hpp"
#include <iostream>

using namespace std;

Device::Device(){
    senType = TEMPERATURE;
    D = new Date;
    cout << "Device constructor by default " << endl;
}

Device::Device(Date *_D, SensorType _senType){
    senType = _senType;
    D = _D;
    cout << "Device constructor with params" << endl;
}

Device::Device(const Device &src){
    D = src.D;
}

Device::~Device(){
    cout << "Device destructor" << endl;
    //delete D;
}

Device &Device::setDate(Date *_D){
    D = &(*_D);
    return *this;
}

Device &Device::setSenType(SensorType _senType){
    senType = _senType;
    return *this;
}

ostream& operator << (ostream& s, const Device& d) {
    return s << "Device output\n Sensor type: " << d.senType << " Date: " << *d.D << endl;
}


