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

class EnemyObject: public GameObject
{
public:
    EnemyObject()
    {
        SpriteComponent * sprite = new SpriteComponent("img/alien2.png",34,60);
        this->components.push_back(sprite);
    }
    void update();
};

#endif /* EnemyObject_hpp */
