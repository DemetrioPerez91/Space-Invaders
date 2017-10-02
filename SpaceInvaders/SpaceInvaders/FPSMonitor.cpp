
//
//  FPSMonitor.cpp
//  SpaceInvaders
//
//  Created by User on 10/2/17.
//  Copyright © 2017 DemetrioPerez. All rights reserved.
//

#include "FPSMonitor.hpp"

Uint32 FPSMonitor::startTime = 0;
bool FPSMonitor::isTimmerStarted = false;
int FPSMonitor::frames = 0;


void FPSMonitor::startMonitor()
{
    isTimmerStarted = true;
    startTime = SDL_GetTicks();
}

Uint32 FPSMonitor::getTicks()
{
    Uint32 time = 0;
    if(isTimmerStarted)
    {
        time = SDL_GetTicks() - startTime;
    }
    else
    {
        startMonitor();
        time = SDL_GetTicks();
    }
    return time;
}



void FPSMonitor::calculateFramerATE()
{
    frames++;
    float avgFrames = frames/(getTicks()/100.0f);
    if (avgFrames>2000000)
    {
        avgFrames = 0;
    }
    printf("FPS: %f\n",avgFrames);
}




