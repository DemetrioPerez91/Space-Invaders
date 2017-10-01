//
//  GameManagerComponent.cpp
//  SpaceInvaders
//
//  Created by User on 9/30/17.
//  Copyright © 2017 DemetrioPerez. All rights reserved.
//

#include "GameManagerComponent.hpp"

std::vector<EnemyObject *> GameManagerComponent::enemies = std::vector<EnemyObject * >();
bool GameManagerComponent::gameOver = false;
BackgroundObject * GameManagerComponent::bg = NULL;
HeroObject * GameManagerComponent::hero = NULL;


void GameManagerComponent::setup()
{
    bg      = new BackgroundObject();
    hero    = new HeroObject(350,350);
    for(int i = 0; i<10; i++)
    {
        enemies.push_back(new EnemyObject());
        enemies.back()->x = i * 50;
        
    }
   
}

void GameManagerComponent::update()
{
    bg->update();
    hero->update();
    for(int i = 0; i < enemies.size(); i++)
    {
        enemies.at(i)->update();
    }
    
}
