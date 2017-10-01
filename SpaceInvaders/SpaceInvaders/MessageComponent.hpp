//
//  MessageComponent.hpp
//  SpaceInvaders
//
//  Created by User on 9/30/17.
//  Copyright © 2017 DemetrioPerez. All rights reserved.
//

#ifndef MessageComponent_hpp
#define MessageComponent_hpp

#include <stdio.h>
#include <iostream>
#include "GameComponent.h"


using namespace std;

class MesageComponent:public GameComponent
{
public:
    string message;
    MesageComponent(string message)
    {
        type = Message;
        this->message = message;
        start();
    }
    void start(){}
    void update();
};
#endif /* MessageComponent_hpp */
