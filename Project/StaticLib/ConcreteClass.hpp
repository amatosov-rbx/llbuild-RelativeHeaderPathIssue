//
//  ConcreteClass.hpp
//  RelativeHeaderPath
//
//  Created by Anton Matosov on 1/28/19.
//  Copyright © 2019 Anton Matosov. All rights reserved.
//

#pragma once


#include "mylib/AbstractClass.h"

class ConcreteClass: public AbstractClass
{
public:
    int do1() override;
    int do2() override;
};