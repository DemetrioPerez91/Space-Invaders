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
std::vector<GameObject *> GameManagerComponent::objects = std::vector<GameObject*>();


void GameManagerComponent::setup()
{
    
    bg      = new BackgroundObject();
    hero    = new HeroObject(400,350);
    
    objects.push_back(bg);
    objects.push_back(hero);
    bg->functionPointer = &addObject;
    hero->functionPointer = &addObject;
    
    for(int i = 0; i<10; i++)
    {
        EnemyObject * enemy = new EnemyObject(i*50,60);
        enemy->getComponent<SpriteComponent>()->changeDimensions(60, 60);
        objects.push_back(enemy);
    }
    
    

}

void GameManagerComponent::update()
{
   
    for(int i = 0; i < objects.size(); i++)
    {
        objects.at(i)->update();
    }
     
}
void  GameManagerComponent::addObject(GameObject * object)
{
    objects.push_back(object);
}
