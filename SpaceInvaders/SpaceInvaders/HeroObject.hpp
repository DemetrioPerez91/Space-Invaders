//
//  HeroObject.hpp
//  SpaceInvaders
//
//  Created by User on 10/1/17.
//  Copyright © 2017 DemetrioPerez. All rights reserved.
//

#ifndef HeroObject_hpp
#define HeroObject_hpp

#include <stdio.h>
#include "GameObject.hpp"
#include "SpriteComponent.hpp"
#include "HeroBehaviorComponent.hpp"

//Player's main character capable of moving and shooting.
class HeroObject: public GameObject
{
public:
    HeroObject(int x, int y)
    {
        this->x = x;
        this->y = y;
        SpriteComponent * sprite = new SpriteComponent("img/arwing.png",55,39,this);
        HeroBehaviorComponent * heroBehavior = new HeroBehaviorComponent(x,y,this);
        this->components.push_back(sprite);
        this->components.push_back(heroBehavior);   
    }
    void update();
};


#endif /* HeroObject_hpp */
