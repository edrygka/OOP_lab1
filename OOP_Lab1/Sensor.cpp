//
//  Sensor.cpp
//  OOP_Lab1
//
//  Created by Eduard on 17.02.2018.
//  Copyright © 2018 Macbook. All rights reserved.
//

#include "Sensor.hpp"
#include <iostream>

Sensor::Sensor(){
    this->unit = 1;
    this->range = 1;
    this->size = 'k';
    std::cout << "Sensor constructor by default" << std::endl;
}

Sensor::Sensor(int _unit){
    this->unit = _unit;
    this->range = 1;
    this->size = 'k';
    std::cout << "Sensor constructor with unit param" << std::endl;
}

Sensor::Sensor(int _unit, int _range){
    this->unit = _unit;
    this->range = _range;
    this->size = 'k';
    std::cout << "Sensor constructor with unit and range param" << std::endl;
}

Sensor::Sensor(int _unit, int _range, char _size){
    this->unit = _unit;
    this->range = _range;
    this->size = _size;
    std::cout << "Sensor constructor with unit, range and size param" << std::endl;
}

Sensor::Sensor(const Sensor &src){
    this->unit = src.unit;
    this->range = src.range;
    this->size = src.size;
}

Sensor::~Sensor(){
    std::cout << "Sensor destructor" << std::endl;
}

Sensor &Sensor::setUnit(int _unit){
    this->unit = _unit;
    return *this;
}

Sensor &Sensor::setSize(char _size){
    this->size = _size;
    return *this;
}

Sensor &Sensor::setRange(int _range){
    this->range = _range;
    return *this;
}
