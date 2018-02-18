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

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    //Sensor S;
    //Sensor H(1);
    Date D;
    D.outputDate();
    Device *pt = new Device;
    cout << pt << endl;
    cout << &pt << endl;
    delete pt;
//    Device F(D, ACCELEROMETR);
//    cout << F.getDate().getDay() << endl;
//    cout << F.getRange() << endl;
    cout << "Hello, World!\n";
    return 0;
}
