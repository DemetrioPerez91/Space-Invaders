//
//  EnemyBehaviorComponent.hpp
//  SpaceInvaders
//
//  Created by User on 10/1/17.
//  Copyright © 2017 DemetrioPerez. All rights reserved.
//

#ifndef EnemyBehaviorComponent_hpp
#define EnemyBehaviorComponent_hpp

#include <stdio.h>
#include "GameComponent.h"


class EnemyBehaviorComponent: public GameComponent, public PositionInterface
{
public:
    EnemyBehaviorComponent(float x, float y)
    {
        startPosition(x, y);
    }
    void start(){}
    void update();
};



#endif /* EnemyBehaviorComponent_hpp */
