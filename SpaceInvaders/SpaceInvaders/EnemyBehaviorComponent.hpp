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

enum MoveFlag
{
    LEFT,RIGHT,DOWN
};

class EnemyBehaviorComponent: public GameComponent, public PositionInterface
{
public:
    EnemyBehaviorComponent(float x, float y)
    {
        startPosition(x, y);
    }
    int verticalSpeed = 60;
    int horizontalSpeed = 1;
    
    void start(){}
    MoveFlag nextDirection = RIGHT;
    MoveFlag moveFlag = LEFT;
    void update();
    void move();
    void checkPosition();
    void setFlag();
    
};



#endif /* EnemyBehaviorComponent_hpp */
