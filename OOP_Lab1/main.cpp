//
//  main.cpp
//  OOP_Lab1
//
//  Created by Eduard on 17.02.2018.
//  Copyright © 2018 Macbook. All rights reserved.
//

#include <iostream>
#include "Sensor.hpp"
#include "Date.hpp"
#include "Device.hpp"
#include "General.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    General H;
    SensorType S = ACCELEROMETR;
    H.delDevice(4);
    H.showInfo();
    cout << "Hello, World!\n";
    return 0;
}
