//
//  Device.hpp
//  OOP_Lab1
//
//  Created by Eduard on 17.02.2018.
//  Copyright © 2018 Macbook. All rights reserved.
//

#ifndef Device_hpp
#define Device_hpp

#include <stdio.h>
#include "Sensor.hpp"
#include "Date.hpp"

enum SensorType {ACCELEROMETR = 1, PROXY, TEMPERATURE};

class Device : public Sensor{
private:
    SensorType senType;
    Date D;
public:
    Device();
    Device(Date _D, SensorType _senType);
    Device(const Device &src);
    ~Device();
    Date getDate(){return this->D;};
    Device &setDate(Date _D);
    //TODO: get/set to enum
};

#endif /* Device_hpp */
