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
class GameComponent;
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
    Type* getComponent()
    {
        Type * result = NULL;
        int first = 0;
        bool searching = true;
        while (searching)
        {
            GameComponent * component = components.at(first);
            if (Type * comp = dynamic_cast<Type * >(component))
            {
                result = comp;
                searching = false;
            }
            first++;
        }
        return result;
    }
    
};
#endif /* GameObject_hpp */
