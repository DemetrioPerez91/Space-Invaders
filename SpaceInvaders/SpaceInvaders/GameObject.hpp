//
//  GameObject.hpp
//  SpaceInvaders
//
//  Created by User on 9/30/17.
//  Copyright © 2017 DemetrioPerez. All rights reserved.
//
#pragma once
#ifndef GameObject_hpp
#define GameObject_hpp

#include <stdio.h>
#include <vector>
#include "GameComponent.h"
#include "PositionInterface.hpp"
class GameObject
{
public:
    GameObject(){}
    virtual ~GameObject(){}
    virtual void update();
    float x = 0.0f;
    float y = 0.0f;
    std::string tag = "";
    std::vector<GameComponent*> components;
    bool active = false;
    
    template<class Type>
    Type * getComponent();
    
    
};
#endif /* GameObject_hpp */
