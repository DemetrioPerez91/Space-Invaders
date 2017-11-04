//
//  HeroBehaviorComponent.hpp
//  SpaceInvaders
//
//  Created by User on 9/30/17.
//  Copyright © 2017 DemetrioPerez. All rights reserved.
//

#ifndef HeroBehaviorComponent_hpp
#define HeroBehaviorComponent_hpp

#include <stdio.h>
#include "InputManager.hpp"
#include "SDLManagerComponent.hpp"
#include "GameComponent.h"
#include "BulletObject.hpp"


//Behavior for hero object

class HeroBehaviorComponent: public GameComponent, public PositionInterface
{
public:
    HeroBehaviorComponent(float x, float y, GameObject * owner)
    {
        startPosition(x, y);
        this->owner = owner;
    }
    Uint32 lastShot = 0;
    void start(){}
    void update();
    int speed = 10;
    float startX;
    float startY;
    void fire();
};



#endif /* HeroBehaviorComponent_hpp */
