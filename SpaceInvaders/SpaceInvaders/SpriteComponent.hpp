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
#include "SDLManagerComponent.hpp"

class SpriteComponent:public GameComponent, public PositionInterface
{
public:
    SpriteComponent(std::string resourceURL,int width, int height){
        this->resourceURL = resourceURL;
        this->height = height;
        this->width = width;
        start();
    }
    std::string resourceURL = "";
    SDL_Rect * dest = NULL;
    SDL_Rect * src = NULL;
    int width;
    int height;
    SDL_Texture * textTure = NULL;
    SDL_Renderer * renderer = NULL;
    void start();
    void update();
    void changeDimensions(int  w, int h);
    void updateDest();
    
};
#endif /* SpriteComponent_hpp */
