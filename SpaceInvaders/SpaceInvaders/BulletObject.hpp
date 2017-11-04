//
//  BulletObject.hpp
//  SpaceInvaders
//
//  Created by User on 10/1/17.
//  Copyright © 2017 DemetrioPerez. All rights reserved.
//

#ifndef BulletObject_hpp
#define BulletObject_hpp

#include <stdio.h>
#include "GameObject.hpp"
#include "BulletBehaviorComponent.hpp"
#include "SpriteComponent.hpp"

class BulletObject:public GameObject
{
public:
    BulletObject(float x, float y)
    {
        components.push_back(new BulletBehaviorComponent(x,y));
        components.push_back(new SpriteComponent("img/laser.png",x,y,this));
    }
    void update();
    
};

#endif /* BulletObject_hpp */
