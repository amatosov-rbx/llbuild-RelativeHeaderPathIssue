//
//  StaticLib.hpp
//  StaticLib
//
//  Created by Anton Matosov on 1/28/19.
//  Copyright © 2019 Anton Matosov. All rights reserved.
//

#ifndef StaticLib_
#define StaticLib_

/* The classes below are exported */
#pragma GCC visibility push(default)

class StaticLib
{
    public:
    void HelloWorld(const char *);
};

#pragma GCC visibility pop
#endif
