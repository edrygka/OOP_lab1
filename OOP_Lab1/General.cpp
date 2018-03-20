//
//  General.cpp
//  OOP_Lab1
//
//  Created by Eduard on 05.03.2018.
//  Copyright © 2018 Macbook. All rights reserved.
//

#include "General.hpp"
#include "Device.hpp"
#include <iostream>

using namespace std;

int General::summ = 0;

General::General(){
    genCount = summ;
    ++summ;
    size = 5;
    dev = new Device[size];
}

General::General(Device *newDev, int _size){
    genCount = summ;
    ++summ;
    size = _size;
    dev = newDev;
}

General &General::setGen(Device *newDev, int _size){
    size = _size;
    dev = newDev;
    return *this;
}

General::~General(){
    delete [] dev;
    cout << "General destructor" << endl;
}

General::General(const General &src){
    genCount = src.genCount;
    dev = src.dev;
    size = src.size;
    for(int i = 0; i < size; i++){
        dev[i] = src.dev[i];
    }
}

void General::showInfo(){
    cout << "Channel information:\n \tCount of channel - " << this->genCount << "\n \tSummary range of channels - " << this->summ << "\n \tSize of array - " << this->size << endl;
    for(int i = 0; i < size; i++){
        cout << i << " Device:\n Sensor type - " << this->dev[i].getType() << "\n Sensor info: \n \tRange - " << this->dev[i].getRange() << "\n \tSize - " << this->dev[i].getSize() << "\n \tUnit - " << this->dev[i].getUnit() << "\n Date of device - " << this->dev[i].getDate() << endl;
    }
}

void General::addDevice(Device &newDev){
    Device *newArray = new Device[size++];
    for (int i=0; i<size; i++)
    {
        newArray[i]=dev[i];
    }
    delete [] dev;
    newArray[size-1] = newDev;
    dev = newArray;
}

void General::delDevice(int _number){
    if(_number > size-1){
        cout << "________False input value________" << endl;
        return void();
    }
    Device *newArray = new Device[size--];
    for(int i = 0; i < size; i++){
        if(i == _number){
            newArray[i] = dev[i+1];
        } else {
            newArray[i] = dev[i];
        }
    }
    delete [] dev;
    dev = newArray;
}

