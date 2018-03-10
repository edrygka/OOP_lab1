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

int General::summ = 1;

General::General(){
    genCount = summ;
    dev = new Device[5];
    
}
