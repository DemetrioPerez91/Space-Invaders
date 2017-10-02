//
//  EnemyBehaviorComponent.cpp
//  SpaceInvaders
//
//  Created by User on 10/1/17.
//  Copyright © 2017 DemetrioPerez. All rights reserved.
//

#include "EnemyBehaviorComponent.hpp"

void EnemyBehaviorComponent::update()
{
    move();
    checkPosition();
}

void EnemyBehaviorComponent::move()
{
    switch (moveFlag) {
        case RIGHT:
            positionX += horizontalSpeed;
            break;
        case LEFT:
            positionX -= horizontalSpeed;
            break;
        case DOWN:
            positionY += verticalSpeed;
            if(nextDirection == RIGHT)
            {
                nextDirection = LEFT;
                moveFlag = RIGHT;
            }
            else
            {
                nextDirection = RIGHT;
                moveFlag = LEFT;
            }
            break;
        default:
            break;
    }
    checkPosition();
}

void EnemyBehaviorComponent::checkPosition()
{
    if( positionX >= 500 && moveFlag == RIGHT)
    {
        moveFlag = DOWN;
    }
    else if (positionX <= 0 && moveFlag == LEFT)
    {
        moveFlag = DOWN;
    }
}
