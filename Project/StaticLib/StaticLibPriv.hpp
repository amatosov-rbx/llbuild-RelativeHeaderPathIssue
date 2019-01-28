//
//  StaticLibPriv.hpp
//  StaticLib
//
//  Created by Anton Matosov on 1/28/19.
//  Copyright © 2019 Anton Matosov. All rights reserved.
//

/* The classes below are not exported */
#pragma GCC visibility push(hidden)

class StaticLibPriv
{
    public:
    void HelloWorldPriv(const char *);
};

#pragma GCC visibility pop
