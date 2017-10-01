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
#include "GameComponent.h"
#include "PositionInterface.hpp"

class HeroBehaviorComponent: public GameComponent, public PositionInterface
{
public:
    HeroBehaviorComponent(float x, float y)
    {
        startPosition(x, y);
    }
    void start(){}
    void update();
    int speed = 10;
    float startX;
    float startY;
    
};



#endif /* HeroBehaviorComponent_hpp */
