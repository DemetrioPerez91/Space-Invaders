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
class HeroObject: public GameObject
{
public:
    HeroObject()
    {
        SpriteComponent * sprite = new SpriteComponent("img/arwing.png",55,39);
        HeroBehaviorComponent * heroBehavior = new HeroBehaviorComponent();
        this->components.push_back(sprite);
        this->components.push_back(heroBehavior);   
    }
    void update();
};


#endif /* HeroObject_hpp */
