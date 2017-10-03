#include <iostream>
#include <vector>

#include "GameManagerComponent.hpp"
#include "FPSMonitor.hpp"
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
    
    
    while (!GameManagerComponent::gameOver)
    {
        SDLManagerComponent::clear();
        InputManager::update();
        GameManagerComponent::update();
        SDLManagerComponent::present();
        //FPSMonitor::calculateFramerATE();
        
    }
    return 0;
}

int start()
{
    return 0;
}
