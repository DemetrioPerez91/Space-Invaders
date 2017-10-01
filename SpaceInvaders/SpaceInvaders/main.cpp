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
    
    
    while (true)
    {
        InputManager::update();
        
        SDLManagerComponent::clear();
        
       
        SDLManagerComponent::present();
        printf("%d\n",InputManager::controller.back);
    }
    return 0;
}

int start()
{
    return 0;
}
