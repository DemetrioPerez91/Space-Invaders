//
//  HeroBehaviorComponent.cpp
//  SpaceInvaders
//
//  Created by User on 9/30/17.
//  Copyright © 2017 DemetrioPerez. All rights reserved.
//

#include "HeroBehaviorComponent.hpp"



void HeroBehaviorComponent::update()
{
       if(InputManager::controller.right)
    {
        this->positionX+=speed;
    }
    if(InputManager::controller.left)
    {
        this->positionX-=speed;
    }
    if (InputManager::controller.fire)
    {
        this->fire();
    }
}
void HeroBehaviorComponent::fire()
{
    
    
    BulletObject * bullet = new BulletObject(positionX,positionY);
    bullet->getComponent<SpriteComponent>()->startPosition(positionX, positionY);
    bullet->getComponent<SpriteComponent>()->changeDimensions(10 , 30);
    
    if(owner->functionPointer != NULL)
    {
        owner->functionPointer(bullet);
    }
        
    
    
}
