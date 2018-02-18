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
    SensorType type = TEMPERATURE;
    cout << "Device constructor by default" << endl;
    cout << type << " kek" << endl;
}

Device::Device(Date _D, SensorType _senType){
    //sensorType = _senType;
    D = _D;
    cout << "Device constructor with params" << endl;
}

Device::Device(const Device &src){
    D = src.D;
}

Device::~Device(){
    cout << "Device destructor" << endl;
}

Device &Device::setDate(Date _D){
    D = _D;
    return *this;
}


