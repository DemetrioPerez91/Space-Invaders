//
//  GameComponent.h
//  SpaceInvaders
//
//  Created by User on 9/30/17.
//  Copyright © 2017 DemetrioPerez. All rights reserved.
//
#pragma once
#ifndef GameComponent_h
#define GameComponent_h
#include "defines.h"
#include "GameObject.hpp"
#include "PositionInterface.hpp"

class GameObject;
enum ComponentType
{
    Message,
    Behavior
};

class GameComponent
{
public:
    GameComponent();
    
    ComponentType type;
    virtual ~GameComponent(){}
    virtual void start();
    virtual void update();
    GameObject * owner;
    
};
#endif /* GameComponent_h */
