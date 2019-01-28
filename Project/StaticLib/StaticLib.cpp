//
//  StaticLib.cpp
//  StaticLib
//
//  Created by Anton Matosov on 1/28/19.
//  Copyright © 2019 Anton Matosov. All rights reserved.
//

#include <iostream>
#include "StaticLib.hpp"
#include "StaticLibPriv.hpp"

void StaticLib::HelloWorld(const char * s)
{
    StaticLibPriv *theObj = new StaticLibPriv;
    theObj->HelloWorldPriv(s);
    delete theObj;
};

void StaticLibPriv::HelloWorldPriv(const char * s) 
{
    std::cout << s << std::endl;
};

