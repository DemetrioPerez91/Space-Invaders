#include <iostream>
#include <vector>

#include "GameManagerComponent.hpp"
#include "SDLManagerComponent.hpp"
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
    GameManagerComponent::setup();
    
    
    while (true)
    {
        SDLManagerComponent::clear();
        InputManager::update();
        GameManagerComponent::update();
        SDLManagerComponent::present();
        
    }
    return 0;
}

int start()
{
    return 0;
}
