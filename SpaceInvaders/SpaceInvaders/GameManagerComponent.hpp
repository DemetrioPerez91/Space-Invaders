//
//  GameManagerComponent.hpp
//  SpaceInvaders
//
//  Created by User on 9/30/17.
//  Copyright © 2017 DemetrioPerez. All rights reserved.
//
#pragma once
#ifndef GameManagerComponent_hpp
#define GameManagerComponent_hpp

#include <stdio.h>
#include <vector>

#include "GameObject.hpp"
#include "SpriteComponent.hpp"
#include "HeroObject.hpp"
#include "InputManager.hpp"
#include "TimmerWrapper.hpp"

#include "BulletObject.hpp"

#include "EnemyObject.hpp"
#include "BackgroundObject.cpp"


//Static class that sets up the
//game and it's update cycle.
class GameManagerComponent
{
public:
    static std::vector<EnemyObject*>  enemies;
    static bool gameOver;
    static BackgroundObject * bg;
    static HeroObject * hero;
    static BulletObject * bullet;
    
    static std::vector<GameObject*> objects;
    
    static void setup();
    static void update();
    static void  addObject(GameObject *);
    
};
#endif /* GameManagerComponent_hpp */
