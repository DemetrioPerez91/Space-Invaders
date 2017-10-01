//
//  SpriteComponent.hpp
//  SpaceInvaders
//
//  Created by User on 9/30/17.
//  Copyright © 2017 DemetrioPerez. All rights reserved.
//

#ifndef SpriteComponent_hpp
#define SpriteComponent_hpp

#include <stdio.h>
#include "GameComponent.h"
#include "PositionInterface.hpp"
#include "SDLManagerComponent.hpp"

class SpriteComponent:public GameComponent, public PositionInterface
{
public:
    SpriteComponent(){start();}
    SDL_Rect * dest = NULL;
    SDL_Rect * src = NULL;
    int width;
    int height;
    SDL_Texture * textTure = NULL;
    SDL_Renderer * renderer = NULL;
    void start();
    void update();
    void updateDest();
    
};
#endif /* SpriteComponent_hpp */
