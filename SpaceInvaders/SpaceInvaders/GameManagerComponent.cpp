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
BulletObject * GameManagerComponent::bullet = NULL;

void GameManagerComponent::setup()
{
    bg      = new BackgroundObject();
    hero    = new HeroObject(400,350);
    bullet  = new BulletObject(128,256);
    for(int i = 0; i<10; i++)
    {
        enemies.push_back(new EnemyObject(i*50,60));
    }
    bullet->getComponent<SpriteComponent>()->changeDimensions(10 , 30);
   
}

void GameManagerComponent::update()
{
    bg->update();
    hero->update();
    bullet->update();
    for(int i = 0; i < enemies.size(); i++)
    {
        enemies.at(i)->update();
    }
    
}
