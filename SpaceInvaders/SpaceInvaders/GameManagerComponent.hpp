//
//  GameManagerComponent.hpp
//  SpaceInvaders
//
//  Created by User on 9/30/17.
//  Copyright © 2017 DemetrioPerez. All rights reserved.
//

#ifndef GameManagerComponent_hpp
#define GameManagerComponent_hpp

#include <stdio.h>
#include <vector>

#include "GameObject.hpp"
#include "SpriteComponent.hpp"
#include "InputManager.hpp"
#include "HeroObject.hpp"
#include "EnemyObject.hpp"
#include "BackgroundObject.cpp"

class GameManagerComponent
{
public:
    static std::vector<EnemyObject*>  enemies;
    static bool gameOver;
    static BackgroundObject * bg;
    static HeroObject * hero;
    static void setup();
    static void update();
};
#endif /* GameManagerComponent_hpp */
