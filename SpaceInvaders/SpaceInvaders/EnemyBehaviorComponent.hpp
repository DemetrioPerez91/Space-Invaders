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
#include "SpriteComponent.hpp"

enum MoveFlag
{
    LEFT,RIGHT,DOWN
};

//Class that controlls the way the enemy behaves.
class EnemyBehaviorComponent: public GameComponent, public PositionInterface
{
public:
    EnemyBehaviorComponent(float x, float y,GameObject * owner)
    {
        startPosition(x, y);
        this->owner = owner;
        
    }
    int verticalSpeed = 60;
    int horizontalSpeed = 1;
    int width = 60;//Width of te sprite, used for calculatins
    void start();
    MoveFlag rutine[4]={RIGHT,DOWN,LEFT,DOWN};
    
    int rutineStep = 0;
    
    void update();
    void move();
    void checkPosition();
    void setFlag();
    
};



#endif /* EnemyBehaviorComponent_hpp */
