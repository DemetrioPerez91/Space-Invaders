//
//  BulletBehaviorComponent.hpp
//  SpaceInvaders
//
//  Created by User on 10/7/17.
//  Copyright © 2017 DemetrioPerez. All rights reserved.
//

#ifndef BulletBehaviorComponent_hpp
#define BulletBehaviorComponent_hpp

#include <stdio.h>
#include "GameComponent.h"


class BulletBehaviorComponent:public GameComponent, public PositionInterface
{
public:
    BulletBehaviorComponent(float x, float y)
    {
        startPosition(x, y);
    }
    void update();
    
};
#endif /* BulletBehaviorComponent_hpp */
