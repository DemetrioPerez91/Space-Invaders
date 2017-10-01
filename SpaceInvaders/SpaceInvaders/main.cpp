#include <iostream>
#include "defines.h"
#include "hero.h"
#include "element.h"
#include "defines.h"
#include <vector>

#include "Matt.hpp"
#include "SDLManagerComponent.hpp"
#include "SpriteComponent.hpp"
#include "MessageComponent.hpp"

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
    
    float x = 0.0;
    test->components.push_back(new SpriteComponent());
    test->components.push_back(new MesageComponent("I love you"));
    while (true)
    {
        x++;
        test->x = x;
        SDLManagerComponent::clear();
        test->update();
        SDLManagerComponent::present();
    }
    return 0;
}

int start()
{
    return 0;
}
