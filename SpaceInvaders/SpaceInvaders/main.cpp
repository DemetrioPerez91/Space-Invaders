#include <iostream>
#include <vector>

#include "GameObject.hpp"
#include "SDLManagerComponent.hpp"
#include "SpriteComponent.hpp"
#include "InputManager.hpp"
#include "HeroObject.hpp"

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
    
    GameObject * test = new GameObject();
    HeroObject * test2 = new HeroObject();
    
    test->components.push_back(new SpriteComponent("img/bg.png",700,700));
    test2->components.push_back(new HeroBehaviorComponent());
    
    while (true)
    {
        InputManager::update();
        SDLManagerComponent::clear();
        test->update();
        test2->update();
        SDLManagerComponent::present();
        
        
        
    }
    return 0;
}

int start()
{
    return 0;
}
