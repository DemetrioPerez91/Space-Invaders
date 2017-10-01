#include <iostream>
#include <vector>

#include "GameObject.hpp"
#include "SDLManagerComponent.hpp"
#include "SpriteComponent.hpp"
#include "MessageComponent.hpp"
#include "InputManager.hpp"

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
    GameObject * test2 = new GameObject();
    test->components.push_back(new SpriteComponent("img/bg.png",700,700));
    test2->components.push_back(new SpriteComponent("img/arwing.png",55,39));
    
    
    while (true)
    {
        InputManager::update();
        if(InputManager::controller.back)
        {
            test2->y += 1;
        }
        if(InputManager::controller.forward)
        {
            test2->y -= 1;
        }
        if(InputManager::controller.left)
        {
            test2->x -= 1;
        }
        if(InputManager::controller.right)
        {
            test2->x += 1;
        }
        
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
