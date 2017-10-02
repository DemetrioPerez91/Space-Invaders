//
//  FPSMonitor.hpp
//  SpaceInvaders
//
//  Created by User on 10/2/17.
//  Copyright © 2017 DemetrioPerez. All rights reserved.
//

#ifndef FPSMonitor_hpp
#define FPSMonitor_hpp
#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_timer.h>

class  FPSMonitor
{
public:
    
    static Uint32 startTime;
    static bool isTimmerStarted;
    static void startMonitor();
    static Uint32 getTicks();
    static int frames;
    static void countFrames();
    static void calculateFramerATE();
};



#endif /* FPSMonitor_hpp */
