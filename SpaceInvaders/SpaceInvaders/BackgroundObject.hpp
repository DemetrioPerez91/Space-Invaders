//
//  BackgroundObject.hpp
//  SpaceInvaders
//
//  Created by User on 10/1/17.
//  Copyright © 2017 DemetrioPerez. All rights reserved.
//

#ifndef BackgroundObject_hpp
#define BackgroundObject_hpp

#include <stdio.h>
#include "GameObject.hpp"
#include "SpriteComponent.hpp"

//Basic background texture object
class BackgroundObject: public GameObject
{
public:
    BackgroundObject()
    {
        components.push_back(new SpriteComponent("img/bg.png",700,700,this));
    }
};




#endif /* BackgroundObject_hpp */
