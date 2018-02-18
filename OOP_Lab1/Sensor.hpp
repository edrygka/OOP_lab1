//
//  Sensor.hpp
//  OOP_Lab1
//
//  Created by Eduard on 17.02.2018.
//  Copyright © 2018 Macbook. All rights reserved.
//

#ifndef Sensor_hpp
#define Sensor_hpp

#include <stdio.h>

class Sensor{
private:
    int unit;
    int range;
    char size;
public:
    Sensor();
    Sensor(int _unit);
    Sensor(int _unit, int _range);
    Sensor(int _unit, int _range, char _size);
    Sensor(const Sensor &src);
    int getUnit(){return this->unit;};
    int getRange(){return this->range;};
    char getSize(){return this->size;};
    Sensor &setUnit(int _unit);
    Sensor &setRange(int _range);
    Sensor &setSize(char _size);
    ~Sensor();
};

#endif /* Sensor_hpp */
