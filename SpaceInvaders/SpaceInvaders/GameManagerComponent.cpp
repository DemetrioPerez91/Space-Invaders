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
    hero    = new HeroObject(400,350);
    for(int i = 0; i<10; i++)
    {
        enemies.push_back(new EnemyObject());
        EnemyObject * enemy = enemies.back();
        enemy->x = i * 50;
        SpriteComponent * comp = dynamic_cast<SpriteComponent *>(enemy->components.at(0));
        comp->changeDimensions(50, 60);
        
        
        
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
