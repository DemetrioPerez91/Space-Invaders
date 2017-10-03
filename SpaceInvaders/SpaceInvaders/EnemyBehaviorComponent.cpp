//
//  EnemyBehaviorComponent.cpp
//  SpaceInvaders
//
//  Created by User on 10/1/17.
//  Copyright © 2017 DemetrioPerez. All rights reserved.
//

#include "EnemyBehaviorComponent.hpp"


void EnemyBehaviorComponent::start()
{

}

void EnemyBehaviorComponent::update()
{
    move();
    checkPosition();
}

void EnemyBehaviorComponent::move()
{
    switch (rutine[rutineStep]) {
        case RIGHT:
            positionX += horizontalSpeed;
            break;
        case LEFT:
            positionX -= horizontalSpeed;
            break;
        case DOWN:
            positionY += verticalSpeed;
            rutineStep++;
            break;
        default:
            break;
    }
    checkPosition();
}

void EnemyBehaviorComponent::checkPosition()
{
    if( positionX >= (SCREEN_W-width) && rutine[rutineStep] == RIGHT)
    {
        rutineStep++;
    }
    else if (positionX <= 0 && rutine[rutineStep] == LEFT)
    {
        rutineStep++;
    }
    if(rutineStep>4){rutineStep = 0;}
    
    
}
