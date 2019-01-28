//
//  main.cpp
//  RelativeHeaderPath
//
//  Created by Anton Matosov on 1/28/19.
//  Copyright © 2019 Anton Matosov. All rights reserved.
//

#include <iostream>
#include <memory>
#include <assert.h>
#include "ConcreteClass.hpp"

int main(int argc, const char * argv[])
{
    std::shared_ptr<AbstractClass> ptr(new ConcreteClass());
    assert(ptr->do1() == 1);
    
    assert(ptr->do2() == 2);

    return 0;
}
