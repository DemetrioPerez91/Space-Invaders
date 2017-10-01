#include <iostream>
#include <vector>

#include "GameObject.hpp"
#include "SDLManagerComponent.hpp"
#include "SpriteComponent.hpp"
#include "InputManager.hpp"
#include "HeroObject.hpp"
#include "EnemyObject.hpp"
#include "BackgroundObject.cpp"


using namespace std;

bool testing = true;
int test();
int start();

int main()
{
    if (testing)
    {
        test();
    }
    else
    {
        start();
    }
    return 0;
}

int test()
{
    SDLManagerComponent::start();
    
    BackgroundObject * test = new BackgroundObject();
    HeroObject * test2 = new HeroObject();
    EnemyObject * test3 = new EnemyObject();
    
    
    
    while (true)
    {
        InputManager::update();
        SDLManagerComponent::clear();
        test->update();
        test2->update();
        test3->update();
        SDLManagerComponent::present();
        
    }
    return 0;
}

int start()
{
    return 0;
}
