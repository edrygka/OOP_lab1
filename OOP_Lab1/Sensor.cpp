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
    unit = 1;
    range = 1;
    size = 'k';
    std::cout << "Sensor constructor by default" << std::endl;
}

Sensor::Sensor(int _unit){
    unit = _unit;
    range = 1;
    size = 'k';
    std::cout << "Sensor constructor with unit param" << std::endl;
}

Sensor::Sensor(int _unit, int _range){
    unit = _unit;
    range = _range;
    size = 'k';
    std::cout << "Sensor constructor with unit and range param" << std::endl;
}

Sensor::Sensor(int _unit, int _range, char _size){
    unit = _unit;
    range = _range;
    size = _size;
    std::cout << "Sensor constructor with unit, range and size param" << std::endl;
}

Sensor::Sensor(const Sensor &src){
    unit = src.unit;
    range = src.range;
    size = src.size;
}

Sensor::~Sensor(){
    std::cout << "Sensor destructor by default" << std::endl;
}

Sensor &Sensor::setUnit(int _unit){
    unit = _unit;
    return *this;
}

Sensor &Sensor::setSize(char _size){
    size = _size;
    return *this;
}

Sensor &Sensor::setRange(int _range){
    range = _range;
    return *this;
}
