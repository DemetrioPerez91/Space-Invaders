//
//  EnemyObject.hpp
//  SpaceInvaders
//
//  Created by User on 10/1/17.
//  Copyright © 2017 DemetrioPerez. All rights reserved.
//

#ifndef EnemyObject_hpp
#define EnemyObject_hpp

#include <stdio.h>
#include "GameObject.hpp"
#include "SpriteComponent.hpp"
#include "EnemyBehaviorComponent.hpp"
class EnemyObject: public GameObject
{
public:
    EnemyObject(float x, float y)
    {
        SpriteComponent * sprite = new SpriteComponent("img/alien2.png",34,60);
        EnemyBehaviorComponent * enemyBehavior = new EnemyBehaviorComponent(x,y);
        this->components.push_back(sprite);
        this->components.push_back(enemyBehavior);
    }
    void update();
};

#endif /* EnemyObject_hpp */
