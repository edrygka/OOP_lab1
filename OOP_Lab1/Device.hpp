//
//  Device.hpp
//  OOP_Lab1
//
//  Created by Eduard on 17.02.2018.
//  Copyright © 2018 Macbook. All rights reserved.
//

#ifndef Device_hpp
#define Device_hpp

#include <memory>
#include <stdio.h>
#include "Sensor.hpp"
#include "Date.hpp"

enum SensorType {ACCELEROMETR = 1, PROXY, TEMPERATURE};

class Device : public Sensor{
private:
    static int id;
    SensorType senType;
    Date D;
public:
    Device();
    Device(SensorType _senType);
    Device(Date _D, SensorType _senType);
    Device(const Device &src);
    ~Device();
    Date getDate(){return this->D;};
    int getId(){return this->id;};
    Device &setDate(Date _D);
    friend std::ostream& operator << (std::ostream& s, const Device& d);
    Device &operator=(const Device &src);
    SensorType getType(){return this->senType;};
    Device &setSenType(SensorType _senType);
};

#endif /* Device_hpp */
