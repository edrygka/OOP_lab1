//
//  sensor.h
//  OOP_Lab1
//
//  Created by Eduard on 17.02.2018.
//  Copyright © 2018 Macbook. All rights reserved.
//

#ifndef sensor_h
#define sensor_h

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
    int getUnit(){return unit;};
    int getRange(){return range;};
    char getSize(){return size;};
    void setUnit(_unit);
    void setRange(_range);
    void setSize(_size);
    ~Sensor()
}

#endif /* sensor_h */
