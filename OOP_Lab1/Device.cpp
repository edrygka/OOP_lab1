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

int Device::id = 0;

Device::Device() : Sensor(2, 3, 'h'){
    id++;
    this->senType = TEMPERATURE;
    this->D = Date();
    cout << "Device constructor by default " << endl;
}

Device::Device(SensorType _senType) : Sensor(3, 4, 'a'){
    id++;
    this->senType = _senType;
    this->D = Date(21, 12, 1998);// My Birthday ;)
}

Device::Device(Date _D, SensorType _senType){
    id++;
    this->senType = _senType;
    this->D = _D;
    cout << "Device constructor with params" << endl;
}

Device::Device(const Device &src){
    this->D = src.D;
    this->senType = src.senType;
}

Device::~Device(){
    id--;
    cout << "Device destructor" << endl;
}

Device &Device::setDate(Date _D){
    this->D = _D;
    return *this;
}

Device &Device::setSenType(SensorType _senType){
    this->senType = _senType;
    return *this;
}

ostream& operator << (ostream& s, const Device& d) {
    return s << "Device output\n Sensor type: " << d.senType << "\n Date: " << d.D << "\n Sensor params:\n \tUnit - " << d.unit << "\n \tRange - " << d.range << "\n \tSize - " << d.size << endl;
}

Device &Device::operator=(const Device &src){
    this->D = src.D;
    this->senType = src.senType;
    this->range = src.range;
    this->unit = src.unit;
    this->size = src.size;
    return *this;
}

